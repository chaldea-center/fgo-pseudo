void Custom2dSplineMesh___cctor(const MethodInfo *method)
{
  if ( (byte_4D30451 & 1) == 0 )
  {
    sub_1C93AD4(&Custom2dSplineMesh_TypeInfo);
    byte_4D30451 = 1;
  }
  LODWORD(Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD) = (struct Custom2dSplineMesh_StaticFields)953267991;
}


void Custom2dSplineMesh___ctor(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector3__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D30450 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4D30450 = 1;
  }
  this->fields.PathRate = 1.0;
  this->fields.UVrate = 0.5;
  *(_QWORD *)&this->fields.complexity = 0x3F7D70A441A00000LL;
  this->fields.DrawWidth = 3.0;
  v3 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v3,
    (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.splinePos = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.splinePos, (int32_t)v3, v4, v5, v6, v7, v8, v9);
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
  bool v7; // w20
  float z; // s11
  float y; // s8
  float v10; // s10
  float v12; // s15
  int32_t CapComplexity; // w8
  int32_t flattenAxis; // w8
  float v15; // s1
  float v16; // s0
  float v17; // s13
  float v18; // s12
  float v19; // s3
  float v20; // s8
  float v21; // s11
  float v22; // s15
  float v23; // s14
  const MethodInfo *v24; // x1
  float v25; // s11
  int32_t v26; // w8
  float v27; // s8
  float v28; // s14
  float v29; // s13
  int32_t v30; // w8
  float v31; // s8
  float v32; // s14
  float v33; // s15
  float v34; // s0
  float v35; // s12
  float v36; // s11
  int32_t v37; // w8
  float v38; // s14
  float v39; // s10
  float v40; // s8
  float v41; // s11
  System_Collections_Generic_List_Vector3__o *verts; // x0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  float *v46; // x8
  struct UnityEngine_Vector3_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  float *v50; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x21
  struct UnityEngine_Vector2_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Collections_Generic_List_Vector2__o *v55; // x21
  struct UnityEngine_Vector2_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  int32_t v59; // w8
  float v60; // s12
  float v61; // s13
  float v62; // s8
  float v63; // s0
  float v64; // s14
  float v65; // s15
  float v66; // s11
  float v67; // s0
  struct UnityEngine_Vector3_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  float *v71; // x8
  struct UnityEngine_Vector3_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  float *v75; // x8
  struct System_Collections_Generic_List_Vector2__o *v76; // x21
  float v77; // s9
  struct UnityEngine_Vector2_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  struct System_Collections_Generic_List_Vector2__o *v81; // x21
  UnityEngine_Vector2_o v82; // kr50_8
  struct UnityEngine_Vector2_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  float *v86; // x8
  int32_t v87; // w8
  float v88; // s1
  float v89; // s12
  float v90; // s0
  float v91; // s11
  float v92; // s2
  float v93; // s13
  float v94; // s9
  float v95; // s10
  float v96; // s8
  struct UnityEngine_Vector3_array *v97; // x8
  _QWORD *v98; // x9
  __int64 v99; // x10
  float *v100; // x8
  struct UnityEngine_Vector3_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  float *v104; // x8
  struct System_Collections_Generic_List_Vector2__o *v105; // x20
  struct UnityEngine_Vector2_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  struct System_Collections_Generic_List_Vector2__o *v109; // x20
  Custom2dSplineMesh_o *v110; // x0
  float v114; // s13
  float v115; // s0
  float v116; // s1
  struct UnityEngine_Vector3_array *v117; // x8
  _QWORD *v118; // x9
  __int64 v119; // x10
  float *v120; // x8
  struct UnityEngine_Vector3_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  float *v124; // x8
  struct System_Collections_Generic_List_Vector2__o *v125; // x21
  struct UnityEngine_Vector2_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  struct System_Collections_Generic_List_Vector2__o *v129; // x21
  struct UnityEngine_Vector2_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  float v133; // s2
  float v134; // s0
  float v135; // s1
  float v136; // s10
  int32_t v137; // w8
  float v138; // s9
  float v139; // s8
  int32_t v140; // w8
  float v141; // s0
  float v142; // s9
  struct UnityEngine_Vector3_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  float *v146; // x8
  struct System_Collections_Generic_List_Vector2__o *v147; // x21
  struct UnityEngine_Vector2_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  int32_t v151; // w8
  int v152; // w21
  int v153; // w27
  float v154; // s11
  float v155; // s12
  float v156; // s13
  float v157; // s10
  float v158; // s9
  int32_t v159; // w8
  float v160; // s8
  float v161; // s14
  struct UnityEngine_Vector3_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  float *v165; // x8
  struct System_Collections_Generic_List_Vector2__o *v166; // x20
  struct UnityEngine_Vector2_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  struct UnityEngine_Vector3_array *v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  int v173; // w20
  int32_t vtxIdx; // w9
  struct UnityEngine_Vector3_array *v175; // x8
  _QWORD *v176; // x10
  __int64 v177; // x11
  int32_t v178; // w9
  struct UnityEngine_Vector3_array *v179; // x8
  _QWORD *v180; // x10
  __int64 v181; // x11
  int32_t *p_vtxIdx; // x19
  int32_t v183; // t1
  int32_t v184; // w8
  float v185; // s15
  int32_t v186; // w8
  float v187; // s12
  struct UnityEngine_Vector3_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
  int32_t v191; // w9
  struct UnityEngine_Vector3_array *v192; // x8
  _QWORD *v193; // x10
  __int64 v194; // x11
  int32_t v195; // w9
  struct UnityEngine_Vector3_array *v196; // x8
  _QWORD *v197; // x10
  __int64 v198; // x11
  unsigned int max_length; // w12
  struct UnityEngine_Vector3_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  int32_t v203; // w9
  struct UnityEngine_Vector3_array *v204; // x8
  _QWORD *v205; // x10
  __int64 v206; // x11
  int32_t v207; // w9
  struct UnityEngine_Vector3_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  float *v211; // x8
  struct System_Collections_Generic_List_Vector2__o *v212; // x20
  struct UnityEngine_Vector2_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  int32_t v216; // t1
  int v217; // w8
  int32_t *v218; // x20
  struct UnityEngine_Vector3_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  float *v222; // x8
  struct UnityEngine_Vector3_array *v223; // x8
  _QWORD *v224; // x9
  __int64 v225; // x10
  float *v226; // x8
  struct System_Collections_Generic_List_Vector2__o *v227; // x21
  struct UnityEngine_Vector2_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  struct System_Collections_Generic_List_Vector2__o *v231; // x21
  struct UnityEngine_Vector2_array *v232; // x8
  _QWORD *v233; // x9
  __int64 v234; // x10
  int32_t v235; // w8
  float v236; // s8
  float v237; // s12
  float v238; // s13
  float v239; // s0
  float v240; // s14
  float v241; // s11
  float v242; // s15
  float v243; // s0
  struct UnityEngine_Vector3_array *v244; // x8
  _QWORD *v245; // x9
  __int64 v246; // x10
  float *v247; // x8
  struct UnityEngine_Vector3_array *v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  float *v251; // x8
  struct System_Collections_Generic_List_Vector2__o *v252; // x21
  struct UnityEngine_Vector2_array *v253; // x8
  _QWORD *v254; // x9
  __int64 v255; // x10
  struct System_Collections_Generic_List_Vector2__o *v256; // x21
  struct UnityEngine_Vector2_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  const MethodInfo *v260; // x1
  float v261; // s13
  int32_t v262; // w8
  float v263; // s11
  float v264; // s12
  float v265; // s14
  float v266; // s10
  int32_t v267; // w8
  float v268; // s9
  struct UnityEngine_Vector3_array *v269; // x8
  _QWORD *v270; // x9
  __int64 v271; // x10
  float *v272; // x8
  struct UnityEngine_Vector3_array *v273; // x8
  _QWORD *v274; // x9
  __int64 v275; // x10
  float *v276; // x8
  struct System_Collections_Generic_List_Vector2__o *v277; // x20
  struct UnityEngine_Vector2_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  struct UnityEngine_Vector2_array *v281; // x8
  _QWORD *v282; // x9
  __int64 v283; // x10
  struct UnityEngine_Vector3_array *v284; // x8
  _QWORD *v285; // x9
  __int64 v286; // x10
  int32_t v287; // w9
  struct UnityEngine_Vector3_array *v288; // x8
  _QWORD *v289; // x10
  __int64 v290; // x11
  int32_t v291; // w9
  struct UnityEngine_Vector3_array *v292; // x8
  _QWORD *v293; // x10
  __int64 v294; // x11
  int32_t v295; // w9
  struct UnityEngine_Vector3_array *v296; // x8
  _QWORD *v297; // x10
  __int64 v298; // x11
  int32_t v299; // w9
  struct UnityEngine_Vector3_array *v300; // x8
  _QWORD *v301; // x10
  __int64 v302; // x11
  int32_t v303; // w9
  struct UnityEngine_Vector3_array *v304; // x8
  _QWORD *v305; // x10
  __int64 v306; // x11
  int32_t v307; // w1
  float v308; // [xsp+14h] [xbp-ACh]
  float v309; // [xsp+14h] [xbp-ACh]
  float v310; // [xsp+18h] [xbp-A8h]
  float v311; // [xsp+18h] [xbp-A8h]
  float x; // [xsp+1Ch] [xbp-A4h]
  float v313; // [xsp+28h] [xbp-98h]
  float item; // [xsp+2Ch] [xbp-94h]
  UnityEngine_Vector3_o v315; // 0:kr00_12.12
  UnityEngine_Vector3_o v316; // 0:kr14_12.12
  UnityEngine_Vector3_o v317; // 0:kr20_12.12
  UnityEngine_Vector3_o v318; // 0:kr34_12.12
  UnityEngine_Vector3_o v319; // 0:kr40_12.12
  UnityEngine_Vector2_o UV_42287180; // 0:s0.4,4:s1.4
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
  UnityEngine_Vector2_o v331; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v332; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v333; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v334; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v335; // 0:s0.4,4:s1.4
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
  UnityEngine_Vector3_o v364; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v365; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v367; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v368; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v369; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v370; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v371; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v372; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v373; // 0:s1.4,4:s2.4,8:s3.4

  v7 = isTail;
  z = normalizedDir.fields.z;
  y = normalizedDir.fields.y;
  v10 = pos.fields.y;
  x = normalizedDir.fields.x;
  v313 = pos.fields.x;
  item = pos.fields.z;
  if ( (byte_4D3044F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__Add__);
    byte_4D3044F = 1;
  }
  v369.fields.y = offset.fields.y;
  v12 = offset.fields.x;
  if ( !this->fields.StrictUVmode )
  {
LABEL_7:
    v308 = y;
    v310 = z;
    if ( !v7 )
    {
      flattenAxis = this->fields.flattenAxis;
      v15 = v313 - (float)(x * width);
      v16 = v10 - (float)(y * width);
      v17 = offset.fields.x + v15;
      v18 = offset.fields.y + v16;
      if ( flattenAxis == 2 )
      {
        v23 = v15 - offset.fields.x;
        v21 = v16 - offset.fields.y;
        v20 = 0.0;
        v22 = 0.0;
      }
      else
      {
        v19 = item - (float)(z * width);
        v20 = offset.fields.z + v19;
        if ( flattenAxis == 1 )
        {
          v23 = v15 - offset.fields.x;
          v22 = v19 - offset.fields.z;
          v18 = 0.0;
          v21 = 0.0;
        }
        else if ( flattenAxis )
        {
          v23 = v15 - offset.fields.x;
          v21 = v16 - offset.fields.y;
          v22 = v19 - offset.fields.z;
        }
        else
        {
          v21 = v16 - offset.fields.y;
          v22 = v19 - offset.fields.z;
          v17 = 0.0;
          v23 = 0.0;
        }
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      items = verts->fields._items;
      v44 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !items )
        goto LABEL_374;
      size = verts->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v336.fields.x = v17;
        v336.fields.y = v18;
        v336.fields.z = v20;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v336,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
      }
      else
      {
        v46 = (float *)((char *)items + 12 * size);
        verts->fields._size = size + 1;
        v46[8] = v17;
        v46[9] = v18;
        v46[10] = v20;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v47 = verts->fields._items;
      v48 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v47 )
        goto LABEL_374;
      v49 = verts->fields._size;
      if ( (unsigned int)v49 >= LODWORD(v47->max_length) )
      {
        v337.fields.x = v23;
        v337.fields.y = v21;
        v337.fields.z = v22;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v337,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (float *)((char *)v47 + 12 * v49);
        verts->fields._size = v49 + 1;
        v50[8] = v23;
        v50[9] = v21;
        v50[10] = v22;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v338.fields.x = v17;
        v338.fields.y = v18;
        v338.fields.z = v20;
        UV_42287180 = Custom2dSplineMesh__GetUV_42287180(this, v338, (const MethodInfo *)isTail);
        if ( !uvs )
          goto LABEL_374;
      }
      else
      {
        UV_42287180.fields.y = this->fields.capVmin;
        UV_42287180.fields.x = 0.0;
        if ( !uvs )
          goto LABEL_374;
      }
      v52 = uvs->fields._items;
      v53 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++uvs->fields._version;
      if ( !v52 )
        goto LABEL_374;
      v54 = uvs->fields._size;
      if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          UV_42287180,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = v54 + 1;
        v52->m_Items[v54] = UV_42287180;
      }
      v55 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v339.fields.x = v23;
        v339.fields.y = v21;
        v339.fields.z = v22;
        v321 = Custom2dSplineMesh__GetUV_42287180(this, v339, (const MethodInfo *)isTail);
      }
      else
      {
        v321.fields.y = this->fields.capVmax;
        v321.fields.x = 0.0;
      }
      v12 = offset.fields.x;
      if ( !v55 )
        goto LABEL_374;
      v56 = v55->fields._items;
      v57 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v55->fields._version;
      if ( !v56 )
        goto LABEL_374;
      v58 = v55->fields._size;
      if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v55,
          v321,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
      }
      else
      {
        v55->fields._size = v58 + 1;
        v56->m_Items[v58] = v321;
      }
      v369.fields.y = offset.fields.y;
    }
    v59 = this->fields.flattenAxis;
    v60 = v10 + v369.fields.y;
    v61 = v313 + v12;
    if ( v59 == 2 )
    {
      v64 = v10 - v369.fields.y;
      v62 = 0.0;
      v66 = 0.0;
      v65 = v313 - v12;
LABEL_64:
      verts = this->fields.verts;
      if ( verts )
      {
        v68 = verts->fields._items;
        v69 = Method_System_Collections_Generic_List_Vector3__Add__;
        ++verts->fields._version;
        if ( v68 )
        {
          v70 = verts->fields._size;
          if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
          {
            v340.fields.x = v61;
            v340.fields.y = v60;
            v340.fields.z = v62;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v340,
              *(const MethodInfo_38F993C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = (float *)((char *)v68 + 12 * v70);
            verts->fields._size = v70 + 1;
            v71[8] = v61;
            v71[9] = v60;
            v71[10] = v62;
          }
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
                v341.fields.x = v65;
                v341.fields.y = v64;
                v341.fields.z = v66;
                System_Collections_Generic_List_Vector3___AddWithResize(
                  verts,
                  v341,
                  *(const MethodInfo_38F993C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
              }
              else
              {
                v75 = (float *)((char *)v72 + 12 * v74);
                verts->fields._size = v74 + 1;
                v75[8] = v65;
                v75[9] = v64;
                v75[10] = v66;
              }
              v76 = this->fields.uvs;
              v77 = v7 ? 0.75 : 0.25;
              if ( this->fields.StrictUVmode )
              {
                v342.fields.x = v61;
                v342.fields.y = v60;
                v342.fields.z = v62;
                v322 = Custom2dSplineMesh__GetUV_42287180(this, v342, (const MethodInfo *)isTail);
                if ( !v76 )
                  goto LABEL_374;
              }
              else
              {
                v322.fields.y = this->fields.capVmin;
                v322.fields.x = v77;
                if ( !v76 )
                  goto LABEL_374;
              }
              v78 = v76->fields._items;
              v79 = Method_System_Collections_Generic_List_Vector2__Add__;
              ++v76->fields._version;
              if ( v78 )
              {
                v80 = v76->fields._size;
                if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
                {
                  System_Collections_Generic_List_Vector2___AddWithResize(
                    v76,
                    v322,
                    *(const MethodInfo_38F7064 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v76->fields._size = v80 + 1;
                  v78->m_Items[v80] = v322;
                }
                v81 = this->fields.uvs;
                if ( this->fields.StrictUVmode )
                {
                  v343.fields.x = v65;
                  v343.fields.y = v64;
                  v343.fields.z = v66;
                  v82 = Custom2dSplineMesh__GetUV_42287180(this, v343, (const MethodInfo *)isTail);
                  v323.fields.y = v82.fields.y;
                  v77 = v82.fields.x;
                }
                else
                {
                  v323.fields.y = this->fields.capVmax;
                }
                if ( v81 )
                {
                  v83 = v81->fields._items;
                  v84 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v81->fields._version;
                  if ( v83 )
                  {
                    v85 = v81->fields._size;
                    if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
                    {
                      v323.fields.x = v77;
                      System_Collections_Generic_List_Vector2___AddWithResize(
                        v81,
                        v323,
                        *(const MethodInfo_38F7064 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v86 = (float *)(&v83->obj.klass + v85);
                      v81->fields._size = v85 + 1;
                      v86[8] = v77;
                      v86[9] = v323.fields.y;
                    }
                    if ( v7 )
                    {
                      v87 = this->fields.flattenAxis;
                      v88 = v313 + (float)(x * width);
                      v89 = offset.fields.x + v88;
                      v90 = v10 + (float)(v308 * width);
                      v91 = offset.fields.y + v90;
                      if ( v87 == 2 )
                      {
                        v96 = v88 - offset.fields.x;
                        v94 = v90 - offset.fields.y;
                        v93 = 0.0;
                        v95 = 0.0;
                      }
                      else
                      {
                        v92 = item + (float)(v310 * width);
                        v93 = offset.fields.z + v92;
                        if ( v87 == 1 )
                        {
                          v96 = v88 - offset.fields.x;
                          v95 = v92 - offset.fields.z;
                          v91 = 0.0;
                          v94 = 0.0;
                        }
                        else if ( v87 )
                        {
                          v96 = v88 - offset.fields.x;
                          v94 = v90 - offset.fields.y;
                          v95 = v92 - offset.fields.z;
                        }
                        else
                        {
                          v94 = v90 - offset.fields.y;
                          v95 = v92 - offset.fields.z;
                          v89 = 0.0;
                          v96 = 0.0;
                        }
                      }
                      verts = this->fields.verts;
                      if ( !verts )
                        goto LABEL_374;
                      v97 = verts->fields._items;
                      v98 = Method_System_Collections_Generic_List_Vector3__Add__;
                      ++verts->fields._version;
                      if ( !v97 )
                        goto LABEL_374;
                      v99 = verts->fields._size;
                      if ( (unsigned int)v99 >= LODWORD(v97->max_length) )
                      {
                        v344.fields.x = v89;
                        v344.fields.y = v91;
                        v344.fields.z = v93;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v344,
                          *(const MethodInfo_38F993C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v100 = (float *)((char *)v97 + 12 * v99);
                        verts->fields._size = v99 + 1;
                        v100[8] = v89;
                        v100[9] = v91;
                        v100[10] = v93;
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
                        v345.fields.x = v96;
                        v345.fields.y = v94;
                        v345.fields.z = v95;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v345,
                          *(const MethodInfo_38F993C **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v104 = (float *)((char *)v101 + 12 * v103);
                        verts->fields._size = v103 + 1;
                        v104[8] = v96;
                        v104[9] = v94;
                        v104[10] = v95;
                      }
                      v105 = this->fields.uvs;
                      if ( this->fields.StrictUVmode )
                      {
                        v346.fields.x = v89;
                        v346.fields.y = v91;
                        v346.fields.z = v93;
                        v324 = Custom2dSplineMesh__GetUV_42287180(this, v346, (const MethodInfo *)isTail);
                        if ( !v105 )
                          goto LABEL_374;
                      }
                      else
                      {
                        v324.fields.y = this->fields.capVmin;
                        v324.fields.x = 1.0;
                        if ( !v105 )
                          goto LABEL_374;
                      }
                      v106 = v105->fields._items;
                      v107 = Method_System_Collections_Generic_List_Vector2__Add__;
                      ++v105->fields._version;
                      if ( !v106 )
                        goto LABEL_374;
                      v108 = v105->fields._size;
                      if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
                      {
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v105,
                          v324,
                          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v105->fields._size = v108 + 1;
                        v106->m_Items[v108] = v324;
                      }
                      v109 = this->fields.uvs;
                      if ( !this->fields.StrictUVmode )
                      {
                        v325.fields.y = this->fields.capVmax;
                        v325.fields.x = 1.0;
                        if ( !v109 )
                          goto LABEL_374;
                        goto LABEL_343;
                      }
                      v110 = this;
                      v347.fields.x = v96;
                      v347.fields.y = v94;
                      v347.fields.z = v95;
LABEL_342:
                      v325 = Custom2dSplineMesh__GetUV_42287180(v110, v347, (const MethodInfo *)isTail);
                      if ( !v109 )
                        goto LABEL_374;
LABEL_343:
                      v281 = v109->fields._items;
                      v282 = Method_System_Collections_Generic_List_Vector2__Add__;
                      ++v109->fields._version;
                      if ( !v281 )
                        goto LABEL_374;
                      v283 = v109->fields._size;
                      if ( (unsigned int)v283 >= LODWORD(v281->max_length) )
                      {
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v109,
                          v325,
                          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v109->fields._size = v283 + 1;
                        v281->m_Items[v283] = v325;
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
      sub_1C93D2C(verts, isTail);
    }
    v62 = item + offset.fields.z;
    if ( v59 == 1 )
    {
      v67 = v313;
      v60 = 0.0;
      v64 = 0.0;
    }
    else
    {
      if ( !v59 )
      {
        v63 = item;
        v64 = v10 - v369.fields.y;
        v61 = 0.0;
        v65 = 0.0;
LABEL_63:
        v66 = v63 - offset.fields.z;
        goto LABEL_64;
      }
      v67 = v313;
      v64 = v10 - v369.fields.y;
    }
    v65 = v67 - v12;
    v63 = item;
    goto LABEL_63;
  }
  CapComplexity = this->fields.CapComplexity;
  if ( CapComplexity != 2 )
  {
    if ( CapComplexity != 1 )
    {
      if ( !CapComplexity )
        goto LABEL_7;
      v37 = this->fields.flattenAxis;
      if ( v37 )
      {
        v38 = v10;
        v39 = offset.fields.z;
        if ( v37 == 1 )
        {
          v40 = v313;
          v41 = item;
          v142 = 0.0;
        }
        else
        {
          v40 = v313;
          if ( v37 == 2 )
            v41 = 0.0;
          else
            v41 = item;
          v142 = v38;
        }
      }
      else
      {
        v41 = item;
        v141 = v10;
        v39 = offset.fields.z;
        v40 = 0.0;
        v38 = v141;
        v142 = v141;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v143 = verts->fields._items;
      v144 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v143 )
        goto LABEL_374;
      v145 = verts->fields._size;
      if ( (unsigned int)v145 >= LODWORD(v143->max_length) )
      {
        v352.fields.x = v40;
        v352.fields.y = v142;
        v352.fields.z = v41;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v352,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
      }
      else
      {
        v146 = (float *)((char *)v143 + 12 * v145);
        verts->fields._size = v145 + 1;
        v146[8] = v40;
        v146[9] = v142;
        v146[10] = v41;
      }
      v147 = this->fields.uvs;
      v353.fields.x = v40;
      v353.fields.y = v142;
      v353.fields.z = v41;
      v328 = Custom2dSplineMesh__GetUV_42287180(this, v353, (const MethodInfo *)isTail);
      if ( !v147 )
        goto LABEL_374;
      v148 = v147->fields._items;
      v149 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v147->fields._version;
      if ( !v148 )
        goto LABEL_374;
      v150 = v147->fields._size;
      if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v147,
          v328,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
      }
      else
      {
        v147->fields._size = v150 + 1;
        v148->m_Items[v150] = v328;
      }
      v151 = this->fields.CapComplexity;
      v152 = v151 + 1;
      if ( v151 + 1 >= 0 )
      {
        v153 = 0;
        if ( v7 )
          v154 = -v39;
        else
          v154 = v39;
        if ( v7 )
          v155 = -offset.fields.y;
        else
          v155 = offset.fields.y;
        if ( v7 )
          v156 = -offset.fields.x;
        else
          v156 = offset.fields.x;
        v157 = v38;
        do
        {
          v371.fields.x = v156;
          v371.fields.y = v155;
          v371.fields.z = v154;
          v316 = Custom2dSplineMesh__RotateVec3(
                   this,
                   (float)((float)v153 * 180.0) / (float)v152,
                   v371,
                   (const MethodInfo *)isTail);
          v158 = v157 + v316.fields.y;
          v159 = this->fields.flattenAxis;
          v160 = item + v316.fields.z;
          if ( v159 )
          {
            v161 = v313 + v316.fields.x;
            if ( v159 == 1 )
            {
              v158 = 0.0;
            }
            else if ( v159 == 2 )
            {
              v160 = 0.0;
            }
          }
          else
          {
            v161 = 0.0;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v162 = verts->fields._items;
          v163 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v162 )
            goto LABEL_374;
          v164 = verts->fields._size;
          if ( (unsigned int)v164 >= LODWORD(v162->max_length) )
          {
            v354.fields.x = v161;
            v354.fields.y = v158;
            v354.fields.z = v160;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v354,
              *(const MethodInfo_38F993C **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
          }
          else
          {
            v165 = (float *)((char *)v162 + 12 * v164);
            verts->fields._size = v164 + 1;
            v165[8] = v161;
            v165[9] = v158;
            v165[10] = v160;
          }
          v166 = this->fields.uvs;
          v355.fields.x = v161;
          v355.fields.y = v158;
          v355.fields.z = v160;
          v329 = Custom2dSplineMesh__GetUV_42287180(this, v355, (const MethodInfo *)isTail);
          if ( !v166 )
            goto LABEL_374;
          v167 = v166->fields._items;
          v168 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v166->fields._version;
          if ( !v167 )
            goto LABEL_374;
          v169 = v166->fields._size;
          if ( (unsigned int)v169 >= LODWORD(v167->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v166,
              v329,
              *(const MethodInfo_38F7064 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
          }
          else
          {
            v166->fields._size = v169 + 1;
            v167->m_Items[v169] = v329;
          }
          if ( v153 <= 0 )
          {
            v173 = v153 + 1;
          }
          else
          {
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v170 = verts->fields._items;
            v171 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v170 )
              goto LABEL_374;
            v172 = verts->fields._size;
            if ( (unsigned int)v172 >= LODWORD(v170->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v172 + 1;
              *((_DWORD *)&v170->m_Items[0].fields.x + v172) = isTail;
            }
            vtxIdx = this->fields.vtxIdx;
            v175 = verts->fields._items;
            v176 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v175 )
              goto LABEL_374;
            v177 = verts->fields._size;
            v173 = v153 + 1;
            *(_QWORD *)&isTail = (unsigned int)(v153 + 1 + vtxIdx);
            if ( (unsigned int)v177 >= LODWORD(v175->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v177 + 1;
              *((_DWORD *)&v175->m_Items[0].fields.x + v177) = isTail;
            }
            v178 = this->fields.vtxIdx;
            v179 = verts->fields._items;
            v180 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v179 )
              goto LABEL_374;
            v181 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v178 + v153);
            if ( (unsigned int)v181 >= LODWORD(v179->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
            }
            else
            {
              verts->fields._size = v181 + 1;
              *((_DWORD *)&v179->m_Items[0].fields.x + v181) = isTail;
            }
          }
          v153 = v173;
        }
        while ( v173 <= v152 );
        v151 = this->fields.CapComplexity;
      }
      v183 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v184 = v183 + v151;
LABEL_262:
      v217 = v184 + 3;
      v218 = p_vtxIdx;
      goto LABEL_373;
    }
    v30 = this->fields.flattenAxis;
    v309 = y;
    v311 = z;
    v31 = v10 + offset.fields.y;
    v32 = v313 + offset.fields.x;
    if ( v30 == 2 )
    {
      v35 = v10 - offset.fields.y;
      v114 = 0.0;
      v36 = v313 - offset.fields.x;
      v33 = 0.0;
LABEL_128:
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v117 = verts->fields._items;
      v118 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v117 )
        goto LABEL_374;
      v119 = verts->fields._size;
      if ( (unsigned int)v119 >= LODWORD(v117->max_length) )
      {
        v348.fields.x = v32;
        v348.fields.y = v31;
        v348.fields.z = v33;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v348,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
      }
      else
      {
        v120 = (float *)((char *)v117 + 12 * v119);
        verts->fields._size = v119 + 1;
        v120[8] = v32;
        v120[9] = v31;
        v120[10] = v33;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v121 = verts->fields._items;
      v122 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v121 )
        goto LABEL_374;
      v123 = verts->fields._size;
      if ( (unsigned int)v123 >= LODWORD(v121->max_length) )
      {
        v349.fields.x = v36;
        v349.fields.y = v35;
        v349.fields.z = v114;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v349,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
      }
      else
      {
        v124 = (float *)((char *)v121 + 12 * v123);
        verts->fields._size = v123 + 1;
        v124[8] = v36;
        v124[9] = v35;
        v124[10] = v114;
      }
      v125 = this->fields.uvs;
      v350.fields.x = v32;
      v350.fields.y = v31;
      v350.fields.z = v33;
      v326 = Custom2dSplineMesh__GetUV_42287180(this, v350, (const MethodInfo *)isTail);
      if ( !v125 )
        goto LABEL_374;
      v126 = v125->fields._items;
      v127 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v125->fields._version;
      if ( !v126 )
        goto LABEL_374;
      v128 = v125->fields._size;
      if ( (unsigned int)v128 >= LODWORD(v126->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v125,
          v326,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
      }
      else
      {
        v125->fields._size = v128 + 1;
        v126->m_Items[v128] = v326;
      }
      v129 = this->fields.uvs;
      v351.fields.x = v36;
      v351.fields.y = v35;
      v351.fields.z = v114;
      v327 = Custom2dSplineMesh__GetUV_42287180(this, v351, (const MethodInfo *)isTail);
      if ( !v129 )
        goto LABEL_374;
      v130 = v129->fields._items;
      v131 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v129->fields._version;
      if ( !v130 )
        goto LABEL_374;
      v132 = v129->fields._size;
      if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v129,
          v327,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
      }
      else
      {
        v129->fields._size = v132 + 1;
        v130->m_Items[v132] = v327;
      }
      v133 = v311 * width;
      v134 = x * width;
      v135 = v309 * width;
      if ( v7 )
      {
        v136 = v10 + v135;
        v137 = this->fields.flattenAxis;
        v138 = item + v133;
        if ( v137 )
        {
          v139 = v313 + v134;
          if ( v137 == 1 )
          {
            v136 = 0.0;
          }
          else if ( v137 == 2 )
          {
            v138 = 0.0;
          }
        }
        else
        {
          v139 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
        v188 = verts->fields._items;
        v189 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v188 )
          goto LABEL_374;
        v190 = verts->fields._size;
        if ( (unsigned int)v190 >= LODWORD(v188->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v190 + 1;
          *((_DWORD *)&v188->m_Items[0].fields.x + v190) = isTail;
        }
        v191 = this->fields.vtxIdx;
        v192 = verts->fields._items;
        v193 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v192 )
          goto LABEL_374;
        v194 = verts->fields._size;
        *(_QWORD *)&isTail = (unsigned int)(v191 + 2);
        if ( (unsigned int)v194 >= LODWORD(v192->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v194 + 1;
          *((_DWORD *)&v192->m_Items[0].fields.x + v194) = isTail;
        }
        v195 = this->fields.vtxIdx;
        v196 = verts->fields._items;
        v197 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v196 )
          goto LABEL_374;
        v198 = verts->fields._size;
        max_length = v196->max_length;
        *(_QWORD *)&isTail = (unsigned int)(v195 + 1);
      }
      else
      {
        v136 = v10 - v135;
        v140 = this->fields.flattenAxis;
        v138 = item - v133;
        if ( v140 )
        {
          v139 = v313 - v134;
          if ( v140 == 1 )
          {
            v136 = 0.0;
          }
          else if ( v140 == 2 )
          {
            v138 = 0.0;
          }
        }
        else
        {
          v139 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
        v200 = verts->fields._items;
        v201 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v200 )
          goto LABEL_374;
        v202 = verts->fields._size;
        if ( (unsigned int)v202 >= LODWORD(v200->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v202 + 1;
          *((_DWORD *)&v200->m_Items[0].fields.x + v202) = isTail;
        }
        v203 = this->fields.vtxIdx;
        v204 = verts->fields._items;
        v205 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v204 )
          goto LABEL_374;
        v206 = verts->fields._size;
        *(_QWORD *)&isTail = (unsigned int)(v203 + 1);
        if ( (unsigned int)v206 >= LODWORD(v204->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v205[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v206 + 1;
          *((_DWORD *)&v204->m_Items[0].fields.x + v206) = isTail;
        }
        v207 = this->fields.vtxIdx;
        v196 = verts->fields._items;
        v197 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v196 )
          goto LABEL_374;
        v198 = verts->fields._size;
        max_length = v196->max_length;
        *(_QWORD *)&isTail = (unsigned int)(v207 + 2);
      }
      if ( (unsigned int)v198 >= max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)verts,
          isTail,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v197[4] + 192LL) + 112LL));
      }
      else
      {
        verts->fields._size = v198 + 1;
        *((_DWORD *)&v196->m_Items[0].fields.x + v198) = isTail;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v208 = verts->fields._items;
      v209 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v208 )
        goto LABEL_374;
      v210 = verts->fields._size;
      if ( (unsigned int)v210 >= LODWORD(v208->max_length) )
      {
        v356.fields.x = v139;
        v356.fields.y = v136;
        v356.fields.z = v138;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v356,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
      }
      else
      {
        v211 = (float *)((char *)v208 + 12 * v210);
        verts->fields._size = v210 + 1;
        v211[8] = v139;
        v211[9] = v136;
        v211[10] = v138;
      }
      v212 = this->fields.uvs;
      v357.fields.x = v139;
      v357.fields.y = v136;
      v357.fields.z = v138;
      v330 = Custom2dSplineMesh__GetUV_42287180(this, v357, (const MethodInfo *)isTail);
      if ( !v212 )
        goto LABEL_374;
      v213 = v212->fields._items;
      v214 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v212->fields._version;
      if ( !v213 )
        goto LABEL_374;
      v215 = v212->fields._size;
      if ( (unsigned int)v215 >= LODWORD(v213->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v212,
          v330,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
      }
      else
      {
        v212->fields._size = v215 + 1;
        v213->m_Items[v215] = v330;
      }
      v216 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v184 = v216;
      goto LABEL_262;
    }
    v33 = item + offset.fields.z;
    if ( v30 == 1 )
    {
      v115 = v313;
      v116 = offset.fields.x;
      v31 = 0.0;
      v35 = 0.0;
    }
    else
    {
      if ( !v30 )
      {
        v34 = item;
        v35 = v10 - offset.fields.y;
        v32 = 0.0;
        v36 = 0.0;
LABEL_127:
        v114 = v34 - offset.fields.z;
        goto LABEL_128;
      }
      v115 = v313;
      v116 = offset.fields.x;
      v35 = v10 - offset.fields.y;
    }
    v36 = v115 - v116;
    v34 = item;
    goto LABEL_127;
  }
  if ( !v7 )
  {
    v369.fields.x = offset.fields.x;
    v369.fields.z = offset.fields.z;
    v315 = Custom2dSplineMesh__RotateVec3(this, 60.0, v369, (const MethodInfo *)isTail);
    v25 = v10 + v315.fields.y;
    v26 = this->fields.flattenAxis;
    v27 = 0.0;
    v28 = item + v315.fields.z;
    if ( v26 )
    {
      v370.fields.y = offset.fields.y;
      v29 = v313 + v315.fields.x;
      if ( v26 == 1 )
      {
        v25 = 0.0;
      }
      else if ( v26 == 2 )
      {
        v28 = 0.0;
      }
    }
    else
    {
      v370.fields.y = offset.fields.y;
      v29 = 0.0;
    }
    v370.fields.x = offset.fields.x;
    v370.fields.z = offset.fields.z;
    v317 = Custom2dSplineMesh__RotateVec3(this, 120.0, v370, v24);
    v185 = v10 + v317.fields.y;
    v186 = this->fields.flattenAxis;
    v187 = item + v317.fields.z;
    if ( v186 )
    {
      v27 = v313 + v317.fields.x;
      if ( v186 == 1 )
      {
        v185 = 0.0;
      }
      else if ( v186 == 2 )
      {
        v187 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v219 = verts->fields._items;
    v220 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v219 )
      goto LABEL_374;
    v221 = verts->fields._size;
    if ( (unsigned int)v221 >= LODWORD(v219->max_length) )
    {
      v358.fields.x = v29;
      v358.fields.y = v25;
      v358.fields.z = v28;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v358,
        *(const MethodInfo_38F993C **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
    }
    else
    {
      v222 = (float *)((char *)v219 + 12 * v221);
      verts->fields._size = v221 + 1;
      v222[8] = v29;
      v222[9] = v25;
      v222[10] = v28;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v223 = verts->fields._items;
    v224 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v223 )
      goto LABEL_374;
    v225 = verts->fields._size;
    if ( (unsigned int)v225 >= LODWORD(v223->max_length) )
    {
      v359.fields.x = v27;
      v359.fields.y = v185;
      v359.fields.z = v187;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v359,
        *(const MethodInfo_38F993C **)(*(_QWORD *)(v224[4] + 192LL) + 112LL));
    }
    else
    {
      v226 = (float *)((char *)v223 + 12 * v225);
      verts->fields._size = v225 + 1;
      v226[8] = v27;
      v226[9] = v185;
      v226[10] = v187;
    }
    v227 = this->fields.uvs;
    v360.fields.x = v29;
    v360.fields.y = v25;
    v360.fields.z = v28;
    v331 = Custom2dSplineMesh__GetUV_42287180(this, v360, (const MethodInfo *)isTail);
    if ( !v227 )
      goto LABEL_374;
    v228 = v227->fields._items;
    v229 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v227->fields._version;
    if ( !v228 )
      goto LABEL_374;
    v230 = v227->fields._size;
    if ( (unsigned int)v230 >= LODWORD(v228->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v227,
        v331,
        *(const MethodInfo_38F7064 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
    }
    else
    {
      v227->fields._size = v230 + 1;
      v228->m_Items[v230] = v331;
    }
    v231 = this->fields.uvs;
    v361.fields.x = v27;
    v361.fields.y = v185;
    v361.fields.z = v187;
    v332 = Custom2dSplineMesh__GetUV_42287180(this, v361, (const MethodInfo *)isTail);
    if ( !v231 )
      goto LABEL_374;
    v232 = v231->fields._items;
    v233 = Method_System_Collections_Generic_List_Vector2__Add__;
    v12 = offset.fields.x;
    ++v231->fields._version;
    if ( !v232 )
      goto LABEL_374;
    v234 = v231->fields._size;
    if ( (unsigned int)v234 >= LODWORD(v232->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v231,
        v332,
        *(const MethodInfo_38F7064 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
    }
    else
    {
      v231->fields._size = v234 + 1;
      v232->m_Items[v234] = v332;
    }
    v369.fields.y = offset.fields.y;
  }
  v235 = this->fields.flattenAxis;
  v236 = v10 + v369.fields.y;
  v237 = v313 + v12;
  if ( v235 == 2 )
  {
    v240 = v10 - v369.fields.y;
    v238 = 0.0;
    v241 = v313 - v12;
    v242 = 0.0;
    goto LABEL_294;
  }
  v238 = item + offset.fields.z;
  if ( v235 == 1 )
  {
    v243 = v313;
    v236 = 0.0;
    v240 = 0.0;
LABEL_292:
    v241 = v243 - v12;
    v239 = item;
    goto LABEL_293;
  }
  if ( v235 )
  {
    v243 = v313;
    v240 = v10 - v369.fields.y;
    goto LABEL_292;
  }
  v239 = item;
  v240 = v10 - v369.fields.y;
  v237 = 0.0;
  v241 = 0.0;
LABEL_293:
  v242 = v239 - offset.fields.z;
LABEL_294:
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v244 = verts->fields._items;
  v245 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v244 )
    goto LABEL_374;
  v246 = verts->fields._size;
  if ( (unsigned int)v246 >= LODWORD(v244->max_length) )
  {
    v362.fields.x = v237;
    v362.fields.y = v236;
    v362.fields.z = v238;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v362,
      *(const MethodInfo_38F993C **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
  }
  else
  {
    v247 = (float *)((char *)v244 + 12 * v246);
    verts->fields._size = v246 + 1;
    v247[8] = v237;
    v247[9] = v236;
    v247[10] = v238;
  }
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v248 = verts->fields._items;
  v249 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v248 )
    goto LABEL_374;
  v250 = verts->fields._size;
  if ( (unsigned int)v250 >= LODWORD(v248->max_length) )
  {
    v363.fields.x = v241;
    v363.fields.y = v240;
    v363.fields.z = v242;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v363,
      *(const MethodInfo_38F993C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
  }
  else
  {
    v251 = (float *)((char *)v248 + 12 * v250);
    verts->fields._size = v250 + 1;
    v251[8] = v241;
    v251[9] = v240;
    v251[10] = v242;
  }
  v252 = this->fields.uvs;
  v364.fields.x = v237;
  v364.fields.y = v236;
  v364.fields.z = v238;
  v333 = Custom2dSplineMesh__GetUV_42287180(this, v364, (const MethodInfo *)isTail);
  if ( !v252 )
    goto LABEL_374;
  v253 = v252->fields._items;
  v254 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v252->fields._version;
  if ( !v253 )
    goto LABEL_374;
  v255 = v252->fields._size;
  if ( (unsigned int)v255 >= LODWORD(v253->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v252,
      v333,
      *(const MethodInfo_38F7064 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
  }
  else
  {
    v252->fields._size = v255 + 1;
    v253->m_Items[v255] = v333;
  }
  v256 = this->fields.uvs;
  v365.fields.x = v241;
  v365.fields.y = v240;
  v365.fields.z = v242;
  v334 = Custom2dSplineMesh__GetUV_42287180(this, v365, (const MethodInfo *)isTail);
  if ( !v256 )
    goto LABEL_374;
  v257 = v256->fields._items;
  v258 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v256->fields._version;
  if ( !v257 )
    goto LABEL_374;
  v259 = v256->fields._size;
  if ( (unsigned int)v259 >= LODWORD(v257->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v256,
      v334,
      *(const MethodInfo_38F7064 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
  }
  else
  {
    v256->fields._size = v259 + 1;
    v257->m_Items[v259] = v334;
  }
  if ( v7 )
  {
    v372.fields.x = -offset.fields.x;
    v372.fields.y = -offset.fields.y;
    v372.fields.z = -offset.fields.z;
    v318 = Custom2dSplineMesh__RotateVec3(this, 120.0, v372, (const MethodInfo *)isTail);
    v261 = v10 + v318.fields.y;
    v262 = this->fields.flattenAxis;
    v263 = 0.0;
    v264 = item + v318.fields.z;
    if ( v262 )
    {
      v265 = v313 + v318.fields.x;
      if ( v262 == 1 )
      {
        v261 = 0.0;
      }
      else if ( v262 == 2 )
      {
        v264 = 0.0;
      }
    }
    else
    {
      v265 = 0.0;
    }
    v373.fields.x = -offset.fields.x;
    v373.fields.y = -offset.fields.y;
    v373.fields.z = -offset.fields.z;
    v319 = Custom2dSplineMesh__RotateVec3(this, 60.0, v373, v260);
    v266 = v10 + v319.fields.y;
    v267 = this->fields.flattenAxis;
    v268 = item + v319.fields.z;
    if ( v267 )
    {
      v263 = v313 + v319.fields.x;
      if ( v267 == 1 )
      {
        v266 = 0.0;
      }
      else if ( v267 == 2 )
      {
        v268 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v269 = verts->fields._items;
    v270 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v269 )
      goto LABEL_374;
    v271 = verts->fields._size;
    if ( (unsigned int)v271 >= LODWORD(v269->max_length) )
    {
      v366.fields.x = v265;
      v366.fields.y = v261;
      v366.fields.z = v264;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v366,
        *(const MethodInfo_38F993C **)(*(_QWORD *)(v270[4] + 192LL) + 112LL));
    }
    else
    {
      v272 = (float *)((char *)v269 + 12 * v271);
      verts->fields._size = v271 + 1;
      v272[8] = v265;
      v272[9] = v261;
      v272[10] = v264;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v273 = verts->fields._items;
    v274 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v273 )
      goto LABEL_374;
    v275 = verts->fields._size;
    if ( (unsigned int)v275 >= LODWORD(v273->max_length) )
    {
      v367.fields.x = v263;
      v367.fields.y = v266;
      v367.fields.z = v268;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v367,
        *(const MethodInfo_38F993C **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
    }
    else
    {
      v276 = (float *)((char *)v273 + 12 * v275);
      verts->fields._size = v275 + 1;
      v276[8] = v263;
      v276[9] = v266;
      v276[10] = v268;
    }
    v277 = this->fields.uvs;
    v368.fields.x = v265;
    v368.fields.y = v261;
    v368.fields.z = v264;
    v335 = Custom2dSplineMesh__GetUV_42287180(this, v368, (const MethodInfo *)isTail);
    if ( !v277 )
      goto LABEL_374;
    v278 = v277->fields._items;
    v279 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v277->fields._version;
    if ( !v278 )
      goto LABEL_374;
    v280 = v277->fields._size;
    if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v277,
        v335,
        *(const MethodInfo_38F7064 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    }
    else
    {
      v277->fields._size = v280 + 1;
      v278->m_Items[v280] = v335;
    }
    v109 = this->fields.uvs;
    v110 = this;
    v347.fields.x = v263;
    v347.fields.y = v266;
    v347.fields.z = v268;
    goto LABEL_342;
  }
LABEL_347:
  v218 = &this->fields.vtxIdx;
  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
  if ( !verts )
    goto LABEL_374;
  v284 = verts->fields._items;
  v285 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v284 )
    goto LABEL_374;
  v286 = verts->fields._size;
  if ( (unsigned int)v286 >= LODWORD(v284->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v285[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v286 + 1;
    *((_DWORD *)&v284->m_Items[0].fields.x + v286) = isTail;
  }
  v287 = *v218;
  v288 = verts->fields._items;
  v289 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v288 )
    goto LABEL_374;
  v290 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v287 + 2);
  if ( (unsigned int)v290 >= LODWORD(v288->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v290 + 1;
    *((_DWORD *)&v288->m_Items[0].fields.x + v290) = isTail;
  }
  v291 = *v218;
  v292 = verts->fields._items;
  v293 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v292 )
    goto LABEL_374;
  v294 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v291 + 1);
  if ( (unsigned int)v294 >= LODWORD(v292->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v294 + 1;
    *((_DWORD *)&v292->m_Items[0].fields.x + v294) = isTail;
  }
  v295 = *v218;
  v296 = verts->fields._items;
  v297 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v296 )
    goto LABEL_374;
  v298 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v295 + 2);
  if ( (unsigned int)v298 >= LODWORD(v296->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v298 + 1;
    *((_DWORD *)&v296->m_Items[0].fields.x + v298) = isTail;
  }
  v299 = *v218;
  v300 = verts->fields._items;
  v301 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v300 )
    goto LABEL_374;
  v302 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v299 + 3);
  if ( (unsigned int)v302 >= LODWORD(v300->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v301[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v302 + 1;
    *((_DWORD *)&v300->m_Items[0].fields.x + v302) = isTail;
  }
  v303 = *v218;
  v304 = verts->fields._items;
  v305 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v304 )
    goto LABEL_374;
  v306 = verts->fields._size;
  v307 = v303 + 1;
  if ( (unsigned int)v306 >= LODWORD(v304->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v307,
      *(const MethodInfo_385C978 **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
  }
  else
  {
    verts->fields._size = v306 + 1;
    *((_DWORD *)&v304->m_Items[0].fields.x + v306) = v307;
  }
  v217 = *v218 + 4;
LABEL_373:
  *v218 = v217;
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
  GrandQuestFolderBoardItem_o *p_curveWeight; // x29
  System_Collections_Generic_List_float__o *v13; // x25
  UnityEngine_Transform_o *transform; // x0
  __int64 v15; // x1
  int v16; // kr00_4
  int v17; // w26
  const MethodInfo *v18; // x2
  struct UnityEngine_Vector3_array *v19; // x8
  unsigned int max_length; // w10
  __int64 v21; // x28
  __int64 v22; // x22
  int v23; // w9
  int32_t v24; // w26
  UnityEngine_Transform_o *v25; // x27
  const MethodInfo *v26; // x2
  struct UnityEngine_Vector3_array *v27; // x8
  unsigned int v28; // w9
  UnityEngine_Transform_o *v29; // x29
  float v30; // s11
  float v31; // s9
  float v32; // s8
  float v33; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  struct UnityEngine_Vector3_array *v37; // x8
  il2cpp_array_size_t v38; // x26
  float *v39; // x10
  UnityEngine_Vector3_o *m_Items; // x8
  float *p_x; // x11
  float *v42; // x9
  float v43; // s9
  float v44; // s10
  float v45; // s8
  struct UnityEngine_Vector3_array *items; // x8
  float v47; // s12
  float v48; // s13
  float v49; // s11
  float v50; // s1
  float v51; // s2
  float v52; // s0
  _QWORD *v53; // x9
  __int64 size; // x10
  float v55; // s3
  struct UnityEngine_Vector3_array *v58; // x9
  float *v59; // x9
  struct UnityEngine_Vector3_array *v60; // x8
  float v61; // s1
  float v62; // s2
  float v63; // s0
  _QWORD *v64; // x9
  __int64 v65; // x10
  float v66; // s3
  struct UnityEngine_Vector3_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  struct System_Single_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v81; // x8
  unsigned int v82; // w9
  float *v83; // x9
  float *v84; // x8
  float v85; // s8
  float v86; // s12
  float v87; // s15
  float v88; // s14
  float v89; // s13
  struct UnityEngine_Vector3_array *v90; // x8
  unsigned int v91; // w9
  float *v92; // x9
  float v93; // s10
  float v94; // s11
  float v95; // s9
  float *v96; // x8
  float v97; // s13
  float v98; // s14
  float v99; // s12
  unsigned int klass; // w8
  float v101; // s5
  float v102; // s0
  float v103; // s1
  float v104; // s2
  float v105; // s3
  float v106; // s4
  float v107; // s5
  UnityEngine_Vector3_array *v108; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  System_Int32Enum_array *v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x4
  int32_t v119; // w5
  int64_t v120; // x6
  System_String_o *v121; // x7
  System_Single_array *v122; // x0
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  const MethodInfo *v129; // x2
  float v131; // [xsp+34h] [xbp-DCh]
  float v132; // [xsp+38h] [xbp-D8h]
  float v133; // [xsp+3Ch] [xbp-D4h]
  float v134; // [xsp+40h] [xbp-D0h]
  float v135; // [xsp+44h] [xbp-CCh]
  float v136; // [xsp+48h] [xbp-C8h]
  float v137; // [xsp+4Ch] [xbp-C4h]
  int v138; // [xsp+50h] [xbp-C0h]
  int32_t indexa[2]; // [xsp+68h] [xbp-A8h]
  UnityEngine_Vector3_o Point_42270548; // 0:kr04_12.12
  UnityEngine_Vector3_o v141; // 0:kr24_12.12
  UnityEngine_Vector3_o position; // 0:kr30_12.12
  UnityEngine_Vector3_o v143; // 0:kr44_12.12
  UnityEngine_Vector3_o v144; // 0:kr50_12.12
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FirstDerivative_42270812; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D30447 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__InsertRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__Insert__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float___ctor___79019176);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor___79025760);
    sub_1C93AD4(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    byte_4D30447 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_59740624(
    v7,
    points,
    (const MethodInfo_38F91D0 *)Method_System_Collections_Generic_List_Vector3___ctor___79025760);
  p_modes = &this->fields.modes;
  modes = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  v10 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_59107960(
    v10,
    modes,
    (const MethodInfo_385EA78 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  p_curveWeight = (GrandQuestFolderBoardItem_o *)&this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v13 = (System_Collections_Generic_List_float__o *)sub_1C93D20(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_59360568(
    v13,
    curveWeight,
    (const MethodInfo_389C538 *)Method_System_Collections_Generic_List_float___ctor___79019176);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !*p_modes )
      goto LABEL_79;
    v16 = index + 1;
    v17 = (index + 1) / 3;
    if ( v16 / 3 < LODWORD((*p_modes)->max_length) - 1 )
    {
      transform = (UnityEngine_Transform_o *)sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 3);
      v19 = *p_points;
      if ( !*p_points )
        goto LABEL_79;
      max_length = v19->max_length;
      v21 = 3LL * v17;
      if ( (unsigned int)v21 < max_length )
      {
        v22 = (int)v21 + 1LL;
        if ( (unsigned int)v22 < max_length )
        {
          v23 = v21 + 2;
          v138 = v17;
          if ( (int)v21 + 2 < max_length )
          {
            v24 = v21 + 3;
            if ( (int)v21 + 3 < max_length )
            {
              v25 = transform;
              *(_QWORD *)indexa = v23;
              *(_QWORD *)&v143.fields.x = transform;
              LODWORD(v143.fields.z) = v15;
              Point_42270548 = Bezier__GetPoint_42270548(
                                 v19->m_Items[v21],
                                 v19->m_Items[v22],
                                 v19->m_Items[v23],
                                 v143,
                                 COERCE_FLOAT(*(_QWORD *)&v19->m_Items[v24].fields.x),
                                 v18);
              if ( !v25 )
                goto LABEL_79;
              if ( LODWORD(v25[1].klass) > 1 )
              {
                *(UnityEngine_Vector3_o *)((char *)&v25[1].fields.m_CachedPtr + 4) = Point_42270548;
                transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                v27 = this->fields.points;
                if ( !v27 )
                  goto LABEL_79;
                v28 = v27->max_length;
                if ( (unsigned int)v21 < v28 && (unsigned int)v22 < v28 && indexa[0] < v28 && v24 < v28 )
                {
                  v29 = transform;
                  *(_QWORD *)&v144.fields.x = transform;
                  LODWORD(v144.fields.z) = v15;
                  FirstDerivative_42270812 = Bezier__GetFirstDerivative_42270812(
                                               v27->m_Items[v21],
                                               v27->m_Items[v22],
                                               v27->m_Items[*(_QWORD *)indexa],
                                               v144,
                                               COERCE_FLOAT(*(_QWORD *)&v27->m_Items[v24].fields.x),
                                               v26);
                  if ( !v29 )
                    goto LABEL_79;
                  v141 = UnityEngine_Transform__TransformPoint(v29, FirstDerivative_42270812, 0);
                  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( !transform )
                    goto LABEL_79;
                  position = UnityEngine_Transform__get_position(transform, 0);
                  if ( !byte_4D2A13C )
                  {
                    sub_1C93AD4(&System_Math_TypeInfo);
                    byte_4D2A13C = 1;
                  }
                  v30 = v141.fields.x - position.fields.x;
                  v31 = v141.fields.y - position.fields.y;
                  v32 = v141.fields.z - position.fields.z;
                  transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v33 = sqrtf((float)(v32 * v32) + (float)((float)(v30 * v30) + (float)(v31 * v31)));
                  if ( v33 <= 0.00001 )
                  {
                    if ( !byte_4D2A139 )
                    {
                      transform = (UnityEngine_Transform_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
                      byte_4D2A139 = 1;
                    }
                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                    x = static_fields->zeroVector.fields.x;
                    y = static_fields->zeroVector.fields.y;
                    z = static_fields->zeroVector.fields.z;
                  }
                  else
                  {
                    x = v30 / v33;
                    y = v31 / v33;
                    z = v32 / v33;
                  }
                  v81 = *p_points;
                  if ( !*p_points )
                    goto LABEL_79;
                  v82 = v81->max_length;
                  if ( (unsigned int)v21 < v82 && (unsigned int)v22 < v82 )
                  {
                    v83 = (float *)((char *)v81 + 12 * v21);
                    v84 = (float *)((char *)v81 + 12 * v22);
                    v86 = v83[8];
                    v85 = v83[9];
                    v87 = v83[10];
                    v88 = v84[8];
                    v89 = v84[10];
                    v137 = v84[9];
                    if ( !byte_4D2A137 )
                    {
                      sub_1C93AD4(&System_Math_TypeInfo);
                      byte_4D2A137 = 1;
                    }
                    transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                    v90 = *p_points;
                    if ( !*p_points )
                      goto LABEL_79;
                    v91 = v90->max_length;
                    if ( indexa[0] < v91 )
                    {
                      v131 = v88;
                      v132 = v89;
                      v133 = v86;
                      v134 = z;
                      v135 = y;
                      v136 = x;
                      if ( v24 < v91 )
                      {
                        v92 = (float *)((char *)v90 + 12 * *(_QWORD *)indexa);
                        v94 = v92[8];
                        v93 = v92[9];
                        v95 = v92[10];
                        v96 = (float *)((char *)v90 + 12 * v24);
                        v98 = v96[8];
                        v97 = v96[9];
                        v99 = v96[10];
                        if ( !byte_4D2A137 )
                        {
                          sub_1C93AD4(&System_Math_TypeInfo);
                          byte_4D2A137 = 1;
                        }
                        transform = (UnityEngine_Transform_o *)System_Math_TypeInfo;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        klass = (unsigned int)v25[1].klass;
                        p_curveWeight = (GrandQuestFolderBoardItem_o *)&this->fields.curveWeight;
                        if ( klass > 1 )
                        {
                          v101 = (float)(sqrtf(
                                           (float)((float)(v87 - v132) * (float)(v87 - v132))
                                         + (float)((float)((float)(v133 - v131) * (float)(v133 - v131))
                                                 + (float)((float)(v85 - v137) * (float)(v85 - v137))))
                                       + sqrtf(
                                           (float)((float)(v95 - v99) * (float)(v95 - v99))
                                         + (float)((float)((float)(v94 - v98) * (float)(v94 - v98))
                                                 + (float)((float)(v93 - v97) * (float)(v93 - v97)))))
                               * 0.5;
                          v102 = *((float *)&v25[1].fields.m_CachedPtr + 1);
                          v103 = *(float *)&v25[2].klass;
                          v104 = *((float *)&v25[2].klass + 1);
                          v105 = v136 * v101;
                          v106 = v135 * v101;
                          v107 = v134 * v101;
                          *(float *)&v25[1].monitor = v102 - v105;
                          *((float *)&v25[1].monitor + 1) = v103 - v106;
                          *(float *)&v25[1].fields.m_CachedPtr = v104 - v107;
                          if ( klass != 2 )
                          {
                            *(float *)&v25[2].monitor = v105 + v102;
                            *((float *)&v25[2].monitor + 1) = v106 + v103;
                            *(float *)&v25[2].fields.m_CachedPtr = v107 + v104;
                            if ( v7 )
                            {
                              System_Collections_Generic_List_Vector3___InsertRange(
                                v7,
                                indexa[0],
                                (System_Collections_Generic_IEnumerable_T__o *)v25,
                                (const MethodInfo_38FA9B8 *)Method_System_Collections_Generic_List_Vector3__InsertRange__);
                              if ( v10 )
                              {
                                System_Collections_Generic_List_Int32Enum___Insert(
                                  v10,
                                  v138 + 1,
                                  0,
                                  (const MethodInfo_385FF28 *)Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
                                if ( v13 )
                                {
                                  System_Collections_Generic_List_float___Insert(
                                    v13,
                                    v138 + 1,
                                    1.0,
                                    (const MethodInfo_389D9F4 *)Method_System_Collections_Generic_List_float__Insert__);
                                  goto LABEL_77;
                                }
                              }
                            }
LABEL_79:
                            sub_1C93D2C(transform, v15);
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
LABEL_80:
      sub_1C93D34(transform);
    }
  }
  v37 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  v38 = v37->max_length;
  if ( (unsigned int)v38 < 4 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_79;
  v39 = (float *)((char *)v37 + 12 * ((__int64)((v38 << 32) - 0x100000000LL) >> 32));
  m_Items = v37->m_Items;
  p_x = &m_Items[(__int64)((v38 << 32) - 0x400000000LL) >> 32].fields.x;
  v42 = &m_Items[(__int64)((v38 << 32) - 0x300000000LL) >> 32].fields.x;
  v43 = v39[8];
  v44 = v39[9];
  v45 = v39[10];
  items = v7->fields._items;
  v48 = *p_x;
  v47 = p_x[1];
  v49 = p_x[2];
  v50 = *v42;
  v51 = v42[1];
  v52 = v42[2];
  v53 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_79;
  size = v7->fields._size;
  v55 = v52 - v49;
  v145.fields.x = v43 + (float)(v50 - v48);
  v145.fields.y = v44 + (float)(v51 - v47);
  v145.fields.z = v45 + v55;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v145,
      *(const MethodInfo_38F993C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = size + 1;
    items->m_Items[size] = v145;
  }
  v58 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  if ( (unsigned int)(v38 - 2) >= LODWORD(v58->max_length) )
    goto LABEL_80;
  v59 = (float *)((char *)v58 + 12 * (int)v38 - 24);
  v60 = v7->fields._items;
  v62 = v59[8];
  v61 = v59[9];
  v63 = v59[10];
  v64 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v60 )
    goto LABEL_79;
  v65 = v7->fields._size;
  v66 = v63 - v49;
  v146.fields.x = v43 + (float)(v62 - v48);
  v146.fields.y = v44 + (float)(v61 - v47);
  v146.fields.z = v45 + v66;
  if ( (unsigned int)v65 >= LODWORD(v60->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v146,
      *(const MethodInfo_38F993C **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v65 + 1;
    v60->m_Items[v65] = v146;
  }
  v69 = v7->fields._items;
  v70 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v69 )
    goto LABEL_79;
  v71 = v7->fields._size;
  v147.fields.x = v43 + (float)(v43 - v48);
  v147.fields.y = v44 + (float)(v44 - v47);
  v147.fields.z = v45 + (float)(v45 - v49);
  if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      v147,
      *(const MethodInfo_38F993C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v7->fields._size = v71 + 1;
    v69->m_Items[v71] = v147;
  }
  if ( !v10 )
    goto LABEL_79;
  v74 = v10->fields._items;
  v75 = Method_System_Collections_Generic_List_BezierControlPointMode__Add__;
  ++v10->fields._version;
  if ( !v74 )
    goto LABEL_79;
  v76 = v10->fields._size;
  if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_385F1A4 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v76 + 1;
    *((_DWORD *)v74->m_Items + v76) = 0;
  }
  if ( !v13 )
    goto LABEL_79;
  v77 = v13->fields._items;
  v78 = Method_System_Collections_Generic_List_float__Add__;
  ++v13->fields._version;
  if ( !v77 )
    goto LABEL_79;
  v79 = v13->fields._size;
  if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
  {
    System_Collections_Generic_List_float___AddWithResize(
      v13,
      1.0,
      *(const MethodInfo_389CC6C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v79 + 1;
    v77->m_Items[v79] = 1.0;
  }
  v24 = v38 + 2;
LABEL_77:
  v108 = System_Collections_Generic_List_Vector3___ToArray(
           v7,
           (const MethodInfo_38FB50C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v108;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.points, (int32_t)v108, v109, v110, v111, v112, v113, v114);
  v115 = System_Collections_Generic_List_Int32Enum___ToArray(
           v10,
           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  *p_modes = (struct BezierControlPointMode_array *)v115;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.modes, (int32_t)v115, v116, v117, v118, v119, v120, v121);
  v122 = System_Collections_Generic_List_float___ToArray(
           v13,
           (const MethodInfo_389E724 *)Method_System_Collections_Generic_List_float__ToArray__);
  p_curveWeight->klass = (GrandQuestFolderBoardItem_c *)v122;
  sub_1C93A78(p_curveWeight, (int32_t)v122, v123, v124, v125, v126, v127, v128);
  if ( !*p_points )
    goto LABEL_79;
  Custom2dSplineMesh__EnforceMode(this, LODWORD((*p_points)->max_length) - 4, v129);
  return v24;
}


void Custom2dSplineMesh__ChangeWeight(Custom2dSplineMesh_o *this, int32_t index, float value, const MethodInfo *method)
{
  struct System_Single_array *curveWeight; // x8
  int v5; // w9

  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_1C93D2C(this, index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(curveWeight->max_length) )
    sub_1C93D34(this);
  curveWeight->m_Items[v5] = value;
  Custom2dSplineMesh__EnforceMode(this, index, method);
}


void Custom2dSplineMesh__CreateMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4D3044D & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4D3044D = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.meshFilter,
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
  GrandQuestFolderBoardItem_o *p_modes; // x19
  System_Collections_Generic_IEnumerable_T__o *v16; // t1
  System_Collections_Generic_List_T__o *v17; // x25
  UnityEngine_Vector3_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Int32Enum_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Single_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D30448 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__RemoveRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float___ctor___79019176);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor___79025760);
    sub_1C93AD4(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4D30448 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (index + 1) / 3;
  v8 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_59740624(
    v8,
    points,
    (const MethodInfo_38F91D0 *)Method_System_Collections_Generic_List_Vector3___ctor___79025760);
  p_curveWeight = &this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v11 = (System_Collections_Generic_List_float__o *)sub_1C93D20(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_59360568(
    v11,
    curveWeight,
    (const MethodInfo_389C538 *)Method_System_Collections_Generic_List_float___ctor___79019176);
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
            (const MethodInfo_38FB23C *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
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
        (const MethodInfo_38FB23C *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
      v13 = v7;
      if ( v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C93D2C(v12, v13);
  }
  if ( !v8 )
    goto LABEL_18;
  System_Collections_Generic_List_Vector3___RemoveRange(
    v8,
    0,
    3,
    (const MethodInfo_38FB23C *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
LABEL_16:
  System_Collections_Generic_List_float___RemoveAt(
    v11,
    v13,
    (const MethodInfo_389E3EC *)Method_System_Collections_Generic_List_float__RemoveAt__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  p_modes = (GrandQuestFolderBoardItem_o *)&this->fields.modes;
  v17 = (System_Collections_Generic_List_T__o *)sub_1C93D20(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_59107960(
    v17,
    v16,
    (const MethodInfo_385EA78 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    v17,
    v7,
    (const MethodInfo_3860924 *)Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
  v18 = System_Collections_Generic_List_Vector3___ToArray(
          v8,
          (const MethodInfo_38FB50C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_points, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = System_Collections_Generic_List_Int32Enum___ToArray(
          v17,
          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  p_modes->klass = (GrandQuestFolderBoardItem_c *)v25;
  sub_1C93A78(p_modes, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = System_Collections_Generic_List_float___ToArray(
          v11,
          (const MethodInfo_389E724 *)Method_System_Collections_Generic_List_float__ToArray__);
  *p_curveWeight = v32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_curveWeight, (int32_t)v32, v33, v34, v35, v36, v37, v38);
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
  int32_t v7; // w9
  __int64 v8; // x10
  Custom2dSplineMesh_o *v9; // x19
  struct UnityEngine_Vector3_array *points; // x8
  il2cpp_array_size_t v11; // x13
  int v12; // w11
  int v13; // w20
  float32x2_t *v14; // x10
  float32x2_t *v15; // x11
  float32x2_t v16; // d9
  float v17; // s8
  float32x2_t v18; // d11
  float v19; // s10
  int32x2_t v20; // d0
  float32x2_t v21; // d11
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v24; // x8
  float32x2_t *v25; // x8
  float32x2_t v26; // d13
  float v27; // s12
  float32x2_t v28; // d0
  float32x2_t *v29; // x8

  modes = this->fields.modes;
  if ( !modes )
    goto LABEL_45;
  v4 = index + 1;
  max_length = modes->max_length;
  v6 = (index + 1) / 3;
  if ( v6 >= max_length )
    goto LABEL_44;
  if ( v6 != max_length - 1 && (unsigned int)(index + 3) >= 5 )
  {
    v7 = modes->m_Items[v6];
    if ( v7 )
    {
      v8 = 3LL * v6;
      v9 = this;
      if ( (int)v8 >= index )
      {
        if ( v4 <= 2 )
        {
          points = this->fields.points;
          if ( !points )
            goto LABEL_45;
          v12 = LODWORD(points->max_length) - 2;
        }
        else
        {
          points = this->fields.points;
          if ( !points )
            goto LABEL_45;
          v12 = v8 - 1;
        }
        v11 = points->max_length;
        if ( (int)v8 + 1 < (int)v11 )
          v13 = v8 + 1;
        else
          v13 = 1;
      }
      else
      {
        points = this->fields.points;
        if ( !points )
          goto LABEL_45;
        v11 = points->max_length;
        v12 = v8 + 1;
        if ( (int)v8 + 1 >= (int)v11 )
          v12 = 1;
        if ( v4 <= 2 )
          v13 = v11 - 2;
        else
          v13 = v8 - 1;
      }
      if ( (unsigned int)v8 >= (unsigned int)v11 || v12 >= (unsigned int)v11 )
        goto LABEL_44;
      v14 = (float32x2_t *)((char *)points + 12 * v8);
      v15 = (float32x2_t *)((char *)points + 12 * v12);
      v16.n64_u64[0] = v14[4].n64_u64[0];
      v17 = v14[5].n64_f32[0];
      v18.n64_u64[0] = vsub_f32(v16, v15[4]).n64_u64[0];
      v19 = v17 - v15[5].n64_f32[0];
      if ( v7 != 1 )
      {
LABEL_41:
        if ( (unsigned int)v13 < LODWORD(points->max_length) )
        {
          v29 = (float32x2_t *)((char *)points + 12 * v13);
          v29[4].n64_u64[0] = vadd_f32(v16, v18).n64_u64[0];
          v29[5].n64_f32[0] = v17 + v19;
          return;
        }
LABEL_44:
        sub_1C93D34(this);
      }
      if ( !byte_4D2A13C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13C = 1;
      }
      this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v20.n64_u64[0] = vmul_f32(v18, v18).n64_u64[0];
      v20.n64_f32[0] = sqrtf((float)(v19 * v19) + vaddv_f32(v20));
      if ( v20.n64_f32[0] <= 0.00001 )
      {
        if ( !byte_4D2A139 )
        {
          this = (Custom2dSplineMesh_o *)sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
        v21.n64_u64[0] = *(unsigned __int64 *)&static_fields->zeroVector.fields.x;
        z = static_fields->zeroVector.fields.z;
      }
      else
      {
        v21.n64_u64[0] = vdiv_f32(v18, vdup_lane_s32(v20, 0)).n64_u64[0];
        z = v19 / v20.n64_f32[0];
      }
      v24 = v9->fields.points;
      if ( v24 )
      {
        if ( (unsigned int)v13 >= LODWORD(v24->max_length) )
          goto LABEL_44;
        v25 = (float32x2_t *)((char *)v24 + 12 * v13);
        v26.n64_u64[0] = v25[4].n64_u64[0];
        v27 = v25[5].n64_f32[0];
        if ( !byte_4D2A137 )
        {
          sub_1C93AD4(&System_Math_TypeInfo);
          byte_4D2A137 = 1;
        }
        this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        points = v9->fields.points;
        if ( points )
        {
          v28.n64_u64[0] = vsub_f32(v16, v26).n64_u64[0];
          v28.n64_f32[0] = sqrtf((float)((float)(v17 - v27) * (float)(v17 - v27)) + vaddv_f32(vmul_f32(v28, v28)));
          v18.n64_u64[0] = vmul_n_f32(v21, v28.n64_f32[0]).n64_u64[0];
          v19 = z * v28.n64_f32[0];
          goto LABEL_41;
        }
      }
LABEL_45:
      sub_1C93D2C(this, *(_QWORD *)&index);
    }
  }
}


void Custom2dSplineMesh__GenMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *drawMesh; // x21
  struct UnityEngine_Mesh_o **p_drawMesh; // x23
  unsigned __int64 v5; // x1
  UnityEngine_Mesh_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  UnityEngine_Object_o *v13; // x0
  struct UnityEngine_MeshFilter_o **p_meshFilter; // x21
  UnityEngine_Object_o *meshFilter; // x22
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_List_Vector3__o *v23; // x22
  struct System_Collections_Generic_List_Vector3__o **p_verts; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_int__o *v31; // x23
  struct System_Collections_Generic_List_int__o **p_trianges; // x22
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  System_Collections_Generic_List_Vector2__o *v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct UnityEngine_Vector3_array *points; // x8
  float complexity; // s1
  float v48; // s15
  int32_t *p_vtxIdx; // x29
  const MethodInfo *v50; // x1
  float x; // s10
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x1
  float v55; // s14
  float v56; // s13
  float v57; // s12
  float v58; // s0
  float v59; // s8
  float z; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float UVslice; // s0
  _BOOL4 DrawCap; // w8
  const MethodInfo *v64; // x2
  const MethodInfo *v65; // x2
  float width; // s15
  float v67; // s0
  float PathRate; // s0
  float v71; // s12
  float v72; // s13
  float v73; // s14
  float v74; // s11
  int v75; // w28
  float v76; // s0
  float v77; // s1
  float v78; // s2
  float v79; // s3
  float v80; // s9
  float v81; // s12
  float v82; // s13
  float v83; // s14
  float v84; // s15
  struct UnityEngine_Vector3_StaticFields *v85; // x8
  int32_t flattenAxis; // w8
  float v87; // s11
  float v88; // s10
  float v89; // s8
  float v90; // s0
  float v91; // s14
  float v92; // s13
  float v93; // s15
  intptr_t m_CachedPtr; // x8
  _QWORD *v95; // x9
  __int64 klass_low; // x10
  float *v97; // x8
  intptr_t v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  float *v101; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x26
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v104; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_Vector2__o *v106; // x26
  struct UnityEngine_Vector2_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  const MethodInfo *v110; // x1
  float v111; // s0
  Custom2dSplineMesh_c *v112; // x0
  float v113; // s1
  float v114; // s11
  float v115; // s13
  float v116; // s9
  const MethodInfo *v117; // x1
  const MethodInfo *v118; // x1
  float v119; // s0
  int32_t v120; // w8
  float v121; // s15
  float v122; // s14
  float v123; // s13
  float v124; // s10
  intptr_t v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  int32_t v128; // w9
  intptr_t v129; // x8
  _QWORD *v130; // x10
  __int64 v131; // x11
  int32_t v132; // w9
  intptr_t v133; // x8
  _QWORD *v134; // x10
  __int64 v135; // x11
  int32_t v136; // w9
  intptr_t v137; // x8
  _QWORD *v138; // x10
  __int64 v139; // x11
  int32_t v140; // w9
  intptr_t v141; // x8
  _QWORD *v142; // x10
  __int64 v143; // x11
  int32_t v144; // w9
  intptr_t v145; // x8
  _QWORD *v146; // x10
  __int64 v147; // x11
  const MethodInfo *v148; // x1
  float v149; // s0
  intptr_t v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  float *v153; // x8
  intptr_t v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  float *v157; // x8
  float v158; // s9
  struct System_Collections_Generic_List_Vector2__o *v159; // x26
  float v160; // s8
  struct UnityEngine_Vector2_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  struct System_Collections_Generic_List_Vector2__o *v164; // x26
  UnityEngine_Vector2_o v165; // kr110_8
  struct UnityEngine_Vector2_array *v166; // x8
  _QWORD *v167; // x9
  __int64 v168; // x10
  float *v169; // x8
  intptr_t v170; // x8
  _QWORD *v171; // x9
  __int64 v172; // x10
  int32_t v173; // w9
  intptr_t v174; // x8
  _QWORD *v175; // x10
  __int64 v176; // x11
  int32_t v177; // w9
  intptr_t v178; // x8
  _QWORD *v179; // x10
  __int64 v180; // x11
  int32_t v181; // w9
  intptr_t v182; // x8
  _QWORD *v183; // x10
  __int64 v184; // x11
  int32_t v185; // w9
  intptr_t v186; // x8
  _QWORD *v187; // x10
  __int64 v188; // x11
  int32_t v189; // w9
  intptr_t v190; // x8
  _QWORD *v191; // x10
  __int64 v192; // x11
  const MethodInfo *v193; // x1
  const MethodInfo *v194; // x2
  float v195; // s0
  float v198; // s12
  const MethodInfo *v199; // x1
  const MethodInfo *v200; // x1
  float v201; // s0
  float v202; // s14
  float v203; // s15
  struct UnityEngine_Vector3_StaticFields *v204; // x8
  const MethodInfo *v205; // x2
  int32_t v206; // w8
  float v207; // s14
  float v208; // s13
  float v209; // s15
  float v210; // s0
  float v211; // s11
  float v212; // s9
  float v213; // s0
  float v214; // s10
  intptr_t v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  float *v218; // x8
  intptr_t v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  float *v222; // x8
  struct System_Collections_Generic_List_Vector2__o *v223; // x26
  struct UnityEngine_Vector2_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  struct System_Collections_Generic_List_Vector2__o *v227; // x26
  struct UnityEngine_Vector2_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  const MethodInfo *v231; // x1
  int32_t v232; // w8
  float v233; // s12
  float v234; // s11
  float v235; // s13
  float v236; // s0
  float v237; // s8
  float v238; // s10
  float v239; // s9
  intptr_t v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  float *v243; // x8
  intptr_t v244; // x8
  _QWORD *v245; // x9
  __int64 v246; // x10
  float *v247; // x8
  struct System_Collections_Generic_List_Vector2__o *v248; // x26
  float v249; // s11
  struct UnityEngine_Vector2_array *v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  struct System_Collections_Generic_List_Vector2__o *v253; // x26
  UnityEngine_Vector2_o v254; // kr118_8
  struct UnityEngine_Vector2_array *v255; // x8
  _QWORD *v256; // x9
  __int64 v257; // x10
  float *v258; // x8
  intptr_t v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  int32_t v262; // w9
  intptr_t v263; // x8
  _QWORD *v264; // x10
  __int64 v265; // x11
  int32_t v266; // w9
  intptr_t v267; // x8
  _QWORD *v268; // x10
  __int64 v269; // x11
  int32_t v270; // w9
  intptr_t v271; // x8
  _QWORD *v272; // x10
  __int64 v273; // x11
  int32_t v274; // w9
  intptr_t v275; // x8
  _QWORD *v276; // x10
  __int64 v277; // x11
  int32_t v278; // w9
  intptr_t v279; // x8
  _QWORD *v280; // x10
  __int64 v281; // x11
  const MethodInfo *v282; // x1
  float v283; // s11
  const MethodInfo *v284; // x1
  const MethodInfo *v285; // x2
  float v286; // s0
  UnityEngine_Mesh_o *v289; // x19
  UnityEngine_Mesh_o *v290; // x19
  UnityEngine_Mesh_o *v291; // x19
  struct System_Collections_Generic_List_Vector3__o *v292; // x8
  int v293; // w9
  struct System_Collections_Generic_List_int__o *v294; // x8
  int v295; // w9
  struct System_Collections_Generic_List_Vector2__o *v296; // x8
  int v297; // w9
  struct System_Collections_Generic_List_Vector2__o **p_uvs; // [xsp+20h] [xbp-120h]
  struct UnityEngine_Mesh_o **v299; // [xsp+28h] [xbp-118h]
  float v300; // [xsp+44h] [xbp-FCh]
  float v301; // [xsp+48h] [xbp-F8h]
  float v302; // [xsp+4Ch] [xbp-F4h]
  float UVrate; // [xsp+50h] [xbp-F0h]
  float pos; // [xsp+54h] [xbp-ECh]
  float v305; // [xsp+58h] [xbp-E8h]
  float v306; // [xsp+5Ch] [xbp-E4h]
  float v307; // [xsp+64h] [xbp-DCh]
  float v308; // [xsp+68h] [xbp-D8h]
  float v309; // [xsp+68h] [xbp-D8h]
  float y; // [xsp+6Ch] [xbp-D4h]
  float v311; // [xsp+6Ch] [xbp-D4h]
  float v312; // [xsp+70h] [xbp-D0h]
  float normalizedDir_8; // [xsp+80h] [xbp-C0h]
  float rate; // [xsp+84h] [xbp-BCh]
  float v315; // [xsp+88h] [xbp-B8h]
  float v316; // [xsp+8Ch] [xbp-B4h]
  float v317; // [xsp+90h] [xbp-B0h]
  float v318; // [xsp+94h] [xbp-ACh]
  float v319; // [xsp+94h] [xbp-ACh]
  UnityEngine_Vector2_o item; // [xsp+98h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o Point; // 0:kr00_12.12
  UnityEngine_Vector3_o v322; // 0:kr14_12.12
  UnityEngine_Vector3_o v323; // 0:kr20_12.12
  UnityEngine_Vector3_o Direction; // 0:kr34_12.12
  UnityEngine_Vector3_o offset; // 0:kr40_12.12
  UnityEngine_Vector3_o v326; // 0:kr54_12.12
  UnityEngine_Vector3_o v327; // 0:kr60_12.12
  UnityEngine_Vector3_o v328; // 0:kr74_12.12
  UnityEngine_Vector3_o v329; // 0:kr80_12.12
  UnityEngine_Vector3_o v330; // 0:kr94_12.12
  UnityEngine_Vector3_o v331; // 0:krA0_12.12
  UnityEngine_Vector3_o v332; // 0:krB4_12.12
  UnityEngine_Vector3_o v333; // 0:krC0_12.12
  UnityEngine_Vector3_o v334; // 0:krD4_12.12
  UnityEngine_Vector3_o v335; // 0:krE0_12.12
  UnityEngine_Vector3_o v336; // 0:krF4_12.12
  UnityEngine_Vector3_o v337; // 0:kr100_12.12
  UnityEngine_Vector2_o UV_42287180; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v339; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v340; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v341; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v342; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v343; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v344; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v345; // 0:s0.4,4:s1.4
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
  UnityEngine_Vector3_o zeroVector; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v364; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v365; // 0:s3.4,4:s4.4,8:s5.4
  UnityEngine_Vector3_o v366; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4D3044E & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    sub_1C93AD4(&Custom2dSplineMesh_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C93AD4(&UnityEngine_Mesh_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&StringLiteral_12367/*"SPLINE MESH"*/);
    byte_4D3044E = 1;
  }
  item.fields.y = 0.0;
  p_drawMesh = &this->fields.drawMesh;
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(drawMesh, 0, 0) )
  {
    v6 = (UnityEngine_Mesh_o *)sub_1C93D20(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v6, 0);
    *p_drawMesh = v6;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.drawMesh, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    v13 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Object__set_name(v13, (System_String_o *)StringLiteral_12367/*"SPLINE MESH"*/, 0);
  }
  else
  {
    v13 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)v13, 0);
  }
  p_meshFilter = &this->fields.meshFilter;
  meshFilter = (UnityEngine_Object_o *)this->fields.meshFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshFilter, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.meshFilter,
      (int32_t)Component_object,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
  }
  v13 = (UnityEngine_Object_o *)*p_meshFilter;
  v299 = &this->fields.drawMesh;
  if ( !*p_meshFilter )
    goto LABEL_334;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)v13, this->fields.drawMesh, 0);
  v23 = (System_Collections_Generic_List_Vector3__o *)sub_1C93D20(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v23,
    (const MethodInfo_38F90A8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.verts = v23;
  p_verts = &this->fields.verts;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.verts, (int32_t)v23, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.trianges = v31;
  p_trianges = &this->fields.trianges;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.trianges, (int32_t)v31, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_List_Vector2__o *)sub_1C93D20(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v39,
    (const MethodInfo_38F67FC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.uvs = v39;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.uvs, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  points = this->fields.points;
  if ( !points )
    goto LABEL_334;
  complexity = this->fields.complexity;
  if ( (float)(1.0 / (float)(complexity * (float)SLODWORD(points->max_length))) <= 0.0 )
    v48 = 1.0;
  else
    v48 = 1.0 / (float)(complexity * (float)SLODWORD(points->max_length));
  p_uvs = &this->fields.uvs;
  this->fields.vtxIdx = 0;
  p_vtxIdx = &this->fields.vtxIdx;
  item.fields.y = 0.0;
  Point = Custom2dSplineMesh__GetPoint(this, 0.0, (const MethodInfo *)v5);
  v322 = Custom2dSplineMesh__GetPoint(this, v48, v50);
  x = v322.fields.x;
  v323 = Custom2dSplineMesh__GetPoint(this, this->fields.PathRate, v52);
  Direction = Custom2dSplineMesh__GetDirection(this, 0.0, v53);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v55 = v322.fields.x - Point.fields.x;
  v56 = v322.fields.y - Point.fields.y;
  v57 = v322.fields.z - Point.fields.z;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v58 = sqrtf((float)(v57 * v57) + (float)((float)(v55 * v55) + (float)(v56 * v56)));
  v59 = Point.fields.x;
  if ( v58 <= 0.00001 )
  {
    z = Point.fields.z;
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    normalizedDir_8 = static_fields->zeroVector.fields.x;
    v308 = static_fields->zeroVector.fields.z;
    y = static_fields->zeroVector.fields.y;
  }
  else
  {
    normalizedDir_8 = v55 / v58;
    v308 = v57 / v58;
    y = v56 / v58;
    z = Point.fields.z;
  }
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
  offset = Custom2dSplineMesh__GetOffset(this, 0.0, v54);
  v307 = v48;
  if ( this->fields.DrawCap )
  {
    width = Custom2dSplineMesh__GetWidth(this, 0.0, (const MethodInfo *)v5);
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v67 = sqrtf(
            (float)(Direction.fields.z * Direction.fields.z)
          + (float)((float)(Direction.fields.x * Direction.fields.x) + (float)(Direction.fields.y * Direction.fields.y)));
    if ( v67 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      zeroVector = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      zeroVector.fields.x = Direction.fields.x / v67;
      zeroVector.fields.y = Direction.fields.y / v67;
      zeroVector.fields.z = Direction.fields.z / v67;
    }
    v346.fields.y = Point.fields.y;
    v346.fields.x = Point.fields.x;
    v346.fields.z = z;
    Custom2dSplineMesh__AddCap(this, v346, zeroVector, offset, width, 0, v65);
    v48 = v307;
  }
  PathRate = this->fields.PathRate;
  v71 = v322.fields.y;
  v72 = v322.fields.z;
  v73 = Point.fields.y;
  item.fields.x = 0.0;
  if ( PathRate > 0.0 )
  {
    item.fields.x = 0.0;
    v74 = 0.0;
    while ( 1 )
    {
      if ( Custom2dSplineMesh__isJumpcut(this, v74, v48, &item.fields.y, v64) )
      {
        v75 = 1;
      }
      else
      {
        v75 = 0;
        if ( v74 != 0.0 && !this->fields.createVertsEveryStep )
        {
          v326 = Custom2dSplineMesh__GetDirection(this, v74, (const MethodInfo *)v5);
          if ( (float)((float)(v308 * v326.fields.z)
                     + (float)((float)(normalizedDir_8 * v326.fields.x) + (float)(y * v326.fields.y))) >= this->fields.directionChange )
            goto LABEL_131;
          v75 = 0;
        }
      }
      if ( !byte_4D2A13C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v76 = x - v59;
      v77 = v71 - v73;
      v78 = v72 - z;
      v79 = sqrtf((float)(v78 * v78) + (float)((float)(v77 * v77) + (float)(v76 * v76)));
      v318 = z;
      v80 = v73;
      v312 = v71;
      v315 = x;
      v316 = v72;
      if ( v79 <= 0.00001 )
      {
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        v81 = item.fields.x;
        v85 = UnityEngine_Vector3_TypeInfo->static_fields;
        v82 = v85->zeroVector.fields.x;
        v83 = v85->zeroVector.fields.y;
        v84 = v85->zeroVector.fields.z;
      }
      else
      {
        v81 = item.fields.x;
        v82 = v76 / v79;
        v83 = v77 / v79;
        v84 = v78 / v79;
      }
      rate = v74;
      v327 = Custom2dSplineMesh__GetOffset(this, v74, (const MethodInfo *)v5);
      flattenAxis = this->fields.flattenAxis;
      v87 = v59 + v327.fields.x;
      v88 = v80 + v327.fields.y;
      v317 = v59;
      normalizedDir_8 = v82;
      v308 = v84;
      y = v83;
      if ( flattenAxis == 2 )
      {
        v92 = v59 - v327.fields.x;
        v91 = v80 - v327.fields.y;
        v89 = 0.0;
        v93 = 0.0;
        goto LABEL_67;
      }
      v89 = v318 + v327.fields.z;
      if ( flattenAxis == 1 )
        break;
      if ( flattenAxis )
      {
        v91 = v80 - v327.fields.y;
        v92 = v317 - v327.fields.x;
        goto LABEL_65;
      }
      v90 = v318;
      v91 = v80 - v327.fields.y;
      v87 = 0.0;
      v92 = 0.0;
LABEL_66:
      v93 = v90 - v327.fields.z;
LABEL_67:
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      m_CachedPtr = v13->fields.m_CachedPtr;
      v95 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_334;
      klass_low = SLODWORD(v13[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        v347.fields.x = v87;
        v347.fields.y = v88;
        v347.fields.z = v89;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v347,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        v97 = (float *)(m_CachedPtr + 12 * klass_low);
        LODWORD(v13[1].klass) = klass_low + 1;
        v97[8] = v87;
        v97[9] = v88;
        v97[10] = v89;
      }
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v98 = v13->fields.m_CachedPtr;
      v99 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v98 )
        goto LABEL_334;
      v100 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v100 >= *(_DWORD *)(v98 + 24) )
      {
        v348.fields.x = v92;
        v348.fields.y = v91;
        v348.fields.z = v93;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v348,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = (float *)(v98 + 12 * v100);
        LODWORD(v13[1].klass) = v100 + 1;
        v101[8] = v92;
        v101[9] = v91;
        v101[10] = v93;
      }
      uvs = this->fields.uvs;
      item.fields.x = v81;
      if ( this->fields.StrictUVmode )
      {
        v349.fields.x = v87;
        v349.fields.y = v88;
        v349.fields.z = v89;
        UV_42287180 = Custom2dSplineMesh__GetUV_42287180(this, v349, (const MethodInfo *)v5);
      }
      else
      {
        UV_42287180.fields.y = this->fields.lineVmin;
        UV_42287180.fields.x = v81;
      }
      v74 = rate;
      x = v315;
      v59 = v317;
      if ( !uvs )
        goto LABEL_334;
      items = uvs->fields._items;
      v104 = Method_System_Collections_Generic_List_Vector2__Add__;
      v71 = v312;
      ++uvs->fields._version;
      if ( !items )
        goto LABEL_334;
      size = uvs->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          UV_42287180,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = size + 1;
        items->m_Items[size] = UV_42287180;
      }
      v106 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v350.fields.x = v92;
        v350.fields.y = v91;
        v350.fields.z = v93;
        v339 = Custom2dSplineMesh__GetUV_42287180(this, v350, (const MethodInfo *)v5);
      }
      else
      {
        v339.fields.y = this->fields.lineVmax;
        v339.fields.x = item.fields.x;
      }
      v48 = v307;
      v72 = v316;
      v73 = v80;
      z = v318;
      if ( !v106 )
        goto LABEL_334;
      v107 = v106->fields._items;
      v108 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v106->fields._version;
      if ( !v107 )
        goto LABEL_334;
      v109 = v106->fields._size;
      if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v106,
          v339,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v106->fields._size = v109 + 1;
        v107->m_Items[v109] = v339;
      }
      if ( rate == 0.0 )
      {
        if ( !v75 )
          goto LABEL_131;
      }
      else
      {
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
        v5 = (unsigned int)*p_vtxIdx;
        v125 = v13->fields.m_CachedPtr;
        v126 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v125 )
          goto LABEL_334;
        v127 = SLODWORD(v13[1].klass);
        if ( (unsigned int)v127 >= *(_DWORD *)(v125 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
          v13 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v13[1].klass) = v127 + 1;
          *(_DWORD *)(v125 + 4 * v127 + 32) = v5;
        }
        v128 = *p_vtxIdx;
        v129 = v13->fields.m_CachedPtr;
        v130 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v129 )
          goto LABEL_334;
        v131 = SLODWORD(v13[1].klass);
        v5 = (unsigned int)(v128 + 2);
        if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          v13 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v13[1].klass) = v131 + 1;
          *(_DWORD *)(v129 + 4 * v131 + 32) = v5;
        }
        v132 = *p_vtxIdx;
        v133 = v13->fields.m_CachedPtr;
        v134 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v133 )
          goto LABEL_334;
        v135 = SLODWORD(v13[1].klass);
        v5 = (unsigned int)(v132 + 1);
        if ( (unsigned int)v135 >= *(_DWORD *)(v133 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v134[4] + 192LL) + 112LL));
          v13 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v13[1].klass) = v135 + 1;
          *(_DWORD *)(v133 + 4 * v135 + 32) = v5;
        }
        v136 = *p_vtxIdx;
        v137 = v13->fields.m_CachedPtr;
        v138 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v137 )
          goto LABEL_334;
        v139 = SLODWORD(v13[1].klass);
        v5 = (unsigned int)(v136 + 2);
        if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
          v13 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v13[1].klass) = v139 + 1;
          *(_DWORD *)(v137 + 4 * v139 + 32) = v5;
        }
        v140 = *p_vtxIdx;
        v141 = v13->fields.m_CachedPtr;
        v142 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v141 )
          goto LABEL_334;
        v143 = SLODWORD(v13[1].klass);
        v5 = (unsigned int)(v140 + 3);
        if ( (unsigned int)v143 >= *(_DWORD *)(v141 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          v13 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v13[1].klass) = v143 + 1;
          *(_DWORD *)(v141 + 4 * v143 + 32) = v5;
        }
        v144 = *p_vtxIdx;
        v145 = v13->fields.m_CachedPtr;
        v146 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v13[1].klass);
        if ( !v145 )
          goto LABEL_334;
        v147 = SLODWORD(v13[1].klass);
        v5 = (unsigned int)(v144 + 1);
        if ( (unsigned int)v147 >= *(_DWORD *)(v145 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v13,
            v5,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(v13[1].klass) = v147 + 1;
          *(_DWORD *)(v145 + 4 * v147 + 32) = v5;
        }
        *p_vtxIdx += 2;
        if ( !v75 )
        {
LABEL_131:
          if ( !byte_4D2A137 )
          {
            sub_1C93AD4(&System_Math_TypeInfo);
            byte_4D2A137 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          item.fields.x = item.fields.x
                        + (float)((float)(sqrtf(
                                            (float)((float)(z - v72) * (float)(z - v72))
                                          + (float)((float)((float)(v73 - v71) * (float)(v73 - v71))
                                                  + (float)((float)(v59 - x) * (float)(v59 - x))))
                                        / Custom2dSplineMesh__GetWidth(this, v74, (const MethodInfo *)v5))
                                * this->fields.UVrate);
          goto LABEL_249;
        }
      }
      if ( !byte_4D2A137 )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A137 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v111 = Custom2dSplineMesh__GetWidth(this, rate, (const MethodInfo *)v5);
      v112 = Custom2dSplineMesh_TypeInfo;
      pos = v73;
      v302 = v111;
      UVrate = this->fields.UVrate;
      v113 = item.fields.y;
      if ( !Custom2dSplineMesh_TypeInfo->_2.cctor_finished )
      {
        v114 = item.fields.y;
        j_il2cpp_runtime_class_init_0(Custom2dSplineMesh_TypeInfo);
        v112 = Custom2dSplineMesh_TypeInfo;
        v113 = v114;
      }
      v115 = v113;
      v116 = v113 - v112->static_fields->JUMP_THRESH_HOLD;
      v328 = Custom2dSplineMesh__GetPoint(this, v113, v110);
      v300 = v116;
      v329 = Custom2dSplineMesh__GetOffset(this, v116, v117);
      v306 = v115;
      v119 = Custom2dSplineMesh__GetWidth(this, v115, v118);
      v120 = this->fields.flattenAxis;
      v121 = v328.fields.x + v329.fields.x;
      v122 = v328.fields.y + v329.fields.y;
      v301 = v119;
      if ( v120 == 2 )
      {
        v124 = v315;
        v123 = 0.0;
        v309 = v328.fields.y - v329.fields.y;
        v311 = v328.fields.x - v329.fields.x;
        v149 = 0.0;
LABEL_139:
        v305 = v149;
        goto LABEL_140;
      }
      v123 = v328.fields.z + v329.fields.z;
      if ( v120 == 1 )
      {
        v124 = v315;
        v122 = 0.0;
        v305 = v328.fields.z - v329.fields.z;
        v309 = 0.0;
        v311 = v328.fields.x - v329.fields.x;
      }
      else
      {
        v124 = v315;
        if ( v120 )
        {
          v309 = v328.fields.y - v329.fields.y;
          v311 = v328.fields.x - v329.fields.x;
          v149 = v328.fields.z - v329.fields.z;
          goto LABEL_139;
        }
        v121 = 0.0;
        v305 = v328.fields.z - v329.fields.z;
        v309 = v328.fields.y - v329.fields.y;
        v311 = 0.0;
      }
LABEL_140:
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v150 = v13->fields.m_CachedPtr;
      v151 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v150 )
        goto LABEL_334;
      v152 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v152 >= *(_DWORD *)(v150 + 24) )
      {
        v351.fields.x = v121;
        v351.fields.y = v122;
        v351.fields.z = v123;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v351,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
      }
      else
      {
        v153 = (float *)(v150 + 12 * v152);
        LODWORD(v13[1].klass) = v152 + 1;
        v153[8] = v121;
        v153[9] = v122;
        v153[10] = v123;
      }
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v154 = v13->fields.m_CachedPtr;
      v155 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v154 )
        goto LABEL_334;
      v156 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v156 >= *(_DWORD *)(v154 + 24) )
      {
        v352.fields.y = v309;
        v352.fields.x = v311;
        v352.fields.z = v305;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v352,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
      }
      else
      {
        v157 = (float *)(v154 + 12 * v156);
        LODWORD(v13[1].klass) = v156 + 1;
        v157[8] = v311;
        v157[9] = v309;
        v157[10] = v305;
      }
      v158 = sqrtf(
               (float)((float)(v318 - v316) * (float)(v318 - v316))
             + (float)((float)((float)(pos - v312) * (float)(pos - v312))
                     + (float)((float)(v317 - v124) * (float)(v317 - v124))));
      v159 = this->fields.uvs;
      v160 = item.fields.x + (float)((float)(v158 / v302) * UVrate);
      if ( this->fields.StrictUVmode )
      {
        v353.fields.x = v121;
        v353.fields.y = v122;
        v353.fields.z = v123;
        v340 = Custom2dSplineMesh__GetUV_42287180(this, v353, (const MethodInfo *)v5);
        if ( !v159 )
          goto LABEL_334;
      }
      else
      {
        v340.fields.y = this->fields.lineVmin;
        v340.fields.x = item.fields.x + (float)((float)(v158 / v302) * UVrate);
        if ( !v159 )
          goto LABEL_334;
      }
      v161 = v159->fields._items;
      v162 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v159->fields._version;
      if ( !v161 )
        goto LABEL_334;
      v163 = v159->fields._size;
      if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v159,
          v340,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v159->fields._size = v163 + 1;
        v161->m_Items[v163] = v340;
      }
      v164 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v354.fields.y = v309;
        v354.fields.x = v311;
        v354.fields.z = v305;
        v165 = Custom2dSplineMesh__GetUV_42287180(this, v354, (const MethodInfo *)v5);
        v341.fields.y = v165.fields.y;
        v160 = v165.fields.x;
        if ( !v164 )
          goto LABEL_334;
      }
      else
      {
        v341.fields.y = this->fields.lineVmax;
        if ( !v164 )
          goto LABEL_334;
      }
      v166 = v164->fields._items;
      v167 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v164->fields._version;
      if ( !v166 )
        goto LABEL_334;
      v168 = v164->fields._size;
      if ( (unsigned int)v168 >= LODWORD(v166->max_length) )
      {
        v341.fields.x = v160;
        System_Collections_Generic_List_Vector2___AddWithResize(
          v164,
          v341,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v167[4] + 192LL) + 112LL));
      }
      else
      {
        v169 = (float *)(&v166->obj.klass + v168);
        v164->fields._size = v168 + 1;
        v169[8] = v160;
        v169[9] = v341.fields.y;
      }
      v13 = (UnityEngine_Object_o *)*p_trianges;
      if ( !*p_trianges )
        goto LABEL_334;
      v5 = (unsigned int)*p_vtxIdx;
      v170 = v13->fields.m_CachedPtr;
      v171 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v170 )
        goto LABEL_334;
      v172 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v172 >= *(_DWORD *)(v170 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          v5,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v171[4] + 192LL) + 112LL));
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v13[1].klass) = v172 + 1;
        *(_DWORD *)(v170 + 4 * v172 + 32) = v5;
      }
      v173 = *p_vtxIdx;
      v174 = v13->fields.m_CachedPtr;
      v175 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v174 )
        goto LABEL_334;
      v176 = SLODWORD(v13[1].klass);
      v5 = (unsigned int)(v173 + 2);
      if ( (unsigned int)v176 >= *(_DWORD *)(v174 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          v5,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v13[1].klass) = v176 + 1;
        *(_DWORD *)(v174 + 4 * v176 + 32) = v5;
      }
      v177 = *p_vtxIdx;
      v178 = v13->fields.m_CachedPtr;
      v179 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v178 )
        goto LABEL_334;
      v180 = SLODWORD(v13[1].klass);
      v5 = (unsigned int)(v177 + 1);
      if ( (unsigned int)v180 >= *(_DWORD *)(v178 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          v5,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v13[1].klass) = v180 + 1;
        *(_DWORD *)(v178 + 4 * v180 + 32) = v5;
      }
      v181 = *p_vtxIdx;
      v182 = v13->fields.m_CachedPtr;
      v183 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v182 )
        goto LABEL_334;
      v184 = SLODWORD(v13[1].klass);
      v5 = (unsigned int)(v181 + 2);
      if ( (unsigned int)v184 >= *(_DWORD *)(v182 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          v5,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v13[1].klass) = v184 + 1;
        *(_DWORD *)(v182 + 4 * v184 + 32) = v5;
      }
      v185 = *p_vtxIdx;
      v186 = v13->fields.m_CachedPtr;
      v187 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v186 )
        goto LABEL_334;
      v188 = SLODWORD(v13[1].klass);
      v5 = (unsigned int)(v185 + 3);
      if ( (unsigned int)v188 >= *(_DWORD *)(v186 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          v5,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
        v13 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v13[1].klass) = v188 + 1;
        *(_DWORD *)(v186 + 4 * v188 + 32) = v5;
      }
      v189 = *p_vtxIdx;
      v190 = v13->fields.m_CachedPtr;
      v191 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v190 )
        goto LABEL_334;
      v192 = SLODWORD(v13[1].klass);
      v193 = (const MethodInfo *)(unsigned int)(v189 + 1);
      v319 = v158;
      if ( (unsigned int)v192 >= *(_DWORD *)(v190 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v13,
          (int32_t)v193,
          *(const MethodInfo_385C978 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(v13[1].klass) = v192 + 1;
        *(_DWORD *)(v190 + 4 * v192 + 32) = (_DWORD)v193;
      }
      this->fields.vtxIdx += 4;
      v330 = Custom2dSplineMesh__GetDirection(this, v300, v193);
      if ( !byte_4D2A13C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v195 = sqrtf(
               (float)(v330.fields.z * v330.fields.z)
             + (float)((float)(v330.fields.x * v330.fields.x) + (float)(v330.fields.y * v330.fields.y)));
      if ( v195 <= 0.00001 )
      {
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        v364 = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
      }
      else
      {
        v364.fields.x = v330.fields.x / v195;
        v364.fields.y = v330.fields.y / v195;
        v364.fields.z = v330.fields.z / v195;
      }
      Custom2dSplineMesh__AddCap(this, v328, v364, v329, v301, 1, v194);
      v198 = v306 + Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD;
      v331 = Custom2dSplineMesh__GetDirection(this, v198, v199);
      if ( !byte_4D2A13C )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A13C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v201 = sqrtf(
               (float)(v331.fields.z * v331.fields.z)
             + (float)((float)(v331.fields.x * v331.fields.x) + (float)(v331.fields.y * v331.fields.y)));
      if ( v201 <= 0.00001 )
      {
        if ( !byte_4D2A139 )
        {
          sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
          byte_4D2A139 = 1;
        }
        v204 = UnityEngine_Vector3_TypeInfo->static_fields;
        v202 = v204->zeroVector.fields.y;
        v203 = v204->zeroVector.fields.z;
        normalizedDir_8 = v204->zeroVector.fields.x;
      }
      else
      {
        normalizedDir_8 = v331.fields.x / v201;
        v202 = v331.fields.y / v201;
        v203 = v331.fields.z / v201;
      }
      v332 = Custom2dSplineMesh__GetOffset(this, v198, v200);
      v365.fields.x = normalizedDir_8;
      v365.fields.y = v202;
      v365.fields.z = v203;
      v308 = v203;
      y = v202;
      Custom2dSplineMesh__AddCap(this, v328, v365, v332, v301, 0, v205);
      v206 = this->fields.flattenAxis;
      v207 = v328.fields.x + v332.fields.x;
      v208 = v328.fields.y + v332.fields.y;
      if ( v206 == 2 )
      {
        v213 = v328.fields.x;
        v209 = 0.0;
        v211 = 0.0;
        goto LABEL_216;
      }
      v209 = v328.fields.z + v332.fields.z;
      if ( v206 != 1 )
      {
        if ( v206 )
        {
          v213 = v328.fields.x;
          v211 = v328.fields.z - v332.fields.z;
LABEL_216:
          v212 = v213 - v332.fields.x;
          v210 = v328.fields.y;
        }
        else
        {
          v210 = v328.fields.y;
          v211 = v328.fields.z - v332.fields.z;
          v207 = 0.0;
          v212 = 0.0;
        }
        v214 = v210 - v332.fields.y;
        goto LABEL_218;
      }
      v211 = v328.fields.z - v332.fields.z;
      v208 = 0.0;
      v214 = 0.0;
      v212 = v328.fields.x - v332.fields.x;
LABEL_218:
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v215 = v13->fields.m_CachedPtr;
      v216 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v215 )
        goto LABEL_334;
      v217 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v217 >= *(_DWORD *)(v215 + 24) )
      {
        v355.fields.x = v207;
        v355.fields.y = v208;
        v355.fields.z = v209;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v355,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
      }
      else
      {
        v218 = (float *)(v215 + 12 * v217);
        LODWORD(v13[1].klass) = v217 + 1;
        v218[8] = v207;
        v218[9] = v208;
        v218[10] = v209;
      }
      v13 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v219 = v13->fields.m_CachedPtr;
      v220 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( !v219 )
        goto LABEL_334;
      v221 = SLODWORD(v13[1].klass);
      if ( (unsigned int)v221 >= *(_DWORD *)(v219 + 24) )
      {
        v356.fields.x = v212;
        v356.fields.y = v214;
        v356.fields.z = v211;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v13,
          v356,
          *(const MethodInfo_38F993C **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
      }
      else
      {
        v222 = (float *)(v219 + 12 * v221);
        LODWORD(v13[1].klass) = v221 + 1;
        v222[8] = v212;
        v222[9] = v214;
        v222[10] = v211;
      }
      v223 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v357.fields.x = v207;
        v357.fields.y = v208;
        v357.fields.z = v209;
        v342 = Custom2dSplineMesh__GetUV_42287180(this, v357, (const MethodInfo *)v5);
      }
      else
      {
        v342.fields.y = this->fields.lineVmin;
        v342.fields.x = 0.0;
      }
      v48 = v307;
      if ( !v223 )
        goto LABEL_334;
      v224 = v223->fields._items;
      v225 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v223->fields._version;
      if ( !v224 )
        goto LABEL_334;
      v226 = v223->fields._size;
      if ( (unsigned int)v226 >= LODWORD(v224->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v223,
          v342,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
      }
      else
      {
        v223->fields._size = v226 + 1;
        v224->m_Items[v226] = v342;
      }
      v227 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v358.fields.x = v212;
        v358.fields.y = v214;
        v358.fields.z = v211;
        v343 = Custom2dSplineMesh__GetUV_42287180(this, v358, (const MethodInfo *)v5);
      }
      else
      {
        v343.fields.y = this->fields.lineVmax;
        v343.fields.x = 0.0;
      }
      if ( !v227 )
        goto LABEL_334;
      v228 = v227->fields._items;
      v229 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v227->fields._version;
      if ( !v228 )
        goto LABEL_334;
      v230 = v227->fields._size;
      if ( (unsigned int)v230 >= LODWORD(v228->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v227,
          v343,
          *(const MethodInfo_38F7064 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
      }
      else
      {
        v227->fields._size = v230 + 1;
        v228->m_Items[v230] = v343;
      }
      if ( !byte_4D2A137 )
      {
        sub_1C93AD4(&System_Math_TypeInfo);
        byte_4D2A137 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      item.fields.x = (float)(v319 / Custom2dSplineMesh__GetWidth(this, rate, (const MethodInfo *)v5))
                    * this->fields.UVrate;
      v333 = Custom2dSplineMesh__GetPoint(this, v198, v231);
      v74 = v306;
      x = v333.fields.x;
      v71 = v333.fields.y;
      v72 = v333.fields.z;
LABEL_249:
      v74 = v48 + v74;
      v59 = x;
      v73 = v71;
      z = v72;
      v334 = Custom2dSplineMesh__GetPoint(this, v74, v148);
      x = v334.fields.x;
      PathRate = this->fields.PathRate;
      v71 = v334.fields.y;
      v72 = v334.fields.z;
      if ( v74 >= PathRate )
        goto LABEL_250;
    }
    v88 = 0.0;
    v91 = 0.0;
    v92 = v317 - v327.fields.x;
LABEL_65:
    v90 = v318;
    goto LABEL_66;
  }
LABEL_250:
  if ( PathRate > 0.0 )
  {
    v335 = Custom2dSplineMesh__GetOffset(this, PathRate, (const MethodInfo *)v5);
    v232 = this->fields.flattenAxis;
    v233 = v323.fields.x + v335.fields.x;
    v234 = v323.fields.y + v335.fields.y;
    if ( v232 == 2 )
    {
      v235 = 0.0;
      v238 = 0.0;
      v237 = v323.fields.x - v335.fields.x;
      v239 = v323.fields.y - v335.fields.y;
    }
    else
    {
      v235 = v323.fields.z + v335.fields.z;
      if ( v232 == 1 )
      {
        v234 = 0.0;
        v239 = 0.0;
        v237 = v323.fields.x - v335.fields.x;
      }
      else
      {
        if ( v232 )
        {
          v237 = v323.fields.x - v335.fields.x;
          v236 = v323.fields.y;
        }
        else
        {
          v236 = v323.fields.y;
          v233 = 0.0;
          v237 = 0.0;
        }
        v239 = v236 - v335.fields.y;
      }
      v238 = v323.fields.z - v335.fields.z;
    }
    v13 = (UnityEngine_Object_o *)*p_verts;
    if ( *p_verts )
    {
      v240 = v13->fields.m_CachedPtr;
      v241 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v13[1].klass);
      if ( v240 )
      {
        v242 = SLODWORD(v13[1].klass);
        if ( (unsigned int)v242 >= *(_DWORD *)(v240 + 24) )
        {
          v359.fields.x = v233;
          v359.fields.y = v234;
          v359.fields.z = v235;
          System_Collections_Generic_List_Vector3___AddWithResize(
            (System_Collections_Generic_List_Vector3__o *)v13,
            v359,
            *(const MethodInfo_38F993C **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
        }
        else
        {
          v243 = (float *)(v240 + 12 * v242);
          LODWORD(v13[1].klass) = v242 + 1;
          v243[8] = v233;
          v243[9] = v234;
          v243[10] = v235;
        }
        v13 = (UnityEngine_Object_o *)*p_verts;
        if ( *p_verts )
        {
          v244 = v13->fields.m_CachedPtr;
          v245 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++HIDWORD(v13[1].klass);
          if ( v244 )
          {
            v246 = SLODWORD(v13[1].klass);
            if ( (unsigned int)v246 >= *(_DWORD *)(v244 + 24) )
            {
              v360.fields.x = v237;
              v360.fields.y = v239;
              v360.fields.z = v238;
              System_Collections_Generic_List_Vector3___AddWithResize(
                (System_Collections_Generic_List_Vector3__o *)v13,
                v360,
                *(const MethodInfo_38F993C **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
            }
            else
            {
              v247 = (float *)(v244 + 12 * v246);
              LODWORD(v13[1].klass) = v246 + 1;
              v247[8] = v237;
              v247[9] = v239;
              v247[10] = v238;
            }
            v248 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v361.fields.x = v233;
              v361.fields.y = v234;
              v361.fields.z = v235;
              v344 = Custom2dSplineMesh__GetUV_42287180(this, v361, (const MethodInfo *)v5);
              v249 = item.fields.x;
              if ( !v248 )
                goto LABEL_334;
            }
            else
            {
              v344.fields.y = this->fields.lineVmin;
              v249 = item.fields.x;
              v344.fields.x = item.fields.x;
              if ( !v248 )
                goto LABEL_334;
            }
            v250 = v248->fields._items;
            v251 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v248->fields._version;
            if ( !v250 )
              goto LABEL_334;
            v252 = v248->fields._size;
            if ( (unsigned int)v252 >= LODWORD(v250->max_length) )
            {
              System_Collections_Generic_List_Vector2___AddWithResize(
                v248,
                v344,
                *(const MethodInfo_38F7064 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
            }
            else
            {
              v248->fields._size = v252 + 1;
              v250->m_Items[v252] = v344;
            }
            v253 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v362.fields.x = v237;
              v362.fields.y = v239;
              v362.fields.z = v238;
              v254 = Custom2dSplineMesh__GetUV_42287180(this, v362, (const MethodInfo *)v5);
              v345.fields.y = v254.fields.y;
              v249 = v254.fields.x;
              if ( !v253 )
                goto LABEL_334;
            }
            else
            {
              v345.fields.y = this->fields.lineVmax;
              if ( !v253 )
                goto LABEL_334;
            }
            v255 = v253->fields._items;
            v256 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v253->fields._version;
            if ( v255 )
            {
              v257 = v253->fields._size;
              if ( (unsigned int)v257 >= LODWORD(v255->max_length) )
              {
                v345.fields.x = v249;
                System_Collections_Generic_List_Vector2___AddWithResize(
                  v253,
                  v345,
                  *(const MethodInfo_38F7064 **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
              }
              else
              {
                v258 = (float *)(&v255->obj.klass + v257);
                v253->fields._size = v257 + 1;
                v258[8] = v249;
                v258[9] = v345.fields.y;
              }
              v13 = (UnityEngine_Object_o *)*p_trianges;
              if ( *p_trianges )
              {
                v5 = (unsigned int)*p_vtxIdx;
                v259 = v13->fields.m_CachedPtr;
                v260 = Method_System_Collections_Generic_List_int__Add__;
                ++HIDWORD(v13[1].klass);
                if ( v259 )
                {
                  v261 = SLODWORD(v13[1].klass);
                  if ( (unsigned int)v261 >= *(_DWORD *)(v259 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)v13,
                      v5,
                      *(const MethodInfo_385C978 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
                    v13 = (UnityEngine_Object_o *)*p_trianges;
                    if ( !*p_trianges )
                      goto LABEL_334;
                  }
                  else
                  {
                    LODWORD(v13[1].klass) = v261 + 1;
                    *(_DWORD *)(v259 + 4 * v261 + 32) = v5;
                  }
                  v262 = *p_vtxIdx;
                  v263 = v13->fields.m_CachedPtr;
                  v264 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(v13[1].klass);
                  if ( v263 )
                  {
                    v265 = SLODWORD(v13[1].klass);
                    v5 = (unsigned int)(v262 + 2);
                    if ( (unsigned int)v265 >= *(_DWORD *)(v263 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)v13,
                        v5,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
                      v13 = (UnityEngine_Object_o *)*p_trianges;
                      if ( !*p_trianges )
                        goto LABEL_334;
                    }
                    else
                    {
                      LODWORD(v13[1].klass) = v265 + 1;
                      *(_DWORD *)(v263 + 4 * v265 + 32) = v5;
                    }
                    v266 = *p_vtxIdx;
                    v267 = v13->fields.m_CachedPtr;
                    v268 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(v13[1].klass);
                    if ( v267 )
                    {
                      v269 = SLODWORD(v13[1].klass);
                      v5 = (unsigned int)(v266 + 1);
                      if ( (unsigned int)v269 >= *(_DWORD *)(v267 + 24) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          (System_Collections_Generic_List_int__o *)v13,
                          v5,
                          *(const MethodInfo_385C978 **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
                        v13 = (UnityEngine_Object_o *)*p_trianges;
                        if ( !*p_trianges )
                          goto LABEL_334;
                      }
                      else
                      {
                        LODWORD(v13[1].klass) = v269 + 1;
                        *(_DWORD *)(v267 + 4 * v269 + 32) = v5;
                      }
                      v270 = *p_vtxIdx;
                      v271 = v13->fields.m_CachedPtr;
                      v272 = Method_System_Collections_Generic_List_int__Add__;
                      ++HIDWORD(v13[1].klass);
                      if ( v271 )
                      {
                        v273 = SLODWORD(v13[1].klass);
                        v5 = (unsigned int)(v270 + 2);
                        if ( (unsigned int)v273 >= *(_DWORD *)(v271 + 24) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            (System_Collections_Generic_List_int__o *)v13,
                            v5,
                            *(const MethodInfo_385C978 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
                          v13 = (UnityEngine_Object_o *)*p_trianges;
                          if ( !*p_trianges )
                            goto LABEL_334;
                        }
                        else
                        {
                          LODWORD(v13[1].klass) = v273 + 1;
                          *(_DWORD *)(v271 + 4 * v273 + 32) = v5;
                        }
                        v274 = *p_vtxIdx;
                        v275 = v13->fields.m_CachedPtr;
                        v276 = Method_System_Collections_Generic_List_int__Add__;
                        ++HIDWORD(v13[1].klass);
                        if ( v275 )
                        {
                          v277 = SLODWORD(v13[1].klass);
                          v5 = (unsigned int)(v274 + 3);
                          if ( (unsigned int)v277 >= *(_DWORD *)(v275 + 24) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              (System_Collections_Generic_List_int__o *)v13,
                              v5,
                              *(const MethodInfo_385C978 **)(*(_QWORD *)(v276[4] + 192LL) + 112LL));
                            v13 = (UnityEngine_Object_o *)*p_trianges;
                            if ( !*p_trianges )
                              goto LABEL_334;
                          }
                          else
                          {
                            LODWORD(v13[1].klass) = v277 + 1;
                            *(_DWORD *)(v275 + 4 * v277 + 32) = v5;
                          }
                          v278 = *p_vtxIdx;
                          v279 = v13->fields.m_CachedPtr;
                          v280 = Method_System_Collections_Generic_List_int__Add__;
                          ++HIDWORD(v13[1].klass);
                          if ( v279 )
                          {
                            v281 = SLODWORD(v13[1].klass);
                            v5 = (unsigned int)(v278 + 1);
                            if ( (unsigned int)v281 >= *(_DWORD *)(v279 + 24) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                (System_Collections_Generic_List_int__o *)v13,
                                v5,
                                *(const MethodInfo_385C978 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              LODWORD(v13[1].klass) = v281 + 1;
                              *(_DWORD *)(v279 + 4 * v281 + 32) = v5;
                            }
                            *p_vtxIdx += 4;
                            goto LABEL_312;
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
LABEL_334:
    sub_1C93D2C(v13, v5);
  }
LABEL_312:
  if ( this->fields.DrawCap )
  {
    v336 = Custom2dSplineMesh__GetOffset(this, this->fields.PathRate, (const MethodInfo *)v5);
    v283 = Custom2dSplineMesh__GetWidth(this, this->fields.PathRate, v282);
    v337 = Custom2dSplineMesh__GetDirection(this, this->fields.PathRate, v284);
    if ( !byte_4D2A13C )
    {
      sub_1C93AD4(&System_Math_TypeInfo);
      byte_4D2A13C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v286 = sqrtf(
             (float)(v337.fields.z * v337.fields.z)
           + (float)((float)(v337.fields.x * v337.fields.x) + (float)(v337.fields.y * v337.fields.y)));
    if ( v286 <= 0.00001 )
    {
      if ( !byte_4D2A139 )
      {
        sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
        byte_4D2A139 = 1;
      }
      v366 = UnityEngine_Vector3_TypeInfo->static_fields->zeroVector;
    }
    else
    {
      v366.fields.x = v337.fields.x / v286;
      v366.fields.y = v337.fields.y / v286;
      v366.fields.z = v337.fields.z / v286;
    }
    Custom2dSplineMesh__AddCap(this, v323, v366, v336, v283, 1, v285);
  }
  v13 = (UnityEngine_Object_o *)*p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v289 = *v299;
  v13 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector3___ToArray(
                                  (System_Collections_Generic_List_Vector3__o *)v13,
                                  (const MethodInfo_38FB50C *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  if ( !v289 )
    goto LABEL_334;
  UnityEngine_Mesh__set_vertices(v289, (UnityEngine_Vector3_array *)v13, 0);
  v13 = (UnityEngine_Object_o *)*p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v290 = *v299;
  v13 = (UnityEngine_Object_o *)System_Collections_Generic_List_int___ToArray(
                                  (System_Collections_Generic_List_int__o *)v13,
                                  (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v290 )
    goto LABEL_334;
  UnityEngine_Mesh__set_triangles(v290, (System_Int32_array *)v13, 0);
  v13 = (UnityEngine_Object_o *)*p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v291 = *v299;
  v13 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector2___ToArray(
                                  (System_Collections_Generic_List_Vector2__o *)v13,
                                  (const MethodInfo_38F8B80 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  if ( !v291 )
    goto LABEL_334;
  UnityEngine_Mesh__set_uv(v291, (UnityEngine_Vector2_array *)v13, 0);
  v292 = *p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v293 = v292->fields._version + 1;
  v292->fields._size = 0;
  v292->fields._version = v293;
  v294 = *p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v295 = v294->fields._version + 1;
  v294->fields._size = 0;
  v294->fields._version = v295;
  v296 = *p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v297 = v296->fields._version + 1;
  v296->fields._size = 0;
  v296->fields._version = v297;
  v13 = (UnityEngine_Object_o *)*v299;
  if ( !*v299 )
    goto LABEL_334;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)v13, 0);
}


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
    sub_1C93D2C(this, index);
  if ( LODWORD(points->max_length) <= index )
    sub_1C93D34(this);
  v4 = (float *)((char *)points + 12 * index);
  result.fields.x = v4[8];
  result.fields.y = v4[9];
  result.fields.z = v4[10];
  return result;
}


int32_t Custom2dSplineMesh__GetControlPointMode(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v4; // w9

  modes = this->fields.modes;
  if ( !modes )
    sub_1C93D2C(this, index);
  v4 = (index + 1) / 3;
  if ( (unsigned int)v4 >= LODWORD(modes->max_length) )
    sub_1C93D34(this);
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
    sub_1C93D2C(v5, v6);
  v8 = (index + 1) / 3;
  if ( (unsigned int)v8 >= LODWORD(curveWeight->max_length) )
    sub_1C93D34(v5);
  return curveWeight->m_Items[v8];
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetDirection(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  float v3; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Velocity; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Velocity = Custom2dSplineMesh__GetVelocity(this, t, method);
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v3 = sqrtf(
         (float)(Velocity.fields.z * Velocity.fields.z)
       + (float)((float)(Velocity.fields.x * Velocity.fields.x) + (float)(Velocity.fields.y * Velocity.fields.y)));
  if ( v3 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    result.fields.x = static_fields->zeroVector.fields.x;
    result.fields.y = static_fields->zeroVector.fields.y;
    result.fields.z = static_fields->zeroVector.fields.z;
  }
  else
  {
    result.fields.x = Velocity.fields.x / v3;
    result.fields.y = Velocity.fields.y / v3;
    result.fields.z = Velocity.fields.z / v3;
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
  int32_t flattenAxis; // w9
  int v5; // w8
  int v6; // w10
  float v7; // s11
  int v8; // w10
  float v10; // s15
  float v11; // s12
  const MethodInfo *v12; // x1
  float v13; // s9
  float v14; // s10
  float v15; // s12
  float v16; // s13
  float v17; // s14
  float v18; // s15
  float v19; // s11
  float v20; // s10
  float v21; // s9
  float v22; // s2
  float x; // s0
  float y; // s1
  float z; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float v27; // s9
  float v28; // s10
  float v29; // s11
  float Width; // s0
  int32_t v31; // w8
  float v32; // s1
  float v33; // s2
  float v34; // s3
  UnityEngine_Vector3_o Direction; // 0:kr00_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  flattenAxis = this->fields.flattenAxis;
  if ( this->fields.FlipMesh )
    v5 = -1;
  else
    v5 = 1;
  if ( flattenAxis )
    v6 = 0;
  else
    v6 = v5;
  v7 = (float)v6;
  if ( flattenAxis == 1 )
    v8 = v5;
  else
    v8 = 0;
  if ( flattenAxis != 2 )
    v5 = 0;
  v10 = (float)v8;
  v11 = (float)v5;
  Direction = Custom2dSplineMesh__GetDirection(this, rate, method);
  v13 = Direction.fields.z * v10;
  v14 = Direction.fields.y * v11;
  v15 = Direction.fields.x * v11;
  v16 = Direction.fields.z * v7;
  v17 = Direction.fields.y * v7;
  v18 = Direction.fields.x * v10;
  if ( !byte_4D2A13C )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A13C = 1;
  }
  v19 = v13 - v14;
  v20 = v15 - v16;
  v21 = v17 - v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( v22 <= 0.00001 )
  {
    if ( !byte_4D2A139 )
    {
      sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
      byte_4D2A139 = 1;
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
  v27 = -x;
  v28 = -y;
  v29 = -z;
  Width = Custom2dSplineMesh__GetWidth(this, rate, v12);
  v31 = this->fields.flattenAxis;
  v32 = Width * v27;
  v33 = Width * v28;
  v34 = Width * v29;
  result.fields.x = fabsf(Width * v27);
  if ( v31 )
    result.fields.x = v32;
  result.fields.y = fabsf(v33);
  if ( v31 != 1 )
    result.fields.y = v33;
  result.fields.z = fabsf(v34);
  if ( v31 != 2 )
    result.fields.z = v34;
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
  UnityEngine_Vector3_o Point_42270548; // 0:kr00_12.12
  UnityEngine_Vector3_o v15; // 0:kr14_12.12
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  innerT = 0.0;
  WeightedPointIdxAndT = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  points = this->fields.points;
  if ( !points )
    sub_1C93D2C(WeightedPointIdxAndT, v6);
  max_length = points->max_length;
  if ( (unsigned int)WeightedPointIdxAndT >= max_length
    || (int)WeightedPointIdxAndT + 1 >= max_length
    || (int)WeightedPointIdxAndT + 2 >= max_length
    || (int)WeightedPointIdxAndT + 3 >= max_length )
  {
    sub_1C93D34(WeightedPointIdxAndT);
  }
  *(_QWORD *)&v15.fields.x = WeightedPointIdxAndT;
  LODWORD(v15.fields.z) = v6;
  Point_42270548 = Bezier__GetPoint_42270548(
                     points->m_Items[(int)WeightedPointIdxAndT],
                     points->m_Items[(int)WeightedPointIdxAndT + 1],
                     points->m_Items[(int)WeightedPointIdxAndT + 2],
                     v15,
                     COERCE_FLOAT(*(_QWORD *)&points->m_Items[(int)WeightedPointIdxAndT + 3].fields.x),
                     v7);
  result.fields.x = Point_42270548.fields.x;
  result.fields.y = Point_42270548.fields.y;
  result.fields.z = Point_42270548.fields.z;
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
    sub_1C93D2C(v7, v8);
  v10.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  v10.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
  v10.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
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
    sub_1C93D2C(v7, v8);
  return UnityEngine_Transform__TransformPoint(transform, v13, 0);
}


float Custom2dSplineMesh__GetTotalWeight(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Single_array *curveWeight; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v7; // x9
  float *m_Items; // x11
  float result; // s0
  float v10; // s1

  Custom2dSplineMesh__checkWeightNull(this, method);
  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_1C93D2C(v3, v4);
  max_length_low = LODWORD(curveWeight->max_length);
  if ( (__int64)(max_length_low << 32) < 1 )
    return 0.0;
  v7 = 0;
  m_Items = curveWeight->m_Items;
  result = 0.0;
  do
  {
    if ( v7 >= max_length_low )
      sub_1C93D34(v3);
    v10 = m_Items[v7++];
    result = result + v10;
  }
  while ( (__int64)v7 < (int)max_length_low );
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        float coordU,
        float coordV,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o UV_42287180; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.StrictUVmode )
  {
    UV_42287180 = Custom2dSplineMesh__GetUV_42287180(this, pos, method);
    coordU = UV_42287180.fields.x;
    coordV = UV_42287180.fields.y;
  }
  result.fields.x = coordU;
  result.fields.y = coordV;
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV_42287180(
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
LABEL_7:
    result.fields.x = pos.fields.x * UVrate;
    result.fields.y = v8 * UVrate;
    return result;
  }
  if ( flattenAxis == 1 )
  {
    UVrate = this->fields.UVrate;
    v8 = pos.fields.z + this->fields.UVslice;
    goto LABEL_7;
  }
  if ( flattenAxis )
  {
    if ( !byte_4D2A019 )
    {
      sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
      byte_4D2A019 = 1;
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
  UnityEngine_Vector3_o FirstDerivative_42270812; // 0:s0.4,4:s1.4,8:s2.4
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
    sub_1C93D34(transform);
  }
  v11 = transform;
  *(_QWORD *)&v18.fields.x = transform;
  LODWORD(v18.fields.z) = v7;
  FirstDerivative_42270812 = Bezier__GetFirstDerivative_42270812(
                               points->m_Items[WeightedPointIdxAndT],
                               points->m_Items[WeightedPointIdxAndT + 1],
                               points->m_Items[WeightedPointIdxAndT + 2],
                               v18,
                               COERCE_FLOAT(*(_QWORD *)&points->m_Items[WeightedPointIdxAndT + 3].fields.x),
                               v8);
  if ( !v11
    || (v16 = UnityEngine_Transform__TransformPoint(v11, FirstDerivative_42270812, 0),
        (transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(transform, v7);
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
  __int64 v10; // x0
  float v11; // s4
  struct UnityEngine_Vector3_array *points; // x8
  struct System_Single_array *curveWeight; // x8
  unsigned int v14; // w9
  float v15; // s3
  float *v16; // x11
  float v17; // s0

  if ( t >= 1.0 )
  {
    *innerT = 1.0;
    points = this->fields.points;
    if ( points )
    {
      LODWORD(v10) = LODWORD(points->max_length) - 4;
      return v10;
    }
    goto LABEL_15;
  }
  TotalWeight = Custom2dSplineMesh__GetTotalWeight(this, (const MethodInfo *)innerT);
  v8 = 0.0;
  v9 = 0.0 / TotalWeight;
  if ( (float)(0.0 / TotalWeight) <= t )
  {
    curveWeight = this->fields.curveWeight;
    if ( curveWeight )
    {
      v14 = 0;
      v15 = 0.0;
      v10 = 4294967293LL;
      do
      {
        if ( v14 >= LODWORD(curveWeight->max_length) )
          sub_1C93D34(v10);
        v16 = (float *)((char *)curveWeight + 4 * (int)v14);
        v11 = v9;
        ++v14;
        v10 = (unsigned int)(v10 + 3);
        v15 = v15 + v16[8];
        v9 = v15 / TotalWeight;
      }
      while ( (float)(v15 / TotalWeight) <= t );
      goto LABEL_10;
    }
LABEL_15:
    sub_1C93D2C(this, innerT);
  }
  LODWORD(v10) = -3;
  v11 = 0.0;
LABEL_10:
  if ( v11 != v9 )
  {
    v17 = (float)(t - v11) / (float)(v9 - v11);
    if ( v17 >= 0.0 )
      v8 = fminf(v17, 1.0);
  }
  *innerT = v8;
  return v10;
}


float Custom2dSplineMesh__GetWidth(Custom2dSplineMesh_o *this, float rate, const MethodInfo *method)
{
  int32_t flattenAxis; // w8
  float v5; // s2
  float v6; // s0
  float DrawWidth; // s1
  float v9; // s0
  float v10; // s0
  float z; // s2
  float v12; // s1

  if ( !this->fields.flattenAxisAsWidthVariable )
    return this->fields.DrawWidth;
  flattenAxis = this->fields.flattenAxis;
  switch ( flattenAxis )
  {
    case 2:
      z = Custom2dSplineMesh__GetPoint(this, rate, method).fields.z;
      DrawWidth = this->fields.DrawWidth;
      v9 = z + this->fields.AxisWidthOffset;
      break;
    case 1:
      v12 = COERCE_FLOAT(LODWORD(Custom2dSplineMesh__GetPoint(this, rate, method).fields.y));
      v5 = this->fields.DrawWidth;
      v6 = v12 + this->fields.AxisWidthOffset;
      return v6 + v5;
    case 0:
      v10 = COERCE_FLOAT(Custom2dSplineMesh__GetPoint(this, rate, method));
      v5 = this->fields.DrawWidth;
      v6 = v10 + this->fields.AxisWidthOffset;
      return v6 + v5;
    default:
      v9 = this->fields.DrawWidth;
      DrawWidth = this->fields.AxisWidthOffset;
      break;
  }
  return v9 + DrawWidth;
}


void Custom2dSplineMesh__OnDestroy(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Object_o *drawMesh; // x19

  if ( (byte_4D3044B & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D3044B = 1;
  }
  meshFilter = this->fields.meshFilter;
  if ( !meshFilter
    || (UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0),
        (meshFilter = (UnityEngine_MeshFilter_o *)this->fields.drawMesh) == 0) )
  {
    sub_1C93D2C(meshFilter, method);
  }
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)meshFilter, 0);
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(drawMesh, 0);
}


void Custom2dSplineMesh__RemoveMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0

  meshFilter = this->fields.meshFilter;
  if ( !meshFilter )
    sub_1C93D2C(0, method);
  UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0);
}


void Custom2dSplineMesh__Reset(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  unsigned int v11; // w8
  struct BezierControlPointMode_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D30445 & 1) == 0 )
  {
    sub_1C93AD4(&BezierControlPointMode___TypeInfo);
    sub_1C93AD4(&float___TypeInfo);
    sub_1C93AD4(&UnityEngine_Vector3___TypeInfo);
    byte_4D30445 = 1;
  }
  v3 = sub_1C93B7C(UnityEngine_Vector3___TypeInfo, 4);
  if ( !v3 )
    goto LABEL_12;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11
    || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 1065353216, v11 == 1)
    || (*(_DWORD *)(v3 + 52) = 0, *(_QWORD *)(v3 + 44) = 0x40000000, v11 <= 2)
    || (*(_DWORD *)(v3 + 64) = 0, *(_QWORD *)(v3 + 56) = 1077936128, v11 == 3) )
  {
LABEL_11:
    sub_1C93D34(v3);
  }
  *(_DWORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 68) = 1082130432;
  this->fields.points = (struct UnityEngine_Vector3_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.points, v3, v5, v6, v7, v8, v9, v10);
  v12 = (struct BezierControlPointMode_array *)sub_1C93B7C(BezierControlPointMode___TypeInfo, 2);
  this->fields.modes = v12;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.modes, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v3 = sub_1C93B7C(float___TypeInfo, 1);
  if ( !v3 )
LABEL_12:
    sub_1C93D2C(v3, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v3 + 32) = 1065353216;
  this->fields.curveWeight = (struct System_Single_array *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.curveWeight, v3, v19, v20, v21, v22, v23, v24);
}


UnityEngine_Vector3_o Custom2dSplineMesh__RotateVec3(
        Custom2dSplineMesh_o *this,
        float angleDegree,
        UnityEngine_Vector3_o org,
        const MethodInfo *method)
{
  int32_t flattenAxis; // w8
  float y; // s9
  float z; // s8
  float x; // s10
  UnityEngine_Vector3_o v13; // 0:kr10_12.12
  UnityEngine_Vector3_o v14; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v16; // 0:s4.4,4:s5.4,8:s6.4
  UnityEngine_Quaternion_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  flattenAxis = this->fields.flattenAxis;
  y = org.fields.y;
  z = org.fields.z;
  if ( !this->fields.FlipMesh )
    angleDegree = -angleDegree;
  x = org.fields.x;
  switch ( flattenAxis )
  {
    case 2:
      v14.fields.z = angleDegree * 0.017453;
      v14.fields.x = 0.0;
      v14.fields.y = 0.0;
LABEL_10:
      v17 = UnityEngine_Quaternion__Internal_FromEulerRad(v14, 0);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      v13 = UnityEngine_Quaternion__op_Multiply_72058644(v17, v16, 0);
      x = v13.fields.x;
      y = v13.fields.y;
      z = v13.fields.z;
      break;
    case 1:
      v14.fields.y = angleDegree * 0.017453;
      v14.fields.x = 0.0;
      goto LABEL_9;
    case 0:
      v14.fields.x = angleDegree * 0.017453;
      v14.fields.y = 0.0;
LABEL_9:
      v14.fields.z = 0.0;
      goto LABEL_10;
  }
  result.fields.y = y;
  result.fields.z = z;
  result.fields.x = x;
  return result;
}


void Custom2dSplineMesh__SetControlPoint(
        Custom2dSplineMesh_o *this,
        int32_t index,
        UnityEngine_Vector3_o point,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w10
  float32x2_t *v6; // x11
  float32x2_t v7; // d4
  float v8; // s5
  unsigned int v9; // w11
  float32x2_t v10; // d4
  float v11; // s3
  float32x2_t *v12; // x8
  float v13; // s6
  unsigned int v14; // w10
  __int64 v15; // x9
  float32x2_t *v16; // x8
  float v17; // s3
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
        sub_1C93D2C(this, index);
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
    sub_1C93D34(this);
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
    sub_1C93D2C(this, index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(modes->max_length) )
    sub_1C93D34(this);
  modes->m_Items[v5] = mode;
  Custom2dSplineMesh__EnforceMode(this, index, *(const MethodInfo **)&mode);
}


void Custom2dSplineMesh__SetList(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Vector3__o *splinePos; // x0
  int v4; // w8

  if ( (byte_4D3044C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__Clear__);
    byte_4D3044C = 1;
  }
  splinePos = this->fields.splinePos;
  if ( !splinePos )
    sub_1C93D2C(0, method);
  v4 = splinePos->fields._version + 1;
  splinePos->fields._size = 0;
  splinePos->fields._version = v4;
  System_Collections_Generic_List_Vector3___AddRange(
    splinePos,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.points,
    (const MethodInfo_38F9B6C *)Method_System_Collections_Generic_List_Vector3__AddRange__);
}


void Custom2dSplineMesh__SetPathRate(Custom2dSplineMesh_o *this, float pRate, const MethodInfo *method)
{
  this->fields.PathRate = pRate;
  Custom2dSplineMesh__GenMesh(this, method);
}


void Custom2dSplineMesh__Start(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  if ( (byte_4D30449 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4D30449 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_319B20C *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.meshFilter,
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
  if ( (byte_4D3044A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    this = (Custom2dSplineMesh_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    byte_4D3044A = 1;
  }
  if ( v2->fields.DrawPath && v2->fields.ResetOnUpdate )
  {
    if ( !v2->fields.createVertsEveryStep )
    {
      Custom2dSplineMesh__GenMesh(v2, method);
      return;
    }
    points = v2->fields.points;
    if ( !points )
      goto LABEL_22;
    max_length = points->max_length;
    if ( max_length )
    {
      this = (Custom2dSplineMesh_o *)v2->fields.splinePos;
      if ( !this )
        goto LABEL_22;
      m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
      if ( m_CancellationTokenSource )
      {
        if ( m_CancellationTokenSource == (_DWORD)max_length )
        {
          if ( m_CancellationTokenSource >= 1 )
          {
            v6 = 0;
            v7 = 0;
            while ( 1 )
            {
              Item = System_Collections_Generic_List_Vector3___get_Item(
                       (System_Collections_Generic_List_Vector3__o *)this,
                       v7,
                       (const MethodInfo_38F960C *)Method_System_Collections_Generic_List_Vector3__get_Item__);
              v8 = v2->fields.points;
              if ( !v8 )
                break;
              if ( v7 >= LODWORD(v8->max_length) )
                sub_1C93D34(this);
              v9 = (float *)((char *)v8 + v6);
              if ( (float)((float)((float)(Item.fields.z - v9[10]) * (float)(Item.fields.z - v9[10]))
                         + (float)((float)((float)(Item.fields.x - v9[8]) * (float)(Item.fields.x - v9[8]))
                                 + (float)((float)(Item.fields.y - v9[9]) * (float)(Item.fields.y - v9[9])))) >= 1.0e-10 )
                goto LABEL_20;
              this = (Custom2dSplineMesh_o *)v2->fields.splinePos;
              if ( !this )
                break;
              ++v7;
              v6 += 12;
              if ( (__int64)v7 >= SLODWORD(this->fields.m_CancellationTokenSource) )
                return;
            }
LABEL_22:
            sub_1C93D2C(this, method);
          }
          return;
        }
LABEL_20:
        Custom2dSplineMesh__GenMesh(v2, method);
      }
      Custom2dSplineMesh__SetList(v2, method);
    }
  }
}


void Custom2dSplineMesh__checkWeightNull(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Custom2dSplineMesh_o *v2; // x20
  GrandQuestFolderBoardItem_o *p_curveWeight; // x19
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x21
  unsigned __int64 monitor_low; // x8
  struct BezierControlPointMode_array *modes; // x8
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  unsigned __int64 v14; // x9
  char *v15; // x12
  struct BezierControlPointMode_array *v16; // x9
  System_Collections_Generic_List_float__o *v17; // x20
  System_Single_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  v2 = this;
  if ( (byte_4D30446 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_float___ctor___79019176);
    sub_1C93AD4(&System_Collections_Generic_List_float__TypeInfo);
    this = (Custom2dSplineMesh_o *)sub_1C93AD4(&float___TypeInfo);
    byte_4D30446 = 1;
  }
  p_curveWeight = (GrandQuestFolderBoardItem_o *)&v2->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.curveWeight;
  if ( !curveWeight || (monitor_low = (unsigned __int64)curveWeight[1].monitor) == 0 )
  {
    modes = v2->fields.modes;
    if ( !modes )
      goto LABEL_18;
    v7 = sub_1C93B7C(float___TypeInfo, (unsigned int)(LODWORD(modes->max_length) - 1));
    p_curveWeight->klass = (GrandQuestFolderBoardItem_c *)v7;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v2->fields.curveWeight, v7, v8, v9, v10, v11, v12, v13);
    curveWeight = (System_Collections_Generic_IEnumerable_T__o *)p_curveWeight->klass;
    if ( !p_curveWeight->klass )
      goto LABEL_18;
    monitor_low = LODWORD(curveWeight[1].monitor);
    if ( (__int64)(monitor_low << 32) >= 1 )
    {
      v14 = 0;
      do
      {
        if ( v14 >= monitor_low )
          sub_1C93D34(this);
        v15 = (char *)curveWeight + 4 * v14++;
        *((_DWORD *)v15 + 8) = 1065353216;
      }
      while ( (__int64)v14 < (int)monitor_low );
    }
  }
  v16 = v2->fields.modes;
  if ( !v16 )
    goto LABEL_18;
  if ( (_DWORD)monitor_low == LODWORD(v16->max_length) )
  {
    v17 = (System_Collections_Generic_List_float__o *)sub_1C93D20(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor_59360568(
      v17,
      curveWeight,
      (const MethodInfo_389C538 *)Method_System_Collections_Generic_List_float___ctor___79019176);
    if ( p_curveWeight->klass && v17 )
    {
      System_Collections_Generic_List_float___RemoveAt(
        v17,
        LODWORD(p_curveWeight->klass->_1.namespaze) - 1,
        (const MethodInfo_389E3EC *)Method_System_Collections_Generic_List_float__RemoveAt__);
      v18 = System_Collections_Generic_List_float___ToArray(
              v17,
              (const MethodInfo_389E724 *)Method_System_Collections_Generic_List_float__ToArray__);
      p_curveWeight->klass = (GrandQuestFolderBoardItem_c *)v18;
      sub_1C93A78(p_curveWeight, (int32_t)v18, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_18:
    sub_1C93D2C(this, method);
  }
}


int32_t Custom2dSplineMesh__get_ControlPointCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C93D2C(this, method);
  return points->max_length;
}


int32_t Custom2dSplineMesh__get_CurveCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned __int64 v3; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C93D2C(this, method);
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
  __int64 v9; // x0
  __int64 v10; // x1
  float TotalWeight; // s0
  float v12; // s1
  struct System_Single_array *curveWeight; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v15; // x9
  float *m_Items; // x11
  float v17; // s2
  bool result; // w0

  *jumps = 0.0;
  if ( !this->fields.CutOnFreePoint || !this->fields.DrawCap )
    return 0;
  TotalWeight = Custom2dSplineMesh__GetTotalWeight(this, (const MethodInfo *)jumps);
  v12 = 0.0 / TotalWeight;
  if ( (float)(0.0 / TotalWeight) <= now )
  {
    curveWeight = this->fields.curveWeight;
    if ( !curveWeight )
      sub_1C93D2C(v9, v10);
    max_length_low = LODWORD(curveWeight->max_length);
    if ( (__int64)(max_length_low << 32) >= 1 )
    {
      v15 = 0;
      m_Items = curveWeight->m_Items;
      v17 = 0.0;
      do
      {
        if ( v15 >= max_length_low )
          sub_1C93D34(v9);
        v17 = v17 + m_Items[v15];
        v12 = v17 / TotalWeight;
        if ( (float)(v17 / TotalWeight) > now )
          break;
        ++v15;
      }
      while ( (__int64)v15 < (int)max_length_low );
    }
  }
  result = 0;
  if ( (float)(now + increment) < 1.0 && v12 < (float)(now + increment) )
  {
    *jumps = v12;
    return 1;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__upVec(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  int32_t flattenAxis; // w9
  int v3; // w8
  int v4; // w10
  int v6; // w10
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  flattenAxis = this->fields.flattenAxis;
  if ( this->fields.FlipMesh )
    v3 = -1;
  else
    v3 = 1;
  if ( flattenAxis )
    v4 = 0;
  else
    v4 = v3;
  result.fields.x = (float)v4;
  if ( flattenAxis == 1 )
    v6 = v3;
  else
    v6 = 0;
  if ( flattenAxis != 2 )
    v3 = 0;
  result.fields.y = (float)v6;
  result.fields.z = (float)v3;
  return result;
}