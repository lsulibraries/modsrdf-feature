<?php
/**
 * @file
 * modsrdf.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function modsrdf_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-audio_file-field_mods_audio'.
  $field_instances['node-audio_file-field_mods_audio'] = array(
    'bundle' => 'audio_file',
    'default_value' => array(
      0 => array(
        'xml' => '<?xml version="1.0"?>
<definition xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" version="3">
  <properties>
    <root_name>mods</root_name>
    <schema_uri>http://www.loc.gov/standards/mods/v3/mods-3-4.xsd</schema_uri>
    <namespaces default="http://www.loc.gov/mods/v3">
      <namespace prefix="mods">http://www.loc.gov/mods/v3</namespace>
      <namespace prefix="xsi">http://www.w3.org/2001/XMLSchema-instance</namespace>
      <namespace prefix="xlink">http://www.w3.org/1999/xlink</namespace>
    </namespaces>
  </properties>
  <form>
    <properties>
      <type>form</type>
      <access>TRUE</access>
      <required>FALSE</required>
      <tree>TRUE</tree>
      <actions>
        <create>NULL</create>
        <read>
          <path>//mods:mods[1]</path>
          <context>document</context>
        </read>
        <update>NULL</update>
        <delete>NULL</delete>
      </actions>
    </properties>
    <children>
      <element name="titleInfo">
        <properties>
          <type>markup</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>titleInfo</value>
            </create>
            <read>
              <path>mods:titleInfo</path>
              <context>parent</context>
            </read>
            <update>NULL</update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children>
          <element name="title">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <description>Title of the work.</description>
              <required>FALSE</required>
              <title>Title</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>title</value>
                </create>
                <read>
                  <path>mods:title</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
          <element name="subTitle">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Sub Title</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>subTitle</value>
                </create>
                <read>
                  <path>mods:subTitle</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
        </children>
      </element>
      <element name="name">
        <properties>
          <type>tabs</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Name</title>
          <tree>TRUE</tree>
        </properties>
        <children>
          <element name="0">
            <properties>
              <type>tabpanel</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>name</value>
                </create>
                <read>
                  <path>mods:name</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>
                  <path>self::node()</path>
                  <context>self</context>
                </delete>
              </actions>
            </properties>
            <children>
              <element name="type">
                <properties>
                  <type>select</type>
                  <access>TRUE</access>
                  <default_value>personal</default_value>
                  <options>
                    <corporate>corporate</corporate>
                    <personal>personal</personal>
                  </options>
                  <required>FALSE</required>
                  <title>Type</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>attribute</type>
                      <prefix>NULL</prefix>
                      <value>type</value>
                    </create>
                    <read>
                      <path>@type</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="namePart">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <required>FALSE</required>
                  <title>Name</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>xml</type>
                      <prefix>NULL</prefix>
                      <value>&lt;namePart&gt;%value%&lt;/namePart&gt;</value>
                    </create>
                    <read>
                      <path>mods:namePart</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="role">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Select a role from this vocabulary - &lt;a  href="http://id.loc.gov/vocabulary/relators.html"  target="_blank"&gt;http://id.loc.gov/vocabulary/relators.html&lt;/a&gt;</description>
                  <required>FALSE</required>
                  <title>Role</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>xml</type>
                      <prefix>NULL</prefix>
                      <value>&lt;role&gt;&lt;roleTerm authority="marcrelator" type="text"&gt;%value%&lt;/roleTerm&gt;&lt;/role&gt;</value>
                    </create>
                    <read>
                      <path>mods:role/mods:roleTerm</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
        </children>
      </element>
      <element name="typeOfResource">
        <properties>
          <type>select</type>
          <access>TRUE</access>
          <default_value>sound recording-musical</default_value>
          <options>
            <index key="sound recording">sound recording</index>
            <index key="sound recording-musical">sound recording-musical</index>
            <index key="sound recording-nonmusical">sound recording-nonmusical</index>
          </options>
          <required>FALSE</required>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>typeOfResource</value>
            </create>
            <read>
              <path>mods:typeOfResource</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="tableOfContents">
        <properties>
          <type>textarea</type>
          <access>TRUE</access>
          <description>Contents of the album, disc, etc.</description>
          <required>FALSE</required>
          <title>Table of Contents</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>tableOfContents</value>
            </create>
            <read>
              <path>mods:tableOfContents</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="genre">
        <properties>
          <type>select</type>
          <access>TRUE</access>
          <collapsed>FALSE</collapsed>
          <collapsible>FALSE</collapsible>
          <description>Vocabulary from http://special-cataloguing.com/node/1398 </description>
          <disabled>FALSE</disabled>
          <executes_submit_callback>FALSE</executes_submit_callback>
          <multiple>FALSE</multiple>
          <options>
            <index key=""/>
            <anthems>anthems</anthems>
            <ballets>ballets</ballets>
            <bluegrass>bluegrass</bluegrass>
            <blues>blues</blues>
            <index key="canons and roundsct">canons and roundsct</index>
            <contatas>contatas</contatas>
            <canzonas>canzonas</canzonas>
            <carols>carols</carols>
            <chaconnes>chaconnes</chaconnes>
            <index key="chance compositions">chance compositions</index>
            <index key="chansons polyphonic">chansons polyphonic</index>
            <index key="Christian chant">Christian chant</index>
            <index key="chant religions other than Christian">chant religions other than Christian</index>
            <index key="choral preludes">choral preludes</index>
            <chorales>chorales</chorales>
            <index key="concerti grossi">concerti grossi</index>
            <concertos>concertos</concertos>
            <index key="country music">country music</index>
            <index key="dance forms">dance forms</index>
            <index key="divertiments etc.">divertiments etc.</index>
            <fantasias>fantasias</fantasias>
            <index key="folk music">folk music</index>
            <fugues>fugues</fugues>
            <index key="gospel music">gospel music</index>
            <hymns>hymns</hymns>
            <jazz>jazz</jazz>
            <madrigals>madrigals</madrigals>
            <marches>marches</marches>
            <masses>masses</masses>
            <mazurkas>mazurkas</mazurkas>
            <minuets>minuets</minuets>
            <motets>motets</motets>
            <index key="moving picture music">moving picture music</index>
            <index key="multiple forms">multiple forms</index>
            <index key="musical reviews and comedies">musical reviews and comedies</index>
            <nocturnes>nocturnes</nocturnes>
            <index key="not applicable">not applicable</index>
            <operas>operas</operas>
            <oratorios>oratorios</oratorios>
            <overtures>overtures</overtures>
            <index key="part-songs">part-songs</index>
            <passacaglias>passacaglias</passacaglias>
            <index key="passion music">passion music</index>
            <pavans>pavans</pavans>
            <polonaise>polonaise</polonaise>
            <index key="popular music">popular music</index>
            <preludes>preludes</preludes>
            <index key="program music">program music</index>
            <ragtime>ragtime</ragtime>
            <requiems>requiems</requiems>
            <ricercars>ricercars</ricercars>
            <rock>rock</rock>
            <rondos>rondos</rondos>
            <sonatas>sonatas</sonatas>
            <index key="songs (art songs, not pop songs)">songs (art songs, not pop songs)</index>
            <index key="studies and exercises">studies and exercises</index>
            <suites>suites</suites>
            <index key="symphonic poems">symphonic poems</index>
            <symphonies>symphonies</symphonies>
            <taccatas>taccatas</taccatas>
            <index key="trio-sonatis">trio-sonatis</index>
            <index key="uknown (subject heading reflects instrument only)">uknown (subject heading reflects instrument only)</index>
            <variations>variations</variations>
            <waltzes>waltzes</waltzes>
            <index key="other forms">other forms</index>
          </options>
          <required>FALSE</required>
          <resizable>FALSE</resizable>
          <title>Genre</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>genre</value>
            </create>
            <read>
              <path>mods:genre</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="originInfo">
        <properties>
          <type>fieldset</type>
          <access>TRUE</access>
          <collapsed>FALSE</collapsed>
          <collapsible>FALSE</collapsible>
          <disabled>FALSE</disabled>
          <executes_submit_callback>FALSE</executes_submit_callback>
          <multiple>FALSE</multiple>
          <required>FALSE</required>
          <resizable>FALSE</resizable>
          <title>Origin Information</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>originInfo</value>
            </create>
            <read>
              <path>mods:originInfo</path>
              <context>parent</context>
            </read>
            <update>NULL</update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children>
          <element name="dateIssued">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <collapsed>FALSE</collapsed>
              <collapsible>FALSE</collapsible>
              <description>Enter date in the format YYYY-MM-DD.</description>
              <disabled>FALSE</disabled>
              <executes_submit_callback>FALSE</executes_submit_callback>
              <multiple>FALSE</multiple>
              <required>FALSE</required>
              <resizable>FALSE</resizable>
              <title>Date Issued</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>dateIssued</value>
                </create>
                <read>
                  <path>mods:dateIssued</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
          <element name="publisher">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <collapsed>FALSE</collapsed>
              <collapsible>FALSE</collapsible>
              <disabled>FALSE</disabled>
              <executes_submit_callback>FALSE</executes_submit_callback>
              <multiple>FALSE</multiple>
              <required>FALSE</required>
              <resizable>FALSE</resizable>
              <title>Publisher</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>publisher</value>
                </create>
                <read>
                  <path>mods:publisher</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
          <element name="country">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <collapsed>FALSE</collapsed>
              <collapsible>FALSE</collapsible>
              <disabled>FALSE</disabled>
              <executes_submit_callback>FALSE</executes_submit_callback>
              <multiple>FALSE</multiple>
              <required>FALSE</required>
              <resizable>FALSE</resizable>
              <title>Country</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>xml</type>
                  <prefix>NULL</prefix>
                  <value>&lt;place&gt;&lt;placeTerm authority=\'marccountry\' type=\'code\'&gt;%value%&lt;/placeTerm&gt;&lt;/place&gt;</value>
                </create>
                <read>
                  <path>mods:place/mods:placeTerm[@type = \'code\']</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
          <element name="place">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <collapsed>FALSE</collapsed>
              <collapsible>FALSE</collapsible>
              <disabled>FALSE</disabled>
              <executes_submit_callback>FALSE</executes_submit_callback>
              <multiple>FALSE</multiple>
              <required>FALSE</required>
              <resizable>FALSE</resizable>
              <title>Place</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>xml</type>
                  <prefix>NULL</prefix>
                  <value>&lt;place&gt;&lt;placeTerm type="text"&gt;%value%&lt;/placeTerm&gt;&lt;/place&gt;</value>
                </create>
                <read>
                  <path>mods:place/mods:placeTerm[@type = \'text\']</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
        </children>
      </element>
      <element name="language">
        <properties>
          <type>textfield</type>
          <access>TRUE</access>
          <description>Select a three letter iso639-2b language code from http://www.loc.gov/standards/iso639-2/php/code_list.php</description>
          <required>FALSE</required>
          <title>Language</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>xml</type>
              <prefix>NULL</prefix>
              <value>&lt;language&gt;&lt;languageTerm authority="iso639-2b" type="code"&gt;%value%&lt;/languageTerm&gt;&lt;/language&gt;</value>
            </create>
            <read>
              <path>mods:language/mods:languageTerm</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="abstract">
        <properties>
          <type>textarea</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Description</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>abstract</value>
            </create>
            <read>
              <path>mods:abstract</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="identifier">
        <properties>
          <type>textfield</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Identifier</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>xml</type>
              <prefix>NULL</prefix>
              <value>&lt;identifier&gt;%value%&lt;/identifier&gt;</value>
            </create>
            <read>
              <path>mods:identifier</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="physicalDescription">
        <properties>
          <type>fieldset</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Physical Description</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>physicalDescription</value>
            </create>
            <read>
              <path>mods:physicalDescription</path>
              <context>parent</context>
            </read>
            <update>NULL</update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children>
          <element name="form">
            <properties>
              <type>select</type>
              <access>TRUE</access>
              <default_value>sound recording</default_value>
              <description>A designation of a particular physical presentation of a resource, including the physical form or medium of material for a resource.</description>
              <options>
                <videorecording>videorecording</videorecording>
                <unspecified>unspecified</unspecified>
                <text>text</text>
                <index key="tactile material">tactile material</index>
                <index key="sound recording">sound recording</index>
                <index key="remote-sensing image">remote-sensing image</index>
                <index key="projected graphic">projected graphic</index>
                <index key="notated music">notated music</index>
                <index key="nonprojected graphic">nonprojected graphic</index>
                <index key="motion picture">motion picture</index>
                <microform>microform</microform>
                <map>map</map>
                <kit>kit</kit>
                <globe>globe</globe>
                <index key="electronic resource">electronic resource</index>
              </options>
              <required>FALSE</required>
              <title>Form</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>xml</type>
                  <prefix>NULL</prefix>
                  <value>&lt;form authority="marcform"&gt;%value%&lt;/form&gt;</value>
                </create>
                <read>
                  <path>mods:form</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
          <element name="extent">
            <properties>
              <type>textfield</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Extent</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>extent</value>
                </create>
                <read>
                  <path>mods:extent</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children/>
          </element>
        </children>
      </element>
      <element name="note">
        <properties>
          <type>textarea</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Note</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>note</value>
            </create>
            <read>
              <path>mods:note[not(@*)]</path>
              <context>parent</context>
            </read>
            <update>
              <path>self::node()</path>
              <context>self</context>
            </update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children/>
      </element>
      <element name="subject">
        <properties>
          <type>fieldset</type>
          <access>TRUE</access>
          <required>FALSE</required>
          <title>Subject</title>
          <tree>TRUE</tree>
          <actions>
            <create>
              <path>self::node()</path>
              <context>parent</context>
              <schema/>
              <type>element</type>
              <prefix>NULL</prefix>
              <value>subject</value>
            </create>
            <read>
              <path>mods:subject</path>
              <context>parent</context>
            </read>
            <update>NULL</update>
            <delete>NULL</delete>
          </actions>
        </properties>
        <children>
          <element name="topic">
            <properties>
              <type>tags</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Topic</title>
              <tree>TRUE</tree>
            </properties>
            <children>
              <element name="0">
                <properties>
                  <type>tag</type>
                  <access>TRUE</access>
                  <required>FALSE</required>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>topic</value>
                    </create>
                    <read>
                      <path>mods:topic</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>
                      <path>self::node()</path>
                      <context>self</context>
                    </delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
          <element name="geographic">
            <properties>
              <type>tags</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Geographic</title>
              <tree>TRUE</tree>
            </properties>
            <children>
              <element name="0">
                <properties>
                  <type>tag</type>
                  <access>TRUE</access>
                  <required>FALSE</required>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>geographic</value>
                    </create>
                    <read>
                      <path>mods:geographic</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>
                      <path>self::node()</path>
                      <context>self</context>
                    </delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
          <element name="temporal">
            <properties>
              <type>tags</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Temporal</title>
              <tree>TRUE</tree>
            </properties>
            <children>
              <element name="0">
                <properties>
                  <type>tag</type>
                  <access>TRUE</access>
                  <required>FALSE</required>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>temporal</value>
                    </create>
                    <read>
                      <path>mods:temporal</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>
                      <path>self::node()</path>
                      <context>self</context>
                    </delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
          <element name="hierarchicalGeographic">
            <properties>
              <type>fieldset</type>
              <access>TRUE</access>
              <collapsed>FALSE</collapsed>
              <collapsible>FALSE</collapsible>
              <disabled>FALSE</disabled>
              <executes_submit_callback>FALSE</executes_submit_callback>
              <multiple>FALSE</multiple>
              <required>FALSE</required>
              <resizable>FALSE</resizable>
              <title>Geographic Information</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>hierarchicalGeographic</value>
                </create>
                <read>
                  <path>mods:hierarchicalGeographic</path>
                  <context>parent</context>
                </read>
                <update>NULL</update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children>
              <element name="continent">
                <properties>
                  <type>select</type>
                  <access>TRUE</access>
                  <collapsed>FALSE</collapsed>
                  <collapsible>FALSE</collapsible>
                  <disabled>FALSE</disabled>
                  <executes_submit_callback>FALSE</executes_submit_callback>
                  <multiple>FALSE</multiple>
                  <options>
                    <index key=""/>
                    <Africa>Africa</Africa>
                    <Antarctica>Antarctica</Antarctica>
                    <Asia>Asia</Asia>
                    <Australia>Australia</Australia>
                    <Europe>Europe</Europe>
                    <index key="North America">North America</index>
                    <index key="South America">South America</index>
                  </options>
                  <required>FALSE</required>
                  <resizable>FALSE</resizable>
                  <title>Continent</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>continent</value>
                    </create>
                    <read>
                      <path>mods:continent</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="country">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Name of a country, i.e. a political entity considered a country.</description>
                  <required>FALSE</required>
                  <title>Country</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>country</value>
                    </create>
                    <read>
                      <path>mods:country</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="province">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Includes first order political divisions called provinces within a country, e.g. in Canada.</description>
                  <required>FALSE</required>
                  <title>Province</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>province</value>
                    </create>
                    <read>
                      <path>mods:province</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="region">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Includes regions that have status as a jurisdiction, usually incorporating more than one first level jurisdiction.</description>
                  <required>FALSE</required>
                  <title>Region</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>region</value>
                    </create>
                    <read>
                      <path>mods:region</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="county">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Name of the largest local administrative unit in various countries, e.g. England.</description>
                  <required>FALSE</required>
                  <title>County</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>county</value>
                    </create>
                    <read>
                      <path>mods:county</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="city">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Name of an inhabited place incorporated as a city, town, etc.</description>
                  <required>FALSE</required>
                  <title>City</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>city</value>
                    </create>
                    <read>
                      <path>mods:city</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
              <element name="citySection">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Name of a smaller unit within a populated place, e.g., neighborhoods, parks, or streets.</description>
                  <required>FALSE</required>
                  <title>City Section</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>citySection</value>
                    </create>
                    <read>
                      <path>mods:citySection</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
          <element name="cartographics">
            <properties>
              <type>fieldset</type>
              <access>TRUE</access>
              <required>FALSE</required>
              <title>Cartographics</title>
              <tree>TRUE</tree>
              <actions>
                <create>
                  <path>self::node()</path>
                  <context>parent</context>
                  <schema/>
                  <type>element</type>
                  <prefix>NULL</prefix>
                  <value>cartographics</value>
                </create>
                <read>
                  <path>mods:cartographics</path>
                  <context>parent</context>
                </read>
                <update>
                  <path>self::node()</path>
                  <context>self</context>
                </update>
                <delete>NULL</delete>
              </actions>
            </properties>
            <children>
              <element name="coordinates">
                <properties>
                  <type>textfield</type>
                  <access>TRUE</access>
                  <description>Contains a statement of coordinates covered by the resource.</description>
                  <required>FALSE</required>
                  <title>Coordinates</title>
                  <tree>TRUE</tree>
                  <actions>
                    <create>
                      <path>self::node()</path>
                      <context>parent</context>
                      <schema/>
                      <type>element</type>
                      <prefix>NULL</prefix>
                      <value>coordinates</value>
                    </create>
                    <read>
                      <path>mods:coordinates</path>
                      <context>parent</context>
                    </read>
                    <update>
                      <path>self::node()</path>
                      <context>self</context>
                    </update>
                    <delete>NULL</delete>
                  </actions>
                </properties>
                <children/>
              </element>
            </children>
          </element>
        </children>
      </element>
      <element name="Ingest">
        <properties>
          <type>hidden</type>
          <access>TRUE</access>
          <default_value>hiddenvalue</default_value>
          <required>FALSE</required>
          <tree>TRUE</tree>
        </properties>
        <children/>
      </element>
    </children>
  </form>
</definition>',
      ),
    ),
    'deleted' => 0,
    'description' => '<p>ummm, just trying things out</p>',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xml_field',
        'settings' => array(),
        'type' => 'xml_field_safe',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mods_audio',
    'label' => 'MODS_audio',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'validation_callback' => 'xml_field_is_valid_xml_string',
      'xml_example_collapsed' => 1,
      'xml_example_show' => 1,
      'xml_schema' => '',
      'xml_schema_collapsed' => TRUE,
      'xml_schema_errors' => TRUE,
      'xml_schema_show' => TRUE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'xml_field',
      'settings' => array(),
      'type' => 'xml_field_text',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-islandora_basic_image-field_citeas'.
  $field_instances['node-islandora_basic_image-field_citeas'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xpath_field',
        'settings' => array(),
        'type' => 'xpath_field_safe',
        'weight' => 27,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_citeas',
    'label' => 'citeas',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(
        'debug' => 0,
        'is_remote_path' => 0,
        'url_prefix' => array(
          'prefix' => '',
          'use_default' => 1,
        ),
        'use_xslt' => 'xpath',
        'xml_field_instance' => 'field_mods_test_mockup',
        'xpath' => '/mods/accessCondition[@type=\'restriction on access\']',
        'xpath_text_only' => 1,
        'xsl_params' => '',
        'xsl_path' => '',
        'xsl_upload' => '',
      ),
      'type' => 'xpath_field_xpath',
      'weight' => 23,
    ),
  );

  // Exported field_instance:
  // 'node-islandora_basic_image-field_mods_mock_title'.
  $field_instances['node-islandora_basic_image-field_mods_mock_title'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xpath_field',
        'settings' => array(),
        'type' => 'xpath_field_safe',
        'weight' => 22,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mods_mock_title',
    'label' => 'mods_mock_title',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(
        'debug' => 0,
        'is_remote_path' => 0,
        'url_prefix' => array(
          'prefix' => '',
          'use_default' => 1,
        ),
        'use_xslt' => 'xpath',
        'xml_field_instance' => 'field_mods_test_mockup',
        'xpath' => '/mods/titleInfo/title',
        'xpath_text_only' => 1,
        'xsl_params' => '',
        'xsl_path' => '',
        'xsl_upload' => '',
      ),
      'type' => 'xpath_field_xpath',
      'weight' => 18,
    ),
  );

  // Exported field_instance:
  // 'node-islandora_basic_image-field_mods_test_mockup'.
  $field_instances['node-islandora_basic_image-field_mods_test_mockup'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xml_field',
        'settings' => array(),
        'type' => 'xml_field_safe',
        'weight' => 21,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_mods_test_mockup',
    'label' => 'mods3',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
      'validation_callback' => 0,
      'xml_example_collapsed' => 1,
      'xml_example_show' => 0,
      'xml_schema' => '',
      'xml_schema_collapsed' => 1,
      'xml_schema_errors' => 1,
      'xml_schema_show' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'xml_field',
      'settings' => array(),
      'type' => 'xml_field_text',
      'weight' => 17,
    ),
  );

  // Exported field_instance:
  // 'node-islandora_basic_image-field_origin_info_frommods'.
  $field_instances['node-islandora_basic_image-field_origin_info_frommods'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xpath_field',
        'settings' => array(),
        'type' => 'xpath_field_safe',
        'weight' => 23,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_origin_info_frommods',
    'label' => 'dateCreated_mods',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(
        'debug' => 0,
        'is_remote_path' => 0,
        'url_prefix' => array(
          'prefix' => '',
          'use_default' => 1,
        ),
        'use_xslt' => 'xpath',
        'xml_field_instance' => 'field_mods_test_mockup',
        'xpath' => '/mods/originInfo/dateCreated',
        'xpath_text_only' => 1,
        'xsl_params' => '',
        'xsl_path' => '',
        'xsl_upload' => '',
      ),
      'type' => 'xpath_field_xpath',
      'weight' => 19,
    ),
  );

  // Exported field_instance:
  // 'node-islandora_basic_image-field_subject_topic_mods'.
  $field_instances['node-islandora_basic_image-field_subject_topic_mods'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xpath_field',
        'settings' => array(),
        'type' => 'xpath_field_safe',
        'weight' => 24,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_subject_topic_mods',
    'label' => 'subjec_topic_mods',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(
        'debug' => 0,
        'is_remote_path' => 0,
        'url_prefix' => array(
          'prefix' => '',
          'use_default' => 1,
        ),
        'use_xslt' => 'xpath',
        'xml_field_instance' => 'field_mods_test_mockup',
        'xpath' => '/mods/subject/topic',
        'xpath_text_only' => 1,
        'xsl_params' => '',
        'xsl_path' => '',
        'xsl_upload' => '',
      ),
      'type' => 'xpath_field_xpath',
      'weight' => 20,
    ),
  );

  // Exported field_instance:
  // 'node-islandora_basic_image-field_typeofresource_mods'.
  $field_instances['node-islandora_basic_image-field_typeofresource_mods'] = array(
    'bundle' => 'islandora_basic_image',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'xpath_field',
        'settings' => array(),
        'type' => 'xpath_field_safe',
        'weight' => 26,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_typeofresource_mods',
    'label' => 'typeOfResource_mods',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'xpath_field',
      'settings' => array(
        'debug' => 0,
        'is_remote_path' => 0,
        'url_prefix' => array(
          'prefix' => '',
          'use_default' => 1,
        ),
        'use_xslt' => 'xpath',
        'xml_field_instance' => 'field_mods_test_mockup',
        'xpath' => '/mods/typeOfResource',
        'xpath_text_only' => 1,
        'xsl_params' => '',
        'xsl_path' => '',
        'xsl_upload' => '',
      ),
      'type' => 'xpath_field_xpath',
      'weight' => 22,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('<p>ummm, just trying things out</p>');
  t('MODS_audio');
  t('citeas');
  t('dateCreated_mods');
  t('mods3');
  t('mods_mock_title');
  t('subjec_topic_mods');
  t('typeOfResource_mods');

  return $field_instances;
}
