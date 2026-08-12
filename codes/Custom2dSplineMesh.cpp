void Custom2dSplineMesh___cctor(const MethodInfo *method)
{
  if ( (byte_5970271 & 1) == 0 )
  {
    sub_2213A60(&Custom2dSplineMesh_TypeInfo);
    byte_5970271 = 1;
  }
  LODWORD(Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD) = (struct Custom2dSplineMesh_StaticFields)953267991;
}


void Custom2dSplineMesh___ctor(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector3__c *v3; // x0
  System_Collections_Generic_List_Vector3__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5970270 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_5970270 = 1;
  }
  v3 = System_Collections_Generic_List_Vector3__TypeInfo;
  this->fields.PathRate = 1.0;
  this->fields.UVrate = 0.5;
  *(_QWORD *)&this->fields.complexity = 0x3F7D70A441A00000LL;
  this->fields.DrawWidth = 3.0;
  v4 = (System_Collections_Generic_List_Vector3__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_Vector3____ctor(
    v4,
    (const MethodInfo_44E2CE0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.splinePos = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.splinePos, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__AddCap(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o normalizedDir,
        UnityEngine_Vector3_o offset,
        float width,
        bool isTail,
        const MethodInfo *method)
{
  float z; // s11
  float y; // s9
  float v9; // s10
  bool v10; // w20
  float v12; // s14
  int32_t CapComplexity; // w8
  int32_t flattenAxis; // w8
  float v15; // s1
  float v16; // s0
  float v17; // s9
  float v18; // s11
  float v19; // s2
  float v20; // s12
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s13
  float v25; // s14
  float v26; // s15
  int32_t v27; // w8
  float v28; // s9
  float v29; // s14
  float v30; // s15
  float v31; // s13
  float v32; // s12
  float v33; // s11
  const MethodInfo *v34; // x1
  float v35; // s9
  float v36; // s13
  int32_t v37; // w8
  float v38; // s14
  float v39; // s12
  int32_t v40; // w8
  float v41; // s12
  float v42; // s10
  float v43; // s11
  float v44; // s8
  float v45; // s9
  System_Collections_Generic_List_Vector3__o *verts; // x0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v48; // x9
  int32_t size; // w10
  float *v50; // x8
  struct UnityEngine_Vector3_array *v51; // x8
  _QWORD *v52; // x9
  int32_t v53; // w10
  float *v54; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x21
  struct UnityEngine_Vector2_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  struct System_Collections_Generic_List_Vector2__o *v59; // x21
  struct UnityEngine_Vector2_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  int32_t v63; // w8
  float v64; // s11
  float v65; // s12
  float v66; // s9
  float v67; // s0
  float v68; // s13
  float v69; // s15
  float v70; // s14
  float v71; // s1
  struct UnityEngine_Vector3_array *v72; // x8
  _QWORD *v73; // x9
  int32_t v74; // w10
  float *v75; // x8
  struct UnityEngine_Vector3_array *v76; // x8
  _QWORD *v77; // x9
  int32_t v78; // w10
  float *v79; // x8
  struct System_Collections_Generic_List_Vector2__o *v80; // x21
  float v81; // s8
  struct UnityEngine_Vector2_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  struct System_Collections_Generic_List_Vector2__o *v85; // x21
  UnityEngine_Vector2_o v86; // kr50_8
  struct UnityEngine_Vector2_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  float *v90; // x8
  int32_t v91; // w8
  float v92; // s0
  float v93; // s1
  float v94; // s11
  float v95; // s12
  float v96; // s2
  float v97; // s13
  float v98; // s8
  float v99; // s9
  float v100; // s10
  struct UnityEngine_Vector3_array *v101; // x8
  _QWORD *v102; // x9
  int32_t v103; // w10
  float *v104; // x8
  struct UnityEngine_Vector3_array *v105; // x8
  _QWORD *v106; // x9
  int32_t v107; // w10
  float *v108; // x8
  struct System_Collections_Generic_List_Vector2__o *v109; // x20
  struct UnityEngine_Vector2_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  struct System_Collections_Generic_List_Vector2__o *v113; // x20
  Custom2dSplineMesh_o *v115; // x0
  float v118; // s0
  struct UnityEngine_Vector3_array *v119; // x8
  _QWORD *v120; // x9
  int32_t v121; // w10
  float *v122; // x8
  struct UnityEngine_Vector3_array *v123; // x8
  _QWORD *v124; // x9
  int32_t v125; // w10
  float *v126; // x8
  struct System_Collections_Generic_List_Vector2__o *v127; // x21
  struct UnityEngine_Vector2_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  struct System_Collections_Generic_List_Vector2__o *v131; // x21
  struct UnityEngine_Vector2_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  int32_t v135; // w8
  float v136; // s0
  float v137; // s2
  float v138; // s1
  float v139; // s8
  float v140; // s10
  float v141; // s9
  struct UnityEngine_Vector3_array *v142; // x8
  _QWORD *v143; // x9
  int32_t v144; // w10
  float *v145; // x8
  struct System_Collections_Generic_List_Vector2__o *v146; // x21
  struct UnityEngine_Vector2_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  int32_t v150; // w8
  int v151; // w21
  int v152; // w26
  float v153; // s13
  float v154; // s11
  float v155; // s12
  int32_t v156; // w8
  float v157; // s9
  float v158; // s8
  float v159; // s14
  struct UnityEngine_Vector3_array *v160; // x8
  _QWORD *v161; // x9
  int32_t v162; // w10
  float *v163; // x8
  struct System_Collections_Generic_List_Vector2__o *v164; // x20
  struct UnityEngine_Vector2_array *v165; // x8
  _QWORD *v166; // x9
  __int64 v167; // x10
  struct UnityEngine_Vector3_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  int v171; // w20
  struct UnityEngine_Vector3_array *v172; // x8
  int32_t vtxIdx; // w10
  _QWORD *v174; // x9
  __int64 v175; // x11
  struct UnityEngine_Vector3_array *v176; // x8
  int32_t v177; // w10
  _QWORD *v178; // x9
  __int64 v179; // x11
  int32_t v180; // w8
  float v181; // s15
  int32_t v182; // w8
  float v183; // s11
  struct UnityEngine_Vector3_array *v184; // x8
  _QWORD *v185; // x9
  int32_t v186; // w10
  float *v187; // x8
  struct UnityEngine_Vector3_array *v188; // x8
  _QWORD *v189; // x9
  int32_t v190; // w10
  float *v191; // x8
  struct System_Collections_Generic_List_Vector2__o *v192; // x21
  struct UnityEngine_Vector2_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  struct System_Collections_Generic_List_Vector2__o *v196; // x21
  struct UnityEngine_Vector2_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  int32_t v200; // w8
  float v201; // s11
  float v202; // s9
  float v203; // s12
  float v204; // s0
  float v205; // s15
  float v206; // s13
  float v207; // s14
  float v208; // s1
  struct UnityEngine_Vector3_array *v209; // x8
  _QWORD *v210; // x9
  int32_t v211; // w10
  float *v212; // x8
  struct UnityEngine_Vector3_array *v213; // x8
  _QWORD *v214; // x9
  int32_t v215; // w10
  float *v216; // x8
  struct System_Collections_Generic_List_Vector2__o *v217; // x21
  struct UnityEngine_Vector2_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  struct System_Collections_Generic_List_Vector2__o *v221; // x21
  struct UnityEngine_Vector2_array *v222; // x8
  _QWORD *v223; // x9
  __int64 v224; // x10
  const MethodInfo *v225; // x1
  float v226; // s11
  float v227; // s13
  int32_t v228; // w8
  float v229; // s12
  float v230; // s14
  struct UnityEngine_Vector3_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  struct UnityEngine_Vector3_array *v234; // x8
  int32_t v235; // w10
  _QWORD *v236; // x9
  __int64 v237; // x11
  struct UnityEngine_Vector3_array *v238; // x8
  int32_t v239; // w10
  _QWORD *v240; // x9
  __int64 v241; // x11
  unsigned int max_length; // w12
  struct UnityEngine_Vector3_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  struct UnityEngine_Vector3_array *v246; // x8
  int32_t v247; // w10
  _QWORD *v248; // x9
  __int64 v249; // x11
  int32_t v250; // w10
  struct UnityEngine_Vector3_array *v251; // x8
  _QWORD *v252; // x9
  int32_t v253; // w10
  float *v254; // x8
  struct System_Collections_Generic_List_Vector2__o *v255; // x20
  struct UnityEngine_Vector2_array *v256; // x8
  _QWORD *v257; // x9
  __int64 v258; // x10
  int32_t v259; // w8
  float v260; // s8
  int32_t v261; // w8
  float v262; // s9
  struct UnityEngine_Vector3_array *v263; // x8
  _QWORD *v264; // x9
  int32_t v265; // w10
  float *v266; // x8
  struct UnityEngine_Vector3_array *v267; // x8
  _QWORD *v268; // x9
  int32_t v269; // w10
  float *v270; // x8
  struct System_Collections_Generic_List_Vector2__o *v271; // x20
  struct UnityEngine_Vector2_array *v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  struct UnityEngine_Vector2_array *v275; // x8
  _QWORD *v276; // x9
  __int64 v277; // x10
  struct UnityEngine_Vector3_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  struct UnityEngine_Vector3_array *v281; // x8
  int32_t v282; // w10
  _QWORD *v283; // x9
  __int64 v284; // x11
  struct UnityEngine_Vector3_array *v285; // x8
  int32_t v286; // w10
  _QWORD *v287; // x9
  __int64 v288; // x11
  struct UnityEngine_Vector3_array *v289; // x8
  int32_t v290; // w10
  _QWORD *v291; // x9
  __int64 v292; // x11
  struct UnityEngine_Vector3_array *v293; // x8
  int32_t v294; // w10
  _QWORD *v295; // x9
  __int64 v296; // x11
  struct UnityEngine_Vector3_array *v297; // x8
  int32_t v298; // w10
  _QWORD *v299; // x9
  __int64 v300; // x11
  int32_t v301; // w1
  float v302; // [xsp+4h] [xbp-ACh]
  float v303; // [xsp+4h] [xbp-ACh]
  float v304; // [xsp+8h] [xbp-A8h]
  float v305; // [xsp+8h] [xbp-A8h]
  float x; // [xsp+10h] [xbp-A0h]
  float v307; // [xsp+1Ch] [xbp-94h]
  float v308; // [xsp+68h] [xbp-48h]
  float v309; // [xsp+6Ch] [xbp-44h]
  UnityEngine_Vector3_o v310; // 0:kr00_12.12
  UnityEngine_Vector3_o v311; // 0:kr14_12.12
  UnityEngine_Vector3_o v312; // 0:kr20_12.12
  UnityEngine_Vector3_o v313; // 0:kr34_12.12
  UnityEngine_Vector3_o v314; // 0:kr40_12.12
  UnityEngine_Vector2_o UV_48562484; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v316; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v317; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v318; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v319; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v320; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v321; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v322; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v323; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v324; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v325; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v326; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v327; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v328; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v329; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v330; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v331; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v332; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v333; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v334; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v335; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v336; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v337; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v338; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v339; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v340; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v341; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v342; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v343; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v344; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v345; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v346; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v347; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v348; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v349; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v350; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v351; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v352; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v353; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v354; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v355; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v356; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v357; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v358; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v359; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v360; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v361; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v364; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v365; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v366; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v367; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v368; // 0:s1.4,4:s2.4,8:s3.4

  z = normalizedDir.fields.z;
  y = normalizedDir.fields.y;
  v9 = pos.fields.z;
  v10 = isTail;
  x = normalizedDir.fields.x;
  v308 = pos.fields.x;
  v309 = pos.fields.y;
  if ( (byte_597026F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__Add__);
    byte_597026F = 1;
  }
  v12 = offset.fields.y;
  v364.fields.z = offset.fields.z;
  if ( !this->fields.StrictUVmode )
  {
LABEL_7:
    v302 = y;
    v304 = z;
    if ( !v10 )
    {
      flattenAxis = this->fields.flattenAxis;
      v15 = v309 - (float)(y * width);
      v16 = v308 - (float)(x * width);
      v17 = offset.fields.y + v15;
      v18 = offset.fields.x + v16;
      if ( flattenAxis == 2 )
      {
        v24 = v16 - offset.fields.x;
        v25 = v15 - offset.fields.y;
        v20 = 0.0;
        v26 = 0.0;
      }
      else
      {
        v19 = v9 - (float)(v304 * width);
        v20 = offset.fields.z + v19;
        if ( flattenAxis == 1 )
        {
          v24 = v16 - offset.fields.x;
          v26 = v19 - offset.fields.z;
          v17 = 0.0;
          v25 = 0.0;
        }
        else
        {
          v21 = v16 - offset.fields.x;
          v22 = v15 - offset.fields.y;
          v23 = v19 - offset.fields.z;
          if ( flattenAxis )
          {
            v24 = v21;
          }
          else
          {
            v18 = 0.0;
            v24 = 0.0;
          }
          v25 = v22;
          v26 = v23;
        }
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      items = verts->fields._items;
      v48 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !items )
        goto LABEL_374;
      size = verts->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v331.fields.x = v18;
        v331.fields.y = v17;
        v331.fields.z = v20;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v331,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (float *)((char *)items + 12 * size);
        verts->fields._size = size + 1;
        v50[8] = v18;
        v50[9] = v17;
        v50[10] = v20;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v51 = verts->fields._items;
      v52 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v51 )
        goto LABEL_374;
      v53 = verts->fields._size;
      if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
      {
        v332.fields.x = v24;
        v332.fields.y = v25;
        v332.fields.z = v26;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v332,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = (float *)((char *)v51 + 12 * v53);
        verts->fields._size = v53 + 1;
        v54[8] = v24;
        v54[9] = v25;
        v54[10] = v26;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v333.fields.x = v18;
        v333.fields.y = v17;
        v333.fields.z = v20;
        UV_48562484 = Custom2dSplineMesh__GetUV_48562484(this, v333, (const MethodInfo *)isTail);
        if ( !uvs )
          goto LABEL_374;
      }
      else
      {
        UV_48562484.fields.y = this->fields.capVmin;
        UV_48562484.fields.x = 0.0;
        if ( !uvs )
          goto LABEL_374;
      }
      v56 = uvs->fields._items;
      v57 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++uvs->fields._version;
      if ( !v56 )
        goto LABEL_374;
      v58 = uvs->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          UV_48562484,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = v58 + 1;
        v56->m_Items[v58] = UV_48562484;
      }
      v59 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v334.fields.x = v24;
        v334.fields.y = v25;
        v334.fields.z = v26;
        v316 = Custom2dSplineMesh__GetUV_48562484(this, v334, (const MethodInfo *)isTail);
      }
      else
      {
        v316.fields.y = this->fields.capVmax;
        v316.fields.x = 0.0;
      }
      v12 = offset.fields.y;
      if ( !v59 )
        goto LABEL_374;
      v60 = v59->fields._items;
      v61 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v59->fields._version;
      if ( !v60 )
        goto LABEL_374;
      v62 = v59->fields._size;
      if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v59,
          v316,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
      }
      else
      {
        v59->fields._size = v62 + 1;
        v60->m_Items[v62] = v316;
      }
      v364.fields.z = offset.fields.z;
    }
    v63 = this->fields.flattenAxis;
    v64 = v308 + offset.fields.x;
    v65 = v309 + v12;
    if ( v63 == 2 )
    {
      v71 = v308;
      v67 = v309;
      v66 = 0.0;
      v68 = 0.0;
    }
    else
    {
      v66 = v9 + v364.fields.z;
      if ( v63 == 1 )
      {
        v68 = v9 - v364.fields.z;
        v65 = 0.0;
        v70 = 0.0;
        v69 = v308 - offset.fields.x;
LABEL_65:
        verts = this->fields.verts;
        if ( verts )
        {
          v72 = verts->fields._items;
          v73 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( v72 )
          {
            v74 = verts->fields._size;
            if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
            {
              v335.fields.x = v64;
              v335.fields.y = v65;
              v335.fields.z = v66;
              System_Collections_Generic_List_Vector3___AddWithResize(
                verts,
                v335,
                *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
            }
            else
            {
              v75 = (float *)((char *)v72 + 12 * v74);
              verts->fields._size = v74 + 1;
              v75[8] = v64;
              v75[9] = v65;
              v75[10] = v66;
            }
            verts = this->fields.verts;
            if ( verts )
            {
              v76 = verts->fields._items;
              v77 = Method_System_Collections_Generic_List_Vector3__Add__;
              ++verts->fields._version;
              if ( v76 )
              {
                v78 = verts->fields._size;
                if ( (unsigned int)v78 >= LODWORD(v76->max_length) )
                {
                  v336.fields.x = v69;
                  v336.fields.y = v70;
                  v336.fields.z = v68;
                  System_Collections_Generic_List_Vector3___AddWithResize(
                    verts,
                    v336,
                    *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
                }
                else
                {
                  v79 = (float *)((char *)v76 + 12 * v78);
                  verts->fields._size = v78 + 1;
                  v79[8] = v69;
                  v79[9] = v70;
                  v79[10] = v68;
                }
                v80 = this->fields.uvs;
                v81 = v10 ? 0.75 : 0.25;
                if ( this->fields.StrictUVmode )
                {
                  v337.fields.x = v64;
                  v337.fields.y = v65;
                  v337.fields.z = v66;
                  v317 = Custom2dSplineMesh__GetUV_48562484(this, v337, (const MethodInfo *)isTail);
                  if ( !v80 )
                    goto LABEL_374;
                }
                else
                {
                  v317.fields.y = this->fields.capVmin;
                  v317.fields.x = v81;
                  if ( !v80 )
                    goto LABEL_374;
                }
                v82 = v80->fields._items;
                v83 = Method_System_Collections_Generic_List_Vector2__Add__;
                ++v80->fields._version;
                if ( v82 )
                {
                  v84 = v80->fields._size;
                  if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
                  {
                    System_Collections_Generic_List_Vector2___AddWithResize(
                      v80,
                      v317,
                      *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v80->fields._size = v84 + 1;
                    v82->m_Items[v84] = v317;
                  }
                  v85 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v338.fields.x = v69;
                    v338.fields.y = v70;
                    v338.fields.z = v68;
                    v86 = Custom2dSplineMesh__GetUV_48562484(this, v338, (const MethodInfo *)isTail);
                    v318.fields.y = v86.fields.y;
                    v81 = v86.fields.x;
                  }
                  else
                  {
                    v318.fields.y = this->fields.capVmax;
                  }
                  if ( v85 )
                  {
                    v87 = v85->fields._items;
                    v88 = Method_System_Collections_Generic_List_Vector2__Add__;
                    ++v85->fields._version;
                    if ( v87 )
                    {
                      v89 = v85->fields._size;
                      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
                      {
                        v318.fields.x = v81;
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v85,
                          v318,
                          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v90 = (float *)(&v87->obj.klass + v89);
                        v85->fields._size = v89 + 1;
                        v90[8] = v81;
                        v90[9] = v318.fields.y;
                      }
                      if ( v10 )
                      {
                        v91 = this->fields.flattenAxis;
                        v92 = v308 + (float)(x * width);
                        v93 = v309 + (float)(v302 * width);
                        v94 = offset.fields.x + v92;
                        v95 = offset.fields.y + v93;
                        if ( v91 == 2 )
                        {
                          v100 = v92 - offset.fields.x;
                          v99 = v93 - offset.fields.y;
                          v97 = 0.0;
                          v98 = 0.0;
                        }
                        else
                        {
                          v96 = v9 + (float)(v304 * width);
                          v97 = offset.fields.z + v96;
                          v98 = v96 - offset.fields.z;
                          if ( v91 == 1 )
                          {
                            v100 = v92 - offset.fields.x;
                            v95 = 0.0;
                            v99 = 0.0;
                          }
                          else
                          {
                            v99 = v93 - offset.fields.y;
                            if ( v91 )
                            {
                              v100 = v92 - offset.fields.x;
                            }
                            else
                            {
                              v94 = 0.0;
                              v100 = 0.0;
                            }
                          }
                        }
                        verts = this->fields.verts;
                        if ( !verts )
                          goto LABEL_374;
                        v101 = verts->fields._items;
                        v102 = Method_System_Collections_Generic_List_Vector3__Add__;
                        ++verts->fields._version;
                        if ( !v101 )
                          goto LABEL_374;
                        v103 = verts->fields._size;
                        if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
                        {
                          v339.fields.x = v94;
                          v339.fields.y = v95;
                          v339.fields.z = v97;
                          System_Collections_Generic_List_Vector3___AddWithResize(
                            verts,
                            v339,
                            *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v104 = (float *)((char *)v101 + 12 * v103);
                          verts->fields._size = v103 + 1;
                          v104[8] = v94;
                          v104[9] = v95;
                          v104[10] = v97;
                        }
                        verts = this->fields.verts;
                        if ( !verts )
                          goto LABEL_374;
                        v105 = verts->fields._items;
                        v106 = Method_System_Collections_Generic_List_Vector3__Add__;
                        ++verts->fields._version;
                        if ( !v105 )
                          goto LABEL_374;
                        v107 = verts->fields._size;
                        if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
                        {
                          v340.fields.x = v100;
                          v340.fields.y = v99;
                          v340.fields.z = v98;
                          System_Collections_Generic_List_Vector3___AddWithResize(
                            verts,
                            v340,
                            *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v108 = (float *)((char *)v105 + 12 * v107);
                          verts->fields._size = v107 + 1;
                          v108[8] = v100;
                          v108[9] = v99;
                          v108[10] = v98;
                        }
                        v109 = this->fields.uvs;
                        if ( this->fields.StrictUVmode )
                        {
                          v341.fields.x = v94;
                          v341.fields.y = v95;
                          v341.fields.z = v97;
                          v319 = Custom2dSplineMesh__GetUV_48562484(this, v341, (const MethodInfo *)isTail);
                          if ( !v109 )
                            goto LABEL_374;
                        }
                        else
                        {
                          v319.fields.y = this->fields.capVmin;
                          v319.fields.x = 1.0;
                          if ( !v109 )
                            goto LABEL_374;
                        }
                        v110 = v109->fields._items;
                        v111 = Method_System_Collections_Generic_List_Vector2__Add__;
                        ++v109->fields._version;
                        if ( !v110 )
                          goto LABEL_374;
                        v112 = v109->fields._size;
                        if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
                        {
                          System_Collections_Generic_List_Vector2___AddWithResize(
                            v109,
                            v319,
                            *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v109->fields._size = v112 + 1;
                          v110->m_Items[v112] = v319;
                        }
                        v113 = this->fields.uvs;
                        if ( !this->fields.StrictUVmode )
                        {
                          v320.fields.y = this->fields.capVmax;
                          v320.fields.x = 1.0;
                          if ( !v113 )
                            goto LABEL_374;
                          goto LABEL_343;
                        }
                        v342.fields.x = v100;
                        v342.fields.y = v99;
                        v115 = this;
                        v342.fields.z = v98;
LABEL_342:
                        v320 = Custom2dSplineMesh__GetUV_48562484(v115, v342, (const MethodInfo *)isTail);
                        if ( !v113 )
                          goto LABEL_374;
LABEL_343:
                        v275 = v113->fields._items;
                        v276 = Method_System_Collections_Generic_List_Vector2__Add__;
                        ++v113->fields._version;
                        if ( !v275 )
                          goto LABEL_374;
                        v277 = v113->fields._size;
                        if ( (unsigned int)v277 >= LODWORD(v275->max_length) )
                        {
                          System_Collections_Generic_List_Vector2___AddWithResize(
                            v113,
                            v320,
                            *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v113->fields._size = v277 + 1;
                          v275->m_Items[v277] = v320;
                        }
                        goto LABEL_347;
                      }
                      goto LABEL_347;
                    }
                  }
                }
              }
            }
          }
        }
LABEL_374:
        sub_2213CDC(verts, isTail);
      }
      if ( !v63 )
      {
        v67 = v309;
        v68 = v9 - v364.fields.z;
        v64 = 0.0;
        v69 = 0.0;
LABEL_64:
        v70 = v67 - v12;
        goto LABEL_65;
      }
      v71 = v308;
      v67 = v309;
      v68 = v9 - v364.fields.z;
    }
    v69 = v71 - offset.fields.x;
    goto LABEL_64;
  }
  CapComplexity = this->fields.CapComplexity;
  if ( CapComplexity != 2 )
  {
    if ( CapComplexity != 1 )
    {
      if ( !CapComplexity )
        goto LABEL_7;
      v40 = this->fields.flattenAxis;
      if ( v40 )
      {
        v41 = v9;
        v42 = offset.fields.x;
        if ( v40 == 1 )
        {
          v44 = v308;
          v45 = 0.0;
        }
        else
        {
          if ( v40 == 2 )
          {
            v43 = 0.0;
            v44 = v308;
            v45 = v309;
LABEL_161:
            verts = this->fields.verts;
            if ( !verts )
              goto LABEL_374;
            v142 = verts->fields._items;
            v143 = Method_System_Collections_Generic_List_Vector3__Add__;
            ++verts->fields._version;
            if ( !v142 )
              goto LABEL_374;
            v144 = verts->fields._size;
            if ( (unsigned int)v144 >= LODWORD(v142->max_length) )
            {
              v347.fields.x = v44;
              v347.fields.y = v45;
              v347.fields.z = v43;
              System_Collections_Generic_List_Vector3___AddWithResize(
                verts,
                v347,
                *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
            }
            else
            {
              v145 = (float *)((char *)v142 + 12 * v144);
              verts->fields._size = v144 + 1;
              v145[8] = v44;
              v145[9] = v45;
              v145[10] = v43;
            }
            v348.fields.x = v44;
            v348.fields.y = v45;
            v146 = this->fields.uvs;
            v348.fields.z = v43;
            v323 = Custom2dSplineMesh__GetUV_48562484(this, v348, (const MethodInfo *)isTail);
            if ( !v146 )
              goto LABEL_374;
            v147 = v146->fields._items;
            v148 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v146->fields._version;
            if ( !v147 )
              goto LABEL_374;
            v149 = v146->fields._size;
            if ( (unsigned int)v149 >= LODWORD(v147->max_length) )
            {
              System_Collections_Generic_List_Vector2___AddWithResize(
                v146,
                v323,
                *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
            }
            else
            {
              v146->fields._size = v149 + 1;
              v147->m_Items[v149] = v323;
            }
            v150 = this->fields.CapComplexity;
            v151 = v150 + 1;
            if ( v150 + 1 >= 0 )
            {
              v307 = v41;
              v152 = 0;
              if ( v10 )
                v153 = -offset.fields.z;
              else
                v153 = offset.fields.z;
              if ( v10 )
                v154 = -v42;
              else
                v154 = v42;
              if ( v10 )
                v155 = -offset.fields.y;
              else
                v155 = offset.fields.y;
              do
              {
                v366.fields.x = v154;
                v366.fields.y = v155;
                v366.fields.z = v153;
                v311 = Custom2dSplineMesh__RotateVec3(
                         this,
                         (float)((float)v152 * 180.0) / (float)v151,
                         v366,
                         (const MethodInfo *)isTail);
                v156 = this->fields.flattenAxis;
                v157 = v309 + v311.fields.y;
                v158 = v307 + v311.fields.z;
                if ( v156 )
                {
                  v159 = v308 + v311.fields.x;
                  if ( v156 == 1 )
                  {
                    v157 = 0.0;
                  }
                  else if ( v156 == 2 )
                  {
                    v158 = 0.0;
                  }
                }
                else
                {
                  v159 = 0.0;
                }
                verts = this->fields.verts;
                if ( !verts )
                  goto LABEL_374;
                v160 = verts->fields._items;
                v161 = Method_System_Collections_Generic_List_Vector3__Add__;
                ++verts->fields._version;
                if ( !v160 )
                  goto LABEL_374;
                v162 = verts->fields._size;
                if ( (unsigned int)v162 >= LODWORD(v160->max_length) )
                {
                  v349.fields.x = v159;
                  v349.fields.y = v157;
                  v349.fields.z = v158;
                  System_Collections_Generic_List_Vector3___AddWithResize(
                    verts,
                    v349,
                    *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v161[4] + 192LL) + 112LL));
                }
                else
                {
                  v163 = (float *)((char *)v160 + 12 * v162);
                  verts->fields._size = v162 + 1;
                  v163[8] = v159;
                  v163[9] = v157;
                  v163[10] = v158;
                }
                v350.fields.x = v159;
                v350.fields.y = v157;
                v164 = this->fields.uvs;
                v350.fields.z = v158;
                v324 = Custom2dSplineMesh__GetUV_48562484(this, v350, (const MethodInfo *)isTail);
                if ( !v164 )
                  goto LABEL_374;
                v165 = v164->fields._items;
                v166 = Method_System_Collections_Generic_List_Vector2__Add__;
                ++v164->fields._version;
                if ( !v165 )
                  goto LABEL_374;
                v167 = v164->fields._size;
                if ( (unsigned int)v167 >= LODWORD(v165->max_length) )
                {
                  System_Collections_Generic_List_Vector2___AddWithResize(
                    v164,
                    v324,
                    *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v166[4] + 192LL) + 112LL));
                }
                else
                {
                  v164->fields._size = v167 + 1;
                  v165->m_Items[v167] = v324;
                }
                if ( v152 <= 0 )
                {
                  v171 = v152 + 1;
                }
                else
                {
                  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                  if ( !verts )
                    goto LABEL_374;
                  v168 = verts->fields._items;
                  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
                  v169 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v168 )
                    goto LABEL_374;
                  v170 = verts->fields._size;
                  if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4467270 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
                    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                    if ( !verts )
                      goto LABEL_374;
                  }
                  else
                  {
                    verts->fields._size = v170 + 1;
                    *((_DWORD *)&v168->m_Items[0].fields.x + v170) = isTail;
                  }
                  v172 = verts->fields._items;
                  vtxIdx = this->fields.vtxIdx;
                  v174 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v172 )
                    goto LABEL_374;
                  v175 = verts->fields._size;
                  v171 = v152 + 1;
                  *(_QWORD *)&isTail = (unsigned int)(v152 + 1 + vtxIdx);
                  if ( (unsigned int)v175 >= LODWORD(v172->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4467270 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
                    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                    if ( !verts )
                      goto LABEL_374;
                  }
                  else
                  {
                    verts->fields._size = v175 + 1;
                    *((_DWORD *)&v172->m_Items[0].fields.x + v175) = isTail;
                  }
                  v176 = verts->fields._items;
                  v177 = this->fields.vtxIdx;
                  v178 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v176 )
                    goto LABEL_374;
                  v179 = verts->fields._size;
                  *(_QWORD *)&isTail = (unsigned int)(v177 + v152);
                  if ( (unsigned int)v179 >= LODWORD(v176->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4467270 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    verts->fields._size = v179 + 1;
                    *((_DWORD *)&v176->m_Items[0].fields.x + v179) = isTail;
                  }
                }
                v152 = v171;
              }
              while ( v171 <= v151 );
              v150 = this->fields.CapComplexity;
            }
            v180 = this->fields.vtxIdx + v150;
            goto LABEL_318;
          }
          v44 = v308;
          v45 = v309;
        }
        v43 = v41;
        goto LABEL_161;
      }
      v43 = v9;
      v45 = v309;
      v42 = offset.fields.x;
      v44 = 0.0;
      v41 = v43;
      goto LABEL_161;
    }
    v303 = y;
    v305 = z;
    v27 = this->fields.flattenAxis;
    v28 = v308 + offset.fields.x;
    v29 = v309 + offset.fields.y;
    if ( v27 != 2 )
    {
      v30 = v9 + offset.fields.z;
      if ( v27 == 1 )
      {
        v118 = v308;
        v31 = v9 - offset.fields.z;
        v29 = 0.0;
        v32 = 0.0;
      }
      else
      {
        v31 = v9 - offset.fields.z;
        v32 = v309 - offset.fields.y;
        if ( !v27 )
        {
          v28 = 0.0;
          v33 = 0.0;
LABEL_128:
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v119 = verts->fields._items;
          v120 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v119 )
            goto LABEL_374;
          v121 = verts->fields._size;
          if ( (unsigned int)v121 >= LODWORD(v119->max_length) )
          {
            v343.fields.x = v28;
            v343.fields.y = v29;
            v343.fields.z = v30;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v343,
              *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
          }
          else
          {
            v122 = (float *)((char *)v119 + 12 * v121);
            verts->fields._size = v121 + 1;
            v122[8] = v28;
            v122[9] = v29;
            v122[10] = v30;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v123 = verts->fields._items;
          v124 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v123 )
            goto LABEL_374;
          v125 = verts->fields._size;
          if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
          {
            v344.fields.x = v33;
            v344.fields.y = v32;
            v344.fields.z = v31;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v344,
              *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
          }
          else
          {
            v126 = (float *)((char *)v123 + 12 * v125);
            verts->fields._size = v125 + 1;
            v126[8] = v33;
            v126[9] = v32;
            v126[10] = v31;
          }
          v345.fields.x = v28;
          v345.fields.y = v29;
          v127 = this->fields.uvs;
          v345.fields.z = v30;
          v321 = Custom2dSplineMesh__GetUV_48562484(this, v345, (const MethodInfo *)isTail);
          if ( !v127 )
            goto LABEL_374;
          v128 = v127->fields._items;
          v129 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v127->fields._version;
          if ( !v128 )
            goto LABEL_374;
          v130 = v127->fields._size;
          if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v127,
              v321,
              *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          }
          else
          {
            v127->fields._size = v130 + 1;
            v128->m_Items[v130] = v321;
          }
          v346.fields.x = v33;
          v346.fields.y = v32;
          v131 = this->fields.uvs;
          v346.fields.z = v31;
          v322 = Custom2dSplineMesh__GetUV_48562484(this, v346, (const MethodInfo *)isTail);
          if ( !v131 )
            goto LABEL_374;
          v132 = v131->fields._items;
          v133 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v131->fields._version;
          if ( !v132 )
            goto LABEL_374;
          v134 = v131->fields._size;
          if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v131,
              v322,
              *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          }
          else
          {
            v131->fields._size = v134 + 1;
            v132->m_Items[v134] = v322;
          }
          v135 = this->fields.flattenAxis;
          v136 = x * width;
          v137 = v303 * width;
          v138 = v305 * width;
          if ( v10 )
          {
            v139 = v9 + v138;
            v140 = v309 + v137;
            if ( v135 )
            {
              v141 = v308 + v136;
              if ( v135 == 1 )
              {
                v140 = 0.0;
              }
              else if ( v135 == 2 )
              {
                v139 = 0.0;
              }
            }
            else
            {
              v141 = 0.0;
            }
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            v231 = verts->fields._items;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v232 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v231 )
              goto LABEL_374;
            v233 = verts->fields._size;
            if ( (unsigned int)v233 >= LODWORD(v231->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v233 + 1;
              *((_DWORD *)&v231->m_Items[0].fields.x + v233) = isTail;
            }
            v234 = verts->fields._items;
            v235 = this->fields.vtxIdx;
            v236 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v234 )
              goto LABEL_374;
            v237 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v235 + 2);
            if ( (unsigned int)v237 >= LODWORD(v234->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v236[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v237 + 1;
              *((_DWORD *)&v234->m_Items[0].fields.x + v237) = isTail;
            }
            v238 = verts->fields._items;
            v239 = this->fields.vtxIdx;
            v240 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v238 )
              goto LABEL_374;
            v241 = verts->fields._size;
            max_length = v238->max_length;
            *(_QWORD *)&isTail = (unsigned int)(v239 + 1);
          }
          else
          {
            v139 = v9 - v138;
            v140 = v309 - v137;
            if ( v135 )
            {
              v141 = v308 - v136;
              if ( v135 == 1 )
              {
                v140 = 0.0;
              }
              else if ( v135 == 2 )
              {
                v139 = 0.0;
              }
            }
            else
            {
              v141 = 0.0;
            }
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            v243 = verts->fields._items;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v244 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v243 )
              goto LABEL_374;
            v245 = verts->fields._size;
            if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v245 + 1;
              *((_DWORD *)&v243->m_Items[0].fields.x + v245) = isTail;
            }
            v246 = verts->fields._items;
            v247 = this->fields.vtxIdx;
            v248 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v246 )
              goto LABEL_374;
            v249 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v247 + 1);
            if ( (unsigned int)v249 >= LODWORD(v246->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4467270 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v249 + 1;
              *((_DWORD *)&v246->m_Items[0].fields.x + v249) = isTail;
            }
            v238 = verts->fields._items;
            v250 = this->fields.vtxIdx;
            v240 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v238 )
              goto LABEL_374;
            v241 = verts->fields._size;
            max_length = v238->max_length;
            *(_QWORD *)&isTail = (unsigned int)(v250 + 2);
          }
          if ( (unsigned int)v241 >= max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)verts,
              isTail,
              *(const MethodInfo_4467270 **)(*(_QWORD *)(v240[4] + 192LL) + 112LL));
          }
          else
          {
            verts->fields._size = v241 + 1;
            *((_DWORD *)&v238->m_Items[0].fields.x + v241) = isTail;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v251 = verts->fields._items;
          v252 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v251 )
            goto LABEL_374;
          v253 = verts->fields._size;
          if ( (unsigned int)v253 >= LODWORD(v251->max_length) )
          {
            v359.fields.x = v141;
            v359.fields.y = v140;
            v359.fields.z = v139;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v359,
              *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
          }
          else
          {
            v254 = (float *)((char *)v251 + 12 * v253);
            verts->fields._size = v253 + 1;
            v254[8] = v141;
            v254[9] = v140;
            v254[10] = v139;
          }
          v360.fields.x = v141;
          v360.fields.y = v140;
          v255 = this->fields.uvs;
          v360.fields.z = v139;
          v329 = Custom2dSplineMesh__GetUV_48562484(this, v360, (const MethodInfo *)isTail);
          if ( !v255 )
            goto LABEL_374;
          v256 = v255->fields._items;
          v257 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v255->fields._version;
          if ( !v256 )
            goto LABEL_374;
          v258 = v255->fields._size;
          if ( (unsigned int)v258 >= LODWORD(v256->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v255,
              v329,
              *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
          }
          else
          {
            v255->fields._size = v258 + 1;
            v256->m_Items[v258] = v329;
          }
          v180 = this->fields.vtxIdx;
LABEL_318:
          v259 = v180 + 3;
          goto LABEL_373;
        }
        v118 = v308;
      }
      v33 = v118 - offset.fields.x;
      goto LABEL_128;
    }
    v30 = 0.0;
    v31 = 0.0;
    v33 = v308 - offset.fields.x;
    v32 = v309 - offset.fields.y;
    goto LABEL_128;
  }
  if ( !v10 )
  {
    v364.fields.x = offset.fields.x;
    v364.fields.y = offset.fields.y;
    v310 = Custom2dSplineMesh__RotateVec3(this, 60.0, v364, (const MethodInfo *)isTail);
    v35 = 0.0;
    v36 = v9 + v310.fields.z;
    v37 = this->fields.flattenAxis;
    v38 = v309 + v310.fields.y;
    if ( v37 )
    {
      v365.fields.z = offset.fields.z;
      v39 = v308 + v310.fields.x;
      if ( v37 == 1 )
      {
        v38 = 0.0;
      }
      else if ( v37 == 2 )
      {
        v36 = 0.0;
      }
    }
    else
    {
      v365.fields.z = offset.fields.z;
      v39 = 0.0;
    }
    v365.fields.x = offset.fields.x;
    v365.fields.y = offset.fields.y;
    v312 = Custom2dSplineMesh__RotateVec3(this, 120.0, v365, v34);
    v181 = v9 + v312.fields.z;
    v182 = this->fields.flattenAxis;
    v183 = v309 + v312.fields.y;
    if ( v182 )
    {
      v35 = v308 + v312.fields.x;
      if ( v182 == 1 )
      {
        v183 = 0.0;
      }
      else if ( v182 == 2 )
      {
        v181 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v184 = verts->fields._items;
    v185 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v184 )
      goto LABEL_374;
    v186 = verts->fields._size;
    if ( (unsigned int)v186 >= LODWORD(v184->max_length) )
    {
      v351.fields.x = v39;
      v351.fields.y = v38;
      v351.fields.z = v36;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v351,
        *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
    }
    else
    {
      v187 = (float *)((char *)v184 + 12 * v186);
      verts->fields._size = v186 + 1;
      v187[8] = v39;
      v187[9] = v38;
      v187[10] = v36;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v188 = verts->fields._items;
    v189 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v188 )
      goto LABEL_374;
    v190 = verts->fields._size;
    if ( (unsigned int)v190 >= LODWORD(v188->max_length) )
    {
      v352.fields.x = v35;
      v352.fields.y = v183;
      v352.fields.z = v181;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v352,
        *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
    }
    else
    {
      v191 = (float *)((char *)v188 + 12 * v190);
      verts->fields._size = v190 + 1;
      v191[8] = v35;
      v191[9] = v183;
      v191[10] = v181;
    }
    v353.fields.x = v39;
    v353.fields.y = v38;
    v192 = this->fields.uvs;
    v353.fields.z = v36;
    v325 = Custom2dSplineMesh__GetUV_48562484(this, v353, (const MethodInfo *)isTail);
    if ( !v192 )
      goto LABEL_374;
    v193 = v192->fields._items;
    v194 = Method_System_Collections_Generic_List_Vector2__Add__;
    v12 = offset.fields.y;
    ++v192->fields._version;
    if ( !v193 )
      goto LABEL_374;
    v195 = v192->fields._size;
    if ( (unsigned int)v195 >= LODWORD(v193->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v192,
        v325,
        *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
    }
    else
    {
      v192->fields._size = v195 + 1;
      v193->m_Items[v195] = v325;
    }
    v354.fields.x = v35;
    v354.fields.y = v183;
    v196 = this->fields.uvs;
    v354.fields.z = v181;
    v326 = Custom2dSplineMesh__GetUV_48562484(this, v354, (const MethodInfo *)isTail);
    if ( !v196 )
      goto LABEL_374;
    v197 = v196->fields._items;
    v198 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v196->fields._version;
    if ( !v197 )
      goto LABEL_374;
    v199 = v196->fields._size;
    if ( (unsigned int)v199 >= LODWORD(v197->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v196,
        v326,
        *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
    }
    else
    {
      v196->fields._size = v199 + 1;
      v197->m_Items[v199] = v326;
    }
    v364.fields.z = offset.fields.z;
  }
  v200 = this->fields.flattenAxis;
  v201 = v308 + offset.fields.x;
  v202 = v309 + v12;
  if ( v200 == 2 )
  {
    v208 = v308;
    v204 = v309;
    v203 = 0.0;
    v205 = 0.0;
LABEL_251:
    v206 = v208 - offset.fields.x;
    goto LABEL_252;
  }
  v203 = v9 + v364.fields.z;
  if ( v200 == 1 )
  {
    v205 = v9 - v364.fields.z;
    v202 = 0.0;
    v207 = 0.0;
    v206 = v308 - offset.fields.x;
    goto LABEL_253;
  }
  if ( v200 )
  {
    v208 = v308;
    v204 = v309;
    v205 = v9 - v364.fields.z;
    goto LABEL_251;
  }
  v204 = v309;
  v205 = v9 - v364.fields.z;
  v201 = 0.0;
  v206 = 0.0;
LABEL_252:
  v207 = v204 - v12;
LABEL_253:
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v209 = verts->fields._items;
  v210 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v209 )
    goto LABEL_374;
  v211 = verts->fields._size;
  if ( (unsigned int)v211 >= LODWORD(v209->max_length) )
  {
    v355.fields.x = v201;
    v355.fields.y = v202;
    v355.fields.z = v203;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v355,
      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
  }
  else
  {
    v212 = (float *)((char *)v209 + 12 * v211);
    verts->fields._size = v211 + 1;
    v212[8] = v201;
    v212[9] = v202;
    v212[10] = v203;
  }
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v213 = verts->fields._items;
  v214 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v213 )
    goto LABEL_374;
  v215 = verts->fields._size;
  if ( (unsigned int)v215 >= LODWORD(v213->max_length) )
  {
    v356.fields.x = v206;
    v356.fields.y = v207;
    v356.fields.z = v205;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v356,
      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
  }
  else
  {
    v216 = (float *)((char *)v213 + 12 * v215);
    verts->fields._size = v215 + 1;
    v216[8] = v206;
    v216[9] = v207;
    v216[10] = v205;
  }
  v357.fields.x = v201;
  v357.fields.y = v202;
  v217 = this->fields.uvs;
  v357.fields.z = v203;
  v327 = Custom2dSplineMesh__GetUV_48562484(this, v357, (const MethodInfo *)isTail);
  if ( !v217 )
    goto LABEL_374;
  v218 = v217->fields._items;
  v219 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v217->fields._version;
  if ( !v218 )
    goto LABEL_374;
  v220 = v217->fields._size;
  if ( (unsigned int)v220 >= LODWORD(v218->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v217,
      v327,
      *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
  }
  else
  {
    v217->fields._size = v220 + 1;
    v218->m_Items[v220] = v327;
  }
  v358.fields.x = v206;
  v358.fields.y = v207;
  v221 = this->fields.uvs;
  v358.fields.z = v205;
  v328 = Custom2dSplineMesh__GetUV_48562484(this, v358, (const MethodInfo *)isTail);
  if ( !v221 )
    goto LABEL_374;
  v222 = v221->fields._items;
  v223 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v221->fields._version;
  if ( !v222 )
    goto LABEL_374;
  v224 = v221->fields._size;
  if ( (unsigned int)v224 >= LODWORD(v222->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v221,
      v328,
      *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v223[4] + 192LL) + 112LL));
  }
  else
  {
    v221->fields._size = v224 + 1;
    v222->m_Items[v224] = v328;
  }
  if ( v10 )
  {
    v367.fields.x = -offset.fields.x;
    v367.fields.y = -offset.fields.y;
    v367.fields.z = -offset.fields.z;
    v313 = Custom2dSplineMesh__RotateVec3(this, 120.0, v367, (const MethodInfo *)isTail);
    v226 = 0.0;
    v227 = v9 + v313.fields.z;
    v228 = this->fields.flattenAxis;
    v229 = v309 + v313.fields.y;
    if ( v228 )
    {
      v230 = v308 + v313.fields.x;
      if ( v228 == 1 )
      {
        v229 = 0.0;
      }
      else if ( v228 == 2 )
      {
        v227 = 0.0;
      }
    }
    else
    {
      v230 = 0.0;
    }
    v368.fields.x = -offset.fields.x;
    v368.fields.y = -offset.fields.y;
    v368.fields.z = -offset.fields.z;
    v314 = Custom2dSplineMesh__RotateVec3(this, 60.0, v368, v225);
    v260 = v9 + v314.fields.z;
    v261 = this->fields.flattenAxis;
    v262 = v309 + v314.fields.y;
    if ( v261 )
    {
      v226 = v308 + v314.fields.x;
      if ( v261 == 1 )
      {
        v262 = 0.0;
      }
      else if ( v261 == 2 )
      {
        v260 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v263 = verts->fields._items;
    v264 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v263 )
      goto LABEL_374;
    v265 = verts->fields._size;
    if ( (unsigned int)v265 >= LODWORD(v263->max_length) )
    {
      v361.fields.x = v230;
      v361.fields.y = v229;
      v361.fields.z = v227;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v361,
        *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    }
    else
    {
      v266 = (float *)((char *)v263 + 12 * v265);
      verts->fields._size = v265 + 1;
      v266[8] = v230;
      v266[9] = v229;
      v266[10] = v227;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v267 = verts->fields._items;
    v268 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v267 )
      goto LABEL_374;
    v269 = verts->fields._size;
    if ( (unsigned int)v269 >= LODWORD(v267->max_length) )
    {
      v362.fields.x = v226;
      v362.fields.y = v262;
      v362.fields.z = v260;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v362,
        *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
    }
    else
    {
      v270 = (float *)((char *)v267 + 12 * v269);
      verts->fields._size = v269 + 1;
      v270[8] = v226;
      v270[9] = v262;
      v270[10] = v260;
    }
    v363.fields.x = v230;
    v363.fields.y = v229;
    v271 = this->fields.uvs;
    v363.fields.z = v227;
    v330 = Custom2dSplineMesh__GetUV_48562484(this, v363, (const MethodInfo *)isTail);
    if ( !v271 )
      goto LABEL_374;
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_374;
    v274 = v271->fields._size;
    if ( (unsigned int)v274 >= LODWORD(v272->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v271,
        v330,
        *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    }
    else
    {
      v271->fields._size = v274 + 1;
      v272->m_Items[v274] = v330;
    }
    v342.fields.x = v226;
    v342.fields.y = v262;
    v113 = this->fields.uvs;
    v342.fields.z = v260;
    v115 = this;
    goto LABEL_342;
  }
LABEL_347:
  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
  if ( !verts )
    goto LABEL_374;
  v278 = verts->fields._items;
  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
  v279 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v278 )
    goto LABEL_374;
  v280 = verts->fields._size;
  if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v280 + 1;
    *((_DWORD *)&v278->m_Items[0].fields.x + v280) = isTail;
  }
  v281 = verts->fields._items;
  v282 = this->fields.vtxIdx;
  v283 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v281 )
    goto LABEL_374;
  v284 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v282 + 2);
  if ( (unsigned int)v284 >= LODWORD(v281->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v284 + 1;
    *((_DWORD *)&v281->m_Items[0].fields.x + v284) = isTail;
  }
  v285 = verts->fields._items;
  v286 = this->fields.vtxIdx;
  v287 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v285 )
    goto LABEL_374;
  v288 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v286 + 1);
  if ( (unsigned int)v288 >= LODWORD(v285->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v287[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v288 + 1;
    *((_DWORD *)&v285->m_Items[0].fields.x + v288) = isTail;
  }
  v289 = verts->fields._items;
  v290 = this->fields.vtxIdx;
  v291 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v289 )
    goto LABEL_374;
  v292 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v290 + 2);
  if ( (unsigned int)v292 >= LODWORD(v289->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v291[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v292 + 1;
    *((_DWORD *)&v289->m_Items[0].fields.x + v292) = isTail;
  }
  v293 = verts->fields._items;
  v294 = this->fields.vtxIdx;
  v295 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v293 )
    goto LABEL_374;
  v296 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v294 + 3);
  if ( (unsigned int)v296 >= LODWORD(v293->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v295[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v296 + 1;
    *((_DWORD *)&v293->m_Items[0].fields.x + v296) = isTail;
  }
  v297 = verts->fields._items;
  v298 = this->fields.vtxIdx;
  v299 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v297 )
    goto LABEL_374;
  v300 = verts->fields._size;
  v301 = v298 + 1;
  if ( (unsigned int)v300 >= LODWORD(v297->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v301,
      *(const MethodInfo_4467270 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
  }
  else
  {
    verts->fields._size = v300 + 1;
    *((_DWORD *)&v297->m_Items[0].fields.x + v300) = v301;
  }
  v259 = this->fields.vtxIdx + 4;
LABEL_373:
  this->fields.vtxIdx = v259;
}


int32_t Custom2dSplineMesh__AddCurve(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array **p_points; // x20
  System_Collections_Generic_IEnumerable_T__o *points; // x21
  System_Collections_Generic_List_Vector3__o *v7; // x23
  struct BezierControlPointMode_array **p_modes; // x21
  System_Collections_Generic_IEnumerable_T__o *modes; // x22
  System_Collections_Generic_List_T__o *v10; // x24
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x27
  MissionNaviTransitionBoardItem_o *p_curveWeight; // x29
  System_Collections_Generic_List_float__o *v13; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct UnityEngine_Vector3_array *v17; // x8
  unsigned int max_length; // w10
  unsigned int v19; // w28
  __int64 v20; // x22
  int32_t v21; // w26
  UnityEngine_Transform_o *v22; // x27
  const MethodInfo *v23; // x2
  struct UnityEngine_Vector3_array *v24; // x8
  unsigned int v25; // w9
  UnityEngine_Transform_o *v26; // x29
  float v27; // s8
  float v28; // s9
  float v29; // s10
  float v30; // s0
  float x; // s11
  float y; // s12
  float z; // s9
  struct UnityEngine_Vector3_array *v34; // x8
  il2cpp_array_size_t v35; // x26
  float *v36; // x9
  UnityEngine_Vector3_o *m_Items; // x8
  float *p_x; // x11
  float *v39; // x10
  struct UnityEngine_Vector3_array *items; // x8
  float v41; // s8
  float v42; // s9
  float v43; // s10
  float v44; // s11
  float v45; // s12
  float v46; // s13
  float v47; // s0
  float v48; // s1
  float v49; // s2
  _QWORD *v50; // x9
  int32_t size; // w10
  struct UnityEngine_Vector3_array *v54; // x8
  float *v55; // x9
  struct UnityEngine_Vector3_array *v56; // x8
  float v57; // s0
  float v58; // s1
  float v59; // s2
  _QWORD *v60; // x9
  int32_t v61; // w10
  struct UnityEngine_Vector3_array *v64; // x8
  _QWORD *v65; // x9
  int32_t v66; // w10
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct System_Single_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v76; // x8
  unsigned int v77; // w9
  float *v78; // x9
  float *v79; // x8
  float v80; // s10
  float v81; // s15
  float v82; // s8
  float v83; // s13
  float v84; // s14
  struct UnityEngine_Vector3_array *v85; // x8
  unsigned int v86; // w9
  float *v87; // x9
  float *v88; // x8
  float v89; // s9
  float v90; // s11
  float v91; // s10
  float v92; // s12
  float v93; // s14
  float v94; // s13
  unsigned int klass; // w8
  float v96; // s5
  float v97; // s0
  float v98; // s2
  float v99; // s1
  float v100; // s0
  float v101; // s3
  float v102; // s4
  UnityEngine_Vector3_array *v103; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  System_Int32Enum_array *v110; // x0
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  System_Single_array *v117; // x0
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  const MethodInfo *v124; // x2
  float v126; // [xsp+38h] [xbp-D8h]
  float v127; // [xsp+3Ch] [xbp-D4h]
  float v128; // [xsp+40h] [xbp-D0h]
  float v129; // [xsp+44h] [xbp-CCh]
  float v130; // [xsp+48h] [xbp-C8h]
  float v131; // [xsp+4Ch] [xbp-C4h]
  int v132; // [xsp+50h] [xbp-C0h]
  float v133; // [xsp+58h] [xbp-B8h]
  int32_t indexa; // [xsp+68h] [xbp-A8h]
  UnityEngine_Vector3_o Point_48546060; // 0:kr00_12.12
  UnityEngine_Vector3_o v136; // 0:kr20_12.12
  UnityEngine_Vector3_o position; // 0:kr34_12.12
  UnityEngine_Vector3_o v138; // 0:kr40_12.12
  UnityEngine_Vector3_o v139; // 0:kr54_12.12
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FirstDerivative_48546328; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5970267 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__InsertRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__Insert__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor___91664480);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3___ctor___91671264);
    sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_5970267 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (System_Collections_Generic_List_Vector3__o *)sub_2213CCC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_72232476(
    v7,
    points,
    (const MethodInfo_44E2E1C *)Method_System_Collections_Generic_List_Vector3___ctor___91671264);
  p_modes = &this->fields.modes;
  modes = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  v10 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_71734068(
    v10,
    modes,
    (const MethodInfo_4469334 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  p_curveWeight = (MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v13 = (System_Collections_Generic_List_float__o *)sub_2213CCC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_72016796(
    v13,
    curveWeight,
    (const MethodInfo_44AE39C *)Method_System_Collections_Generic_List_float___ctor___91664480);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !*p_modes )
      goto LABEL_79;
    if ( (index + 1) / 3 < LODWORD((*p_modes)->max_length) - 1 )
    {
      transform = (UnityEngine_Transform_o *)sub_2213B20(UnityEngine_Vector3___TypeInfo, 3);
      v17 = *p_points;
      if ( !*p_points )
        goto LABEL_79;
      max_length = v17->max_length;
      v132 = (index + 1) / 3;
      v19 = 3 * v132;
      if ( 3 * v132 < max_length )
      {
        v20 = (int)v19 + 1LL;
        if ( (unsigned int)v20 < max_length && v19 + 2 < max_length )
        {
          v21 = v19 + 3;
          if ( v19 + 3 < max_length )
          {
            v22 = transform;
            indexa = v19 + 2;
            *(_QWORD *)&v138.fields.x = transform;
            LODWORD(v138.fields.z) = v15;
            Point_48546060 = Bezier__GetPoint_48546060(
                               v17->m_Items[3 * v132],
                               v17->m_Items[v20],
                               v17->m_Items[v19 + 2],
                               v138,
                               COERCE_FLOAT(*(_QWORD *)&v17->m_Items[v21].fields.x),
                               v16);
            if ( !v22 )
              goto LABEL_79;
            if ( ((__int64)v22[1].klass & 0xFFFFFFFE) != 0 )
            {
              *(UnityEngine_Vector3_o *)((char *)&v22[1].fields.m_CachedPtr + 4) = Point_48546060;
              transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              v24 = this->fields.points;
              if ( !v24 )
                goto LABEL_79;
              v25 = v24->max_length;
              if ( v19 < v25 && (unsigned int)v20 < v25 && indexa < v25 && v21 < v25 )
              {
                v26 = transform;
                if ( !transform )
                  goto LABEL_79;
                *(_QWORD *)&v139.fields.x = transform;
                LODWORD(v139.fields.z) = v15;
                FirstDerivative_48546328 = Bezier__GetFirstDerivative_48546328(
                                             v24->m_Items[3 * v132],
                                             v24->m_Items[v20],
                                             v24->m_Items[indexa],
                                             v139,
                                             COERCE_FLOAT(*(_QWORD *)&v24->m_Items[v21].fields.x),
                                             v23);
                v136 = UnityEngine_Transform__TransformPoint(v26, FirstDerivative_48546328, 0);
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                if ( !transform )
                  goto LABEL_79;
                position = UnityEngine_Transform__get_position(transform, 0);
                if ( !byte_5969AE3 )
                {
                  sub_2213A60(&System_Math_TypeInfo);
                  byte_5969AE3 = 1;
                }
                v27 = v136.fields.x - position.fields.x;
                v28 = v136.fields.y - position.fields.y;
                v29 = v136.fields.z - position.fields.z;
                transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
                v30 = sqrtf((float)(v29 * v29) + (float)((float)(v27 * v27) + (float)(v28 * v28)));
                if ( v30 <= 0.00001 )
                {
                  if ( !byte_5969AE0 )
                  {
                    transform = (UnityEngine_Transform_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
                    byte_5969AE0 = 1;
                  }
                  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                  x = static_fields->zeroVector.fields.x;
                  y = static_fields->zeroVector.fields.y;
                  z = static_fields->zeroVector.fields.z;
                }
                else
                {
                  x = v27 / v30;
                  y = v28 / v30;
                  z = v29 / v30;
                }
                p_curveWeight = (MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight;
                v76 = *p_points;
                if ( !*p_points )
                  goto LABEL_79;
                v77 = v76->max_length;
                if ( v19 < v77 && (unsigned int)v20 < v77 )
                {
                  v78 = (float *)((char *)v76 + 36 * v132);
                  v79 = (float *)((char *)v76 + 12 * v20);
                  v81 = v78[8];
                  v80 = v78[9];
                  v82 = v78[10];
                  v83 = v79[8];
                  v84 = v79[10];
                  v133 = v79[9];
                  if ( !byte_5969ADE )
                  {
                    sub_2213A60(&System_Math_TypeInfo);
                    byte_5969ADE = 1;
                  }
                  transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
                  v85 = *p_points;
                  if ( !*p_points )
                    goto LABEL_79;
                  v86 = v85->max_length;
                  if ( indexa < v86 )
                  {
                    v126 = v84;
                    v127 = v83;
                    v128 = v80;
                    v129 = x;
                    v130 = y;
                    v131 = z;
                    if ( v21 < v86 )
                    {
                      v87 = (float *)((char *)v85 + 12 * indexa);
                      v88 = (float *)((char *)v85 + 12 * v21);
                      v90 = v87[8];
                      v89 = v87[9];
                      v91 = v87[10];
                      v93 = v88[8];
                      v92 = v88[9];
                      v94 = v88[10];
                      if ( !byte_5969ADE )
                      {
                        sub_2213A60(&System_Math_TypeInfo);
                        byte_5969ADE = 1;
                      }
                      transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v15);
                      klass = (unsigned int)v22[1].klass;
                      if ( klass > 1 )
                      {
                        v96 = *((float *)&v22[2].klass + 1);
                        v97 = (float)(sqrtf(
                                        (float)((float)(v82 - v126) * (float)(v82 - v126))
                                      + (float)((float)((float)(v81 - v127) * (float)(v81 - v127))
                                              + (float)((float)(v128 - v133) * (float)(v128 - v133))))
                                    + sqrtf(
                                        (float)((float)(v91 - v94) * (float)(v91 - v94))
                                      + (float)((float)((float)(v90 - v93) * (float)(v90 - v93))
                                              + (float)((float)(v89 - v92) * (float)(v89 - v92)))))
                            * 0.5;
                        v98 = v129 * v97;
                        v99 = v130 * v97;
                        v100 = v131 * v97;
                        v101 = *((float *)&v22[1].fields.m_CachedPtr + 1);
                        v102 = *(float *)&v22[2].klass;
                        *(float *)&v22[1].monitor = v101 - v98;
                        *((float *)&v22[1].monitor + 1) = v102 - v99;
                        *(float *)&v22[1].fields.m_CachedPtr = v96 - v100;
                        if ( klass != 2 )
                        {
                          *(float *)&v22[2].monitor = v98 + v101;
                          *((float *)&v22[2].monitor + 1) = v99 + v102;
                          *(float *)&v22[2].fields.m_CachedPtr = v100 + v96;
                          if ( v7 )
                          {
                            System_Collections_Generic_List_Vector3___InsertRange(
                              v7,
                              indexa,
                              (System_Collections_Generic_IEnumerable_T__o *)v22,
                              (const MethodInfo_44E460C *)Method_System_Collections_Generic_List_Vector3__InsertRange__);
                            if ( v10 )
                            {
                              System_Collections_Generic_List_Int32Enum___Insert(
                                v10,
                                v132 + 1,
                                0,
                                (const MethodInfo_446A7F4 *)Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
                              if ( v13 )
                              {
                                System_Collections_Generic_List_float___Insert(
                                  v13,
                                  v132 + 1,
                                  1.0,
                                  (const MethodInfo_44AF860 *)Method_System_Collections_Generic_List_float__Insert__);
                                goto LABEL_77;
                              }
                            }
                          }
LABEL_79:
                          sub_2213CDC(transform, v15);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_80:
      sub_2213CE4(transform);
    }
  }
  v34 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  v35 = v34->max_length;
  if ( (unsigned int)v35 < 4 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_79;
  v36 = (float *)((char *)v34 + 12 * (int)(((v35 << 32) - 0x100000000LL) >> 32));
  m_Items = v34->m_Items;
  p_x = &m_Items[(int)(((v35 << 32) - 0x400000000LL) >> 32)].fields.x;
  v39 = &m_Items[(int)(((v35 << 32) - 0x300000000LL) >> 32)].fields.x;
  items = v7->fields._items;
  v41 = v36[8];
  v42 = v36[9];
  v43 = v36[10];
  v44 = *p_x;
  v45 = p_x[1];
  v46 = p_x[2];
  v47 = *v39;
  v48 = v39[1];
  v49 = v39[2];
  v50 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_79;
  size = v7->fields._size;
  v140.fields.x = v41 + (float)(v47 - v44);
  v140.fields.y = v42 + (float)(v48 - v45);
  v140.fields.z = v43 + (float)(v49 - v46);
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v140,
      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size] = v140;
  }
  v54 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  if ( (unsigned int)(v35 - 2) >= LODWORD(v54->max_length) )
    goto LABEL_80;
  v55 = (float *)((char *)v54 + 12 * (int)v35 - 24);
  v56 = v7->fields._items;
  v57 = v55[8];
  v58 = v55[9];
  v59 = v55[10];
  v60 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v56 )
    goto LABEL_79;
  v61 = v7->fields._size;
  v141.fields.x = v41 + (float)(v57 - v44);
  v141.fields.y = v42 + (float)(v58 - v45);
  v141.fields.z = v43 + (float)(v59 - v46);
  if ( (unsigned int)v61 >= LODWORD(v56->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v141,
      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v61 + 1;
    v56->m_Items[v61] = v141;
  }
  v64 = v7->fields._items;
  v65 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v64 )
    goto LABEL_79;
  v66 = v7->fields._size;
  v142.fields.x = v41 + (float)(v41 - v44);
  v142.fields.y = v42 + (float)(v42 - v45);
  v142.fields.z = v43 + (float)(v43 - v46);
  if ( (unsigned int)v66 >= LODWORD(v64->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v142,
      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v66 + 1;
    v64->m_Items[v66] = v142;
  }
  if ( !v10 )
    goto LABEL_79;
  v69 = v10->fields._items;
  v70 = Method_System_Collections_Generic_List_BezierControlPointMode__Add__;
  ++v10->fields._version;
  if ( !v69 )
    goto LABEL_79;
  v71 = v10->fields._size;
  if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_4469A88 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v71 + 1;
    *((_DWORD *)v69->m_Items + v71) = 0;
  }
  if ( !v13 )
    goto LABEL_79;
  v72 = v13->fields._items;
  v73 = Method_System_Collections_Generic_List_float__Add__;
  ++v13->fields._version;
  if ( !v72 )
    goto LABEL_79;
  v74 = v13->fields._size;
  if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
  {
    System_Collections_Generic_List_float___AddWithResize(
      v13,
      1.0,
      *(const MethodInfo_44AEAF4 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v74 + 1;
    v72->m_Items[v74] = 1.0;
  }
  v21 = v35 + 2;
LABEL_77:
  v103 = System_Collections_Generic_List_Vector3___ToArray(
           v7,
           (const MethodInfo_44E512C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v103;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.points,
    (int32_t)v103,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v110 = System_Collections_Generic_List_Int32Enum___ToArray(
           v10,
           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  *p_modes = (struct BezierControlPointMode_array *)v110;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.modes,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  v117 = System_Collections_Generic_List_float___ToArray(
           v13,
           (const MethodInfo_44B0570 *)Method_System_Collections_Generic_List_float__ToArray__);
  p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v117;
  sub_2213A04(p_curveWeight, (int32_t)v117, v118, v119, v120, v121, v122, v123);
  if ( !*p_points )
    goto LABEL_79;
  Custom2dSplineMesh__EnforceMode(this, LODWORD((*p_points)->max_length) - 4, v124);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__ChangeWeight(Custom2dSplineMesh_o *this, int32_t index, float value, const MethodInfo *method)
{
  struct System_Single_array *curveWeight; // x8
  int v5; // w9

  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_2213CDC(this, *(_QWORD *)&index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(curveWeight->max_length) )
    sub_2213CE4(this);
  curveWeight->m_Items[v5] = value;
  Custom2dSplineMesh__EnforceMode(this, index, method);
}


void Custom2dSplineMesh__CreateMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_597026D & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_597026D = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.meshFilter,
      (int32_t)Component_object,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    Custom2dSplineMesh__SetList(this, v10);
    Custom2dSplineMesh__GenMesh(this, v11);
  }
}


void Custom2dSplineMesh__DeletePoint(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *points; // x20
  struct UnityEngine_Vector3_array **p_points; // x21
  unsigned int v7; // w23
  System_Collections_Generic_List_Vector3__o *v8; // x24
  struct System_Single_array **p_curveWeight; // x20
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x26
  System_Collections_Generic_List_float__o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  struct BezierControlPointMode_array *modes; // x8
  MissionNaviTransitionBoardItem_o *p_modes; // x19
  System_Collections_Generic_IEnumerable_T__o *v16; // t1
  System_Collections_Generic_List_T__o *v17; // x25
  UnityEngine_Vector3_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Int32Enum_array *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Single_array *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5970268 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__RemoveRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor___91664480);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3___ctor___91671264);
    sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_5970268 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (index + 1) / 3;
  v8 = (System_Collections_Generic_List_Vector3__o *)sub_2213CCC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_72232476(
    v8,
    points,
    (const MethodInfo_44E2E1C *)Method_System_Collections_Generic_List_Vector3___ctor___91671264);
  p_curveWeight = &this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v11 = (System_Collections_Generic_List_float__o *)sub_2213CCC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_72016796(
    v11,
    curveWeight,
    (const MethodInfo_44AE39C *)Method_System_Collections_Generic_List_float___ctor___91664480);
  if ( (unsigned int)(index + 3) > 4 )
  {
    modes = this->fields.modes;
    if ( !modes )
      goto LABEL_18;
    if ( v7 == LODWORD(modes->max_length) - 1 )
    {
      if ( *p_points )
      {
        if ( v8 )
        {
          System_Collections_Generic_List_Vector3___RemoveRange(
            v8,
            LODWORD((*p_points)->max_length) - 3,
            3,
            (const MethodInfo_44E4E58 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
          if ( *p_curveWeight )
          {
            if ( v11 )
            {
              LODWORD(v13) = LODWORD((*p_curveWeight)->max_length) - 1;
              goto LABEL_16;
            }
          }
        }
      }
    }
    else if ( v8 )
    {
      System_Collections_Generic_List_Vector3___RemoveRange(
        v8,
        3 * v7 - 1,
        3,
        (const MethodInfo_44E4E58 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
      v13 = v7;
      if ( v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_2213CDC(v12, v13);
  }
  if ( !v8 )
    goto LABEL_18;
  System_Collections_Generic_List_Vector3___RemoveRange(
    v8,
    0,
    3,
    (const MethodInfo_44E4E58 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
LABEL_16:
  System_Collections_Generic_List_float___RemoveAt(
    v11,
    v13,
    (const MethodInfo_44B0234 *)Method_System_Collections_Generic_List_float__RemoveAt__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  p_modes = (MissionNaviTransitionBoardItem_o *)&this->fields.modes;
  v17 = (System_Collections_Generic_List_T__o *)sub_2213CCC(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_71734068(
    v17,
    v16,
    (const MethodInfo_4469334 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    v17,
    v7,
    (const MethodInfo_446B1CC *)Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
  v18 = System_Collections_Generic_List_Vector3___ToArray(
          v8,
          (const MethodInfo_44E512C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_points, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = System_Collections_Generic_List_Int32Enum___ToArray(
          v17,
          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  p_modes->klass = (MissionNaviTransitionBoardItem_c *)v25;
  sub_2213A04(p_modes, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = System_Collections_Generic_List_float___ToArray(
          v11,
          (const MethodInfo_44B0570 *)Method_System_Collections_Generic_List_float__ToArray__);
  *p_curveWeight = v32;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_curveWeight, (int32_t)v32, v33, v34, v35, v36, v37, v38);
}


// attributes: thunk
void Custom2dSplineMesh__DrawOnUI(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Custom2dSplineMesh__CreateMesh(this, method);
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__EnforceMode(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v4; // w12
  unsigned int max_length; // w9
  int v6; // w10
  unsigned int v7; // w11
  int32_t v8; // w9
  Custom2dSplineMesh_o *v11; // x19
  __int64 v12; // x10
  struct UnityEngine_Vector3_array *points; // x8
  il2cpp_array_size_t v14; // x13
  int v15; // w11
  int v16; // w20
  float32x2_t *v17; // x10
  float32x2_t *v18; // x11
  float32x2_t v19; // d9
  float v20; // s8
  float32x2_t v21; // d11
  float v22; // s10
  int32x2_t v23; // d0
  float z; // s10
  float32x2_t v25; // d11
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v27; // x8
  float32x2_t *v28; // x8
  float32x2_t v29; // d12
  float v30; // s13
  float32x2_t v31; // d0
  float32x2_t *v32; // x8

  modes = this->fields.modes;
  if ( !modes )
    goto LABEL_50;
  v4 = index + 1;
  max_length = modes->max_length;
  v6 = (index + 1) / 3;
  if ( v6 >= max_length )
    goto LABEL_49;
  v7 = max_length - 1;
  v8 = modes->m_Items[v6];
  if ( v6 != v7 && (unsigned int)(index + 3) >= 5 && v8 != 0 )
  {
    v11 = this;
    v12 = 3LL * v6;
    if ( (int)v12 >= index )
    {
      if ( v4 <= 2 )
      {
        points = this->fields.points;
        if ( !points )
          goto LABEL_50;
        v15 = LODWORD(points->max_length) - 2;
      }
      else
      {
        points = this->fields.points;
        if ( !points )
          goto LABEL_50;
        v15 = v12 - 1;
      }
      v14 = points->max_length;
      if ( (int)v12 + 1 < (int)v14 )
        v16 = v12 + 1;
      else
        v16 = 1;
    }
    else
    {
      points = this->fields.points;
      if ( !points )
        goto LABEL_50;
      v14 = points->max_length;
      if ( (int)v12 + 1 < (int)v14 )
        v15 = v12 + 1;
      else
        v15 = 1;
      if ( v4 <= 2 )
        v16 = v14 - 2;
      else
        v16 = v12 - 1;
    }
    if ( (unsigned int)v12 >= (unsigned int)v14 || v15 >= (unsigned int)v14 )
      goto LABEL_49;
    v17 = (float32x2_t *)((char *)points + 12 * v12);
    v18 = (float32x2_t *)((char *)points + 12 * v15);
    v19.n64_u64[0] = v17[4].n64_u64[0];
    v20 = v17[5].n64_f32[0];
    v21.n64_u64[0] = vsub_f32(v19, v18[4]).n64_u64[0];
    v22 = v20 - v18[5].n64_f32[0];
    if ( v8 != 1 )
    {
LABEL_46:
      if ( (unsigned int)v16 < LODWORD(points->max_length) )
      {
        v32 = (float32x2_t *)((char *)points + 12 * v16);
        v32[4].n64_u64[0] = vadd_f32(v19, v21).n64_u64[0];
        v32[5].n64_f32[0] = v20 + v22;
        return;
      }
LABEL_49:
      sub_2213CE4(this);
    }
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&index);
    v23.n64_u64[0] = vmul_f32(v21, v21).n64_u64[0];
    v23.n64_f32[0] = sqrtf((float)(v22 * v22) + vaddv_f32(v23));
    if ( v23.n64_f32[0] <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        this = (Custom2dSplineMesh_o *)sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      v25.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
      z = static_fields->zeroVector.fields.z;
    }
    else
    {
      z = v22 / v23.n64_f32[0];
      v25.n64_u64[0] = vdiv_f32(v21, vdup_lane_s32(v23, 0)).n64_u64[0];
    }
    v27 = v11->fields.points;
    if ( v27 )
    {
      if ( (unsigned int)v16 >= LODWORD(v27->max_length) )
        goto LABEL_49;
      v28 = (float32x2_t *)((char *)v27 + 12 * v16);
      v29.n64_u64[0] = v28[4].n64_u64[0];
      v30 = v28[5].n64_f32[0];
      if ( !byte_5969ADE )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969ADE = 1;
      }
      this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&index);
      points = v11->fields.points;
      if ( points )
      {
        v31.n64_u64[0] = vsub_f32(v19, v29).n64_u64[0];
        v31.n64_f32[0] = sqrtf((float)((float)(v20 - v30) * (float)(v20 - v30)) + vaddv_f32(vmul_f32(v31, v31)));
        v21.n64_u64[0] = vmul_n_f32(v25, v31.n64_f32[0]).n64_u64[0];
        v22 = z * v31.n64_f32[0];
        goto LABEL_46;
      }
    }
LABEL_50:
    sub_2213CDC(this, *(_QWORD *)&index);
  }
}


void Custom2dSplineMesh__GenMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *drawMesh; // x21
  struct UnityEngine_Mesh_o **p_drawMesh; // x23
  unsigned __int64 vtxIdx; // x1
  UnityEngine_Mesh_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  UnityEngine_Object_o *trianges; // x0
  __int64 v14; // x1
  struct UnityEngine_MeshFilter_o **p_meshFilter; // x21
  UnityEngine_Object_o *meshFilter; // x22
  Il2CppObject *Component_object; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_List_Vector3__o *v24; // x22
  struct System_Collections_Generic_List_Vector3__o **p_verts; // x21
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_int__o *v32; // x23
  struct System_Collections_Generic_List_int__o **p_trianges; // x22
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_Vector2__o *v40; // x24
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct UnityEngine_Vector3_array *points; // x8
  int max_length; // s0
  float complexity; // s1
  float v50; // s0
  float v51; // s15
  const MethodInfo *v52; // x1
  float x; // s9
  const MethodInfo *v54; // x1
  const MethodInfo *v55; // x1
  const MethodInfo *v56; // x1
  float v57; // s8
  float v58; // s13
  float v59; // s14
  float v60; // s0
  float v61; // s1
  float z; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float UVslice; // s0
  _BOOL4 DrawCap; // w8
  const MethodInfo *v66; // x2
  __int64 v67; // x1
  const MethodInfo *v68; // x2
  float width; // s15
  float v70; // s0
  float PathRate; // s0
  float v74; // s11
  float v75; // s12
  float v76; // s13
  float v77; // s14
  float v78; // s8
  float v79; // s10
  bool isJumpcut; // w26
  float v81; // s0
  float v82; // s1
  float v83; // s2
  float v84; // s3
  float v85; // s9
  float v86; // s0
  struct UnityEngine_Vector3_StaticFields *v87; // x8
  float v88; // s15
  float v89; // s11
  int32_t flattenAxis; // w8
  float v91; // s3
  float v92; // s8
  float v93; // s12
  float v94; // s13
  float v95; // s14
  float v96; // s10
  intptr_t m_CachedPtr; // x8
  _QWORD *v98; // x9
  unsigned int klass; // w10
  float *v100; // x8
  intptr_t v101; // x8
  _QWORD *v102; // x9
  unsigned int v103; // w10
  float *v104; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x27
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_Vector2__o *v109; // x27
  struct UnityEngine_Vector2_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  const MethodInfo *v113; // x1
  float v114; // s0
  float v115; // s10
  Custom2dSplineMesh_c *v116; // x0
  float v117; // s9
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  float v120; // s0
  float v121; // s14
  float v122; // s10
  int32_t v123; // w8
  float v124; // s13
  float v125; // s8
  float v126; // s1
  float v127; // s9
  intptr_t v128; // x8
  _QWORD *v129; // x9
  __int64 klass_low; // x10
  intptr_t v131; // x8
  int32_t v132; // w10
  _QWORD *v133; // x9
  __int64 v134; // x11
  intptr_t v135; // x8
  int32_t v136; // w10
  _QWORD *v137; // x9
  __int64 v138; // x11
  intptr_t v139; // x8
  int32_t v140; // w10
  _QWORD *v141; // x9
  __int64 v142; // x11
  intptr_t v143; // x8
  int32_t v144; // w10
  _QWORD *v145; // x9
  __int64 v146; // x11
  intptr_t v147; // x8
  int32_t v148; // w10
  _QWORD *v149; // x9
  __int64 v150; // x11
  const MethodInfo *v151; // x1
  float v152; // s0
  intptr_t v153; // x8
  _QWORD *v154; // x9
  unsigned int v155; // w10
  float *v156; // x8
  intptr_t v157; // x8
  _QWORD *v158; // x9
  unsigned int v159; // w10
  float v160; // s15
  float *v161; // x8
  struct System_Collections_Generic_List_Vector2__o *v162; // x26
  float v163; // s9
  float v164; // s0
  float v165; // s8
  struct UnityEngine_Vector2_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  struct System_Collections_Generic_List_Vector2__o *v169; // x26
  UnityEngine_Vector2_o v170; // kr110_8
  struct UnityEngine_Vector2_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  float *v174; // x8
  intptr_t v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  intptr_t v178; // x8
  int32_t v179; // w10
  _QWORD *v180; // x9
  __int64 v181; // x11
  intptr_t v182; // x8
  int32_t v183; // w10
  _QWORD *v184; // x9
  __int64 v185; // x11
  intptr_t v186; // x8
  int32_t v187; // w10
  _QWORD *v188; // x9
  __int64 v189; // x11
  intptr_t v190; // x8
  int32_t v191; // w10
  _QWORD *v192; // x9
  __int64 v193; // x11
  intptr_t v194; // x8
  int32_t v195; // w10
  _QWORD *v196; // x9
  __int64 v197; // x11
  const MethodInfo *v198; // x1
  __int64 v199; // x1
  const MethodInfo *v200; // x2
  float v201; // s0
  float v204; // s8
  const MethodInfo *v205; // x1
  const MethodInfo *v206; // x1
  float v207; // s0
  float v208; // s14
  float v209; // s15
  struct UnityEngine_Vector3_StaticFields *v210; // x8
  const MethodInfo *v211; // x2
  float v212; // s12
  float v213; // s14
  int32_t v214; // w8
  float v215; // s15
  float v216; // s9
  float v217; // s10
  float v218; // s11
  float v219; // s0
  intptr_t v220; // x8
  _QWORD *v221; // x9
  unsigned int v222; // w10
  float *v223; // x8
  intptr_t v224; // x8
  _QWORD *v225; // x9
  unsigned int v226; // w10
  float *v227; // x8
  struct System_Collections_Generic_List_Vector2__o *v228; // x26
  struct UnityEngine_Vector2_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  struct System_Collections_Generic_List_Vector2__o *v232; // x26
  struct UnityEngine_Vector2_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  const MethodInfo *v236; // x1
  float v237; // s14
  int32_t v238; // w8
  float v239; // s11
  float v240; // s12
  float v241; // s13
  float v242; // s8
  float v243; // s9
  float v244; // s10
  float v245; // s1
  intptr_t v246; // x8
  _QWORD *v247; // x9
  unsigned int v248; // w10
  float *v249; // x8
  intptr_t v250; // x8
  _QWORD *v251; // x9
  unsigned int v252; // w10
  float *v253; // x8
  struct System_Collections_Generic_List_Vector2__o *v254; // x26
  float v255; // s11
  struct UnityEngine_Vector2_array *v256; // x8
  _QWORD *v257; // x9
  __int64 v258; // x10
  struct System_Collections_Generic_List_Vector2__o *v259; // x26
  UnityEngine_Vector2_o v260; // kr118_8
  struct UnityEngine_Vector2_array *v261; // x8
  _QWORD *v262; // x9
  __int64 v263; // x10
  float *v264; // x8
  intptr_t v265; // x8
  _QWORD *v266; // x9
  __int64 v267; // x10
  intptr_t v268; // x8
  int32_t v269; // w10
  _QWORD *v270; // x9
  __int64 v271; // x11
  intptr_t v272; // x8
  int32_t v273; // w10
  _QWORD *v274; // x9
  __int64 v275; // x11
  intptr_t v276; // x8
  int32_t v277; // w10
  _QWORD *v278; // x9
  __int64 v279; // x11
  intptr_t v280; // x8
  int32_t v281; // w10
  _QWORD *v282; // x9
  __int64 v283; // x11
  intptr_t v284; // x8
  int32_t v285; // w10
  _QWORD *v286; // x9
  __int64 v287; // x11
  const MethodInfo *v288; // x1
  float v289; // s11
  const MethodInfo *v290; // x1
  __int64 v291; // x1
  const MethodInfo *v292; // x2
  float v293; // s0
  UnityEngine_Mesh_o *v296; // x20
  UnityEngine_Mesh_o *v297; // x20
  UnityEngine_Mesh_o *v298; // x20
  struct System_Collections_Generic_List_Vector3__o *v299; // x9
  struct System_Collections_Generic_List_int__o *v300; // x8
  int v301; // w10
  struct System_Collections_Generic_List_Vector2__o *v302; // x9
  int v303; // w10
  int v304; // w8
  struct System_Collections_Generic_List_Vector2__o **p_uvs; // [xsp+28h] [xbp-118h]
  struct UnityEngine_Mesh_o **v306; // [xsp+30h] [xbp-110h]
  float v307; // [xsp+44h] [xbp-FCh]
  float v308; // [xsp+48h] [xbp-F8h]
  float UVrate; // [xsp+4Ch] [xbp-F4h]
  float v310; // [xsp+54h] [xbp-ECh]
  float pos; // [xsp+58h] [xbp-E8h]
  float item; // [xsp+5Ch] [xbp-E4h]
  float v313; // [xsp+60h] [xbp-E0h]
  float v314; // [xsp+68h] [xbp-D8h]
  float v315; // [xsp+6Ch] [xbp-D4h]
  float v316; // [xsp+6Ch] [xbp-D4h]
  float v317; // [xsp+70h] [xbp-D0h]
  float v318; // [xsp+74h] [xbp-CCh]
  float normalizedDir; // [xsp+84h] [xbp-BCh]
  float normalizedDir_4; // [xsp+88h] [xbp-B8h]
  float normalizedDir_8; // [xsp+8Ch] [xbp-B4h]
  float v322; // [xsp+90h] [xbp-B0h]
  float v323; // [xsp+94h] [xbp-ACh]
  float v324; // [xsp+94h] [xbp-ACh]
  float y; // [xsp+98h] [xbp-A8h]
  float jumps; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v328; // 0:kr14_12.12
  UnityEngine_Vector3_o v329; // 0:kr20_12.12
  UnityEngine_Vector3_o Direction; // 0:kr34_12.12
  UnityEngine_Vector3_o offset; // 0:kr40_12.12
  UnityEngine_Vector3_o v332; // 0:kr54_12.12
  UnityEngine_Vector3_o v333; // 0:kr60_12.12
  UnityEngine_Vector3_o v334; // 0:kr74_12.12
  UnityEngine_Vector3_o v335; // 0:kr80_12.12
  UnityEngine_Vector3_o v336; // 0:kr94_12.12
  UnityEngine_Vector3_o v337; // 0:krA0_12.12
  UnityEngine_Vector3_o v338; // 0:krB4_12.12
  UnityEngine_Vector3_o v339; // 0:krC0_12.12
  UnityEngine_Vector3_o v340; // 0:krD4_12.12
  UnityEngine_Vector3_o v341; // 0:krE0_12.12
  UnityEngine_Vector3_o v342; // 0:krF4_12.12
  UnityEngine_Vector3_o v343; // 0:kr100_12.12
  UnityEngine_Vector2_o UV_48562484; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v345; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v346; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v347; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v348; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v349; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v350; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v351; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v352; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v353; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v354; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v355; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v356; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v357; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v358; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v359; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v360; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v361; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v362; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v363; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v364; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v365; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v367; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o zeroVector; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v369; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v370; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v371; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_597026E & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    sub_2213A60(&Custom2dSplineMesh_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_2213A60(&UnityEngine_Mesh_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_12796/*"SPLINE MESH"*/);
    byte_597026E = 1;
  }
  jumps = 0.0;
  p_drawMesh = &this->fields.drawMesh;
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(drawMesh, 0, 0) )
  {
    v6 = (UnityEngine_Mesh_o *)sub_2213CCC(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v6, 0);
    *p_drawMesh = v6;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.drawMesh, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    trianges = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_330;
    UnityEngine_Object__set_name(trianges, (System_String_o *)StringLiteral_12796/*"SPLINE MESH"*/, 0);
  }
  else
  {
    trianges = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_330;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)trianges, 0);
  }
  p_meshFilter = &this->fields.meshFilter;
  meshFilter = (UnityEngine_Object_o *)this->fields.meshFilter;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  if ( UnityEngine_Object__op_Equality(meshFilter, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.meshFilter,
      (int32_t)Component_object,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  trianges = (UnityEngine_Object_o *)*p_meshFilter;
  if ( !*p_meshFilter )
    goto LABEL_330;
  v306 = &this->fields.drawMesh;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)trianges, this->fields.drawMesh, 0);
  v24 = (System_Collections_Generic_List_Vector3__o *)sub_2213CCC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v24,
    (const MethodInfo_44E2CE0 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.verts = v24;
  p_verts = &this->fields.verts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.verts, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.trianges = v32;
  p_trianges = &this->fields.trianges;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.trianges, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_List_Vector2__o *)sub_2213CCC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v40,
    (const MethodInfo_44E0464 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.uvs = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.uvs, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  points = this->fields.points;
  if ( !points )
    goto LABEL_330;
  max_length = points->max_length;
  complexity = this->fields.complexity;
  p_uvs = &this->fields.uvs;
  this->fields.vtxIdx = 0;
  jumps = 0.0;
  v50 = 1.0 / (float)(complexity * (float)max_length);
  if ( v50 <= 0.0 )
    v51 = 1.0;
  else
    v51 = v50;
  Point = Custom2dSplineMesh__GetPoint(this, 0.0, (const MethodInfo *)vtxIdx);
  v328 = Custom2dSplineMesh__GetPoint(this, v51, v52);
  x = v328.fields.x;
  v329 = Custom2dSplineMesh__GetPoint(this, this->fields.PathRate, v54);
  Direction = Custom2dSplineMesh__GetDirection(this, 0.0, v55);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  y = Point.fields.y;
  v57 = v328.fields.x - Point.fields.x;
  v58 = v328.fields.y - Point.fields.y;
  v59 = v328.fields.z - Point.fields.z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v56);
  v60 = sqrtf((float)(v59 * v59) + (float)((float)(v57 * v57) + (float)(v58 * v58)));
  if ( v60 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v317 = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
    normalizedDir = static_fields->zeroVector.fields.x;
  }
  else
  {
    normalizedDir = v57 / v60;
    v61 = v58 / v60;
    z = v59 / v60;
    v317 = v61;
  }
  v315 = z;
  UVslice = this->fields.UVslice;
  DrawCap = this->fields.DrawCap;
  this->fields.capVmin = UVslice + 0.0;
  this->fields.capVmax = 0.5 - UVslice;
  this->fields.lineVmin = UVslice + 0.0;
  this->fields.lineVmax = 1.0 - UVslice;
  if ( DrawCap )
  {
    this->fields.lineVmin = UVslice + 0.5;
    this->fields.lineVmax = 1.0 - UVslice;
  }
  offset = Custom2dSplineMesh__GetOffset(this, 0.0, v56);
  v314 = v51;
  if ( this->fields.DrawCap )
  {
    width = Custom2dSplineMesh__GetWidth(this, 0.0, (const MethodInfo *)vtxIdx);
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v67);
    v70 = sqrtf(
            (float)(Direction.fields.z * Direction.fields.z)
          + (float)((float)(Direction.fields.x * Direction.fields.x) + (float)(Direction.fields.y * Direction.fields.y)));
    if ( v70 <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      zeroVector.fields.x = Direction.fields.x / v70;
      zeroVector.fields.y = Direction.fields.y / v70;
      zeroVector.fields.z = Direction.fields.z / v70;
    }
    Custom2dSplineMesh__AddCap(this, Point, zeroVector, offset, width, 0, v68);
    v51 = v314;
  }
  PathRate = this->fields.PathRate;
  v74 = 0.0;
  v75 = v328.fields.y;
  v76 = v328.fields.z;
  v77 = Point.fields.x;
  v78 = Point.fields.z;
  if ( PathRate > 0.0 )
  {
    v79 = 0.0;
    do
    {
      isJumpcut = Custom2dSplineMesh__isJumpcut(this, v79, v51, &jumps, v66);
      if ( !isJumpcut && v79 != 0.0 && !this->fields.createVertsEveryStep )
      {
        v332 = Custom2dSplineMesh__GetDirection(this, v79, (const MethodInfo *)vtxIdx);
        if ( (float)((float)(v315 * v332.fields.z)
                   + (float)((float)(normalizedDir * v332.fields.x) + (float)(v317 * v332.fields.y))) >= this->fields.directionChange )
        {
LABEL_128:
          if ( !byte_5969ADE )
          {
            sub_2213A60(&System_Math_TypeInfo);
            byte_5969ADE = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
          v74 = v74
              + (float)((float)(sqrtf(
                                  (float)((float)(v78 - v76) * (float)(v78 - v76))
                                + (float)((float)((float)(y - v75) * (float)(y - v75))
                                        + (float)((float)(v77 - x) * (float)(v77 - x))))
                              / Custom2dSplineMesh__GetWidth(this, v79, (const MethodInfo *)vtxIdx))
                      * this->fields.UVrate);
          goto LABEL_246;
        }
      }
      if ( !byte_5969AE3 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE3 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v81 = x - v77;
      v318 = v75;
      normalizedDir_8 = x;
      v82 = v75 - y;
      v83 = v76 - v78;
      v84 = sqrtf((float)(v83 * v83) + (float)((float)(v82 * v82) + (float)(v81 * v81)));
      if ( v84 <= 0.00001 )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v85 = v74;
        v87 = UnityEngine_Vector3_TypeInfo->static_fields;
        v317 = v87->zeroVector.fields.y;
        v86 = v87->zeroVector.fields.z;
        normalizedDir = v87->zeroVector.fields.x;
      }
      else
      {
        v85 = v74;
        normalizedDir = v81 / v84;
        v317 = v82 / v84;
        v86 = v83 / v84;
      }
      v315 = v86;
      v333 = Custom2dSplineMesh__GetOffset(this, v79, (const MethodInfo *)vtxIdx);
      v88 = v77 + v333.fields.x;
      v89 = y + v333.fields.y;
      flattenAxis = this->fields.flattenAxis;
      normalizedDir_4 = v79;
      v322 = v76;
      v323 = v77;
      if ( flattenAxis == 2 )
      {
        v96 = v77 - v333.fields.x;
        v93 = v78;
        v92 = 0.0;
        v94 = 0.0;
        v95 = y - v333.fields.y;
      }
      else
      {
        v91 = v78;
        v92 = v78 + v333.fields.z;
        v93 = v91;
        v94 = v91 - v333.fields.z;
        if ( flattenAxis == 1 )
        {
          v96 = v77 - v333.fields.x;
          v89 = 0.0;
          v95 = 0.0;
        }
        else
        {
          v95 = y - v333.fields.y;
          if ( flattenAxis )
          {
            v96 = v323 - v333.fields.x;
          }
          else
          {
            v88 = 0.0;
            v96 = 0.0;
          }
        }
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      m_CachedPtr = trianges->fields.m_CachedPtr;
      v98 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_330;
      klass = (unsigned int)trianges[1].klass;
      if ( klass >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        v352.fields.x = v88;
        v352.fields.y = v89;
        v352.fields.z = v92;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v352,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v100 = (float *)(m_CachedPtr + 12LL * (int)klass);
        LODWORD(trianges[1].klass) = klass + 1;
        v100[8] = v88;
        v100[9] = v89;
        v100[10] = v92;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v101 = trianges->fields.m_CachedPtr;
      v102 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v101 )
        goto LABEL_330;
      v103 = (unsigned int)trianges[1].klass;
      if ( v103 >= *(_DWORD *)(v101 + 24) )
      {
        v353.fields.x = v96;
        v353.fields.y = v95;
        v353.fields.z = v94;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v353,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v104 = (float *)(v101 + 12LL * (int)v103);
        LODWORD(trianges[1].klass) = v103 + 1;
        v104[8] = v96;
        v104[9] = v95;
        v104[10] = v94;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v354.fields.x = v88;
        v354.fields.y = v89;
        v354.fields.z = v92;
        UV_48562484 = Custom2dSplineMesh__GetUV_48562484(this, v354, (const MethodInfo *)vtxIdx);
        v74 = v85;
        v51 = v314;
      }
      else
      {
        UV_48562484.fields.y = this->fields.lineVmin;
        v51 = v314;
        v74 = v85;
        UV_48562484.fields.x = v85;
      }
      v78 = v93;
      x = normalizedDir_8;
      if ( !uvs )
        goto LABEL_330;
      items = uvs->fields._items;
      v107 = Method_System_Collections_Generic_List_Vector2__Add__;
      v75 = v318;
      ++uvs->fields._version;
      if ( !items )
        goto LABEL_330;
      size = uvs->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          UV_48562484,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = size + 1;
        items->m_Items[size] = UV_48562484;
      }
      v109 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v355.fields.x = v96;
        v355.fields.y = v95;
        v355.fields.z = v94;
        v345 = Custom2dSplineMesh__GetUV_48562484(this, v355, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v345.fields.y = this->fields.lineVmax;
        v345.fields.x = v74;
      }
      v76 = v322;
      v77 = v323;
      v79 = normalizedDir_4;
      if ( !v109 )
        goto LABEL_330;
      v110 = v109->fields._items;
      v111 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v109->fields._version;
      if ( !v110 )
        goto LABEL_330;
      v112 = v109->fields._size;
      if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v109,
          v345,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
      }
      else
      {
        v109->fields._size = v112 + 1;
        v110->m_Items[v112] = v345;
      }
      if ( normalizedDir_4 == 0.0 )
      {
        if ( !isJumpcut )
          goto LABEL_128;
      }
      else
      {
        trianges = (UnityEngine_Object_o *)this->fields.trianges;
        if ( !trianges )
          goto LABEL_330;
        v128 = trianges->fields.m_CachedPtr;
        vtxIdx = (unsigned int)this->fields.vtxIdx;
        v129 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v128 )
          goto LABEL_330;
        klass_low = SLODWORD(trianges[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v128 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = klass_low + 1;
          *(_DWORD *)(v128 + 4 * klass_low + 32) = vtxIdx;
        }
        v131 = trianges->fields.m_CachedPtr;
        v132 = this->fields.vtxIdx;
        v133 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v131 )
          goto LABEL_330;
        v134 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v132 + 2);
        if ( (unsigned int)v134 >= *(_DWORD *)(v131 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v134 + 1;
          *(_DWORD *)(v131 + 4 * v134 + 32) = vtxIdx;
        }
        v135 = trianges->fields.m_CachedPtr;
        v136 = this->fields.vtxIdx;
        v137 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v135 )
          goto LABEL_330;
        v138 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v136 + 1);
        if ( (unsigned int)v138 >= *(_DWORD *)(v135 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v138 + 1;
          *(_DWORD *)(v135 + 4 * v138 + 32) = vtxIdx;
        }
        v139 = trianges->fields.m_CachedPtr;
        v140 = this->fields.vtxIdx;
        v141 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v139 )
          goto LABEL_330;
        v142 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v140 + 2);
        if ( (unsigned int)v142 >= *(_DWORD *)(v139 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v142 + 1;
          *(_DWORD *)(v139 + 4 * v142 + 32) = vtxIdx;
        }
        v143 = trianges->fields.m_CachedPtr;
        v144 = this->fields.vtxIdx;
        v145 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v143 )
          goto LABEL_330;
        v146 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v144 + 3);
        if ( (unsigned int)v146 >= *(_DWORD *)(v143 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v146 + 1;
          *(_DWORD *)(v143 + 4 * v146 + 32) = vtxIdx;
        }
        v147 = trianges->fields.m_CachedPtr;
        v148 = this->fields.vtxIdx;
        v149 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v147 )
          goto LABEL_330;
        v150 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v148 + 1);
        if ( (unsigned int)v150 >= *(_DWORD *)(v147 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4467270 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(trianges[1].klass) = v150 + 1;
          *(_DWORD *)(v147 + 4 * v150 + 32) = vtxIdx;
        }
        this->fields.vtxIdx += 2;
        if ( !isJumpcut )
          goto LABEL_128;
      }
      if ( !byte_5969ADE )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969ADE = 1;
      }
      pos = v78;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v114 = Custom2dSplineMesh__GetWidth(this, normalizedDir_4, (const MethodInfo *)vtxIdx);
      v115 = jumps;
      v116 = Custom2dSplineMesh_TypeInfo;
      v308 = v114;
      UVrate = this->fields.UVrate;
      if ( !*(&Custom2dSplineMesh_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Custom2dSplineMesh_TypeInfo, v113);
        v116 = Custom2dSplineMesh_TypeInfo;
      }
      v117 = v115 - v116->static_fields->JUMP_THRESH_HOLD;
      v334 = Custom2dSplineMesh__GetPoint(this, v115, v113);
      v307 = v117;
      v335 = Custom2dSplineMesh__GetOffset(this, v117, v118);
      v313 = v115;
      v120 = Custom2dSplineMesh__GetWidth(this, v115, v119);
      v121 = v334.fields.x + v335.fields.x;
      v122 = v334.fields.y + v335.fields.y;
      v123 = this->fields.flattenAxis;
      v310 = v120;
      if ( v123 == 2 )
      {
        v124 = 0.0;
        v125 = normalizedDir_8;
        v127 = v334.fields.x - v335.fields.x;
        v316 = v334.fields.y - v335.fields.y;
        v152 = 0.0;
      }
      else
      {
        v124 = v334.fields.z + v335.fields.z;
        if ( v123 == 1 )
        {
          v122 = 0.0;
          v125 = normalizedDir_8;
          v127 = v334.fields.x - v335.fields.x;
          item = v334.fields.z - v335.fields.z;
          v316 = 0.0;
          goto LABEL_138;
        }
        v125 = normalizedDir_8;
        if ( v123 )
        {
          v127 = v334.fields.x - v335.fields.x;
          v126 = v335.fields.y;
        }
        else
        {
          v126 = v335.fields.y;
          v121 = 0.0;
          v127 = 0.0;
        }
        v316 = v334.fields.y - v126;
        v152 = v334.fields.z - v335.fields.z;
      }
      item = v152;
LABEL_138:
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v153 = trianges->fields.m_CachedPtr;
      v154 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v153 )
        goto LABEL_330;
      v155 = (unsigned int)trianges[1].klass;
      if ( v155 >= *(_DWORD *)(v153 + 24) )
      {
        v356.fields.x = v121;
        v356.fields.y = v122;
        v356.fields.z = v124;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v356,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v156 = (float *)(v153 + 12LL * (int)v155);
        LODWORD(trianges[1].klass) = v155 + 1;
        v156[8] = v121;
        v156[9] = v122;
        v156[10] = v124;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v157 = trianges->fields.m_CachedPtr;
      v158 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v157 )
        goto LABEL_330;
      v159 = (unsigned int)trianges[1].klass;
      if ( v159 >= *(_DWORD *)(v157 + 24) )
      {
        v357.fields.x = v127;
        v357.fields.y = v316;
        v357.fields.z = item;
        v160 = v127;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v357,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
      }
      else
      {
        v160 = v127;
        v161 = (float *)(v157 + 12LL * (int)v159);
        LODWORD(trianges[1].klass) = v159 + 1;
        v161[8] = v127;
        v161[9] = v316;
        v161[10] = item;
      }
      v162 = this->fields.uvs;
      v163 = sqrtf(
               (float)((float)(pos - v322) * (float)(pos - v322))
             + (float)((float)((float)(y - v318) * (float)(y - v318))
                     + (float)((float)(v323 - v125) * (float)(v323 - v125))));
      v164 = (float)(v163 / v308) * UVrate;
      v165 = v74 + v164;
      if ( this->fields.StrictUVmode )
      {
        v358.fields.x = v121;
        v358.fields.y = v122;
        v358.fields.z = v124;
        v346 = Custom2dSplineMesh__GetUV_48562484(this, v358, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v346.fields.y = this->fields.lineVmin;
        v346.fields.x = v74 + v164;
      }
      if ( !v162 )
        goto LABEL_330;
      v166 = v162->fields._items;
      v167 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v162->fields._version;
      if ( !v166 )
        goto LABEL_330;
      v168 = v162->fields._size;
      if ( (unsigned int)v168 >= LODWORD(v166->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v162,
          v346,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
      }
      else
      {
        v162->fields._size = v168 + 1;
        v166->m_Items[v168] = v346;
      }
      v169 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v359.fields.x = v160;
        v359.fields.y = v316;
        v359.fields.z = item;
        v170 = Custom2dSplineMesh__GetUV_48562484(this, v359, (const MethodInfo *)vtxIdx);
        v347.fields.y = v170.fields.y;
        v165 = v170.fields.x;
        if ( !v169 )
          goto LABEL_330;
      }
      else
      {
        v347.fields.y = this->fields.lineVmax;
        if ( !v169 )
          goto LABEL_330;
      }
      v171 = v169->fields._items;
      v172 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v169->fields._version;
      if ( !v171 )
        goto LABEL_330;
      v173 = v169->fields._size;
      if ( (unsigned int)v173 >= LODWORD(v171->max_length) )
      {
        v347.fields.x = v165;
        System_Collections_Generic_List_Vector2___AddWithResize(
          v169,
          v347,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
      }
      else
      {
        v174 = (float *)(&v171->obj.klass + v173);
        v169->fields._size = v173 + 1;
        v174[8] = v165;
        v174[9] = v347.fields.y;
      }
      trianges = (UnityEngine_Object_o *)this->fields.trianges;
      if ( !trianges )
        goto LABEL_330;
      v175 = trianges->fields.m_CachedPtr;
      vtxIdx = (unsigned int)this->fields.vtxIdx;
      v176 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v175 )
        goto LABEL_330;
      v177 = SLODWORD(trianges[1].klass);
      if ( (unsigned int)v177 >= *(_DWORD *)(v175 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v177 + 1;
        *(_DWORD *)(v175 + 4 * v177 + 32) = vtxIdx;
      }
      v178 = trianges->fields.m_CachedPtr;
      v179 = this->fields.vtxIdx;
      v180 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v178 )
        goto LABEL_330;
      v181 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v179 + 2);
      if ( (unsigned int)v181 >= *(_DWORD *)(v178 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v181 + 1;
        *(_DWORD *)(v178 + 4 * v181 + 32) = vtxIdx;
      }
      v182 = trianges->fields.m_CachedPtr;
      v183 = this->fields.vtxIdx;
      v184 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v182 )
        goto LABEL_330;
      v185 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v183 + 1);
      if ( (unsigned int)v185 >= *(_DWORD *)(v182 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v185 + 1;
        *(_DWORD *)(v182 + 4 * v185 + 32) = vtxIdx;
      }
      v186 = trianges->fields.m_CachedPtr;
      v187 = this->fields.vtxIdx;
      v188 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v186 )
        goto LABEL_330;
      v189 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v187 + 2);
      if ( (unsigned int)v189 >= *(_DWORD *)(v186 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v189 + 1;
        *(_DWORD *)(v186 + 4 * v189 + 32) = vtxIdx;
      }
      v190 = trianges->fields.m_CachedPtr;
      v191 = this->fields.vtxIdx;
      v192 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v190 )
        goto LABEL_330;
      v193 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v191 + 3);
      if ( (unsigned int)v193 >= *(_DWORD *)(v190 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v193 + 1;
        *(_DWORD *)(v190 + 4 * v193 + 32) = vtxIdx;
      }
      v194 = trianges->fields.m_CachedPtr;
      v195 = this->fields.vtxIdx;
      v196 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v194 )
        goto LABEL_330;
      v197 = SLODWORD(trianges[1].klass);
      v198 = (const MethodInfo *)(unsigned int)(v195 + 1);
      v324 = v163;
      if ( (unsigned int)v197 >= *(_DWORD *)(v194 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          (int32_t)v198,
          *(const MethodInfo_4467270 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(trianges[1].klass) = v197 + 1;
        *(_DWORD *)(v194 + 4 * v197 + 32) = (_DWORD)v198;
      }
      this->fields.vtxIdx += 4;
      v336 = Custom2dSplineMesh__GetDirection(this, v307, v198);
      if ( !byte_5969AE3 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE3 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v199);
      v201 = sqrtf(
               (float)(v336.fields.z * v336.fields.z)
             + (float)((float)(v336.fields.x * v336.fields.x) + (float)(v336.fields.y * v336.fields.y)));
      if ( v201 <= 0.00001 )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v369 = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
      }
      else
      {
        v369.fields.x = v336.fields.x / v201;
        v369.fields.y = v336.fields.y / v201;
        v369.fields.z = v336.fields.z / v201;
      }
      Custom2dSplineMesh__AddCap(this, v334, v369, v335, v310, 1, v200);
      v204 = v313 + Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD;
      v337 = Custom2dSplineMesh__GetDirection(this, v204, v205);
      if ( !byte_5969AE3 )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969AE3 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v206);
      v207 = sqrtf(
               (float)(v337.fields.z * v337.fields.z)
             + (float)((float)(v337.fields.x * v337.fields.x) + (float)(v337.fields.y * v337.fields.y)));
      if ( v207 <= 0.00001 )
      {
        if ( !byte_5969AE0 )
        {
          sub_2213A60(&UnityEngine_Vector3_TypeInfo);
          byte_5969AE0 = 1;
        }
        v210 = UnityEngine_Vector3_TypeInfo->static_fields;
        v208 = v210->zeroVector.fields.y;
        v209 = v210->zeroVector.fields.z;
        normalizedDir = v210->zeroVector.fields.x;
      }
      else
      {
        v208 = v337.fields.y / v207;
        normalizedDir = v337.fields.x / v207;
        v209 = v337.fields.z / v207;
      }
      v338 = Custom2dSplineMesh__GetOffset(this, v204, v206);
      v370.fields.y = v208;
      v370.fields.z = v209;
      v370.fields.x = normalizedDir;
      v315 = v209;
      v317 = v208;
      Custom2dSplineMesh__AddCap(this, v334, v370, v338, v310, 0, v211);
      v212 = v334.fields.x + v338.fields.x;
      v213 = v334.fields.y + v338.fields.y;
      v214 = this->fields.flattenAxis;
      if ( v214 == 2 )
      {
        v215 = 0.0;
        v216 = 0.0;
        v218 = v334.fields.x - v338.fields.x;
        v217 = v334.fields.y - v338.fields.y;
      }
      else
      {
        v215 = v334.fields.z + v338.fields.z;
        v216 = v334.fields.z - v338.fields.z;
        if ( v214 == 1 )
        {
          v219 = v334.fields.x;
          v213 = 0.0;
          v217 = 0.0;
LABEL_214:
          v218 = v219 - v338.fields.x;
          goto LABEL_215;
        }
        v217 = v334.fields.y - v338.fields.y;
        if ( v214 )
        {
          v219 = v334.fields.x;
          goto LABEL_214;
        }
        v212 = 0.0;
        v218 = 0.0;
      }
LABEL_215:
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v220 = trianges->fields.m_CachedPtr;
      v221 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v220 )
        goto LABEL_330;
      v222 = (unsigned int)trianges[1].klass;
      if ( v222 >= *(_DWORD *)(v220 + 24) )
      {
        v360.fields.x = v212;
        v360.fields.y = v213;
        v360.fields.z = v215;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v360,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
      }
      else
      {
        v223 = (float *)(v220 + 12LL * (int)v222);
        LODWORD(trianges[1].klass) = v222 + 1;
        v223[8] = v212;
        v223[9] = v213;
        v223[10] = v215;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v224 = trianges->fields.m_CachedPtr;
      v225 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v224 )
        goto LABEL_330;
      v226 = (unsigned int)trianges[1].klass;
      if ( v226 >= *(_DWORD *)(v224 + 24) )
      {
        v361.fields.x = v218;
        v361.fields.y = v217;
        v361.fields.z = v216;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v361,
          *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
      }
      else
      {
        v227 = (float *)(v224 + 12LL * (int)v226);
        LODWORD(trianges[1].klass) = v226 + 1;
        v227[8] = v218;
        v227[9] = v217;
        v227[10] = v216;
      }
      v228 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v362.fields.x = v212;
        v362.fields.y = v213;
        v362.fields.z = v215;
        v348 = Custom2dSplineMesh__GetUV_48562484(this, v362, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v348.fields.y = this->fields.lineVmin;
        v348.fields.x = 0.0;
      }
      v51 = v314;
      if ( !v228 )
        goto LABEL_330;
      v229 = v228->fields._items;
      v230 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v228->fields._version;
      if ( !v229 )
        goto LABEL_330;
      v231 = v228->fields._size;
      if ( (unsigned int)v231 >= LODWORD(v229->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v228,
          v348,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
      }
      else
      {
        v228->fields._size = v231 + 1;
        v229->m_Items[v231] = v348;
      }
      v232 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v363.fields.x = v218;
        v363.fields.y = v217;
        v363.fields.z = v216;
        v349 = Custom2dSplineMesh__GetUV_48562484(this, v363, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v349.fields.y = this->fields.lineVmax;
        v349.fields.x = 0.0;
      }
      v79 = v313;
      if ( !v232 )
        goto LABEL_330;
      v233 = v232->fields._items;
      v234 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v232->fields._version;
      if ( !v233 )
        goto LABEL_330;
      v235 = v232->fields._size;
      if ( (unsigned int)v235 >= LODWORD(v233->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v232,
          v349,
          *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
      }
      else
      {
        v232->fields._size = v235 + 1;
        v233->m_Items[v235] = v349;
      }
      if ( !byte_5969ADE )
      {
        sub_2213A60(&System_Math_TypeInfo);
        byte_5969ADE = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v74 = (float)(v324 / Custom2dSplineMesh__GetWidth(this, normalizedDir_4, (const MethodInfo *)vtxIdx))
          * this->fields.UVrate;
      v339 = Custom2dSplineMesh__GetPoint(this, v204, v236);
      x = v339.fields.x;
      v75 = v339.fields.y;
      v76 = v339.fields.z;
LABEL_246:
      v79 = v51 + v79;
      v77 = x;
      y = v75;
      v78 = v76;
      v340 = Custom2dSplineMesh__GetPoint(this, v79, v151);
      x = v340.fields.x;
      PathRate = this->fields.PathRate;
      v75 = v340.fields.y;
      v76 = v340.fields.z;
    }
    while ( v79 < PathRate );
  }
  if ( PathRate > 0.0 )
  {
    v237 = v74;
    v341 = Custom2dSplineMesh__GetOffset(this, PathRate, (const MethodInfo *)vtxIdx);
    v238 = this->fields.flattenAxis;
    v239 = v329.fields.x + v341.fields.x;
    v240 = v329.fields.y + v341.fields.y;
    if ( v238 != 2 )
    {
      v241 = v329.fields.z + v341.fields.z;
      v242 = v329.fields.z - v341.fields.z;
      if ( v238 == 1 )
      {
        v245 = v329.fields.x;
        v240 = 0.0;
        v243 = 0.0;
      }
      else
      {
        v243 = v329.fields.y - v341.fields.y;
        if ( !v238 )
        {
          v239 = 0.0;
          v244 = 0.0;
LABEL_256:
          trianges = (UnityEngine_Object_o *)*p_verts;
          if ( *p_verts )
          {
            v246 = trianges->fields.m_CachedPtr;
            v247 = Method_System_Collections_Generic_List_Vector3__Add__;
            ++HIDWORD(trianges[1].klass);
            if ( v246 )
            {
              v248 = (unsigned int)trianges[1].klass;
              if ( v248 >= *(_DWORD *)(v246 + 24) )
              {
                v364.fields.x = v239;
                v364.fields.y = v240;
                v364.fields.z = v241;
                System_Collections_Generic_List_Vector3___AddWithResize(
                  (System_Collections_Generic_List_Vector3__o *)trianges,
                  v364,
                  *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
              }
              else
              {
                v249 = (float *)(v246 + 12LL * (int)v248);
                LODWORD(trianges[1].klass) = v248 + 1;
                v249[8] = v239;
                v249[9] = v240;
                v249[10] = v241;
              }
              trianges = (UnityEngine_Object_o *)*p_verts;
              if ( *p_verts )
              {
                v250 = trianges->fields.m_CachedPtr;
                v251 = Method_System_Collections_Generic_List_Vector3__Add__;
                ++HIDWORD(trianges[1].klass);
                if ( v250 )
                {
                  v252 = (unsigned int)trianges[1].klass;
                  if ( v252 >= *(_DWORD *)(v250 + 24) )
                  {
                    v365.fields.x = v244;
                    v365.fields.y = v243;
                    v365.fields.z = v242;
                    System_Collections_Generic_List_Vector3___AddWithResize(
                      (System_Collections_Generic_List_Vector3__o *)trianges,
                      v365,
                      *(const MethodInfo_44E35A8 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v253 = (float *)(v250 + 12LL * (int)v252);
                    LODWORD(trianges[1].klass) = v252 + 1;
                    v253[8] = v244;
                    v253[9] = v243;
                    v253[10] = v242;
                  }
                  v254 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v366.fields.x = v239;
                    v366.fields.y = v240;
                    v366.fields.z = v241;
                    v350 = Custom2dSplineMesh__GetUV_48562484(this, v366, (const MethodInfo *)vtxIdx);
                    v255 = v237;
                    if ( !v254 )
                      goto LABEL_330;
                  }
                  else
                  {
                    v350.fields.y = this->fields.lineVmin;
                    v255 = v237;
                    v350.fields.x = v237;
                    if ( !v254 )
                      goto LABEL_330;
                  }
                  v256 = v254->fields._items;
                  v257 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v254->fields._version;
                  if ( !v256 )
                    goto LABEL_330;
                  v258 = v254->fields._size;
                  if ( (unsigned int)v258 >= LODWORD(v256->max_length) )
                  {
                    System_Collections_Generic_List_Vector2___AddWithResize(
                      v254,
                      v350,
                      *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v254->fields._size = v258 + 1;
                    v256->m_Items[v258] = v350;
                  }
                  v259 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v367.fields.x = v244;
                    v367.fields.y = v243;
                    v367.fields.z = v242;
                    v260 = Custom2dSplineMesh__GetUV_48562484(this, v367, (const MethodInfo *)vtxIdx);
                    v351.fields.y = v260.fields.y;
                    v255 = v260.fields.x;
                    if ( !v259 )
                      goto LABEL_330;
                  }
                  else
                  {
                    v351.fields.y = this->fields.lineVmax;
                    if ( !v259 )
                      goto LABEL_330;
                  }
                  v261 = v259->fields._items;
                  v262 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v259->fields._version;
                  if ( v261 )
                  {
                    v263 = v259->fields._size;
                    if ( (unsigned int)v263 >= LODWORD(v261->max_length) )
                    {
                      v351.fields.x = v255;
                      System_Collections_Generic_List_Vector2___AddWithResize(
                        v259,
                        v351,
                        *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v262[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v264 = (float *)(&v261->obj.klass + v263);
                      v259->fields._size = v263 + 1;
                      v264[8] = v255;
                      v264[9] = v351.fields.y;
                    }
                    trianges = (UnityEngine_Object_o *)this->fields.trianges;
                    if ( trianges )
                    {
                      v265 = trianges->fields.m_CachedPtr;
                      vtxIdx = (unsigned int)this->fields.vtxIdx;
                      v266 = Method_System_Collections_Generic_List_int__Add__;
                      ++HIDWORD(trianges[1].klass);
                      if ( v265 )
                      {
                        v267 = SLODWORD(trianges[1].klass);
                        if ( (unsigned int)v267 >= *(_DWORD *)(v265 + 24) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            (System_Collections_Generic_List_int__o *)trianges,
                            vtxIdx,
                            *(const MethodInfo_4467270 **)(*(_QWORD *)(v266[4] + 192LL) + 112LL));
                          trianges = (UnityEngine_Object_o *)*p_trianges;
                          if ( !*p_trianges )
                            goto LABEL_330;
                        }
                        else
                        {
                          LODWORD(trianges[1].klass) = v267 + 1;
                          *(_DWORD *)(v265 + 4 * v267 + 32) = vtxIdx;
                        }
                        v268 = trianges->fields.m_CachedPtr;
                        v269 = this->fields.vtxIdx;
                        v270 = Method_System_Collections_Generic_List_int__Add__;
                        ++HIDWORD(trianges[1].klass);
                        if ( v268 )
                        {
                          v271 = SLODWORD(trianges[1].klass);
                          vtxIdx = (unsigned int)(v269 + 2);
                          if ( (unsigned int)v271 >= *(_DWORD *)(v268 + 24) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              (System_Collections_Generic_List_int__o *)trianges,
                              vtxIdx,
                              *(const MethodInfo_4467270 **)(*(_QWORD *)(v270[4] + 192LL) + 112LL));
                            trianges = (UnityEngine_Object_o *)*p_trianges;
                            if ( !*p_trianges )
                              goto LABEL_330;
                          }
                          else
                          {
                            LODWORD(trianges[1].klass) = v271 + 1;
                            *(_DWORD *)(v268 + 4 * v271 + 32) = vtxIdx;
                          }
                          v272 = trianges->fields.m_CachedPtr;
                          v273 = this->fields.vtxIdx;
                          v274 = Method_System_Collections_Generic_List_int__Add__;
                          ++HIDWORD(trianges[1].klass);
                          if ( v272 )
                          {
                            v275 = SLODWORD(trianges[1].klass);
                            vtxIdx = (unsigned int)(v273 + 1);
                            if ( (unsigned int)v275 >= *(_DWORD *)(v272 + 24) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                (System_Collections_Generic_List_int__o *)trianges,
                                vtxIdx,
                                *(const MethodInfo_4467270 **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
                              trianges = (UnityEngine_Object_o *)*p_trianges;
                              if ( !*p_trianges )
                                goto LABEL_330;
                            }
                            else
                            {
                              LODWORD(trianges[1].klass) = v275 + 1;
                              *(_DWORD *)(v272 + 4 * v275 + 32) = vtxIdx;
                            }
                            v276 = trianges->fields.m_CachedPtr;
                            v277 = this->fields.vtxIdx;
                            v278 = Method_System_Collections_Generic_List_int__Add__;
                            ++HIDWORD(trianges[1].klass);
                            if ( v276 )
                            {
                              v279 = SLODWORD(trianges[1].klass);
                              vtxIdx = (unsigned int)(v277 + 2);
                              if ( (unsigned int)v279 >= *(_DWORD *)(v276 + 24) )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  (System_Collections_Generic_List_int__o *)trianges,
                                  vtxIdx,
                                  *(const MethodInfo_4467270 **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
                                trianges = (UnityEngine_Object_o *)*p_trianges;
                                if ( !*p_trianges )
                                  goto LABEL_330;
                              }
                              else
                              {
                                LODWORD(trianges[1].klass) = v279 + 1;
                                *(_DWORD *)(v276 + 4 * v279 + 32) = vtxIdx;
                              }
                              v280 = trianges->fields.m_CachedPtr;
                              v281 = this->fields.vtxIdx;
                              v282 = Method_System_Collections_Generic_List_int__Add__;
                              ++HIDWORD(trianges[1].klass);
                              if ( v280 )
                              {
                                v283 = SLODWORD(trianges[1].klass);
                                vtxIdx = (unsigned int)(v281 + 3);
                                if ( (unsigned int)v283 >= *(_DWORD *)(v280 + 24) )
                                {
                                  System_Collections_Generic_List_int___AddWithResize(
                                    (System_Collections_Generic_List_int__o *)trianges,
                                    vtxIdx,
                                    *(const MethodInfo_4467270 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
                                  trianges = (UnityEngine_Object_o *)*p_trianges;
                                  if ( !*p_trianges )
                                    goto LABEL_330;
                                }
                                else
                                {
                                  LODWORD(trianges[1].klass) = v283 + 1;
                                  *(_DWORD *)(v280 + 4 * v283 + 32) = vtxIdx;
                                }
                                v284 = trianges->fields.m_CachedPtr;
                                v285 = this->fields.vtxIdx;
                                v286 = Method_System_Collections_Generic_List_int__Add__;
                                ++HIDWORD(trianges[1].klass);
                                if ( v284 )
                                {
                                  v287 = SLODWORD(trianges[1].klass);
                                  vtxIdx = (unsigned int)(v285 + 1);
                                  if ( (unsigned int)v287 >= *(_DWORD *)(v284 + 24) )
                                  {
                                    System_Collections_Generic_List_int___AddWithResize(
                                      (System_Collections_Generic_List_int__o *)trianges,
                                      vtxIdx,
                                      *(const MethodInfo_4467270 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    LODWORD(trianges[1].klass) = v287 + 1;
                                    *(_DWORD *)(v284 + 4 * v287 + 32) = vtxIdx;
                                  }
                                  this->fields.vtxIdx += 4;
                                  goto LABEL_308;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
LABEL_330:
          sub_2213CDC(trianges, vtxIdx);
        }
        v245 = v329.fields.x;
      }
      v244 = v245 - v341.fields.x;
      goto LABEL_256;
    }
    v241 = 0.0;
    v242 = 0.0;
    v244 = v329.fields.x - v341.fields.x;
    v243 = v329.fields.y - v341.fields.y;
    goto LABEL_256;
  }
LABEL_308:
  if ( this->fields.DrawCap )
  {
    v342 = Custom2dSplineMesh__GetOffset(this, this->fields.PathRate, (const MethodInfo *)vtxIdx);
    v289 = Custom2dSplineMesh__GetWidth(this, this->fields.PathRate, v288);
    v343 = Custom2dSplineMesh__GetDirection(this, this->fields.PathRate, v290);
    if ( !byte_5969AE3 )
    {
      sub_2213A60(&System_Math_TypeInfo);
      byte_5969AE3 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v291);
    v293 = sqrtf(
             (float)(v343.fields.z * v343.fields.z)
           + (float)((float)(v343.fields.x * v343.fields.x) + (float)(v343.fields.y * v343.fields.y)));
    if ( v293 <= 0.00001 )
    {
      if ( !byte_5969AE0 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE0 = 1;
      }
      v371 = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v371.fields.x = v343.fields.x / v293;
      v371.fields.y = v343.fields.y / v293;
      v371.fields.z = v343.fields.z / v293;
    }
    Custom2dSplineMesh__AddCap(this, v329, v371, v342, v289, 1, v292);
  }
  trianges = (UnityEngine_Object_o *)*p_verts;
  if ( !*p_verts )
    goto LABEL_330;
  v296 = *v306;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector3___ToArray(
                                       (System_Collections_Generic_List_Vector3__o *)trianges,
                                       (const MethodInfo_44E512C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  if ( !v296 )
    goto LABEL_330;
  UnityEngine_Mesh__set_vertices(v296, (UnityEngine_Vector3_array *)trianges, 0);
  trianges = (UnityEngine_Object_o *)*p_trianges;
  if ( !*p_trianges )
    goto LABEL_330;
  v297 = *v306;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_int___ToArray(
                                       (System_Collections_Generic_List_int__o *)trianges,
                                       (const MethodInfo_4468CF0 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v297 )
    goto LABEL_330;
  UnityEngine_Mesh__set_triangles(v297, (System_Int32_array *)trianges, 0);
  trianges = (UnityEngine_Object_o *)*p_uvs;
  if ( !*p_uvs )
    goto LABEL_330;
  v298 = *v306;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector2___ToArray(
                                       (System_Collections_Generic_List_Vector2__o *)trianges,
                                       (const MethodInfo_44E27CC *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  if ( !v298 )
    goto LABEL_330;
  UnityEngine_Mesh__set_uv(v298, (UnityEngine_Vector2_array *)trianges, 0);
  v299 = *p_verts;
  if ( !*p_verts )
    goto LABEL_330;
  v300 = *p_trianges;
  v301 = v299->fields._version + 1;
  v299->fields._size = 0;
  v299->fields._version = v301;
  if ( !v300 )
    goto LABEL_330;
  v302 = *p_uvs;
  v303 = v300->fields._version + 1;
  v300->fields._size = 0;
  v300->fields._version = v303;
  if ( !v302 )
    goto LABEL_330;
  trianges = (UnityEngine_Object_o *)*v306;
  v304 = v302->fields._version + 1;
  v302->fields._size = 0;
  v302->fields._version = v304;
  if ( !trianges )
    goto LABEL_330;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)trianges, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Custom2dSplineMesh__GetControlPoint(
        Custom2dSplineMesh_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  float *v4; // x8
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  points = this->fields.points;
  if ( !points )
    sub_2213CDC(this, *(_QWORD *)&index);
  if ( LODWORD(points->max_length) <= index )
    sub_2213CE4(this);
  v4 = (float *)((char *)points + 12 * index);
  result.fields.x = v4[8];
  result.fields.y = v4[9];
  result.fields.z = v4[10];
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t Custom2dSplineMesh__GetControlPointMode(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v4; // w9

  modes = this->fields.modes;
  if ( !modes )
    sub_2213CDC(this, *(_QWORD *)&index);
  v4 = (index + 1) / 3;
  if ( (unsigned int)v4 >= LODWORD(modes->max_length) )
    sub_2213CE4(this);
  return modes->m_Items[v4];
}


// local variable allocation has failed, the output may be wrong!
float Custom2dSplineMesh__GetCurveWeight(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Single_array *curveWeight; // x8
  int v8; // w9

  Custom2dSplineMesh__checkWeightNull(this, *(const MethodInfo **)&index);
  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_2213CDC(v5, v6);
  v8 = (index + 1) / 3;
  if ( (unsigned int)v8 >= LODWORD(curveWeight->max_length) )
    sub_2213CE4(v5);
  return curveWeight->m_Items[v8];
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetDirection(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  __int64 v3; // x1
  float v4; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Velocity; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Velocity = Custom2dSplineMesh__GetVelocity(this, t, method);
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v4 = sqrtf(
         (float)(Velocity.fields.z * Velocity.fields.z)
       + (float)((float)(Velocity.fields.x * Velocity.fields.x) + (float)(Velocity.fields.y * Velocity.fields.y)));
  if ( v4 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
    result.fields.z = static_fields->zeroVector.fields.z;
  }
  else
  {
    result.fields.x = Velocity.fields.x / v4;
    result.fields.y = Velocity.fields.y / v4;
    result.fields.z = Velocity.fields.z / v4;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetFlatten(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o org,
        const MethodInfo *method)
{
  int32_t flattenAxis; // w8

  flattenAxis = this->fields.flattenAxis;
  if ( flattenAxis )
  {
    if ( flattenAxis == 1 )
    {
      org.fields.y = 0.0;
    }
    else if ( flattenAxis == 2 )
    {
      org.fields.z = 0.0;
    }
  }
  else
  {
    org.fields.x = 0.0;
  }
  return org;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetOffset(Custom2dSplineMesh_o *this, float rate, const MethodInfo *method)
{
  float v3; // s1
  int32_t flattenAxis; // w8
  float v7; // s3
  float v8; // s4
  float v9; // s11
  float v10; // s14
  float v11; // s13
  const MethodInfo *v12; // x1
  float v13; // s9
  float v14; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s9
  float v20; // s10
  float v21; // s11
  float v22; // s0
  float x; // s12
  float y; // s10
  float z; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float Width; // s0
  float v28; // s1
  float v29; // s2
  int32_t v30; // w8
  float v31; // s4
  float v32; // s3
  float v33; // s0
  float v34; // s6
  float v35; // s5
  UnityEngine_Vector3_o Direction; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v3 = -1.0;
  flattenAxis = this->fields.flattenAxis;
  if ( !this->fields.FlipMesh )
    v3 = 1.0;
  if ( flattenAxis )
    v7 = 0.0;
  else
    v7 = v3;
  if ( flattenAxis == 1 )
    v8 = v3;
  else
    v8 = 0.0;
  if ( flattenAxis == 2 )
    v9 = v3;
  else
    v9 = 0.0;
  if ( flattenAxis == 2 )
    v10 = 0.0;
  else
    v10 = v8;
  if ( (unsigned int)(flattenAxis - 1) >= 2 )
    v11 = v7;
  else
    v11 = 0.0;
  Direction = Custom2dSplineMesh__GetDirection(this, rate, method);
  v13 = Direction.fields.z * v10;
  v14 = v9 * Direction.fields.y;
  v15 = v9 * Direction.fields.x;
  v16 = Direction.fields.z * v11;
  v17 = Direction.fields.y * v11;
  v18 = Direction.fields.x * v10;
  if ( !byte_5969AE3 )
  {
    sub_2213A60(&System_Math_TypeInfo);
    byte_5969AE3 = 1;
  }
  v19 = v13 - v14;
  v20 = v15 - v16;
  v21 = v17 - v18;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( v22 <= 0.00001 )
  {
    if ( !byte_5969AE0 )
    {
      sub_2213A60(&UnityEngine_Vector3_TypeInfo);
      byte_5969AE0 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  else
  {
    x = v19 / v22;
    y = v20 / v22;
    z = v21 / v22;
  }
  Width = Custom2dSplineMesh__GetWidth(this, rate, v12);
  v28 = -(float)(x * Width);
  v29 = -(float)(y * Width);
  v30 = this->fields.flattenAxis;
  v31 = -(float)(z * Width);
  v32 = fabsf(v28);
  v33 = fabsf(v29);
  v34 = fabsf(v31);
  if ( v30 )
    v32 = v28;
  if ( v30 == 1 )
    v35 = v33;
  else
    v35 = v29;
  if ( (unsigned int)(v30 - 1) >= 2 )
    result.fields.x = v32;
  else
    result.fields.x = v28;
  if ( v30 == 2 )
    result.fields.y = v29;
  else
    result.fields.y = v35;
  if ( v30 == 2 )
    result.fields.z = v34;
  else
    result.fields.z = v31;
  return result;
}


float Custom2dSplineMesh__GetPathRate(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  return this->fields.PathRate;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetPoint(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 WeightedPointIdxAndT; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  float innerT; // [xsp+2Ch] [xbp-14h] BYREF
  UnityEngine_Vector3_o Point_48546060; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:kr14_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  innerT = 0.0;
  WeightedPointIdxAndT = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  points = this->fields.points;
  if ( !points )
    sub_2213CDC(WeightedPointIdxAndT, v6);
  max_length = points->max_length;
  if ( (unsigned int)WeightedPointIdxAndT >= max_length
    || (int)WeightedPointIdxAndT + 1 >= max_length
    || (int)WeightedPointIdxAndT + 2 >= max_length
    || (int)WeightedPointIdxAndT + 3 >= max_length )
  {
    sub_2213CE4(WeightedPointIdxAndT);
  }
  *(_QWORD *)&v15.fields.x = WeightedPointIdxAndT;
  LODWORD(v15.fields.z) = v6;
  Point_48546060 = Bezier__GetPoint_48546060(
                     points->m_Items[(int)WeightedPointIdxAndT],
                     points->m_Items[(int)WeightedPointIdxAndT + 1],
                     points->m_Items[(int)WeightedPointIdxAndT + 2],
                     v15,
                     COERCE_FLOAT(*(_QWORD *)&points->m_Items[(int)WeightedPointIdxAndT + 3].fields.x),
                     v7);
  result.fields.x = Point_48546060.fields.x;
  result.fields.y = Point_48546060.fields.y;
  result.fields.z = Point_48546060.fields.z;
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetPointAsWorld(
        Custom2dSplineMesh_o *this,
        float t,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  if ( !transform )
    sub_2213CDC(v7, v8);
  v10.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
  v10.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  v10.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
  return UnityEngine_Transform__TransformPoint(transform, v10, 0);
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetPointAsWorldFlatten(
        Custom2dSplineMesh_o *this,
        float t,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t flattenAxis; // w8
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  flattenAxis = this->fields.flattenAxis;
  v13.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
  v13.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  if ( flattenAxis )
  {
    v13.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
    if ( flattenAxis == 1 )
    {
      v13.fields.y = 0.0;
    }
    else if ( flattenAxis == 2 )
    {
      v13.fields.z = 0.0;
    }
  }
  else
  {
    v13.fields.x = 0.0;
  }
  if ( !transform )
    sub_2213CDC(v7, v8);
  return UnityEngine_Transform__TransformPoint(transform, v13, 0);
}


float Custom2dSplineMesh__GetTotalWeight(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Single_array *curveWeight; // x10
  float result; // s0
  il2cpp_array_size_t max_length; // x9
  __int64 v8; // x8
  __int64 v9; // x9
  float *m_Items; // x10
  float v11; // t1

  Custom2dSplineMesh__checkWeightNull(this, method);
  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_2213CDC(v3, v4);
  result = 0.0;
  max_length = curveWeight->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = (unsigned int)max_length & ~((int)max_length >> 31);
    v9 = (unsigned int)curveWeight->max_length;
    m_Items = curveWeight->m_Items;
    do
    {
      if ( !v9 )
        sub_2213CE4(v3);
      v11 = *m_Items++;
      --v8;
      --v9;
      result = result + v11;
    }
    while ( v8 );
  }
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        float coordU,
        float coordV,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o UV_48562484; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.StrictUVmode )
  {
    UV_48562484 = Custom2dSplineMesh__GetUV_48562484(this, pos, method);
    coordU = UV_48562484.fields.x;
    coordV = UV_48562484.fields.y;
  }
  result.fields.x = coordU;
  result.fields.y = coordV;
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV_48562484(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  int32_t flattenAxis; // w8
  float v4; // s3
  float UVrate; // s3
  float v8; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  flattenAxis = this->fields.flattenAxis;
  if ( flattenAxis == 2 )
  {
    UVrate = this->fields.UVrate;
    v8 = pos.fields.y + this->fields.UVslice;
    goto LABEL_7;
  }
  if ( flattenAxis == 1 )
  {
    UVrate = this->fields.UVrate;
    v8 = pos.fields.z + this->fields.UVslice;
LABEL_7:
    result.fields.x = pos.fields.x * UVrate;
    result.fields.y = v8 * UVrate;
    return result;
  }
  if ( flattenAxis )
  {
    if ( !byte_59699C0 )
    {
      sub_2213A60(&UnityEngine_Vector2_TypeInfo);
      byte_59699C0 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
  }
  else
  {
    v4 = this->fields.UVrate;
    result.fields.x = pos.fields.y * v4;
    result.fields.y = (float)(pos.fields.z + this->fields.UVslice) * v4;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetVelocity(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t WeightedPointIdxAndT; // w21
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  UnityEngine_Transform_o *v11; // x20
  float innerT; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o v16; // 0:kr14_12.12
  UnityEngine_Vector3_o position; // 0:kr20_12.12
  UnityEngine_Vector3_o v18; // 0:kr34_12.12
  UnityEngine_Vector3_o FirstDerivative_48546328; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  innerT = 0.0;
  WeightedPointIdxAndT = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  points = this->fields.points;
  if ( !points )
    goto LABEL_10;
  max_length = points->max_length;
  if ( WeightedPointIdxAndT >= max_length
    || WeightedPointIdxAndT + 1 >= max_length
    || WeightedPointIdxAndT + 2 >= max_length
    || WeightedPointIdxAndT + 3 >= max_length )
  {
    sub_2213CE4(transform);
  }
  v11 = transform;
  if ( !transform
    || (*(_QWORD *)&v18.fields.x = transform,
        LODWORD(v18.fields.z) = v7,
        FirstDerivative_48546328 = Bezier__GetFirstDerivative_48546328(
                                     points->m_Items[WeightedPointIdxAndT],
                                     points->m_Items[WeightedPointIdxAndT + 1],
                                     points->m_Items[WeightedPointIdxAndT + 2],
                                     v18,
                                     COERCE_FLOAT(*(_QWORD *)&points->m_Items[WeightedPointIdxAndT + 3].fields.x),
                                     v8),
        v16 = UnityEngine_Transform__TransformPoint(v11, FirstDerivative_48546328, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_2213CDC(transform, v7);
  }
  position = UnityEngine_Transform__get_position(transform, 0);
  result.fields.x = v16.fields.x - position.fields.x;
  result.fields.y = v16.fields.y - position.fields.y;
  result.fields.z = v16.fields.z - position.fields.z;
  return result;
}


int32_t Custom2dSplineMesh__GetWeightedPointIdxAndT(
        Custom2dSplineMesh_o *this,
        float t,
        float *innerT,
        const MethodInfo *method)
{
  float TotalWeight; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s4
  __int64 v11; // x0
  struct UnityEngine_Vector3_array *points; // x8
  struct System_Single_array *curveWeight; // x8
  float v14; // s3
  int v15; // w9
  float *v16; // x11
  float v17; // s0

  if ( t >= 1.0 )
  {
    points = this->fields.points;
    *innerT = 1.0;
    if ( points )
    {
      LODWORD(v11) = LODWORD(points->max_length) - 4;
      return v11;
    }
    goto LABEL_17;
  }
  TotalWeight = Custom2dSplineMesh__GetTotalWeight(this, (const MethodInfo *)innerT);
  v8 = 0.0;
  v9 = 0.0 / TotalWeight;
  if ( (float)(0.0 / TotalWeight) <= t )
  {
    curveWeight = this->fields.curveWeight;
    if ( curveWeight )
    {
      v14 = 0.0;
      v15 = 0;
      v11 = 4294967293LL;
      do
      {
        if ( LODWORD(curveWeight->max_length) == v15 )
          sub_2213CE4(v11);
        v16 = (float *)((char *)curveWeight + 4 * v15);
        v10 = v9;
        ++v15;
        v11 = (unsigned int)(v11 + 3);
        v14 = v14 + v16[8];
        v9 = v14 / TotalWeight;
      }
      while ( (float)(v14 / TotalWeight) <= t );
      goto LABEL_10;
    }
LABEL_17:
    sub_2213CDC(this, innerT);
  }
  v10 = 0.0;
  LODWORD(v11) = -3;
LABEL_10:
  if ( v10 != v9 )
  {
    v17 = (float)(t - v10) / (float)(v9 - v10);
    v8 = 1.0;
    if ( v17 <= 1.0 )
      v8 = (float)(t - v10) / (float)(v9 - v10);
    if ( v17 < 0.0 )
      v8 = 0.0;
  }
  *innerT = v8;
  return v11;
}


float Custom2dSplineMesh__GetWidth(Custom2dSplineMesh_o *this, float rate, const MethodInfo *method)
{
  int32_t flattenAxis; // w8
  float DrawWidth; // s0
  float AxisWidthOffset; // s1

  if ( !this->fields.flattenAxisAsWidthVariable )
    return this->fields.DrawWidth;
  flattenAxis = this->fields.flattenAxis;
  if ( flattenAxis == 2 )
  {
    DrawWidth = COERCE_FLOAT(LODWORD(Custom2dSplineMesh__GetPoint(this, rate, method).fields.z))
              + this->fields.AxisWidthOffset;
  }
  else if ( flattenAxis == 1 )
  {
    DrawWidth = COERCE_FLOAT(LODWORD(Custom2dSplineMesh__GetPoint(this, rate, method).fields.y))
              + this->fields.AxisWidthOffset;
  }
  else
  {
    if ( flattenAxis )
    {
      DrawWidth = this->fields.DrawWidth;
      AxisWidthOffset = this->fields.AxisWidthOffset;
      return DrawWidth + AxisWidthOffset;
    }
    DrawWidth = COERCE_FLOAT(Custom2dSplineMesh__GetPoint(this, rate, method)) + this->fields.AxisWidthOffset;
  }
  AxisWidthOffset = this->fields.DrawWidth;
  return DrawWidth + AxisWidthOffset;
}


void Custom2dSplineMesh__OnDestroy(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *drawMesh; // x19

  if ( (byte_597026B & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597026B = 1;
  }
  meshFilter = this->fields.meshFilter;
  if ( !meshFilter
    || (UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0),
        (meshFilter = (UnityEngine_MeshFilter_o *)this->fields.drawMesh) == 0) )
  {
    sub_2213CDC(meshFilter, method);
  }
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)meshFilter, 0);
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83459800(drawMesh, 0);
}


void Custom2dSplineMesh__RemoveMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0

  meshFilter = this->fields.meshFilter;
  if ( !meshFilter )
    sub_2213CDC(0, method);
  UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0);
}


void Custom2dSplineMesh__Reset(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  unsigned int v11; // w8
  struct BezierControlPointMode_array *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5970265 & 1) == 0 )
  {
    sub_2213A60(&BezierControlPointMode___TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&UnityEngine_Vector3___TypeInfo);
    byte_5970265 = 1;
  }
  v3 = sub_2213B20(UnityEngine_Vector3___TypeInfo, 4);
  if ( !v3 )
    goto LABEL_12;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11
    || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 1065353216, v11 == 1)
    || (*(_DWORD *)(v3 + 52) = 0, *(_QWORD *)(v3 + 44) = 0x40000000, v11 <= 2)
    || (*(_DWORD *)(v3 + 64) = 0, *(_QWORD *)(v3 + 56) = 1077936128, v11 == 3) )
  {
LABEL_11:
    sub_2213CE4(v3);
  }
  *(_DWORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 68) = 1082130432;
  this->fields.points = (struct UnityEngine_Vector3_array *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.points, v3, v5, v6, v7, v8, v9, v10);
  v12 = (struct BezierControlPointMode_array *)sub_2213B20(BezierControlPointMode___TypeInfo, 2);
  this->fields.modes = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.modes, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v3 = sub_2213B20(float___TypeInfo, 1);
  if ( !v3 )
LABEL_12:
    sub_2213CDC(v3, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  this->fields.curveWeight = (struct System_Single_array *)v3;
  *(_DWORD *)(v3 + 32) = 1065353216;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight, v3, v19, v20, v21, v22, v23, v24);
}


UnityEngine_Vector3_o Custom2dSplineMesh__RotateVec3(
        Custom2dSplineMesh_o *this,
        float angleDegree,
        UnityEngine_Vector3_o org,
        const MethodInfo *method)
{
  float y; // s9
  float z; // s8
  float x; // s10
  int32_t flattenAxis; // w8
  UnityEngine_Vector3_o v13; // 0:kr10_12.12
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  y = org.fields.y;
  z = org.fields.z;
  x = org.fields.x;
  flattenAxis = this->fields.flattenAxis;
  if ( !this->fields.FlipMesh )
    angleDegree = -angleDegree;
  switch ( flattenAxis )
  {
    case 2:
      v14.fields.z = angleDegree * 0.017453;
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
      goto LABEL_10;
    case 1:
      v14.fields.y = angleDegree * 0.017453;
      v14.fields.x = 0.0;
      goto LABEL_8;
    case 0:
      v14.fields.x = angleDegree * 0.017453;
      v14.fields.y = 0.0;
LABEL_8:
      v14.fields.z = 0.0;
LABEL_10:
      v17 = UnityEngine_Quaternion__Internal_FromEulerRad(v14, 0);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      v13 = UnityEngine_Quaternion__op_Multiply_83371700(v17, v16, 0);
      x = v13.fields.x;
      y = v13.fields.y;
      z = v13.fields.z;
      break;
  }
  result.fields.y = y;
  result.fields.z = z;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__SetControlPoint(
        Custom2dSplineMesh_o *this,
        int32_t index,
        UnityEngine_Vector3_o point,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w9
  float32x2_t *v6; // x10
  float32x2_t v7; // d4
  float v8; // s5
  unsigned int v9; // w10
  float32x2_t v10; // d3
  float v11; // s4
  float32x2_t *v12; // x8
  float v13; // s6
  unsigned int v14; // w9
  __int64 v15; // x10
  float32x2_t *v16; // x8
  float v17; // s4
  struct UnityEngine_Vector3_array *v18; // x8

  if ( (unsigned int)(-1431655765 * index + 715827882) <= 0x55555554 )
  {
    points = this->fields.points;
    if ( !points )
      goto LABEL_14;
    max_length = points->max_length;
    if ( max_length <= index )
      goto LABEL_13;
    v6 = (float32x2_t *)((char *)points + 12 * index);
    v7.n64_u64[0] = v6[4].n64_u64[0];
    v8 = v6[5].n64_f32[0];
    v9 = index - 1;
    v10.n64_u64[0] = vsub_f32(*(float32x2_t *)&point.fields.x, v7).n64_u64[0];
    v11 = point.fields.z - v8;
    if ( index >= 1 )
    {
      if ( v9 >= max_length )
        goto LABEL_13;
      v12 = (float32x2_t *)((char *)points + 12 * v9);
      v13 = v11 + v12[5].n64_f32[0];
      v12[4].n64_u64[0] = vadd_f32(v10, v12[4]).n64_u64[0];
      v12[5].n64_f32[0] = v13;
      points = this->fields.points;
      if ( !points )
LABEL_14:
        sub_2213CDC(this, *(_QWORD *)&index);
    }
    v14 = points->max_length;
    if ( (int)(v14 - 1) > index )
    {
      v15 = index + 1LL;
      if ( (unsigned int)v15 >= v14 )
        goto LABEL_13;
      v16 = (float32x2_t *)((char *)points + 12 * v15);
      v17 = v11 + v16[5].n64_f32[0];
      v16[4].n64_u64[0] = vadd_f32(v10, v16[4]).n64_u64[0];
      v16[5].n64_f32[0] = v17;
    }
  }
  v18 = this->fields.points;
  if ( !v18 )
    goto LABEL_14;
  if ( LODWORD(v18->max_length) <= index )
LABEL_13:
    sub_2213CE4(this);
  v18->m_Items[index] = point;
  Custom2dSplineMesh__EnforceMode(this, index, method);
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__SetControlPointMode(
        Custom2dSplineMesh_o *this,
        int32_t index,
        int32_t mode,
        const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v5; // w9

  modes = this->fields.modes;
  if ( !modes )
    sub_2213CDC(this, *(_QWORD *)&index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(modes->max_length) )
    sub_2213CE4(this);
  modes->m_Items[v5] = mode;
  Custom2dSplineMesh__EnforceMode(this, index, *(const MethodInfo **)&mode);
}


void Custom2dSplineMesh__SetList(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Vector3__o *splinePos; // x0
  System_Collections_Generic_IEnumerable_T__o *points; // x1
  int v5; // w9
  const MethodInfo_44E37DC *v6; // x2

  if ( (byte_597026C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__Clear__);
    byte_597026C = 1;
  }
  splinePos = this->fields.splinePos;
  if ( !splinePos )
    sub_2213CDC(0, method);
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v5 = splinePos->fields._version + 1;
  v6 = (const MethodInfo_44E37DC *)Method_System_Collections_Generic_List_Vector3__AddRange__;
  splinePos->fields._size = 0;
  splinePos->fields._version = v5;
  System_Collections_Generic_List_Vector3___AddRange(splinePos, points, v6);
}


void Custom2dSplineMesh__SetPathRate(Custom2dSplineMesh_o *this, float pRate, const MethodInfo *method)
{
  this->fields.PathRate = pRate;
  Custom2dSplineMesh__GenMesh(this, method);
}


void Custom2dSplineMesh__Start(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_5970269 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_5970269 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.meshFilter,
      (int32_t)Component_object,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
    Custom2dSplineMesh__SetList(this, v10);
    Custom2dSplineMesh__GenMesh(this, v11);
  }
}


void Custom2dSplineMesh__Update(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Custom2dSplineMesh_o *v2; // x19
  struct UnityEngine_Vector3_array *points; // x8
  il2cpp_array_size_t max_length; // x8
  int m_CancellationTokenSource; // w9
  __int64 v6; // x21
  unsigned __int64 v7; // x20
  struct UnityEngine_Vector3_array *v8; // x8
  float *v9; // x8
  UnityEngine_Vector3_o Item; // 0:kr00_12.12

  v2 = this;
  if ( (byte_597026A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    this = (Custom2dSplineMesh_o *)sub_2213A60(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    byte_597026A = 1;
  }
  if ( !v2->fields.DrawPath || !v2->fields.ResetOnUpdate )
    return;
  if ( !v2->fields.createVertsEveryStep )
  {
    Custom2dSplineMesh__GenMesh(v2, method);
    return;
  }
  points = v2->fields.points;
  if ( !points )
    goto LABEL_17;
  max_length = points->max_length;
  if ( !max_length )
    return;
  this = (Custom2dSplineMesh_o *)v2->fields.splinePos;
  if ( !this )
LABEL_17:
    sub_2213CDC(this, method);
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
  {
LABEL_21:
    Custom2dSplineMesh__SetList(v2, method);
    return;
  }
  if ( m_CancellationTokenSource != (_DWORD)max_length )
  {
LABEL_20:
    Custom2dSplineMesh__GenMesh(v2, method);
    goto LABEL_21;
  }
  v6 = 0;
  v7 = 0;
  while ( (__int64)v7 < SLODWORD(this->fields.m_CancellationTokenSource) )
  {
    Item = System_Collections_Generic_List_Vector3___get_Item(
             (System_Collections_Generic_List_Vector3__o *)this,
             v7,
             (const MethodInfo_44E3278 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
    v8 = v2->fields.points;
    if ( !v8 )
      goto LABEL_17;
    if ( v7 >= LODWORD(v8->max_length) )
      sub_2213CE4(this);
    v9 = (float *)((char *)v8 + v6);
    if ( (float)((float)((float)(Item.fields.z - v9[10]) * (float)(Item.fields.z - v9[10]))
               + (float)((float)((float)(Item.fields.x - v9[8]) * (float)(Item.fields.x - v9[8]))
                       + (float)((float)(Item.fields.y - v9[9]) * (float)(Item.fields.y - v9[9])))) >= 1.0e-10 )
      goto LABEL_20;
    this = (Custom2dSplineMesh_o *)v2->fields.splinePos;
    v6 += 12;
    ++v7;
    if ( !this )
      goto LABEL_17;
  }
}


void Custom2dSplineMesh__checkWeightNull(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Custom2dSplineMesh_o *v2; // x20
  MissionNaviTransitionBoardItem_o *p_curveWeight; // x19
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x21
  unsigned __int64 v5; // x8
  struct BezierControlPointMode_array *modes; // x8
  __int64 v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  void *monitor; // x10
  __int64 v15; // x9
  __int64 v16; // x10
  char *v17; // x13
  struct BezierControlPointMode_array *v18; // x9
  System_Collections_Generic_List_float__o *v19; // x20
  System_Single_array *v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  v2 = this;
  if ( (byte_5970266 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_float___ctor___91664480);
    sub_2213A60(&System_Collections_Generic_List_float__TypeInfo);
    this = (Custom2dSplineMesh_o *)sub_2213A60(&float___TypeInfo);
    byte_5970266 = 1;
  }
  p_curveWeight = (MissionNaviTransitionBoardItem_o *)&v2->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.curveWeight;
  if ( !curveWeight || (v5 = (unsigned __int64)curveWeight[1].monitor) == 0 )
  {
    modes = v2->fields.modes;
    if ( !modes )
      goto LABEL_18;
    v7 = sub_2213B20(float___TypeInfo, (unsigned int)(LODWORD(modes->max_length) - 1));
    p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.curveWeight, v7, v8, v9, v10, v11, v12, v13);
    curveWeight = (System_Collections_Generic_IEnumerable_T__o *)p_curveWeight->klass;
    if ( !p_curveWeight->klass )
      goto LABEL_18;
    monitor = curveWeight[1].monitor;
    v5 = (unsigned int)monitor;
    if ( (int)monitor >= 1 )
    {
      v15 = 0;
      v16 = 4LL * ((unsigned int)monitor & ~((int)monitor >> 31));
      do
      {
        if ( 4 * v5 == v15 )
          sub_2213CE4(this);
        v17 = (char *)curveWeight + v15;
        v15 += 4;
        *((_DWORD *)v17 + 8) = 1065353216;
      }
      while ( v16 != v15 );
    }
  }
  v18 = v2->fields.modes;
  if ( !v18 )
    goto LABEL_18;
  if ( (_DWORD)v5 == LODWORD(v18->max_length) )
  {
    v19 = (System_Collections_Generic_List_float__o *)sub_2213CCC(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor_72016796(
      v19,
      curveWeight,
      (const MethodInfo_44AE39C *)Method_System_Collections_Generic_List_float___ctor___91664480);
    if ( p_curveWeight->klass && v19 )
    {
      System_Collections_Generic_List_float___RemoveAt(
        v19,
        LODWORD(p_curveWeight->klass->_1.namespaze) - 1,
        (const MethodInfo_44B0234 *)Method_System_Collections_Generic_List_float__RemoveAt__);
      v20 = System_Collections_Generic_List_float___ToArray(
              v19,
              (const MethodInfo_44B0570 *)Method_System_Collections_Generic_List_float__ToArray__);
      p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v20;
      sub_2213A04(p_curveWeight, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      return;
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
}


int32_t Custom2dSplineMesh__get_ControlPointCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8

  points = this->fields.points;
  if ( !points )
    sub_2213CDC(this, method);
  return points->max_length;
}


int32_t Custom2dSplineMesh__get_CurveCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned __int64 v3; // x8

  points = this->fields.points;
  if ( !points )
    sub_2213CDC(this, method);
  v3 = 1431655766LL * (LODWORD(points->max_length) - 1);
  return HIDWORD(v3) + (v3 >> 63);
}


bool Custom2dSplineMesh__isJumpcut(
        Custom2dSplineMesh_o *this,
        float now,
        float increment,
        float *jumps,
        const MethodInfo *method)
{
  _BOOL4 CutOnFreePoint; // w8
  __int64 v10; // x0
  __int64 v11; // x1
  float TotalWeight; // s0
  float v13; // s1
  struct System_Single_array *curveWeight; // x8
  il2cpp_array_size_t max_length; // x9
  float v16; // s2
  float *m_Items; // x8
  __int64 v18; // x9
  float v19; // t1
  bool result; // w0

  CutOnFreePoint = this->fields.CutOnFreePoint;
  *jumps = 0.0;
  if ( !CutOnFreePoint || !this->fields.DrawCap )
    return 0;
  TotalWeight = Custom2dSplineMesh__GetTotalWeight(this, (const MethodInfo *)jumps);
  v13 = 0.0 / TotalWeight;
  if ( (float)(0.0 / TotalWeight) <= now )
  {
    curveWeight = this->fields.curveWeight;
    if ( !curveWeight )
      sub_2213CDC(v10, v11);
    max_length = curveWeight->max_length;
    if ( (int)max_length >= 1 )
    {
      v16 = 0.0;
      m_Items = curveWeight->m_Items;
      v18 = (unsigned int)max_length - 1LL;
      do
      {
        v19 = *m_Items++;
        v16 = v16 + v19;
        v13 = v16 / TotalWeight;
      }
      while ( (float)(v16 / TotalWeight) <= now && v18-- != 0 );
    }
  }
  result = 0;
  if ( (float)(now + increment) < 1.0 && v13 < (float)(now + increment) )
  {
    *jumps = v13;
    return 1;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__upVec(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  float v2; // s0
  int32_t flattenAxis; // w8
  float v4; // s4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  v2 = -1.0;
  flattenAxis = this->fields.flattenAxis;
  if ( !this->fields.FlipMesh )
    v2 = 1.0;
  if ( flattenAxis )
    v4 = 0.0;
  else
    v4 = v2;
  if ( flattenAxis == 1 )
    result.fields.y = v2;
  else
    result.fields.y = 0.0;
  if ( flattenAxis == 2 )
    result.fields.z = v2;
  else
    result.fields.z = 0.0;
  if ( flattenAxis == 2 )
    result.fields.y = 0.0;
  if ( (unsigned int)(flattenAxis - 1) >= 2 )
    result.fields.x = v4;
  else
    result.fields.x = 0.0;
  return result;
}