void Custom2dSplineMesh___cctor(const MethodInfo *method)
{
  if ( (byte_4C42A06 & 1) == 0 )
  {
    sub_1C37058(&Custom2dSplineMesh_TypeInfo);
    byte_4C42A06 = 1;
  }
  LODWORD(Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD) = (struct Custom2dSplineMesh_StaticFields)953267991;
}


void Custom2dSplineMesh___ctor(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector3__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C42A05 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4C42A05 = 1;
  }
  this->fields.PathRate = 1.0;
  this->fields.UVrate = 0.5;
  *(_QWORD *)&this->fields.complexity = 0x3F7D70A441A00000LL;
  this->fields.DrawWidth = 3.0;
  v3 = (System_Collections_Generic_List_Vector3__o *)sub_1C372A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v3,
    (const MethodInfo_37FB558 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.splinePos = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.splinePos, (int32_t)v3, v4, v5);
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
  float y; // s8
  float v10; // s10
  float v12; // s2 OVERLAPPED
  float v13; // s15
  int32_t CapComplexity; // w8
  int32_t flattenAxis; // w8
  float v16; // s1
  float v17; // s0
  float v18; // s13
  float v19; // s12
  float v20; // s3
  float v21; // s8
  float v22; // s11
  float v23; // s15
  float v24; // s14
  float v25; // s1
  float v26; // s3
  const MethodInfo *v27; // x1
  float v28; // s11
  int32_t v29; // w8
  float v30; // s8
  float v31; // s14
  float v32; // s2 OVERLAPPED
  float v33; // s13
  int32_t v34; // w8
  float v35; // s8
  float v36; // s14
  float v37; // s15
  float v38; // s0
  float v39; // s12
  float v40; // s11
  int32_t v41; // w8
  float v42; // s14
  float v43; // s10
  float v44; // s8
  float v45; // s11
  System_Collections_Generic_List_Vector3__o *verts; // x0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  float *v50; // x8
  struct UnityEngine_Vector3_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  float *v54; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x21
  unsigned __int64 UV_41556024; // kr00_8
  struct UnityEngine_Vector2_array *v57; // x8
  _QWORD *v58; // x9
  __int64 v59; // x10
  struct System_Collections_Generic_List_Vector2__o *v60; // x21
  unsigned __int64 v61; // kr08_8
  struct UnityEngine_Vector2_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  int32_t v65; // w8
  float v66; // s12
  float v67; // s13
  float v68; // s8
  float v69; // s0
  float v70; // s14
  float v71; // s15
  float v72; // s11
  float v73; // s0
  struct UnityEngine_Vector3_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  float *v77; // x8
  struct UnityEngine_Vector3_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  float *v81; // x8
  struct System_Collections_Generic_List_Vector2__o *v82; // x21
  float v83; // s9
  unsigned __int64 v84; // kr10_8
  struct UnityEngine_Vector2_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  struct System_Collections_Generic_List_Vector2__o *v88; // x21
  float capVmax; // s1 OVERLAPPED
  UnityEngine_Vector2_o v90; // kr18_8
  struct UnityEngine_Vector2_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  float *v94; // x8
  float v95; // s0
  int32_t v96; // w8
  float v97; // s1
  float v98; // s12
  float v99; // s0
  float v100; // s11
  float v101; // s2
  float v102; // s13
  float v103; // s9
  float v104; // s10
  float v105; // s8
  struct UnityEngine_Vector3_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  float *v109; // x8
  struct UnityEngine_Vector3_array *v110; // x8
  _QWORD *v111; // x9
  __int64 v112; // x10
  float *v113; // x8
  struct System_Collections_Generic_List_Vector2__o *v114; // x20
  unsigned __int64 v115; // kr20_8
  struct UnityEngine_Vector2_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  struct System_Collections_Generic_List_Vector2__o *v119; // x20
  Custom2dSplineMesh_o *v120; // x0
  float v121; // s0 OVERLAPPED
  float v122; // s1
  float v123; // s2
  UnityEngine_Vector2_o v124; // kr78_8
  float v125; // s13
  float v126; // s0
  float v127; // s1
  struct UnityEngine_Vector3_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  float *v131; // x8
  struct UnityEngine_Vector3_array *v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  float *v135; // x8
  struct System_Collections_Generic_List_Vector2__o *v136; // x21
  const MethodInfo *v137; // x1
  UnityEngine_Vector2_o v138; // kr28_8
  struct UnityEngine_Vector2_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  struct System_Collections_Generic_List_Vector2__o *v142; // x21
  UnityEngine_Vector2_o v143; // kr30_8
  struct UnityEngine_Vector2_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  float v147; // s2
  float v148; // s0
  float v149; // s1
  float v150; // s10
  int32_t v151; // w8
  float v152; // s9
  float v153; // s8
  int32_t v154; // w8
  float v155; // s0
  float v156; // s9
  struct UnityEngine_Vector3_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  float *v160; // x8
  struct System_Collections_Generic_List_Vector2__o *v161; // x21
  unsigned __int64 v162; // x1
  UnityEngine_Vector2_o v163; // kr38_8
  struct UnityEngine_Vector2_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  int32_t v167; // w8
  int v168; // w21
  int v169; // w27
  float v170; // s11
  float v171; // s12
  float v172; // s13
  float v173; // s10
  const MethodInfo *v174; // x1
  float v175; // s9
  int32_t v176; // w8
  float v177; // s8
  float v178; // s14
  struct UnityEngine_Vector3_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  float *v182; // x8
  struct System_Collections_Generic_List_Vector2__o *v183; // x20
  UnityEngine_Vector2_o v184; // kr40_8
  struct UnityEngine_Vector2_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  int32_t vtxIdx; // w1
  struct UnityEngine_Vector3_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  int v192; // w20
  int32_t v193; // w9
  struct UnityEngine_Vector3_array *v194; // x8
  _QWORD *v195; // x10
  __int64 v196; // x11
  int32_t v197; // w1
  int32_t v198; // w9
  struct UnityEngine_Vector3_array *v199; // x8
  _QWORD *v200; // x10
  __int64 v201; // x11
  int32_t *p_vtxIdx; // x19
  int32_t v203; // t1
  int32_t v204; // w8
  float v205; // s1
  float v206; // s3
  const MethodInfo *v207; // x1
  float v208; // s15
  int32_t v209; // w8
  float v210; // s12
  int32_t v211; // w1
  struct UnityEngine_Vector3_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  int32_t v215; // w9
  struct UnityEngine_Vector3_array *v216; // x8
  _QWORD *v217; // x10
  __int64 v218; // x11
  int32_t v219; // w1
  int32_t v220; // w9
  struct UnityEngine_Vector3_array *v221; // x8
  _QWORD *v222; // x10
  __int64 v223; // x11
  unsigned int max_length; // w12
  unsigned __int64 v225; // x1
  int32_t v226; // w1
  struct UnityEngine_Vector3_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  int32_t v230; // w9
  struct UnityEngine_Vector3_array *v231; // x8
  _QWORD *v232; // x10
  __int64 v233; // x11
  int32_t v234; // w1
  int32_t v235; // w9
  struct UnityEngine_Vector3_array *v236; // x8
  _QWORD *v237; // x9
  __int64 v238; // x10
  float *v239; // x8
  struct System_Collections_Generic_List_Vector2__o *v240; // x20
  UnityEngine_Vector2_o v241; // kr48_8
  struct UnityEngine_Vector2_array *v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  int32_t v245; // t1
  int v246; // w8
  int32_t *v247; // x20
  struct UnityEngine_Vector3_array *v248; // x8
  _QWORD *v249; // x9
  __int64 v250; // x10
  float *v251; // x8
  struct UnityEngine_Vector3_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  float *v255; // x8
  struct System_Collections_Generic_List_Vector2__o *v256; // x21
  const MethodInfo *v257; // x1
  UnityEngine_Vector2_o v258; // kr50_8
  struct UnityEngine_Vector2_array *v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  struct System_Collections_Generic_List_Vector2__o *v262; // x21
  UnityEngine_Vector2_o v263; // kr58_8
  struct UnityEngine_Vector2_array *v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  int32_t v267; // w8
  float v268; // s8
  float v269; // s12
  float v270; // s13
  float v271; // s0
  float v272; // s14
  float v273; // s11
  float v274; // s15
  float v275; // s0
  struct UnityEngine_Vector3_array *v276; // x8
  _QWORD *v277; // x9
  __int64 v278; // x10
  float *v279; // x8
  struct UnityEngine_Vector3_array *v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  float *v283; // x8
  struct System_Collections_Generic_List_Vector2__o *v284; // x21
  const MethodInfo *v285; // x1
  UnityEngine_Vector2_o v286; // kr60_8
  struct UnityEngine_Vector2_array *v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  struct System_Collections_Generic_List_Vector2__o *v290; // x21
  UnityEngine_Vector2_o v291; // x1
  UnityEngine_Vector2_o v292; // kr68_8
  struct UnityEngine_Vector2_array *v293; // x8
  _QWORD *v294; // x9
  __int64 v295; // x10
  const MethodInfo *v296; // x1
  float v297; // s13
  int32_t v298; // w8
  float v299; // s11
  float v300; // s12
  float v301; // s14
  const MethodInfo *v302; // x1
  float v303; // s10
  int32_t v304; // w8
  float v305; // s9
  struct UnityEngine_Vector3_array *v306; // x8
  _QWORD *v307; // x9
  __int64 v308; // x10
  float *v309; // x8
  struct UnityEngine_Vector3_array *v310; // x8
  _QWORD *v311; // x9
  __int64 v312; // x10
  float *v313; // x8
  struct System_Collections_Generic_List_Vector2__o *v314; // x20
  UnityEngine_Vector2_o v315; // kr70_8
  struct UnityEngine_Vector2_array *v316; // x8
  _QWORD *v317; // x9
  __int64 v318; // x10
  struct UnityEngine_Vector2_array *v319; // x8
  _QWORD *v320; // x9
  __int64 v321; // x10
  int32_t v322; // w1
  struct UnityEngine_Vector3_array *v323; // x8
  _QWORD *v324; // x9
  __int64 v325; // x10
  int32_t v326; // w9
  struct UnityEngine_Vector3_array *v327; // x8
  _QWORD *v328; // x10
  __int64 v329; // x11
  int32_t v330; // w1
  int32_t v331; // w9
  struct UnityEngine_Vector3_array *v332; // x8
  _QWORD *v333; // x10
  __int64 v334; // x11
  int32_t v335; // w1
  int32_t v336; // w9
  struct UnityEngine_Vector3_array *v337; // x8
  _QWORD *v338; // x10
  __int64 v339; // x11
  int32_t v340; // w1
  int32_t v341; // w9
  struct UnityEngine_Vector3_array *v342; // x8
  _QWORD *v343; // x10
  __int64 v344; // x11
  int32_t v345; // w1
  int32_t v346; // w9
  struct UnityEngine_Vector3_array *v347; // x8
  _QWORD *v348; // x10
  __int64 v349; // x11
  int32_t v350; // w1
  float v351; // [xsp+14h] [xbp-ACh]
  float v352; // [xsp+14h] [xbp-ACh]
  float v353; // [xsp+18h] [xbp-A8h]
  float v354; // [xsp+18h] [xbp-A8h]
  float x; // [xsp+1Ch] [xbp-A4h]
  float v356; // [xsp+28h] [xbp-98h]
  float item; // [xsp+2Ch] [xbp-94h]
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
  UnityEngine_Vector3_o v369; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v370; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v371; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v372; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v373; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v374; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v375; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v376; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v377; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v378; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v379; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v380; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v381; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v382; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v383; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v384; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v385; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v386; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v387; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v388; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v389; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v390; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v391; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v394; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v395; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v396; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v397; // 0:s1.4,4:s2.4,8:s3.4

  z = normalizedDir.fields.z;
  y = normalizedDir.fields.y;
  v10 = pos.fields.y;
  x = normalizedDir.fields.x;
  v356 = pos.fields.x;
  item = pos.fields.z;
  if ( (byte_4C42A04 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__Add__);
    byte_4C42A04 = 1;
  }
  v12 = offset.fields.y;
  v13 = offset.fields.x;
  if ( !this->fields.StrictUVmode )
  {
LABEL_7:
    v351 = y;
    v353 = z;
    if ( !isTail )
    {
      flattenAxis = this->fields.flattenAxis;
      v16 = v356 - (float)(x * width);
      v17 = v10 - (float)(y * width);
      v18 = offset.fields.x + v16;
      v19 = offset.fields.y + v17;
      if ( flattenAxis == 2 )
      {
        v24 = v16 - offset.fields.x;
        v22 = v17 - offset.fields.y;
        v21 = 0.0;
        v23 = 0.0;
      }
      else
      {
        v20 = item - (float)(z * width);
        v21 = offset.fields.z + v20;
        if ( flattenAxis == 1 )
        {
          v24 = v16 - offset.fields.x;
          v23 = v20 - offset.fields.z;
          v19 = 0.0;
          v22 = 0.0;
        }
        else if ( flattenAxis )
        {
          v24 = v16 - offset.fields.x;
          v22 = v17 - offset.fields.y;
          v23 = v20 - offset.fields.z;
        }
        else
        {
          v22 = v17 - offset.fields.y;
          v23 = v20 - offset.fields.z;
          v18 = 0.0;
          v24 = 0.0;
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
        v359.fields.x = v18;
        v359.fields.y = v19;
        v359.fields.z = v21;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v359,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = (float *)((char *)items + 12 * size);
        verts->fields._size = size + 1;
        v50[8] = v18;
        v50[9] = v19;
        v50[10] = v21;
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
        v360.fields.x = v24;
        v360.fields.y = v22;
        v360.fields.z = v23;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v360,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = (float *)((char *)v51 + 12 * v53);
        verts->fields._size = v53 + 1;
        v54[8] = v24;
        v54[9] = v22;
        v54[10] = v23;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v361.fields.x = v18;
        v361.fields.y = v19;
        v361.fields.z = v21;
        UV_41556024 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v361, (const MethodInfo *)isTail);
        if ( !uvs )
          goto LABEL_374;
      }
      else
      {
        UV_41556024 = __PAIR64__(LODWORD(this->fields.capVmin), 0);
        if ( !uvs )
          goto LABEL_374;
      }
      v57 = uvs->fields._items;
      v58 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++uvs->fields._version;
      if ( !v57 )
        goto LABEL_374;
      v59 = uvs->fields._size;
      if ( (unsigned int)v59 >= LODWORD(v57->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          (UnityEngine_Vector2_o)UV_41556024,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = v59 + 1;
        v57->m_Items[v59] = (UnityEngine_Vector2_o)UV_41556024;
      }
      v60 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v362.fields.x = v24;
        v362.fields.y = v22;
        v362.fields.z = v23;
        v61 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v362, (const MethodInfo *)isTail);
      }
      else
      {
        v61 = __PAIR64__(LODWORD(this->fields.capVmax), 0);
      }
      v13 = offset.fields.x;
      if ( !v60 )
        goto LABEL_374;
      v62 = v60->fields._items;
      v63 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v60->fields._version;
      if ( !v62 )
        goto LABEL_374;
      v64 = v60->fields._size;
      if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v60,
          (UnityEngine_Vector2_o)v61,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v60->fields._size = v64 + 1;
        v62->m_Items[v64] = (UnityEngine_Vector2_o)v61;
      }
      v12 = offset.fields.y;
    }
    v65 = this->fields.flattenAxis;
    v66 = v10 + v12;
    v67 = v356 + v13;
    if ( v65 == 2 )
    {
      v70 = v10 - v12;
      v68 = 0.0;
      v72 = 0.0;
      v71 = v356 - v13;
LABEL_64:
      verts = this->fields.verts;
      if ( verts )
      {
        v74 = verts->fields._items;
        v75 = Method_System_Collections_Generic_List_Vector3__Add__;
        ++verts->fields._version;
        if ( v74 )
        {
          v76 = verts->fields._size;
          if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
          {
            v363.fields.x = v67;
            v363.fields.y = v66;
            v363.fields.z = v68;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v363,
              *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = (float *)((char *)v74 + 12 * v76);
            verts->fields._size = v76 + 1;
            v77[8] = v67;
            v77[9] = v66;
            v77[10] = v68;
          }
          verts = this->fields.verts;
          if ( verts )
          {
            v78 = verts->fields._items;
            v79 = Method_System_Collections_Generic_List_Vector3__Add__;
            ++verts->fields._version;
            if ( v78 )
            {
              v80 = verts->fields._size;
              if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
              {
                v364.fields.x = v71;
                v364.fields.y = v70;
                v364.fields.z = v72;
                System_Collections_Generic_List_Vector3___AddWithResize(
                  verts,
                  v364,
                  *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                v81 = (float *)((char *)v78 + 12 * v80);
                verts->fields._size = v80 + 1;
                v81[8] = v71;
                v81[9] = v70;
                v81[10] = v72;
              }
              v82 = this->fields.uvs;
              v83 = isTail ? 0.75 : 0.25;
              if ( this->fields.StrictUVmode )
              {
                v365.fields.x = v67;
                v365.fields.y = v66;
                v365.fields.z = v68;
                v84 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v365, (const MethodInfo *)isTail);
                if ( !v82 )
                  goto LABEL_374;
              }
              else
              {
                v84 = __PAIR64__(LODWORD(this->fields.capVmin), LODWORD(v83));
                if ( !v82 )
                  goto LABEL_374;
              }
              v85 = v82->fields._items;
              v86 = Method_System_Collections_Generic_List_Vector2__Add__;
              ++v82->fields._version;
              if ( v85 )
              {
                v87 = v82->fields._size;
                if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
                {
                  System_Collections_Generic_List_Vector2___AddWithResize(
                    v82,
                    (UnityEngine_Vector2_o)v84,
                    *(const MethodInfo_37F9514 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v82->fields._size = v87 + 1;
                  v85->m_Items[v87] = (UnityEngine_Vector2_o)v84;
                }
                v88 = this->fields.uvs;
                if ( this->fields.StrictUVmode )
                {
                  v366.fields.x = v71;
                  v366.fields.y = v70;
                  v366.fields.z = v72;
                  v90 = Custom2dSplineMesh__GetUV_41556024(this, v366, (const MethodInfo *)isTail);
                  capVmax = v90.fields.y;
                  v83 = v90.fields.x;
                }
                else
                {
                  capVmax = this->fields.capVmax;
                }
                if ( v88 )
                {
                  v91 = v88->fields._items;
                  v92 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v88->fields._version;
                  if ( v91 )
                  {
                    v93 = v88->fields._size;
                    if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
                    {
                      v95 = v83;
                      System_Collections_Generic_List_Vector2___AddWithResize(
                        v88,
                        *(UnityEngine_Vector2_o *)(&capVmax - 1),
                        *(const MethodInfo_37F9514 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v94 = (float *)(&v91->obj.klass + v93);
                      v88->fields._size = v93 + 1;
                      v94[8] = v83;
                      v94[9] = capVmax;
                    }
                    if ( isTail )
                    {
                      v96 = this->fields.flattenAxis;
                      v97 = v356 + (float)(x * width);
                      v98 = offset.fields.x + v97;
                      v99 = v10 + (float)(v351 * width);
                      v100 = offset.fields.y + v99;
                      if ( v96 == 2 )
                      {
                        v105 = v97 - offset.fields.x;
                        v103 = v99 - offset.fields.y;
                        v102 = 0.0;
                        v104 = 0.0;
                      }
                      else
                      {
                        v101 = item + (float)(v353 * width);
                        v102 = offset.fields.z + v101;
                        if ( v96 == 1 )
                        {
                          v105 = v97 - offset.fields.x;
                          v104 = v101 - offset.fields.z;
                          v100 = 0.0;
                          v103 = 0.0;
                        }
                        else if ( v96 )
                        {
                          v105 = v97 - offset.fields.x;
                          v103 = v99 - offset.fields.y;
                          v104 = v101 - offset.fields.z;
                        }
                        else
                        {
                          v103 = v99 - offset.fields.y;
                          v104 = v101 - offset.fields.z;
                          v98 = 0.0;
                          v105 = 0.0;
                        }
                      }
                      verts = this->fields.verts;
                      if ( !verts )
                        goto LABEL_374;
                      v106 = verts->fields._items;
                      v107 = Method_System_Collections_Generic_List_Vector3__Add__;
                      ++verts->fields._version;
                      if ( !v106 )
                        goto LABEL_374;
                      v108 = verts->fields._size;
                      if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
                      {
                        v367.fields.x = v98;
                        v367.fields.y = v100;
                        v367.fields.z = v102;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v367,
                          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v109 = (float *)((char *)v106 + 12 * v108);
                        verts->fields._size = v108 + 1;
                        v109[8] = v98;
                        v109[9] = v100;
                        v109[10] = v102;
                      }
                      verts = this->fields.verts;
                      if ( !verts )
                        goto LABEL_374;
                      v110 = verts->fields._items;
                      v111 = Method_System_Collections_Generic_List_Vector3__Add__;
                      ++verts->fields._version;
                      if ( !v110 )
                        goto LABEL_374;
                      v112 = verts->fields._size;
                      if ( (unsigned int)v112 >= LODWORD(v110->max_length) )
                      {
                        v368.fields.x = v105;
                        v368.fields.y = v103;
                        v368.fields.z = v104;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v368,
                          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v113 = (float *)((char *)v110 + 12 * v112);
                        verts->fields._size = v112 + 1;
                        v113[8] = v105;
                        v113[9] = v103;
                        v113[10] = v104;
                      }
                      v114 = this->fields.uvs;
                      if ( this->fields.StrictUVmode )
                      {
                        v369.fields.x = v98;
                        v369.fields.y = v100;
                        v369.fields.z = v102;
                        v115 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(
                                                   this,
                                                   v369,
                                                   (const MethodInfo *)isTail);
                        if ( !v114 )
                          goto LABEL_374;
                      }
                      else
                      {
                        v115 = __PAIR64__(LODWORD(this->fields.capVmin), 1.0);
                        if ( !v114 )
                          goto LABEL_374;
                      }
                      v116 = v114->fields._items;
                      v117 = Method_System_Collections_Generic_List_Vector2__Add__;
                      ++v114->fields._version;
                      if ( !v116 )
                        goto LABEL_374;
                      v118 = v114->fields._size;
                      if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
                      {
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v114,
                          (UnityEngine_Vector2_o)v115,
                          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v114->fields._size = v118 + 1;
                        v116->m_Items[v118] = (UnityEngine_Vector2_o)v115;
                      }
                      v119 = this->fields.uvs;
                      if ( !this->fields.StrictUVmode )
                      {
                        v124 = (UnityEngine_Vector2_o)__PAIR64__(LODWORD(this->fields.capVmax), 1.0);
                        if ( !v119 )
                          goto LABEL_374;
                        goto LABEL_343;
                      }
                      v120 = this;
                      v121 = v105;
                      v122 = v103;
                      v123 = v104;
LABEL_342:
                      v124 = Custom2dSplineMesh__GetUV_41556024(
                               v120,
                               *(UnityEngine_Vector3_o *)&v121,
                               (const MethodInfo *)isTail);
                      if ( !v119 )
                        goto LABEL_374;
LABEL_343:
                      v319 = v119->fields._items;
                      v320 = Method_System_Collections_Generic_List_Vector2__Add__;
                      ++v119->fields._version;
                      if ( !v319 )
                        goto LABEL_374;
                      v321 = v119->fields._size;
                      if ( (unsigned int)v321 >= LODWORD(v319->max_length) )
                      {
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v119,
                          v124,
                          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v119->fields._size = v321 + 1;
                        v319->m_Items[v321] = v124;
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
      sub_1C372B4(verts);
    }
    v68 = item + offset.fields.z;
    if ( v65 == 1 )
    {
      v73 = v356;
      v66 = 0.0;
      v70 = 0.0;
    }
    else
    {
      if ( !v65 )
      {
        v69 = item;
        v70 = v10 - v12;
        v67 = 0.0;
        v71 = 0.0;
LABEL_63:
        v72 = v69 - offset.fields.z;
        goto LABEL_64;
      }
      v73 = v356;
      v70 = v10 - v12;
    }
    v71 = v73 - v13;
    v69 = item;
    goto LABEL_63;
  }
  CapComplexity = this->fields.CapComplexity;
  if ( CapComplexity != 2 )
  {
    if ( CapComplexity != 1 )
    {
      if ( !CapComplexity )
        goto LABEL_7;
      v41 = this->fields.flattenAxis;
      if ( v41 )
      {
        v42 = v10;
        v43 = offset.fields.z;
        if ( v41 == 1 )
        {
          v44 = v356;
          v45 = item;
          v156 = 0.0;
        }
        else
        {
          v44 = v356;
          if ( v41 == 2 )
            v45 = 0.0;
          else
            v45 = item;
          v156 = v42;
        }
      }
      else
      {
        v45 = item;
        v155 = v10;
        v43 = offset.fields.z;
        v44 = 0.0;
        v42 = v155;
        v156 = v155;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v157 = verts->fields._items;
      v158 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v157 )
        goto LABEL_374;
      v159 = verts->fields._size;
      if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
      {
        v374.fields.x = v44;
        v374.fields.y = v156;
        v374.fields.z = v45;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v374,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
      }
      else
      {
        v160 = (float *)((char *)v157 + 12 * v159);
        verts->fields._size = v159 + 1;
        v160[8] = v44;
        v160[9] = v156;
        v160[10] = v45;
      }
      v161 = this->fields.uvs;
      v375.fields.x = v44;
      v375.fields.y = v156;
      v375.fields.z = v45;
      v163 = Custom2dSplineMesh__GetUV_41556024(this, v375, (const MethodInfo *)isTail);
      if ( !v161 )
        goto LABEL_374;
      v164 = v161->fields._items;
      v165 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v161->fields._version;
      if ( !v164 )
        goto LABEL_374;
      v166 = v161->fields._size;
      if ( (unsigned int)v166 >= LODWORD(v164->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v161,
          v163,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
      }
      else
      {
        v161->fields._size = v166 + 1;
        v164->m_Items[v166] = v163;
      }
      v167 = this->fields.CapComplexity;
      v168 = v167 + 1;
      if ( v167 + 1 >= 0 )
      {
        v169 = 0;
        if ( isTail )
          v170 = -v43;
        else
          v170 = v43;
        if ( isTail )
          v171 = -offset.fields.y;
        else
          v171 = offset.fields.y;
        if ( isTail )
          v172 = -offset.fields.x;
        else
          v172 = offset.fields.x;
        v173 = v42;
        do
        {
          v395.fields.x = v172;
          v395.fields.y = v171;
          v395.fields.z = v170;
          v376 = Custom2dSplineMesh__RotateVec3(
                   this,
                   (float)((float)v169 * 180.0) / (float)v168,
                   v395,
                   (const MethodInfo *)v162);
          v175 = v173 + v376.fields.y;
          v176 = this->fields.flattenAxis;
          v177 = item + v376.fields.z;
          if ( v176 )
          {
            v178 = v356 + v376.fields.x;
            if ( v176 == 1 )
            {
              v175 = 0.0;
            }
            else if ( v176 == 2 )
            {
              v177 = 0.0;
            }
          }
          else
          {
            v178 = 0.0;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v179 = verts->fields._items;
          v180 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v179 )
            goto LABEL_374;
          v181 = verts->fields._size;
          if ( (unsigned int)v181 >= LODWORD(v179->max_length) )
          {
            v377.fields.x = v178;
            v377.fields.y = v175;
            v377.fields.z = v177;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v377,
              *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
          }
          else
          {
            v182 = (float *)((char *)v179 + 12 * v181);
            verts->fields._size = v181 + 1;
            v182[8] = v178;
            v182[9] = v175;
            v182[10] = v177;
          }
          v183 = this->fields.uvs;
          v378.fields.x = v178;
          v378.fields.y = v175;
          v378.fields.z = v177;
          v184 = Custom2dSplineMesh__GetUV_41556024(this, v378, v174);
          if ( !v183 )
            goto LABEL_374;
          v185 = v183->fields._items;
          v186 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v183->fields._version;
          if ( !v185 )
            goto LABEL_374;
          v187 = v183->fields._size;
          if ( (unsigned int)v187 >= LODWORD(v185->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v183,
              v184,
              *(const MethodInfo_37F9514 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
          }
          else
          {
            v183->fields._size = v187 + 1;
            v185->m_Items[v187] = v184;
          }
          if ( v169 <= 0 )
          {
            v192 = v169 + 1;
          }
          else
          {
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            vtxIdx = this->fields.vtxIdx;
            v189 = verts->fields._items;
            v190 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v189 )
              goto LABEL_374;
            v191 = verts->fields._size;
            if ( (unsigned int)v191 >= LODWORD(v189->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                vtxIdx,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v191 + 1;
              *((_DWORD *)&v189->m_Items[0].fields.x + v191) = vtxIdx;
            }
            v193 = this->fields.vtxIdx;
            v194 = verts->fields._items;
            v195 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v194 )
              goto LABEL_374;
            v196 = verts->fields._size;
            v192 = v169 + 1;
            v197 = v169 + 1 + v193;
            if ( (unsigned int)v196 >= LODWORD(v194->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                v197,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v196 + 1;
              *((_DWORD *)&v194->m_Items[0].fields.x + v196) = v197;
            }
            v198 = this->fields.vtxIdx;
            v199 = verts->fields._items;
            v200 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v199 )
              goto LABEL_374;
            v201 = verts->fields._size;
            v162 = (unsigned int)(v198 + v169);
            if ( (unsigned int)v201 >= LODWORD(v199->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                v162,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
            }
            else
            {
              verts->fields._size = v201 + 1;
              *((_DWORD *)&v199->m_Items[0].fields.x + v201) = v162;
            }
          }
          v169 = v192;
        }
        while ( v192 <= v168 );
        v167 = this->fields.CapComplexity;
      }
      v203 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v204 = v203 + v167;
LABEL_262:
      v246 = v204 + 3;
      v247 = p_vtxIdx;
      goto LABEL_373;
    }
    v34 = this->fields.flattenAxis;
    v352 = y;
    v354 = z;
    v35 = v10 + offset.fields.y;
    v36 = v356 + offset.fields.x;
    if ( v34 == 2 )
    {
      v39 = v10 - offset.fields.y;
      v125 = 0.0;
      v40 = v356 - offset.fields.x;
      v37 = 0.0;
LABEL_128:
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v128 = verts->fields._items;
      v129 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v128 )
        goto LABEL_374;
      v130 = verts->fields._size;
      if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
      {
        v370.fields.x = v36;
        v370.fields.y = v35;
        v370.fields.z = v37;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v370,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
      }
      else
      {
        v131 = (float *)((char *)v128 + 12 * v130);
        verts->fields._size = v130 + 1;
        v131[8] = v36;
        v131[9] = v35;
        v131[10] = v37;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v132 = verts->fields._items;
      v133 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v132 )
        goto LABEL_374;
      v134 = verts->fields._size;
      if ( (unsigned int)v134 >= LODWORD(v132->max_length) )
      {
        v371.fields.x = v40;
        v371.fields.y = v39;
        v371.fields.z = v125;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v371,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
      }
      else
      {
        v135 = (float *)((char *)v132 + 12 * v134);
        verts->fields._size = v134 + 1;
        v135[8] = v40;
        v135[9] = v39;
        v135[10] = v125;
      }
      v136 = this->fields.uvs;
      v372.fields.x = v36;
      v372.fields.y = v35;
      v372.fields.z = v37;
      v138 = Custom2dSplineMesh__GetUV_41556024(this, v372, (const MethodInfo *)isTail);
      if ( !v136 )
        goto LABEL_374;
      v139 = v136->fields._items;
      v140 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v136->fields._version;
      if ( !v139 )
        goto LABEL_374;
      v141 = v136->fields._size;
      if ( (unsigned int)v141 >= LODWORD(v139->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v136,
          v138,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
      }
      else
      {
        v136->fields._size = v141 + 1;
        v139->m_Items[v141] = v138;
      }
      v142 = this->fields.uvs;
      v373.fields.x = v40;
      v373.fields.y = v39;
      v373.fields.z = v125;
      v143 = Custom2dSplineMesh__GetUV_41556024(this, v373, v137);
      if ( !v142 )
        goto LABEL_374;
      v144 = v142->fields._items;
      v145 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v142->fields._version;
      if ( !v144 )
        goto LABEL_374;
      v146 = v142->fields._size;
      if ( (unsigned int)v146 >= LODWORD(v144->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v142,
          v143,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
      }
      else
      {
        v142->fields._size = v146 + 1;
        v144->m_Items[v146] = v143;
      }
      v147 = v354 * width;
      v148 = x * width;
      v149 = v352 * width;
      if ( isTail )
      {
        v150 = v10 + v149;
        v151 = this->fields.flattenAxis;
        v152 = item + v147;
        if ( v151 )
        {
          v153 = v356 + v148;
          if ( v151 == 1 )
          {
            v150 = 0.0;
          }
          else if ( v151 == 2 )
          {
            v152 = 0.0;
          }
        }
        else
        {
          v153 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        v211 = this->fields.vtxIdx;
        v212 = verts->fields._items;
        v213 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v212 )
          goto LABEL_374;
        v214 = verts->fields._size;
        if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            v211,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v214 + 1;
          *((_DWORD *)&v212->m_Items[0].fields.x + v214) = v211;
        }
        v215 = this->fields.vtxIdx;
        v216 = verts->fields._items;
        v217 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v216 )
          goto LABEL_374;
        v218 = verts->fields._size;
        v219 = v215 + 2;
        if ( (unsigned int)v218 >= LODWORD(v216->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            v219,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v218 + 1;
          *((_DWORD *)&v216->m_Items[0].fields.x + v218) = v219;
        }
        v220 = this->fields.vtxIdx;
        v221 = verts->fields._items;
        v222 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v221 )
          goto LABEL_374;
        v223 = verts->fields._size;
        max_length = v221->max_length;
        v225 = (unsigned int)(v220 + 1);
      }
      else
      {
        v150 = v10 - v149;
        v154 = this->fields.flattenAxis;
        v152 = item - v147;
        if ( v154 )
        {
          v153 = v356 - v148;
          if ( v154 == 1 )
          {
            v150 = 0.0;
          }
          else if ( v154 == 2 )
          {
            v152 = 0.0;
          }
        }
        else
        {
          v153 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        v226 = this->fields.vtxIdx;
        v227 = verts->fields._items;
        v228 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v227 )
          goto LABEL_374;
        v229 = verts->fields._size;
        if ( (unsigned int)v229 >= LODWORD(v227->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            v226,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v229 + 1;
          *((_DWORD *)&v227->m_Items[0].fields.x + v229) = v226;
        }
        v230 = this->fields.vtxIdx;
        v231 = verts->fields._items;
        v232 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v231 )
          goto LABEL_374;
        v233 = verts->fields._size;
        v234 = v230 + 1;
        if ( (unsigned int)v233 >= LODWORD(v231->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            v234,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v233 + 1;
          *((_DWORD *)&v231->m_Items[0].fields.x + v233) = v234;
        }
        v235 = this->fields.vtxIdx;
        v221 = verts->fields._items;
        v222 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v221 )
          goto LABEL_374;
        v223 = verts->fields._size;
        max_length = v221->max_length;
        v225 = (unsigned int)(v235 + 2);
      }
      if ( (unsigned int)v223 >= max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)verts,
          v225,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
      }
      else
      {
        verts->fields._size = v223 + 1;
        *((_DWORD *)&v221->m_Items[0].fields.x + v223) = v225;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v236 = verts->fields._items;
      v237 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v236 )
        goto LABEL_374;
      v238 = verts->fields._size;
      if ( (unsigned int)v238 >= LODWORD(v236->max_length) )
      {
        v380.fields.x = v153;
        v380.fields.y = v150;
        v380.fields.z = v152;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v380,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
      }
      else
      {
        v239 = (float *)((char *)v236 + 12 * v238);
        verts->fields._size = v238 + 1;
        v239[8] = v153;
        v239[9] = v150;
        v239[10] = v152;
      }
      v240 = this->fields.uvs;
      v381.fields.x = v153;
      v381.fields.y = v150;
      v381.fields.z = v152;
      v241 = Custom2dSplineMesh__GetUV_41556024(this, v381, (const MethodInfo *)v225);
      if ( !v240 )
        goto LABEL_374;
      v242 = v240->fields._items;
      v243 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v240->fields._version;
      if ( !v242 )
        goto LABEL_374;
      v244 = v240->fields._size;
      if ( (unsigned int)v244 >= LODWORD(v242->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v240,
          v241,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
      }
      else
      {
        v240->fields._size = v244 + 1;
        v242->m_Items[v244] = v241;
      }
      v245 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v204 = v245;
      goto LABEL_262;
    }
    v37 = item + offset.fields.z;
    if ( v34 == 1 )
    {
      v126 = v356;
      v127 = offset.fields.x;
      v35 = 0.0;
      v39 = 0.0;
    }
    else
    {
      if ( !v34 )
      {
        v38 = item;
        v39 = v10 - offset.fields.y;
        v36 = 0.0;
        v40 = 0.0;
LABEL_127:
        v125 = v38 - offset.fields.z;
        goto LABEL_128;
      }
      v126 = v356;
      v127 = offset.fields.x;
      v39 = v10 - offset.fields.y;
    }
    v40 = v126 - v127;
    v38 = item;
    goto LABEL_127;
  }
  if ( !isTail )
  {
    v25 = offset.fields.x;
    v26 = offset.fields.z;
    v358 = Custom2dSplineMesh__RotateVec3(this, 60.0, *(UnityEngine_Vector3_o *)(&v12 - 1), (const MethodInfo *)isTail);
    v28 = v10 + v358.fields.y;
    v29 = this->fields.flattenAxis;
    v30 = 0.0;
    v31 = item + v358.fields.z;
    if ( v29 )
    {
      v32 = offset.fields.y;
      v33 = v356 + v358.fields.x;
      if ( v29 == 1 )
      {
        v28 = 0.0;
      }
      else if ( v29 == 2 )
      {
        v31 = 0.0;
      }
    }
    else
    {
      v32 = offset.fields.y;
      v33 = 0.0;
    }
    v205 = offset.fields.x;
    v206 = offset.fields.z;
    v379 = Custom2dSplineMesh__RotateVec3(this, 120.0, *(UnityEngine_Vector3_o *)(&v32 - 1), v27);
    v208 = v10 + v379.fields.y;
    v209 = this->fields.flattenAxis;
    v210 = item + v379.fields.z;
    if ( v209 )
    {
      v30 = v356 + v379.fields.x;
      if ( v209 == 1 )
      {
        v208 = 0.0;
      }
      else if ( v209 == 2 )
      {
        v210 = 0.0;
      }
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
      v382.fields.x = v33;
      v382.fields.y = v28;
      v382.fields.z = v31;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v382,
        *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    }
    else
    {
      v251 = (float *)((char *)v248 + 12 * v250);
      verts->fields._size = v250 + 1;
      v251[8] = v33;
      v251[9] = v28;
      v251[10] = v31;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v252 = verts->fields._items;
    v253 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v252 )
      goto LABEL_374;
    v254 = verts->fields._size;
    if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
    {
      v383.fields.x = v30;
      v383.fields.y = v208;
      v383.fields.z = v210;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v383,
        *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    }
    else
    {
      v255 = (float *)((char *)v252 + 12 * v254);
      verts->fields._size = v254 + 1;
      v255[8] = v30;
      v255[9] = v208;
      v255[10] = v210;
    }
    v256 = this->fields.uvs;
    v384.fields.x = v33;
    v384.fields.y = v28;
    v384.fields.z = v31;
    v258 = Custom2dSplineMesh__GetUV_41556024(this, v384, v207);
    if ( !v256 )
      goto LABEL_374;
    v259 = v256->fields._items;
    v260 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v256->fields._version;
    if ( !v259 )
      goto LABEL_374;
    v261 = v256->fields._size;
    if ( (unsigned int)v261 >= LODWORD(v259->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v256,
        v258,
        *(const MethodInfo_37F9514 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
    }
    else
    {
      v256->fields._size = v261 + 1;
      v259->m_Items[v261] = v258;
    }
    v262 = this->fields.uvs;
    v385.fields.x = v30;
    v385.fields.y = v208;
    v385.fields.z = v210;
    v263 = Custom2dSplineMesh__GetUV_41556024(this, v385, v257);
    if ( !v262 )
      goto LABEL_374;
    v264 = v262->fields._items;
    v265 = Method_System_Collections_Generic_List_Vector2__Add__;
    v13 = offset.fields.x;
    ++v262->fields._version;
    if ( !v264 )
      goto LABEL_374;
    v266 = v262->fields._size;
    if ( (unsigned int)v266 >= LODWORD(v264->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v262,
        v263,
        *(const MethodInfo_37F9514 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
    }
    else
    {
      v262->fields._size = v266 + 1;
      v264->m_Items[v266] = v263;
    }
    v12 = offset.fields.y;
  }
  v267 = this->fields.flattenAxis;
  v268 = v10 + v12;
  v269 = v356 + v13;
  if ( v267 == 2 )
  {
    v272 = v10 - v12;
    v270 = 0.0;
    v273 = v356 - v13;
    v274 = 0.0;
    goto LABEL_294;
  }
  v270 = item + offset.fields.z;
  if ( v267 == 1 )
  {
    v275 = v356;
    v268 = 0.0;
    v272 = 0.0;
LABEL_292:
    v273 = v275 - v13;
    v271 = item;
    goto LABEL_293;
  }
  if ( v267 )
  {
    v275 = v356;
    v272 = v10 - v12;
    goto LABEL_292;
  }
  v271 = item;
  v272 = v10 - v12;
  v269 = 0.0;
  v273 = 0.0;
LABEL_293:
  v274 = v271 - offset.fields.z;
LABEL_294:
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v276 = verts->fields._items;
  v277 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v276 )
    goto LABEL_374;
  v278 = verts->fields._size;
  if ( (unsigned int)v278 >= LODWORD(v276->max_length) )
  {
    v386.fields.x = v269;
    v386.fields.y = v268;
    v386.fields.z = v270;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v386,
      *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v277[4] + 192LL) + 112LL));
  }
  else
  {
    v279 = (float *)((char *)v276 + 12 * v278);
    verts->fields._size = v278 + 1;
    v279[8] = v269;
    v279[9] = v268;
    v279[10] = v270;
  }
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v280 = verts->fields._items;
  v281 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v280 )
    goto LABEL_374;
  v282 = verts->fields._size;
  if ( (unsigned int)v282 >= LODWORD(v280->max_length) )
  {
    v387.fields.x = v273;
    v387.fields.y = v272;
    v387.fields.z = v274;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v387,
      *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
  }
  else
  {
    v283 = (float *)((char *)v280 + 12 * v282);
    verts->fields._size = v282 + 1;
    v283[8] = v273;
    v283[9] = v272;
    v283[10] = v274;
  }
  v284 = this->fields.uvs;
  v388.fields.x = v269;
  v388.fields.y = v268;
  v388.fields.z = v270;
  v286 = Custom2dSplineMesh__GetUV_41556024(this, v388, (const MethodInfo *)isTail);
  if ( !v284 )
    goto LABEL_374;
  v287 = v284->fields._items;
  v288 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v284->fields._version;
  if ( !v287 )
    goto LABEL_374;
  v289 = v284->fields._size;
  if ( (unsigned int)v289 >= LODWORD(v287->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v284,
      v286,
      *(const MethodInfo_37F9514 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
  }
  else
  {
    v284->fields._size = v289 + 1;
    v287->m_Items[v289] = v286;
  }
  v290 = this->fields.uvs;
  v389.fields.x = v273;
  v389.fields.y = v272;
  v389.fields.z = v274;
  v292 = Custom2dSplineMesh__GetUV_41556024(this, v389, v285);
  if ( !v290 )
    goto LABEL_374;
  v293 = v290->fields._items;
  v294 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v290->fields._version;
  if ( !v293 )
    goto LABEL_374;
  v295 = v290->fields._size;
  if ( (unsigned int)v295 >= LODWORD(v293->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v290,
      v292,
      *(const MethodInfo_37F9514 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
  }
  else
  {
    v290->fields._size = v295 + 1;
    v293->m_Items[v295] = v292;
  }
  if ( isTail )
  {
    v396.fields.x = -offset.fields.x;
    v396.fields.y = -offset.fields.y;
    v396.fields.z = -offset.fields.z;
    v390 = Custom2dSplineMesh__RotateVec3(this, 120.0, v396, (const MethodInfo *)*(_QWORD *)&v291);
    v297 = v10 + v390.fields.y;
    v298 = this->fields.flattenAxis;
    v299 = 0.0;
    v300 = item + v390.fields.z;
    if ( v298 )
    {
      v301 = v356 + v390.fields.x;
      if ( v298 == 1 )
      {
        v297 = 0.0;
      }
      else if ( v298 == 2 )
      {
        v300 = 0.0;
      }
    }
    else
    {
      v301 = 0.0;
    }
    v397.fields.x = -offset.fields.x;
    v397.fields.y = -offset.fields.y;
    v397.fields.z = -offset.fields.z;
    v391 = Custom2dSplineMesh__RotateVec3(this, 60.0, v397, v296);
    v303 = v10 + v391.fields.y;
    v304 = this->fields.flattenAxis;
    v305 = item + v391.fields.z;
    if ( v304 )
    {
      v299 = v356 + v391.fields.x;
      if ( v304 == 1 )
      {
        v303 = 0.0;
      }
      else if ( v304 == 2 )
      {
        v305 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v306 = verts->fields._items;
    v307 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v306 )
      goto LABEL_374;
    v308 = verts->fields._size;
    if ( (unsigned int)v308 >= LODWORD(v306->max_length) )
    {
      v392.fields.x = v301;
      v392.fields.y = v297;
      v392.fields.z = v300;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v392,
        *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v307[4] + 192LL) + 112LL));
    }
    else
    {
      v309 = (float *)((char *)v306 + 12 * v308);
      verts->fields._size = v308 + 1;
      v309[8] = v301;
      v309[9] = v297;
      v309[10] = v300;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v310 = verts->fields._items;
    v311 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v310 )
      goto LABEL_374;
    v312 = verts->fields._size;
    if ( (unsigned int)v312 >= LODWORD(v310->max_length) )
    {
      v393.fields.x = v299;
      v393.fields.y = v303;
      v393.fields.z = v305;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v393,
        *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v311[4] + 192LL) + 112LL));
    }
    else
    {
      v313 = (float *)((char *)v310 + 12 * v312);
      verts->fields._size = v312 + 1;
      v313[8] = v299;
      v313[9] = v303;
      v313[10] = v305;
    }
    v314 = this->fields.uvs;
    v394.fields.x = v301;
    v394.fields.y = v297;
    v394.fields.z = v300;
    v315 = Custom2dSplineMesh__GetUV_41556024(this, v394, v302);
    if ( !v314 )
      goto LABEL_374;
    v316 = v314->fields._items;
    v317 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v314->fields._version;
    if ( !v316 )
      goto LABEL_374;
    v318 = v314->fields._size;
    if ( (unsigned int)v318 >= LODWORD(v316->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v314,
        v315,
        *(const MethodInfo_37F9514 **)(*(_QWORD *)(v317[4] + 192LL) + 112LL));
    }
    else
    {
      v314->fields._size = v318 + 1;
      v316->m_Items[v318] = v315;
    }
    v119 = this->fields.uvs;
    v120 = this;
    v121 = v299;
    v122 = v303;
    v123 = v305;
    goto LABEL_342;
  }
LABEL_347:
  v247 = &this->fields.vtxIdx;
  v322 = this->fields.vtxIdx;
  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
  if ( !verts )
    goto LABEL_374;
  v323 = verts->fields._items;
  v324 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v323 )
    goto LABEL_374;
  v325 = verts->fields._size;
  if ( (unsigned int)v325 >= LODWORD(v323->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v322,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v325 + 1;
    *((_DWORD *)&v323->m_Items[0].fields.x + v325) = v322;
  }
  v326 = *v247;
  v327 = verts->fields._items;
  v328 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v327 )
    goto LABEL_374;
  v329 = verts->fields._size;
  v330 = v326 + 2;
  if ( (unsigned int)v329 >= LODWORD(v327->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v330,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v329 + 1;
    *((_DWORD *)&v327->m_Items[0].fields.x + v329) = v330;
  }
  v331 = *v247;
  v332 = verts->fields._items;
  v333 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v332 )
    goto LABEL_374;
  v334 = verts->fields._size;
  v335 = v331 + 1;
  if ( (unsigned int)v334 >= LODWORD(v332->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v335,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v333[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v334 + 1;
    *((_DWORD *)&v332->m_Items[0].fields.x + v334) = v335;
  }
  v336 = *v247;
  v337 = verts->fields._items;
  v338 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v337 )
    goto LABEL_374;
  v339 = verts->fields._size;
  v340 = v336 + 2;
  if ( (unsigned int)v339 >= LODWORD(v337->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v340,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v338[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v339 + 1;
    *((_DWORD *)&v337->m_Items[0].fields.x + v339) = v340;
  }
  v341 = *v247;
  v342 = verts->fields._items;
  v343 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v342 )
    goto LABEL_374;
  v344 = verts->fields._size;
  v345 = v341 + 3;
  if ( (unsigned int)v344 >= LODWORD(v342->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v345,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v343[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v344 + 1;
    *((_DWORD *)&v342->m_Items[0].fields.x + v344) = v345;
  }
  v346 = *v247;
  v347 = verts->fields._items;
  v348 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v347 )
    goto LABEL_374;
  v349 = verts->fields._size;
  v350 = v346 + 1;
  if ( (unsigned int)v349 >= LODWORD(v347->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v350,
      *(const MethodInfo_3786000 **)(*(_QWORD *)(v348[4] + 192LL) + 112LL));
  }
  else
  {
    verts->fields._size = v349 + 1;
    *((_DWORD *)&v347->m_Items[0].fields.x + v349) = v350;
  }
  v246 = *v247 + 4;
LABEL_373:
  *v247 = v246;
}


// local variable allocation has failed, the output may be wrong!
int32_t Custom2dSplineMesh__AddCurve(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array **p_points; // x20
  System_Collections_Generic_IEnumerable_T__o *points; // x21
  System_Collections_Generic_List_Vector3__o *v7; // x23
  struct BezierControlPointMode_array **p_modes; // x21
  System_Collections_Generic_IEnumerable_T__o *modes; // x22
  System_Collections_Generic_List_T__o *v10; // x24
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x27
  CGThumbnailListItem_o *p_curveWeight; // x29
  System_Collections_Generic_List_float__o *v13; // x25
  UnityEngine_Vector3_o v14; // x0
  int v15; // kr00_4
  int v16; // w26
  const MethodInfo *v17; // x2
  struct UnityEngine_Vector3_array *v18; // x8
  unsigned int max_length; // w10
  __int64 v20; // x28
  __int64 v21; // x22
  int v22; // w9
  int32_t v23; // w26
  __int64 v24; // x27
  const MethodInfo *v25; // x2
  struct UnityEngine_Vector3_array *v26; // x8
  unsigned int v27; // w9
  UnityEngine_Transform_o *v28; // x29
  float x; // s8
  float y; // s9
  float z; // s10
  float v32; // s11
  float v33; // s12
  float v34; // s13
  float v35; // s11
  float v36; // s9
  float v37; // s8
  float v38; // s0
  float v39; // s10
  float v40; // s9
  float v41; // s11
  struct UnityEngine_Vector3_array *v42; // x8
  il2cpp_array_size_t v43; // x26
  float *v44; // x10
  UnityEngine_Vector3_o *m_Items; // x8
  float *p_x; // x11
  float *v47; // x9
  float v48; // s9
  float v49; // s10
  float v50; // s8
  struct UnityEngine_Vector3_array *items; // x8
  float v52; // s12
  float v53; // s13
  float v54; // s11
  float v55; // s1
  float v56; // s2
  float v57; // s0
  _QWORD *v58; // x9
  __int64 size; // x10
  float v60; // s3
  float v61; // s0 OVERLAPPED
  float v62; // s1
  float v63; // s2
  float *v64; // x8
  struct UnityEngine_Vector3_array *v65; // x9
  float *v66; // x9
  struct UnityEngine_Vector3_array *v67; // x8
  float v68; // s1
  float v69; // s2
  float v70; // s0
  _QWORD *v71; // x9
  __int64 v72; // x10
  float v73; // s3
  float v74; // s0 OVERLAPPED
  float v75; // s1
  float v76; // s2
  float *v77; // x8
  struct UnityEngine_Vector3_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  float v81; // s0 OVERLAPPED
  float v82; // s1
  float v83; // s2
  float *v84; // x8
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  struct System_Single_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v92; // x8
  unsigned int v93; // w9
  float *v94; // x9
  float *v95; // x8
  float v96; // s8
  float v97; // s12
  float v98; // s15
  float v99; // s14
  float v100; // s13
  struct UnityEngine_Vector3_array *v101; // x8
  unsigned int v102; // w9
  float *v103; // x9
  float v104; // s10
  float v105; // s11
  float v106; // s9
  float *v107; // x8
  float v108; // s13
  float v109; // s14
  float v110; // s12
  unsigned int v111; // w8
  float v112; // s5
  float v113; // s0
  float v114; // s1
  float v115; // s2
  float v116; // s3
  float v117; // s4
  float v118; // s5
  UnityEngine_Vector3_array *v119; // x0
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  System_Int32Enum_array *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  System_Single_array *v125; // x0
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  const MethodInfo *v128; // x2
  float v130; // [xsp+34h] [xbp-DCh]
  float v131; // [xsp+38h] [xbp-D8h]
  float v132; // [xsp+3Ch] [xbp-D4h]
  float v133; // [xsp+40h] [xbp-D0h]
  float v134; // [xsp+44h] [xbp-CCh]
  float v135; // [xsp+48h] [xbp-C8h]
  float v136; // [xsp+4Ch] [xbp-C4h]
  int v137; // [xsp+50h] [xbp-C0h]
  int32_t indexa[2]; // [xsp+68h] [xbp-A8h]
  UnityEngine_Vector3_o Point_41539392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FirstDerivative_41539656; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C429FC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__InsertRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__Insert__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_float___ctor___78066576);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3___ctor___78073248);
    sub_1C37058(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    byte_4C429FC = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (System_Collections_Generic_List_Vector3__o *)sub_1C372A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_58701440(
    v7,
    points,
    (const MethodInfo_37FB680 *)Method_System_Collections_Generic_List_Vector3___ctor___78073248);
  p_modes = &this->fields.modes;
  modes = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  v10 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58228992(
    v10,
    modes,
    (const MethodInfo_3788100 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  p_curveWeight = (CGThumbnailListItem_o *)&this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v13 = (System_Collections_Generic_List_float__o *)sub_1C372A4(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_58492012(
    v13,
    curveWeight,
    (const MethodInfo_37C846C *)Method_System_Collections_Generic_List_float___ctor___78066576);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !*p_modes )
      goto LABEL_79;
    v15 = index + 1;
    v16 = (index + 1) / 3;
    if ( v15 / 3 < LODWORD((*p_modes)->max_length) - 1 )
    {
      *(_QWORD *)&v14.fields.x = sub_1C37100(UnityEngine_Vector3___TypeInfo, 3);
      v18 = *p_points;
      if ( !*p_points )
        goto LABEL_79;
      max_length = v18->max_length;
      v20 = 3LL * v16;
      if ( (unsigned int)v20 < max_length )
      {
        v21 = (int)v20 + 1LL;
        if ( (unsigned int)v21 < max_length )
        {
          v22 = v20 + 2;
          v137 = v16;
          if ( (int)v20 + 2 < max_length )
          {
            v23 = v20 + 3;
            if ( (int)v20 + 3 < max_length )
            {
              v24 = *(_QWORD *)&v14.fields.x;
              *(_QWORD *)indexa = v22;
              Point_41539392 = Bezier__GetPoint_41539392(
                                 v18->m_Items[v20],
                                 v18->m_Items[v21],
                                 v18->m_Items[v22],
                                 v14,
                                 COERCE_FLOAT(*(_QWORD *)&v18->m_Items[v23].fields.x),
                                 v17);
              if ( !v24 )
                goto LABEL_79;
              if ( *(_DWORD *)(v24 + 24) > 1u )
              {
                *(UnityEngine_Vector3_o *)(v24 + 44) = Point_41539392;
                *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                v26 = this->fields.points;
                if ( !v26 )
                  goto LABEL_79;
                v27 = v26->max_length;
                if ( (unsigned int)v20 < v27 && (unsigned int)v21 < v27 && indexa[0] < v27 && v23 < v27 )
                {
                  v28 = *(UnityEngine_Transform_o **)&v14.fields.x;
                  FirstDerivative_41539656 = Bezier__GetFirstDerivative_41539656(
                                               v26->m_Items[v20],
                                               v26->m_Items[v21],
                                               v26->m_Items[*(_QWORD *)indexa],
                                               v14,
                                               COERCE_FLOAT(*(_QWORD *)&v26->m_Items[v23].fields.x),
                                               v25);
                  if ( !v28 )
                    goto LABEL_79;
                  v141 = UnityEngine_Transform__TransformPoint(v28, FirstDerivative_41539656, 0);
                  x = v141.fields.x;
                  y = v141.fields.y;
                  z = v141.fields.z;
                  *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( !*(_QWORD *)&v14.fields.x )
                    goto LABEL_79;
                  position = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)&v14.fields.x, 0);
                  v32 = position.fields.x;
                  v33 = position.fields.y;
                  v34 = position.fields.z;
                  if ( !byte_4C3C924 )
                  {
                    sub_1C37058(&System_Math_TypeInfo);
                    byte_4C3C924 = 1;
                  }
                  v35 = x - v32;
                  v36 = y - v33;
                  v37 = z - v34;
                  *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v38 = sqrtf((float)(v37 * v37) + (float)((float)(v35 * v35) + (float)(v36 * v36)));
                  if ( v38 <= 0.00001 )
                  {
                    if ( !byte_4C3C921 )
                    {
                      *(_QWORD *)&v14.fields.x = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                      byte_4C3C921 = 1;
                    }
                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                    v39 = static_fields->zeroVector.fields.x;
                    v40 = static_fields->zeroVector.fields.y;
                    v41 = static_fields->zeroVector.fields.z;
                  }
                  else
                  {
                    v39 = v35 / v38;
                    v40 = v36 / v38;
                    v41 = v37 / v38;
                  }
                  v92 = *p_points;
                  if ( !*p_points )
                    goto LABEL_79;
                  v93 = v92->max_length;
                  if ( (unsigned int)v20 < v93 && (unsigned int)v21 < v93 )
                  {
                    v94 = (float *)((char *)v92 + 12 * v20);
                    v95 = (float *)((char *)v92 + 12 * v21);
                    v97 = v94[8];
                    v96 = v94[9];
                    v98 = v94[10];
                    v99 = v95[8];
                    v100 = v95[10];
                    v136 = v95[9];
                    if ( !byte_4C3C91F )
                    {
                      sub_1C37058(&System_Math_TypeInfo);
                      byte_4C3C91F = 1;
                    }
                    *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                    v101 = *p_points;
                    if ( !*p_points )
                      goto LABEL_79;
                    v102 = v101->max_length;
                    if ( indexa[0] < v102 )
                    {
                      v130 = v99;
                      v131 = v100;
                      v132 = v97;
                      v133 = v41;
                      v134 = v40;
                      v135 = v39;
                      if ( v23 < v102 )
                      {
                        v103 = (float *)((char *)v101 + 12 * *(_QWORD *)indexa);
                        v105 = v103[8];
                        v104 = v103[9];
                        v106 = v103[10];
                        v107 = (float *)((char *)v101 + 12 * v23);
                        v109 = v107[8];
                        v108 = v107[9];
                        v110 = v107[10];
                        if ( !byte_4C3C91F )
                        {
                          sub_1C37058(&System_Math_TypeInfo);
                          byte_4C3C91F = 1;
                        }
                        *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        v111 = *(_DWORD *)(v24 + 24);
                        p_curveWeight = (CGThumbnailListItem_o *)&this->fields.curveWeight;
                        if ( v111 > 1 )
                        {
                          v112 = (float)(sqrtf(
                                           (float)((float)(v98 - v131) * (float)(v98 - v131))
                                         + (float)((float)((float)(v132 - v130) * (float)(v132 - v130))
                                                 + (float)((float)(v96 - v136) * (float)(v96 - v136))))
                                       + sqrtf(
                                           (float)((float)(v106 - v110) * (float)(v106 - v110))
                                         + (float)((float)((float)(v105 - v109) * (float)(v105 - v109))
                                                 + (float)((float)(v104 - v108) * (float)(v104 - v108)))))
                               * 0.5;
                          v113 = *(float *)(v24 + 44);
                          v114 = *(float *)(v24 + 48);
                          v115 = *(float *)(v24 + 52);
                          v116 = v135 * v112;
                          v117 = v134 * v112;
                          v118 = v133 * v112;
                          *(float *)(v24 + 32) = v113 - v116;
                          *(float *)(v24 + 36) = v114 - v117;
                          *(float *)(v24 + 40) = v115 - v118;
                          if ( v111 != 2 )
                          {
                            *(float *)(v24 + 56) = v116 + v113;
                            *(float *)(v24 + 60) = v117 + v114;
                            *(float *)(v24 + 64) = v118 + v115;
                            if ( v7 )
                            {
                              System_Collections_Generic_List_Vector3___InsertRange(
                                v7,
                                indexa[0],
                                (System_Collections_Generic_IEnumerable_T__o *)v24,
                                (const MethodInfo_37FCE68 *)Method_System_Collections_Generic_List_Vector3__InsertRange__);
                              if ( v10 )
                              {
                                System_Collections_Generic_List_Int32Enum___Insert(
                                  v10,
                                  v137 + 1,
                                  0,
                                  (const MethodInfo_37895B0 *)Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
                                if ( v13 )
                                {
                                  System_Collections_Generic_List_float___Insert(
                                    v13,
                                    v137 + 1,
                                    1.0,
                                    (const MethodInfo_37C9928 *)Method_System_Collections_Generic_List_float__Insert__);
                                  goto LABEL_77;
                                }
                              }
                            }
LABEL_79:
                            sub_1C372B4(*(_QWORD *)&v14.fields.x);
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
      sub_1C372BC(*(_QWORD *)&v14.fields.x);
    }
  }
  v42 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  v43 = v42->max_length;
  if ( (unsigned int)v43 < 4 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_79;
  v44 = (float *)((char *)v42 + 12 * ((__int64)((v43 << 32) - 0x100000000LL) >> 32));
  m_Items = v42->m_Items;
  p_x = &m_Items[(__int64)((v43 << 32) - 0x400000000LL) >> 32].fields.x;
  v47 = &m_Items[(__int64)((v43 << 32) - 0x300000000LL) >> 32].fields.x;
  v48 = v44[8];
  v49 = v44[9];
  v50 = v44[10];
  items = v7->fields._items;
  v53 = *p_x;
  v52 = p_x[1];
  v54 = p_x[2];
  v55 = *v47;
  v56 = v47[1];
  v57 = v47[2];
  v58 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_79;
  size = v7->fields._size;
  v60 = v57 - v54;
  v61 = v48 + (float)(v55 - v53);
  v62 = v49 + (float)(v56 - v52);
  v63 = v50 + v60;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v61,
      *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = (float *)((char *)items + 12 * size);
    v7->fields._size = size + 1;
    v64[8] = v61;
    v64[9] = v62;
    v64[10] = v63;
  }
  v65 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  if ( (unsigned int)(v43 - 2) >= LODWORD(v65->max_length) )
    goto LABEL_80;
  v66 = (float *)((char *)v65 + 12 * (int)v43 - 24);
  v67 = v7->fields._items;
  v69 = v66[8];
  v68 = v66[9];
  v70 = v66[10];
  v71 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v67 )
    goto LABEL_79;
  v72 = v7->fields._size;
  v73 = v70 - v54;
  v74 = v48 + (float)(v69 - v53);
  v75 = v49 + (float)(v68 - v52);
  v76 = v50 + v73;
  if ( (unsigned int)v72 >= LODWORD(v67->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v74,
      *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v77 = (float *)((char *)v67 + 12 * v72);
    v7->fields._size = v72 + 1;
    v77[8] = v74;
    v77[9] = v75;
    v77[10] = v76;
  }
  v78 = v7->fields._items;
  v79 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v78 )
    goto LABEL_79;
  v80 = v7->fields._size;
  v81 = v48 + (float)(v48 - v53);
  v82 = v49 + (float)(v49 - v52);
  v83 = v50 + (float)(v50 - v54);
  if ( (unsigned int)v80 >= LODWORD(v78->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v81,
      *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = (float *)((char *)v78 + 12 * v80);
    v7->fields._size = v80 + 1;
    v84[8] = v81;
    v84[9] = v82;
    v84[10] = v83;
  }
  if ( !v10 )
    goto LABEL_79;
  v85 = v10->fields._items;
  v86 = Method_System_Collections_Generic_List_BezierControlPointMode__Add__;
  ++v10->fields._version;
  if ( !v85 )
    goto LABEL_79;
  v87 = v10->fields._size;
  if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v87 + 1;
    *((_DWORD *)v85->m_Items + v87) = 0;
  }
  if ( !v13 )
    goto LABEL_79;
  v88 = v13->fields._items;
  v89 = Method_System_Collections_Generic_List_float__Add__;
  ++v13->fields._version;
  if ( !v88 )
    goto LABEL_79;
  v90 = v13->fields._size;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_float___AddWithResize(
      v13,
      1.0,
      *(const MethodInfo_37C8BA0 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v90 + 1;
    v88->m_Items[v90] = 1.0;
  }
  v23 = v43 + 2;
LABEL_77:
  v119 = System_Collections_Generic_List_Vector3___ToArray(
           v7,
           (const MethodInfo_37FD9BC *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v119;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.points, (int32_t)v119, v120, v121);
  v122 = System_Collections_Generic_List_Int32Enum___ToArray(
           v10,
           (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  *p_modes = (struct BezierControlPointMode_array *)v122;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.modes, (int32_t)v122, v123, v124);
  v125 = System_Collections_Generic_List_float___ToArray(
           v13,
           (const MethodInfo_37CA658 *)Method_System_Collections_Generic_List_float__ToArray__);
  p_curveWeight->klass = (CGThumbnailListItem_c *)v125;
  sub_1C36FFC(p_curveWeight, (int32_t)v125, v126, v127);
  if ( !*p_points )
    goto LABEL_79;
  Custom2dSplineMesh__EnforceMode(this, LODWORD((*p_points)->max_length) - 4, v128);
  return v23;
}


void Custom2dSplineMesh__ChangeWeight(Custom2dSplineMesh_o *this, int32_t index, float value, const MethodInfo *method)
{
  struct System_Single_array *curveWeight; // x8
  int v5; // w9

  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_1C372B4(this);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(curveWeight->max_length) )
    sub_1C372BC(this);
  curveWeight->m_Items[v5] = value;
  Custom2dSplineMesh__EnforceMode(this, index, method);
}


void Custom2dSplineMesh__CreateMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Il2CppObject *Component_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4C42A02 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4C42A02 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v4, v5);
    Custom2dSplineMesh__SetList(this, v6);
    Custom2dSplineMesh__GenMesh(this, v7);
  }
}


void Custom2dSplineMesh__DeletePoint(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *points; // x20
  struct UnityEngine_Vector3_array **p_points; // x21
  int32_t v7; // w23
  System_Collections_Generic_List_Vector3__o *v8; // x24
  struct System_Single_array **p_curveWeight; // x20
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x26
  System_Collections_Generic_List_float__o *v11; // x22
  __int64 v12; // x0
  int32_t v13; // w1
  struct BezierControlPointMode_array *modes; // x8
  CGThumbnailListItem_o *p_modes; // x19
  System_Collections_Generic_IEnumerable_T__o *v16; // t1
  System_Collections_Generic_List_T__o *v17; // x25
  UnityEngine_Vector3_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Int32Enum_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Single_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3

  if ( (byte_4C429FD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__RemoveRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_float___ctor___78066576);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3___ctor___78073248);
    sub_1C37058(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4C429FD = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (index + 1) / 3;
  v8 = (System_Collections_Generic_List_Vector3__o *)sub_1C372A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_58701440(
    v8,
    points,
    (const MethodInfo_37FB680 *)Method_System_Collections_Generic_List_Vector3___ctor___78073248);
  p_curveWeight = &this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v11 = (System_Collections_Generic_List_float__o *)sub_1C372A4(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_58492012(
    v11,
    curveWeight,
    (const MethodInfo_37C846C *)Method_System_Collections_Generic_List_float___ctor___78066576);
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
            (const MethodInfo_37FD6EC *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
          if ( *p_curveWeight )
          {
            if ( v11 )
            {
              v13 = LODWORD((*p_curveWeight)->max_length) - 1;
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
        (const MethodInfo_37FD6EC *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
      v13 = (index + 1) / 3;
      if ( v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C372B4(v12);
  }
  if ( !v8 )
    goto LABEL_18;
  System_Collections_Generic_List_Vector3___RemoveRange(
    v8,
    0,
    3,
    (const MethodInfo_37FD6EC *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
LABEL_16:
  System_Collections_Generic_List_float___RemoveAt(
    v11,
    v13,
    (const MethodInfo_37CA320 *)Method_System_Collections_Generic_List_float__RemoveAt__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  p_modes = (CGThumbnailListItem_o *)&this->fields.modes;
  v17 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58228992(
    v17,
    v16,
    (const MethodInfo_3788100 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    v17,
    v7,
    (const MethodInfo_3789FAC *)Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
  v18 = System_Collections_Generic_List_Vector3___ToArray(
          v8,
          (const MethodInfo_37FD9BC *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v18;
  sub_1C36FFC((CGThumbnailListItem_o *)p_points, (int32_t)v18, v19, v20);
  v21 = System_Collections_Generic_List_Int32Enum___ToArray(
          v17,
          (const MethodInfo_378A2E4 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  p_modes->klass = (CGThumbnailListItem_c *)v21;
  sub_1C36FFC(p_modes, (int32_t)v21, v22, v23);
  v24 = System_Collections_Generic_List_float___ToArray(
          v11,
          (const MethodInfo_37CA658 *)Method_System_Collections_Generic_List_float__ToArray__);
  *p_curveWeight = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)p_curveWeight, (int32_t)v24, v25, v26);
}


// attributes: thunk
void Custom2dSplineMesh__DrawOnUI(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  Custom2dSplineMesh__CreateMesh(this, method);
}


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
        sub_1C372BC(this);
      }
      if ( !byte_4C3C924 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C924 = 1;
      }
      this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v20.n64_u64[0] = vmul_f32(v18, v18).n64_u64[0];
      v20.n64_f32[0] = sqrtf((float)(v19 * v19) + vaddv_f32(v20));
      if ( v20.n64_f32[0] <= 0.00001 )
      {
        if ( !byte_4C3C921 )
        {
          this = (Custom2dSplineMesh_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
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
        if ( !byte_4C3C91F )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3C91F = 1;
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
      sub_1C372B4(this);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__GenMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *drawMesh; // x21
  struct UnityEngine_Mesh_o **p_drawMesh; // x23
  UnityEngine_Mesh_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  UnityEngine_Object_o *v8; // x0
  struct UnityEngine_MeshFilter_o **p_meshFilter; // x21
  UnityEngine_Object_o *meshFilter; // x22
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_List_Vector3__o *v14; // x22
  struct System_Collections_Generic_List_Vector3__o **p_verts; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *v18; // x23
  struct System_Collections_Generic_List_int__o **p_trianges; // x22
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_Vector2__o *v22; // x24
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x1
  struct UnityEngine_Vector3_array *points; // x8
  float complexity; // s1
  float v28; // s15
  int32_t *p_vtxIdx; // x29
  float x; // s13
  float y; // s11
  const MethodInfo *v32; // x1
  float v33; // s10
  float v34; // s12
  float v35; // s8
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  float v39; // s9
  float v40; // s14
  float v41; // s13
  float v42; // s12
  float v43; // s0
  float v44; // s8
  float v45; // s9
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float UVslice; // s0
  _BOOL4 DrawCap; // w8
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  float v51; // s12
  float v52; // s13
  float v53; // s14
  const MethodInfo *v54; // x2
  float width; // s15
  float v56; // s0
  float v57; // s3 OVERLAPPED
  float v58; // s4
  float v59; // s5
  struct UnityEngine_Vector3_StaticFields *v60; // x8
  float PathRate; // s0
  float v62; // s12
  float v63; // s13
  float v64; // s14
  float v65; // s11
  const MethodInfo *v66; // x1
  int v67; // w28
  float v68; // s0
  float v69; // s1
  float v70; // s2
  float v71; // s3
  float v72; // s9
  float v73; // s12
  float v74; // s13
  float v75; // s14
  float v76; // s15
  struct UnityEngine_Vector3_StaticFields *v77; // x8
  int32_t flattenAxis; // w8
  float v79; // s11
  float v80; // s10
  float v81; // s8
  float v82; // s0
  float v83; // s14
  float v84; // s13
  float v85; // s15
  intptr_t m_CachedPtr; // x8
  _QWORD *v87; // x9
  __int64 klass_low; // x10
  float *v89; // x8
  intptr_t v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  float *v93; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x26
  unsigned __int64 UV_41556024; // kr00_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_Vector2__o *v99; // x26
  unsigned __int64 v100; // kr08_8
  struct UnityEngine_Vector2_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  const MethodInfo *v104; // x1
  float v105; // s0
  Custom2dSplineMesh_c *v106; // x0
  float v107; // s1
  float v108; // s11
  float v109; // s13
  float v110; // s9
  float v111; // s15
  float v112; // s14
  float v113; // s8
  const MethodInfo *v114; // x1
  float v115; // s11
  float v116; // s10
  float v117; // s9
  const MethodInfo *v118; // x1
  const MethodInfo *v119; // x1
  float v120; // s0
  int32_t v121; // w8
  float v122; // s15
  float v123; // s11
  float v124; // s14
  float v125; // s13
  float v126; // s10
  int32_t v127; // w1
  intptr_t v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  int32_t v131; // w9
  intptr_t v132; // x8
  _QWORD *v133; // x10
  __int64 v134; // x11
  int32_t v135; // w1
  int32_t v136; // w9
  intptr_t v137; // x8
  _QWORD *v138; // x10
  __int64 v139; // x11
  int32_t v140; // w1
  int32_t v141; // w9
  intptr_t v142; // x8
  _QWORD *v143; // x10
  __int64 v144; // x11
  int32_t v145; // w1
  int32_t v146; // w9
  intptr_t v147; // x8
  _QWORD *v148; // x10
  __int64 v149; // x11
  int32_t v150; // w1
  int32_t v151; // w9
  intptr_t v152; // x8
  _QWORD *v153; // x10
  __int64 v154; // x11
  const MethodInfo *v155; // x1
  float v156; // s0
  intptr_t v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  float *v160; // x8
  intptr_t v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  float *v164; // x8
  float v165; // s9
  struct System_Collections_Generic_List_Vector2__o *v166; // x26
  float v167; // s8
  unsigned __int64 v168; // kr10_8
  struct UnityEngine_Vector2_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  struct System_Collections_Generic_List_Vector2__o *v172; // x26
  float lineVmax; // s1 OVERLAPPED
  UnityEngine_Vector2_o v174; // kr18_8
  struct UnityEngine_Vector2_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  float *v178; // x8
  float v179; // s0
  int32_t v180; // w1
  intptr_t v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  int32_t v184; // w9
  intptr_t v185; // x8
  _QWORD *v186; // x10
  __int64 v187; // x11
  int32_t v188; // w1
  int32_t v189; // w9
  intptr_t v190; // x8
  _QWORD *v191; // x10
  __int64 v192; // x11
  int32_t v193; // w1
  int32_t v194; // w9
  intptr_t v195; // x8
  _QWORD *v196; // x10
  __int64 v197; // x11
  int32_t v198; // w1
  int32_t v199; // w9
  intptr_t v200; // x8
  _QWORD *v201; // x10
  __int64 v202; // x11
  int32_t v203; // w1
  int32_t v204; // w9
  intptr_t v205; // x8
  _QWORD *v206; // x10
  __int64 v207; // x11
  const MethodInfo *v208; // x1
  const MethodInfo *v209; // x2
  float v210; // s8
  float v211; // s9
  float v212; // s10
  float v213; // s0
  float v214; // s3 OVERLAPPED
  float v215; // s4
  float v216; // s5
  struct UnityEngine_Vector3_StaticFields *v217; // x8
  float v218; // s12
  const MethodInfo *v219; // x1
  const MethodInfo *v220; // x1
  float v221; // s9
  float v222; // s10
  float v223; // s11
  float v224; // s0
  float v225; // s14
  float v226; // s15
  struct UnityEngine_Vector3_StaticFields *v227; // x8
  float v228; // s9
  float v229; // s10
  float v230; // s11
  const MethodInfo *v231; // x2
  const MethodInfo *v232; // x1
  int32_t v233; // w8
  float v234; // s14
  float v235; // s13
  float v236; // s15
  float v237; // s0
  float v238; // s11
  float v239; // s9
  float v240; // s0
  float v241; // s10
  intptr_t v242; // x8
  _QWORD *v243; // x9
  __int64 v244; // x10
  float *v245; // x8
  intptr_t v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  float *v249; // x8
  struct System_Collections_Generic_List_Vector2__o *v250; // x26
  unsigned __int64 v251; // kr20_8
  struct UnityEngine_Vector2_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  struct System_Collections_Generic_List_Vector2__o *v255; // x26
  unsigned __int64 v256; // kr28_8
  struct UnityEngine_Vector2_array *v257; // x8
  _QWORD *v258; // x9
  __int64 v259; // x10
  const MethodInfo *v260; // x1
  const MethodInfo *v261; // x1
  int32_t v262; // w8
  float v263; // s12
  float v264; // s11
  float v265; // s13
  float v266; // s0
  float v267; // s8
  float v268; // s10
  float v269; // s9
  intptr_t v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  float *v273; // x8
  intptr_t v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  float *v277; // x8
  struct System_Collections_Generic_List_Vector2__o *v278; // x26
  unsigned __int64 v279; // kr30_8
  float v280; // s11
  struct UnityEngine_Vector2_array *v281; // x8
  _QWORD *v282; // x9
  __int64 v283; // x10
  struct System_Collections_Generic_List_Vector2__o *v284; // x26
  float v285; // s1 OVERLAPPED
  UnityEngine_Vector2_o v286; // kr38_8
  struct UnityEngine_Vector2_array *v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  float *v290; // x8
  float v291; // s0
  int32_t v292; // w1
  intptr_t v293; // x8
  _QWORD *v294; // x9
  __int64 v295; // x10
  int32_t v296; // w9
  intptr_t v297; // x8
  _QWORD *v298; // x10
  __int64 v299; // x11
  int32_t v300; // w1
  int32_t v301; // w9
  intptr_t v302; // x8
  _QWORD *v303; // x10
  __int64 v304; // x11
  int32_t v305; // w1
  int32_t v306; // w9
  intptr_t v307; // x8
  _QWORD *v308; // x10
  __int64 v309; // x11
  int32_t v310; // w1
  int32_t v311; // w9
  intptr_t v312; // x8
  _QWORD *v313; // x10
  __int64 v314; // x11
  int32_t v315; // w1
  int32_t v316; // w9
  intptr_t v317; // x8
  _QWORD *v318; // x10
  __int64 v319; // x11
  float v320; // s8
  float v321; // s9
  float v322; // s10
  const MethodInfo *v323; // x1
  float v324; // s11
  const MethodInfo *v325; // x1
  const MethodInfo *v326; // x2
  float v327; // s12
  float v328; // s13
  float v329; // s14
  float v330; // s0
  float v331; // s3 OVERLAPPED
  float v332; // s4
  float v333; // s5
  struct UnityEngine_Vector3_StaticFields *v334; // x8
  UnityEngine_Mesh_o *v335; // x19
  UnityEngine_Mesh_o *v336; // x19
  UnityEngine_Mesh_o *v337; // x19
  struct System_Collections_Generic_List_Vector3__o *v338; // x8
  int v339; // w9
  struct System_Collections_Generic_List_int__o *v340; // x8
  int v341; // w9
  struct System_Collections_Generic_List_Vector2__o *v342; // x8
  int v343; // w9
  UnityEngine_Vector3_o offset; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offseta; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetb; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetc; // [xsp+0h] [xbp-140h]
  struct System_Collections_Generic_List_Vector2__o **p_uvs; // [xsp+20h] [xbp-120h]
  struct UnityEngine_Mesh_o **v349; // [xsp+28h] [xbp-118h]
  float v350; // [xsp+34h] [xbp-10Ch]
  float v351; // [xsp+38h] [xbp-108h]
  float v352; // [xsp+3Ch] [xbp-104h]
  float v353; // [xsp+40h] [xbp-100h]
  float v354; // [xsp+44h] [xbp-FCh]
  float v355; // [xsp+48h] [xbp-F8h]
  float v356; // [xsp+4Ch] [xbp-F4h]
  float UVrate; // [xsp+50h] [xbp-F0h]
  float pos; // [xsp+54h] [xbp-ECh]
  float v359; // [xsp+58h] [xbp-E8h]
  float v360; // [xsp+5Ch] [xbp-E4h]
  float v361; // [xsp+60h] [xbp-E0h]
  float v362; // [xsp+64h] [xbp-DCh]
  float v363; // [xsp+68h] [xbp-D8h]
  float v364; // [xsp+68h] [xbp-D8h]
  float v365; // [xsp+6Ch] [xbp-D4h]
  float v366; // [xsp+6Ch] [xbp-D4h]
  float v367; // [xsp+70h] [xbp-D0h]
  float v368; // [xsp+70h] [xbp-D0h]
  float normalizedDir; // [xsp+78h] [xbp-C8h]
  float normalizedDir_4; // [xsp+7Ch] [xbp-C4h]
  float normalizedDir_8; // [xsp+80h] [xbp-C0h]
  float normalizedDir_8a; // [xsp+80h] [xbp-C0h]
  float rate; // [xsp+84h] [xbp-BCh]
  float v374; // [xsp+88h] [xbp-B8h]
  float v375; // [xsp+88h] [xbp-B8h]
  float v376; // [xsp+8Ch] [xbp-B4h]
  float v377; // [xsp+8Ch] [xbp-B4h]
  float v378; // [xsp+90h] [xbp-B0h]
  float v379; // [xsp+90h] [xbp-B0h]
  float z; // [xsp+94h] [xbp-ACh]
  float v381; // [xsp+94h] [xbp-ACh]
  float v382; // [xsp+94h] [xbp-ACh]
  UnityEngine_Vector2_o item; // [xsp+98h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v385; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v386; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Direction; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v388; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v389; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v390; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v391; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v394; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v395; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v396; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v397; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v398; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v399; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v400; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v401; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v402; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v403; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v404; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v405; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v406; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v407; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v408; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v409; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v410; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v411; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v412; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v413; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v414; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v415; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v416; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v417; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v418; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v419; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v420; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C42A03 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    sub_1C37058(&Custom2dSplineMesh_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C37058(&UnityEngine_Mesh_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_12275/*"SPLINE MESH"*/);
    byte_4C42A03 = 1;
  }
  item.fields.y = 0.0;
  p_drawMesh = &this->fields.drawMesh;
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(drawMesh, 0, 0) )
  {
    v5 = (UnityEngine_Mesh_o *)sub_1C372A4(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v5, 0);
    *p_drawMesh = v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.drawMesh, (int32_t)v5, v6, v7);
    v8 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Object__set_name(v8, (System_String_o *)StringLiteral_12275/*"SPLINE MESH"*/, 0);
  }
  else
  {
    v8 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)v8, 0);
  }
  p_meshFilter = &this->fields.meshFilter;
  meshFilter = (UnityEngine_Object_o *)this->fields.meshFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshFilter, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v12, v13);
  }
  v8 = (UnityEngine_Object_o *)*p_meshFilter;
  v349 = &this->fields.drawMesh;
  if ( !*p_meshFilter )
    goto LABEL_334;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)v8, this->fields.drawMesh, 0);
  v14 = (System_Collections_Generic_List_Vector3__o *)sub_1C372A4(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v14,
    (const MethodInfo_37FB558 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.verts = v14;
  p_verts = &this->fields.verts;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.verts, (int32_t)v14, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.trianges = v18;
  p_trianges = &this->fields.trianges;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.trianges, (int32_t)v18, v20, v21);
  v22 = (System_Collections_Generic_List_Vector2__o *)sub_1C372A4(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v22,
    (const MethodInfo_37F8CAC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.uvs = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.uvs, (int32_t)v22, v23, v24);
  points = this->fields.points;
  if ( !points )
    goto LABEL_334;
  complexity = this->fields.complexity;
  if ( (float)(1.0 / (float)(complexity * (float)SLODWORD(points->max_length))) <= 0.0 )
    v28 = 1.0;
  else
    v28 = 1.0 / (float)(complexity * (float)SLODWORD(points->max_length));
  p_uvs = &this->fields.uvs;
  this->fields.vtxIdx = 0;
  p_vtxIdx = &this->fields.vtxIdx;
  item.fields.y = 0.0;
  Point = Custom2dSplineMesh__GetPoint(this, 0.0, v25);
  x = Point.fields.x;
  y = Point.fields.y;
  z = Point.fields.z;
  v385 = Custom2dSplineMesh__GetPoint(this, v28, v32);
  v33 = v385.fields.x;
  v34 = v385.fields.y;
  v35 = v385.fields.z;
  v386 = Custom2dSplineMesh__GetPoint(this, this->fields.PathRate, v36);
  v351 = v386.fields.y;
  v352 = v386.fields.x;
  v350 = v386.fields.z;
  Direction = Custom2dSplineMesh__GetDirection(this, 0.0, v37);
  v378 = Direction.fields.x;
  item.fields.x = Direction.fields.y;
  v374 = Direction.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  v39 = x;
  v40 = v33 - x;
  v367 = v34;
  v41 = v34 - y;
  v42 = v35 - z;
  v376 = v35;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v43 = sqrtf((float)(v42 * v42) + (float)((float)(v40 * v40) + (float)(v41 * v41)));
  v44 = v39;
  if ( v43 <= 0.00001 )
  {
    v45 = z;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    normalizedDir_8 = static_fields->zeroVector.fields.x;
    v363 = static_fields->zeroVector.fields.z;
    v365 = static_fields->zeroVector.fields.y;
  }
  else
  {
    normalizedDir_8 = v40 / v43;
    v363 = v42 / v43;
    v365 = v41 / v43;
    v45 = z;
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
  v388 = Custom2dSplineMesh__GetOffset(this, 0.0, v38);
  v362 = v28;
  if ( this->fields.DrawCap )
  {
    v51 = v388.fields.x;
    v52 = v388.fields.y;
    v53 = v388.fields.z;
    width = Custom2dSplineMesh__GetWidth(this, 0.0, v49);
    if ( !byte_4C3C924 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C924 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v56 = sqrtf((float)(v374 * v374) + (float)((float)(v378 * v378) + (float)(item.fields.x * item.fields.x)));
    if ( v56 <= 0.00001 )
    {
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      v60 = UnityEngine_Vector3_TypeInfo->static_fields;
      v57 = v60->zeroVector.fields.x;
      v58 = v60->zeroVector.fields.y;
      v59 = v60->zeroVector.fields.z;
    }
    else
    {
      v57 = v378 / v56;
      v58 = item.fields.x / v56;
      v59 = v374 / v56;
    }
    v389.fields.y = y;
    v389.fields.x = v44;
    v389.fields.z = v45;
    *(_QWORD *)&offset.fields.y = __PAIR64__(LODWORD(v53), LODWORD(v52));
    offset.fields.x = v51;
    Custom2dSplineMesh__AddCap(this, v389, *(UnityEngine_Vector3_o *)&v57, offset, width, 0, v54);
    v28 = v362;
  }
  PathRate = this->fields.PathRate;
  v62 = v367;
  v63 = v376;
  v64 = y;
  item.fields.x = 0.0;
  if ( PathRate > 0.0 )
  {
    item.fields.x = 0.0;
    v65 = 0.0;
    while ( 1 )
    {
      if ( Custom2dSplineMesh__isJumpcut(this, v65, v28, &item.fields.y, v50) )
      {
        v67 = 1;
      }
      else
      {
        v67 = 0;
        if ( v65 != 0.0 && !this->fields.createVertsEveryStep )
        {
          v390 = Custom2dSplineMesh__GetDirection(this, v65, v66);
          if ( (float)((float)(v363 * v390.fields.z)
                     + (float)((float)(normalizedDir_8 * v390.fields.x) + (float)(v365 * v390.fields.y))) >= this->fields.directionChange )
            goto LABEL_131;
          v67 = 0;
        }
      }
      if ( !byte_4C3C924 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C924 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v68 = v33 - v44;
      v69 = v62 - v64;
      v70 = v63 - v45;
      v71 = sqrtf((float)(v70 * v70) + (float)((float)(v69 * v69) + (float)(v68 * v68)));
      v381 = v45;
      v72 = v64;
      v368 = v62;
      v375 = v33;
      v377 = v63;
      if ( v71 <= 0.00001 )
      {
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        v73 = item.fields.x;
        v77 = UnityEngine_Vector3_TypeInfo->static_fields;
        v74 = v77->zeroVector.fields.x;
        v75 = v77->zeroVector.fields.y;
        v76 = v77->zeroVector.fields.z;
      }
      else
      {
        v73 = item.fields.x;
        v74 = v68 / v71;
        v75 = v69 / v71;
        v76 = v70 / v71;
      }
      rate = v65;
      v391 = Custom2dSplineMesh__GetOffset(this, v65, v66);
      flattenAxis = this->fields.flattenAxis;
      v79 = v44 + v391.fields.x;
      v80 = v72 + v391.fields.y;
      v379 = v44;
      normalizedDir_8 = v74;
      v363 = v76;
      v365 = v75;
      if ( flattenAxis == 2 )
      {
        v84 = v44 - v391.fields.x;
        v83 = v72 - v391.fields.y;
        v81 = 0.0;
        v85 = 0.0;
        goto LABEL_67;
      }
      v81 = v381 + v391.fields.z;
      if ( flattenAxis == 1 )
        break;
      if ( flattenAxis )
      {
        v83 = v72 - v391.fields.y;
        v84 = v379 - v391.fields.x;
        goto LABEL_65;
      }
      v82 = v381;
      v83 = v72 - v391.fields.y;
      v79 = 0.0;
      v84 = 0.0;
LABEL_66:
      v85 = v82 - v391.fields.z;
LABEL_67:
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      m_CachedPtr = v8->fields.m_CachedPtr;
      v87 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_334;
      klass_low = SLODWORD(v8[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        v392.fields.x = v79;
        v392.fields.y = v80;
        v392.fields.z = v81;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v392,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
      }
      else
      {
        v89 = (float *)(m_CachedPtr + 12 * klass_low);
        LODWORD(v8[1].klass) = klass_low + 1;
        v89[8] = v79;
        v89[9] = v80;
        v89[10] = v81;
      }
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v90 = v8->fields.m_CachedPtr;
      v91 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v90 )
        goto LABEL_334;
      v92 = SLODWORD(v8[1].klass);
      if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
      {
        v393.fields.x = v84;
        v393.fields.y = v83;
        v393.fields.z = v85;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v393,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
      }
      else
      {
        v93 = (float *)(v90 + 12 * v92);
        LODWORD(v8[1].klass) = v92 + 1;
        v93[8] = v84;
        v93[9] = v83;
        v93[10] = v85;
      }
      uvs = this->fields.uvs;
      item.fields.x = v73;
      if ( this->fields.StrictUVmode )
      {
        v394.fields.x = v79;
        v394.fields.y = v80;
        v394.fields.z = v81;
        UV_41556024 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v394, v66);
      }
      else
      {
        UV_41556024 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(v73));
      }
      v65 = rate;
      v33 = v375;
      v44 = v379;
      if ( !uvs )
        goto LABEL_334;
      items = uvs->fields._items;
      v97 = Method_System_Collections_Generic_List_Vector2__Add__;
      v62 = v368;
      ++uvs->fields._version;
      if ( !items )
        goto LABEL_334;
      size = uvs->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          (UnityEngine_Vector2_o)UV_41556024,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = size + 1;
        items->m_Items[size] = (UnityEngine_Vector2_o)UV_41556024;
      }
      v99 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v395.fields.x = v84;
        v395.fields.y = v83;
        v395.fields.z = v85;
        v100 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v395, v66);
      }
      else
      {
        v100 = __PAIR64__(LODWORD(this->fields.lineVmax), LODWORD(item.fields.x));
      }
      v28 = v362;
      v63 = v377;
      v64 = v72;
      v45 = v381;
      if ( !v99 )
        goto LABEL_334;
      v101 = v99->fields._items;
      v102 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v99->fields._version;
      if ( !v101 )
        goto LABEL_334;
      v103 = v99->fields._size;
      if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v99,
          (UnityEngine_Vector2_o)v100,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
      }
      else
      {
        v99->fields._size = v103 + 1;
        v101->m_Items[v103] = (UnityEngine_Vector2_o)v100;
      }
      if ( rate == 0.0 )
      {
        if ( !v67 )
          goto LABEL_131;
      }
      else
      {
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
        v127 = *p_vtxIdx;
        v128 = v8->fields.m_CachedPtr;
        v129 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v128 )
          goto LABEL_334;
        v130 = SLODWORD(v8[1].klass);
        if ( (unsigned int)v130 >= *(_DWORD *)(v128 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            v127,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          v8 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v8[1].klass) = v130 + 1;
          *(_DWORD *)(v128 + 4 * v130 + 32) = v127;
        }
        v131 = *p_vtxIdx;
        v132 = v8->fields.m_CachedPtr;
        v133 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v132 )
          goto LABEL_334;
        v134 = SLODWORD(v8[1].klass);
        v135 = v131 + 2;
        if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            v135,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          v8 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v8[1].klass) = v134 + 1;
          *(_DWORD *)(v132 + 4 * v134 + 32) = v135;
        }
        v136 = *p_vtxIdx;
        v137 = v8->fields.m_CachedPtr;
        v138 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v137 )
          goto LABEL_334;
        v139 = SLODWORD(v8[1].klass);
        v140 = v136 + 1;
        if ( (unsigned int)v139 >= *(_DWORD *)(v137 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            v140,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v138[4] + 192LL) + 112LL));
          v8 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v8[1].klass) = v139 + 1;
          *(_DWORD *)(v137 + 4 * v139 + 32) = v140;
        }
        v141 = *p_vtxIdx;
        v142 = v8->fields.m_CachedPtr;
        v143 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v142 )
          goto LABEL_334;
        v144 = SLODWORD(v8[1].klass);
        v145 = v141 + 2;
        if ( (unsigned int)v144 >= *(_DWORD *)(v142 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            v145,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
          v8 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v8[1].klass) = v144 + 1;
          *(_DWORD *)(v142 + 4 * v144 + 32) = v145;
        }
        v146 = *p_vtxIdx;
        v147 = v8->fields.m_CachedPtr;
        v148 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v147 )
          goto LABEL_334;
        v149 = SLODWORD(v8[1].klass);
        v150 = v146 + 3;
        if ( (unsigned int)v149 >= *(_DWORD *)(v147 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            v150,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          v8 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v8[1].klass) = v149 + 1;
          *(_DWORD *)(v147 + 4 * v149 + 32) = v150;
        }
        v151 = *p_vtxIdx;
        v152 = v8->fields.m_CachedPtr;
        v153 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v8[1].klass);
        if ( !v152 )
          goto LABEL_334;
        v154 = SLODWORD(v8[1].klass);
        v66 = (const MethodInfo *)(unsigned int)(v151 + 1);
        if ( (unsigned int)v154 >= *(_DWORD *)(v152 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v8,
            (int32_t)v66,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(v8[1].klass) = v154 + 1;
          *(_DWORD *)(v152 + 4 * v154 + 32) = (_DWORD)v66;
        }
        *p_vtxIdx += 2;
        if ( !v67 )
        {
LABEL_131:
          if ( !byte_4C3C91F )
          {
            sub_1C37058(&System_Math_TypeInfo);
            byte_4C3C91F = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          item.fields.x = item.fields.x
                        + (float)((float)(sqrtf(
                                            (float)((float)(v45 - v63) * (float)(v45 - v63))
                                          + (float)((float)((float)(v64 - v62) * (float)(v64 - v62))
                                                  + (float)((float)(v44 - v33) * (float)(v44 - v33))))
                                        / Custom2dSplineMesh__GetWidth(this, v65, v66))
                                * this->fields.UVrate);
          goto LABEL_249;
        }
      }
      if ( !byte_4C3C91F )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C91F = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v105 = Custom2dSplineMesh__GetWidth(this, rate, v66);
      v106 = Custom2dSplineMesh_TypeInfo;
      pos = v64;
      v356 = v105;
      UVrate = this->fields.UVrate;
      v107 = item.fields.y;
      if ( !Custom2dSplineMesh_TypeInfo->_2.cctor_finished )
      {
        v108 = item.fields.y;
        j_il2cpp_runtime_class_init_0(Custom2dSplineMesh_TypeInfo);
        v106 = Custom2dSplineMesh_TypeInfo;
        v107 = v108;
      }
      v109 = v107;
      v110 = v107 - v106->static_fields->JUMP_THRESH_HOLD;
      v396 = Custom2dSplineMesh__GetPoint(this, v107, v104);
      v111 = v396.fields.x;
      v112 = v396.fields.y;
      v113 = v396.fields.z;
      v354 = v110;
      v397 = Custom2dSplineMesh__GetOffset(this, v110, v114);
      v115 = v397.fields.x;
      v116 = v397.fields.y;
      v117 = v397.fields.z;
      v360 = v109;
      v120 = Custom2dSplineMesh__GetWidth(this, v109, v118);
      v121 = this->fields.flattenAxis;
      normalizedDir = v111;
      normalizedDir_4 = v112;
      normalizedDir_8a = v115;
      v122 = v111 + v115;
      v123 = v116;
      v124 = v112 + v116;
      v355 = v120;
      if ( v121 == 2 )
      {
        v126 = v375;
        v125 = 0.0;
        v364 = normalizedDir_4 - v123;
        v366 = normalizedDir - normalizedDir_8a;
        v156 = 0.0;
LABEL_139:
        v359 = v156;
        goto LABEL_140;
      }
      v125 = v113 + v117;
      if ( v121 == 1 )
      {
        v126 = v375;
        v124 = 0.0;
        v359 = v113 - v117;
        v364 = 0.0;
        v366 = normalizedDir - normalizedDir_8a;
      }
      else
      {
        v126 = v375;
        if ( v121 )
        {
          v364 = normalizedDir_4 - v123;
          v366 = normalizedDir - normalizedDir_8a;
          v156 = v113 - v117;
          goto LABEL_139;
        }
        v122 = 0.0;
        v359 = v113 - v117;
        v364 = normalizedDir_4 - v123;
        v366 = 0.0;
      }
LABEL_140:
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v157 = v8->fields.m_CachedPtr;
      v158 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v157 )
        goto LABEL_334;
      v159 = SLODWORD(v8[1].klass);
      v361 = v113;
      v353 = v117;
      if ( (unsigned int)v159 >= *(_DWORD *)(v157 + 24) )
      {
        v398.fields.x = v122;
        v398.fields.y = v124;
        v398.fields.z = v125;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v398,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
      }
      else
      {
        v160 = (float *)(v157 + 12 * v159);
        LODWORD(v8[1].klass) = v159 + 1;
        v160[8] = v122;
        v160[9] = v124;
        v160[10] = v125;
      }
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v161 = v8->fields.m_CachedPtr;
      v162 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v161 )
        goto LABEL_334;
      v163 = SLODWORD(v8[1].klass);
      if ( (unsigned int)v163 >= *(_DWORD *)(v161 + 24) )
      {
        v399.fields.y = v364;
        v399.fields.x = v366;
        v399.fields.z = v359;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v399,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v164 = (float *)(v161 + 12 * v163);
        LODWORD(v8[1].klass) = v163 + 1;
        v164[8] = v366;
        v164[9] = v364;
        v164[10] = v359;
      }
      v165 = sqrtf(
               (float)((float)(v381 - v377) * (float)(v381 - v377))
             + (float)((float)((float)(pos - v368) * (float)(pos - v368))
                     + (float)((float)(v379 - v126) * (float)(v379 - v126))));
      v166 = this->fields.uvs;
      v167 = item.fields.x + (float)((float)(v165 / v356) * UVrate);
      if ( this->fields.StrictUVmode )
      {
        v400.fields.x = v122;
        v400.fields.y = v124;
        v400.fields.z = v125;
        v168 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v400, v119);
        if ( !v166 )
          goto LABEL_334;
      }
      else
      {
        v168 = __PAIR64__(LODWORD(this->fields.lineVmin), item.fields.x + (float)((float)(v165 / v356) * UVrate));
        if ( !v166 )
          goto LABEL_334;
      }
      v169 = v166->fields._items;
      v170 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v166->fields._version;
      if ( !v169 )
        goto LABEL_334;
      v171 = v166->fields._size;
      if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v166,
          (UnityEngine_Vector2_o)v168,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
      }
      else
      {
        v166->fields._size = v171 + 1;
        v169->m_Items[v171] = (UnityEngine_Vector2_o)v168;
      }
      v172 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v401.fields.y = v364;
        v401.fields.x = v366;
        v401.fields.z = v359;
        v174 = Custom2dSplineMesh__GetUV_41556024(this, v401, v119);
        lineVmax = v174.fields.y;
        v167 = v174.fields.x;
        if ( !v172 )
          goto LABEL_334;
      }
      else
      {
        lineVmax = this->fields.lineVmax;
        if ( !v172 )
          goto LABEL_334;
      }
      v175 = v172->fields._items;
      v176 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v172->fields._version;
      if ( !v175 )
        goto LABEL_334;
      v177 = v172->fields._size;
      if ( (unsigned int)v177 >= LODWORD(v175->max_length) )
      {
        v179 = v167;
        System_Collections_Generic_List_Vector2___AddWithResize(
          v172,
          *(UnityEngine_Vector2_o *)(&lineVmax - 1),
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
      }
      else
      {
        v178 = (float *)(&v175->obj.klass + v177);
        v172->fields._size = v177 + 1;
        v178[8] = v167;
        v178[9] = lineVmax;
      }
      v8 = (UnityEngine_Object_o *)*p_trianges;
      if ( !*p_trianges )
        goto LABEL_334;
      v180 = *p_vtxIdx;
      v181 = v8->fields.m_CachedPtr;
      v182 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v181 )
        goto LABEL_334;
      v183 = SLODWORD(v8[1].klass);
      if ( (unsigned int)v183 >= *(_DWORD *)(v181 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          v180,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v8[1].klass) = v183 + 1;
        *(_DWORD *)(v181 + 4 * v183 + 32) = v180;
      }
      v184 = *p_vtxIdx;
      v185 = v8->fields.m_CachedPtr;
      v186 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v185 )
        goto LABEL_334;
      v187 = SLODWORD(v8[1].klass);
      v188 = v184 + 2;
      if ( (unsigned int)v187 >= *(_DWORD *)(v185 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          v188,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v8[1].klass) = v187 + 1;
        *(_DWORD *)(v185 + 4 * v187 + 32) = v188;
      }
      v189 = *p_vtxIdx;
      v190 = v8->fields.m_CachedPtr;
      v191 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v190 )
        goto LABEL_334;
      v192 = SLODWORD(v8[1].klass);
      v193 = v189 + 1;
      if ( (unsigned int)v192 >= *(_DWORD *)(v190 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          v193,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v8[1].klass) = v192 + 1;
        *(_DWORD *)(v190 + 4 * v192 + 32) = v193;
      }
      v194 = *p_vtxIdx;
      v195 = v8->fields.m_CachedPtr;
      v196 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v195 )
        goto LABEL_334;
      v197 = SLODWORD(v8[1].klass);
      v198 = v194 + 2;
      if ( (unsigned int)v197 >= *(_DWORD *)(v195 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          v198,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v8[1].klass) = v197 + 1;
        *(_DWORD *)(v195 + 4 * v197 + 32) = v198;
      }
      v199 = *p_vtxIdx;
      v200 = v8->fields.m_CachedPtr;
      v201 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v200 )
        goto LABEL_334;
      v202 = SLODWORD(v8[1].klass);
      v203 = v199 + 3;
      if ( (unsigned int)v202 >= *(_DWORD *)(v200 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          v203,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
        v8 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v8[1].klass) = v202 + 1;
        *(_DWORD *)(v200 + 4 * v202 + 32) = v203;
      }
      v204 = *p_vtxIdx;
      v205 = v8->fields.m_CachedPtr;
      v206 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v205 )
        goto LABEL_334;
      v207 = SLODWORD(v8[1].klass);
      v208 = (const MethodInfo *)(unsigned int)(v204 + 1);
      v382 = v165;
      if ( (unsigned int)v207 >= *(_DWORD *)(v205 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v8,
          (int32_t)v208,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(v8[1].klass) = v207 + 1;
        *(_DWORD *)(v205 + 4 * v207 + 32) = (_DWORD)v208;
      }
      this->fields.vtxIdx += 4;
      v402 = Custom2dSplineMesh__GetDirection(this, v354, v208);
      v210 = v402.fields.x;
      v211 = v402.fields.y;
      v212 = v402.fields.z;
      if ( !byte_4C3C924 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C924 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v213 = sqrtf((float)(v212 * v212) + (float)((float)(v210 * v210) + (float)(v211 * v211)));
      if ( v213 <= 0.00001 )
      {
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        v217 = UnityEngine_Vector3_TypeInfo->static_fields;
        v214 = v217->zeroVector.fields.x;
        v215 = v217->zeroVector.fields.y;
        v216 = v217->zeroVector.fields.z;
      }
      else
      {
        v214 = v210 / v213;
        v215 = v211 / v213;
        v216 = v212 / v213;
      }
      v403.fields.y = normalizedDir_4;
      v403.fields.z = v361;
      offseta.fields.x = normalizedDir_8a;
      *(_QWORD *)&offseta.fields.y = __PAIR64__(LODWORD(v353), LODWORD(v123));
      v403.fields.x = normalizedDir;
      Custom2dSplineMesh__AddCap(this, v403, *(UnityEngine_Vector3_o *)&v214, offseta, v355, 1, v209);
      v218 = v360 + Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD;
      v404 = Custom2dSplineMesh__GetDirection(this, v218, v219);
      v221 = v404.fields.x;
      v222 = v404.fields.y;
      v223 = v404.fields.z;
      if ( !byte_4C3C924 )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C924 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v224 = sqrtf((float)(v223 * v223) + (float)((float)(v221 * v221) + (float)(v222 * v222)));
      if ( v224 <= 0.00001 )
      {
        if ( !byte_4C3C921 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C921 = 1;
        }
        v227 = UnityEngine_Vector3_TypeInfo->static_fields;
        v225 = v227->zeroVector.fields.y;
        v226 = v227->zeroVector.fields.z;
        normalizedDir_8 = v227->zeroVector.fields.x;
      }
      else
      {
        normalizedDir_8 = v221 / v224;
        v225 = v222 / v224;
        v226 = v223 / v224;
      }
      v405 = Custom2dSplineMesh__GetOffset(this, v218, v220);
      v420.fields.x = normalizedDir_8;
      v228 = v405.fields.x;
      v229 = v405.fields.y;
      v230 = v405.fields.z;
      offsetb = v405;
      v405.fields.x = normalizedDir;
      v405.fields.y = normalizedDir_4;
      v405.fields.z = v361;
      v420.fields.y = v225;
      v420.fields.z = v226;
      v363 = v226;
      v365 = v225;
      Custom2dSplineMesh__AddCap(this, v405, v420, offsetb, v355, 0, v231);
      v233 = this->fields.flattenAxis;
      v234 = normalizedDir + v228;
      v235 = normalizedDir_4 + v229;
      if ( v233 == 2 )
      {
        v240 = normalizedDir;
        v236 = 0.0;
        v238 = 0.0;
        goto LABEL_216;
      }
      v236 = v361 + v230;
      if ( v233 != 1 )
      {
        if ( v233 )
        {
          v240 = normalizedDir;
          v238 = v361 - v230;
LABEL_216:
          v239 = v240 - v228;
          v237 = normalizedDir_4;
        }
        else
        {
          v237 = normalizedDir_4;
          v238 = v361 - v230;
          v234 = 0.0;
          v239 = 0.0;
        }
        v241 = v237 - v229;
        goto LABEL_218;
      }
      v238 = v361 - v230;
      v235 = 0.0;
      v241 = 0.0;
      v239 = normalizedDir - v228;
LABEL_218:
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v242 = v8->fields.m_CachedPtr;
      v243 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v242 )
        goto LABEL_334;
      v244 = SLODWORD(v8[1].klass);
      if ( (unsigned int)v244 >= *(_DWORD *)(v242 + 24) )
      {
        v406.fields.x = v234;
        v406.fields.y = v235;
        v406.fields.z = v236;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v406,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
      }
      else
      {
        v245 = (float *)(v242 + 12 * v244);
        LODWORD(v8[1].klass) = v244 + 1;
        v245[8] = v234;
        v245[9] = v235;
        v245[10] = v236;
      }
      v8 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v246 = v8->fields.m_CachedPtr;
      v247 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( !v246 )
        goto LABEL_334;
      v248 = SLODWORD(v8[1].klass);
      if ( (unsigned int)v248 >= *(_DWORD *)(v246 + 24) )
      {
        v407.fields.x = v239;
        v407.fields.y = v241;
        v407.fields.z = v238;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v8,
          v407,
          *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
      }
      else
      {
        v249 = (float *)(v246 + 12 * v248);
        LODWORD(v8[1].klass) = v248 + 1;
        v249[8] = v239;
        v249[9] = v241;
        v249[10] = v238;
      }
      v250 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v408.fields.x = v234;
        v408.fields.y = v235;
        v408.fields.z = v236;
        v251 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v408, v232);
      }
      else
      {
        v251 = __PAIR64__(LODWORD(this->fields.lineVmin), 0);
      }
      v28 = v362;
      if ( !v250 )
        goto LABEL_334;
      v252 = v250->fields._items;
      v253 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v250->fields._version;
      if ( !v252 )
        goto LABEL_334;
      v254 = v250->fields._size;
      if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v250,
          (UnityEngine_Vector2_o)v251,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
      }
      else
      {
        v250->fields._size = v254 + 1;
        v252->m_Items[v254] = (UnityEngine_Vector2_o)v251;
      }
      v255 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v409.fields.x = v239;
        v409.fields.y = v241;
        v409.fields.z = v238;
        v256 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v409, v232);
      }
      else
      {
        v256 = __PAIR64__(LODWORD(this->fields.lineVmax), 0);
      }
      if ( !v255 )
        goto LABEL_334;
      v257 = v255->fields._items;
      v258 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v255->fields._version;
      if ( !v257 )
        goto LABEL_334;
      v259 = v255->fields._size;
      if ( (unsigned int)v259 >= LODWORD(v257->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v255,
          (UnityEngine_Vector2_o)v256,
          *(const MethodInfo_37F9514 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
      }
      else
      {
        v255->fields._size = v259 + 1;
        v257->m_Items[v259] = (UnityEngine_Vector2_o)v256;
      }
      if ( !byte_4C3C91F )
      {
        sub_1C37058(&System_Math_TypeInfo);
        byte_4C3C91F = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      item.fields.x = (float)(v382 / Custom2dSplineMesh__GetWidth(this, rate, v232)) * this->fields.UVrate;
      v410 = Custom2dSplineMesh__GetPoint(this, v218, v260);
      v65 = v360;
      v33 = v410.fields.x;
      v62 = v410.fields.y;
      v63 = v410.fields.z;
LABEL_249:
      v65 = v28 + v65;
      v44 = v33;
      v64 = v62;
      v45 = v63;
      v411 = Custom2dSplineMesh__GetPoint(this, v65, v155);
      v33 = v411.fields.x;
      PathRate = this->fields.PathRate;
      v62 = v411.fields.y;
      v63 = v411.fields.z;
      if ( v65 >= PathRate )
        goto LABEL_250;
    }
    v80 = 0.0;
    v83 = 0.0;
    v84 = v379 - v391.fields.x;
LABEL_65:
    v82 = v381;
    goto LABEL_66;
  }
LABEL_250:
  if ( PathRate > 0.0 )
  {
    v412 = Custom2dSplineMesh__GetOffset(this, PathRate, v49);
    v262 = this->fields.flattenAxis;
    v263 = v352 + v412.fields.x;
    v264 = v351 + v412.fields.y;
    if ( v262 == 2 )
    {
      v265 = 0.0;
      v268 = 0.0;
      v267 = v352 - v412.fields.x;
      v269 = v351 - v412.fields.y;
    }
    else
    {
      v265 = v350 + v412.fields.z;
      if ( v262 == 1 )
      {
        v264 = 0.0;
        v269 = 0.0;
        v267 = v352 - v412.fields.x;
      }
      else
      {
        if ( v262 )
        {
          v267 = v352 - v412.fields.x;
          v266 = v351;
        }
        else
        {
          v266 = v351;
          v263 = 0.0;
          v267 = 0.0;
        }
        v269 = v266 - v412.fields.y;
      }
      v268 = v350 - v412.fields.z;
    }
    v8 = (UnityEngine_Object_o *)*p_verts;
    if ( *p_verts )
    {
      v270 = v8->fields.m_CachedPtr;
      v271 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v8[1].klass);
      if ( v270 )
      {
        v272 = SLODWORD(v8[1].klass);
        if ( (unsigned int)v272 >= *(_DWORD *)(v270 + 24) )
        {
          v413.fields.x = v263;
          v413.fields.y = v264;
          v413.fields.z = v265;
          System_Collections_Generic_List_Vector3___AddWithResize(
            (System_Collections_Generic_List_Vector3__o *)v8,
            v413,
            *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
        }
        else
        {
          v273 = (float *)(v270 + 12 * v272);
          LODWORD(v8[1].klass) = v272 + 1;
          v273[8] = v263;
          v273[9] = v264;
          v273[10] = v265;
        }
        v8 = (UnityEngine_Object_o *)*p_verts;
        if ( *p_verts )
        {
          v274 = v8->fields.m_CachedPtr;
          v275 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++HIDWORD(v8[1].klass);
          if ( v274 )
          {
            v276 = SLODWORD(v8[1].klass);
            if ( (unsigned int)v276 >= *(_DWORD *)(v274 + 24) )
            {
              v414.fields.x = v267;
              v414.fields.y = v269;
              v414.fields.z = v268;
              System_Collections_Generic_List_Vector3___AddWithResize(
                (System_Collections_Generic_List_Vector3__o *)v8,
                v414,
                *(const MethodInfo_37FBDEC **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
            }
            else
            {
              v277 = (float *)(v274 + 12 * v276);
              LODWORD(v8[1].klass) = v276 + 1;
              v277[8] = v267;
              v277[9] = v269;
              v277[10] = v268;
            }
            v278 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v415.fields.x = v263;
              v415.fields.y = v264;
              v415.fields.z = v265;
              v279 = (unsigned __int64)Custom2dSplineMesh__GetUV_41556024(this, v415, v261);
              v280 = item.fields.x;
              if ( !v278 )
                goto LABEL_334;
            }
            else
            {
              v280 = item.fields.x;
              v279 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(item.fields.x));
              if ( !v278 )
                goto LABEL_334;
            }
            v281 = v278->fields._items;
            v282 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v278->fields._version;
            if ( !v281 )
              goto LABEL_334;
            v283 = v278->fields._size;
            if ( (unsigned int)v283 >= LODWORD(v281->max_length) )
            {
              System_Collections_Generic_List_Vector2___AddWithResize(
                v278,
                (UnityEngine_Vector2_o)v279,
                *(const MethodInfo_37F9514 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
            }
            else
            {
              v278->fields._size = v283 + 1;
              v281->m_Items[v283] = (UnityEngine_Vector2_o)v279;
            }
            v284 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v416.fields.x = v267;
              v416.fields.y = v269;
              v416.fields.z = v268;
              v286 = Custom2dSplineMesh__GetUV_41556024(this, v416, v261);
              v285 = v286.fields.y;
              v280 = v286.fields.x;
              if ( !v284 )
                goto LABEL_334;
            }
            else
            {
              v285 = this->fields.lineVmax;
              if ( !v284 )
                goto LABEL_334;
            }
            v287 = v284->fields._items;
            v288 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v284->fields._version;
            if ( v287 )
            {
              v289 = v284->fields._size;
              if ( (unsigned int)v289 >= LODWORD(v287->max_length) )
              {
                v291 = v280;
                System_Collections_Generic_List_Vector2___AddWithResize(
                  v284,
                  *(UnityEngine_Vector2_o *)(&v285 - 1),
                  *(const MethodInfo_37F9514 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
              }
              else
              {
                v290 = (float *)(&v287->obj.klass + v289);
                v284->fields._size = v289 + 1;
                v290[8] = v280;
                v290[9] = v285;
              }
              v8 = (UnityEngine_Object_o *)*p_trianges;
              if ( *p_trianges )
              {
                v292 = *p_vtxIdx;
                v293 = v8->fields.m_CachedPtr;
                v294 = Method_System_Collections_Generic_List_int__Add__;
                ++HIDWORD(v8[1].klass);
                if ( v293 )
                {
                  v295 = SLODWORD(v8[1].klass);
                  if ( (unsigned int)v295 >= *(_DWORD *)(v293 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)v8,
                      v292,
                      *(const MethodInfo_3786000 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
                    v8 = (UnityEngine_Object_o *)*p_trianges;
                    if ( !*p_trianges )
                      goto LABEL_334;
                  }
                  else
                  {
                    LODWORD(v8[1].klass) = v295 + 1;
                    *(_DWORD *)(v293 + 4 * v295 + 32) = v292;
                  }
                  v296 = *p_vtxIdx;
                  v297 = v8->fields.m_CachedPtr;
                  v298 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(v8[1].klass);
                  if ( v297 )
                  {
                    v299 = SLODWORD(v8[1].klass);
                    v300 = v296 + 2;
                    if ( (unsigned int)v299 >= *(_DWORD *)(v297 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)v8,
                        v300,
                        *(const MethodInfo_3786000 **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
                      v8 = (UnityEngine_Object_o *)*p_trianges;
                      if ( !*p_trianges )
                        goto LABEL_334;
                    }
                    else
                    {
                      LODWORD(v8[1].klass) = v299 + 1;
                      *(_DWORD *)(v297 + 4 * v299 + 32) = v300;
                    }
                    v301 = *p_vtxIdx;
                    v302 = v8->fields.m_CachedPtr;
                    v303 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(v8[1].klass);
                    if ( v302 )
                    {
                      v304 = SLODWORD(v8[1].klass);
                      v305 = v301 + 1;
                      if ( (unsigned int)v304 >= *(_DWORD *)(v302 + 24) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          (System_Collections_Generic_List_int__o *)v8,
                          v305,
                          *(const MethodInfo_3786000 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
                        v8 = (UnityEngine_Object_o *)*p_trianges;
                        if ( !*p_trianges )
                          goto LABEL_334;
                      }
                      else
                      {
                        LODWORD(v8[1].klass) = v304 + 1;
                        *(_DWORD *)(v302 + 4 * v304 + 32) = v305;
                      }
                      v306 = *p_vtxIdx;
                      v307 = v8->fields.m_CachedPtr;
                      v308 = Method_System_Collections_Generic_List_int__Add__;
                      ++HIDWORD(v8[1].klass);
                      if ( v307 )
                      {
                        v309 = SLODWORD(v8[1].klass);
                        v310 = v306 + 2;
                        if ( (unsigned int)v309 >= *(_DWORD *)(v307 + 24) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            (System_Collections_Generic_List_int__o *)v8,
                            v310,
                            *(const MethodInfo_3786000 **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
                          v8 = (UnityEngine_Object_o *)*p_trianges;
                          if ( !*p_trianges )
                            goto LABEL_334;
                        }
                        else
                        {
                          LODWORD(v8[1].klass) = v309 + 1;
                          *(_DWORD *)(v307 + 4 * v309 + 32) = v310;
                        }
                        v311 = *p_vtxIdx;
                        v312 = v8->fields.m_CachedPtr;
                        v313 = Method_System_Collections_Generic_List_int__Add__;
                        ++HIDWORD(v8[1].klass);
                        if ( v312 )
                        {
                          v314 = SLODWORD(v8[1].klass);
                          v315 = v311 + 3;
                          if ( (unsigned int)v314 >= *(_DWORD *)(v312 + 24) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              (System_Collections_Generic_List_int__o *)v8,
                              v315,
                              *(const MethodInfo_3786000 **)(*(_QWORD *)(v313[4] + 192LL) + 112LL));
                            v8 = (UnityEngine_Object_o *)*p_trianges;
                            if ( !*p_trianges )
                              goto LABEL_334;
                          }
                          else
                          {
                            LODWORD(v8[1].klass) = v314 + 1;
                            *(_DWORD *)(v312 + 4 * v314 + 32) = v315;
                          }
                          v316 = *p_vtxIdx;
                          v317 = v8->fields.m_CachedPtr;
                          v318 = Method_System_Collections_Generic_List_int__Add__;
                          ++HIDWORD(v8[1].klass);
                          if ( v317 )
                          {
                            v319 = SLODWORD(v8[1].klass);
                            v49 = (const MethodInfo *)(unsigned int)(v316 + 1);
                            if ( (unsigned int)v319 >= *(_DWORD *)(v317 + 24) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                (System_Collections_Generic_List_int__o *)v8,
                                (int32_t)v49,
                                *(const MethodInfo_3786000 **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              LODWORD(v8[1].klass) = v319 + 1;
                              *(_DWORD *)(v317 + 4 * v319 + 32) = (_DWORD)v49;
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
    sub_1C372B4(v8);
  }
LABEL_312:
  if ( this->fields.DrawCap )
  {
    v417 = Custom2dSplineMesh__GetOffset(this, this->fields.PathRate, v49);
    v320 = v417.fields.x;
    v321 = v417.fields.y;
    v322 = v417.fields.z;
    v324 = Custom2dSplineMesh__GetWidth(this, this->fields.PathRate, v323);
    v418 = Custom2dSplineMesh__GetDirection(this, this->fields.PathRate, v325);
    v327 = v418.fields.x;
    v328 = v418.fields.y;
    v329 = v418.fields.z;
    if ( !byte_4C3C924 )
    {
      sub_1C37058(&System_Math_TypeInfo);
      byte_4C3C924 = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v330 = sqrtf((float)(v329 * v329) + (float)((float)(v327 * v327) + (float)(v328 * v328)));
    if ( v330 <= 0.00001 )
    {
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      v334 = UnityEngine_Vector3_TypeInfo->static_fields;
      v331 = v334->zeroVector.fields.x;
      v332 = v334->zeroVector.fields.y;
      v333 = v334->zeroVector.fields.z;
    }
    else
    {
      v331 = v327 / v330;
      v332 = v328 / v330;
      v333 = v329 / v330;
    }
    v419.fields.y = v351;
    v419.fields.x = v352;
    v419.fields.z = v350;
    *(_QWORD *)&offsetc.fields.y = __PAIR64__(LODWORD(v322), LODWORD(v321));
    offsetc.fields.x = v320;
    Custom2dSplineMesh__AddCap(this, v419, *(UnityEngine_Vector3_o *)&v331, offsetc, v324, 1, v326);
  }
  v8 = (UnityEngine_Object_o *)*p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v335 = *v349;
  v8 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector3___ToArray(
                                 (System_Collections_Generic_List_Vector3__o *)v8,
                                 (const MethodInfo_37FD9BC *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  if ( !v335 )
    goto LABEL_334;
  UnityEngine_Mesh__set_vertices(v335, (UnityEngine_Vector3_array *)v8, 0);
  v8 = (UnityEngine_Object_o *)*p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v336 = *v349;
  v8 = (UnityEngine_Object_o *)System_Collections_Generic_List_int___ToArray(
                                 (System_Collections_Generic_List_int__o *)v8,
                                 (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v336 )
    goto LABEL_334;
  UnityEngine_Mesh__set_triangles(v336, (System_Int32_array *)v8, 0);
  v8 = (UnityEngine_Object_o *)*p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v337 = *v349;
  v8 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector2___ToArray(
                                 (System_Collections_Generic_List_Vector2__o *)v8,
                                 (const MethodInfo_37FB030 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  if ( !v337 )
    goto LABEL_334;
  UnityEngine_Mesh__set_uv(v337, (UnityEngine_Vector2_array *)v8, 0);
  v338 = *p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v339 = v338->fields._version + 1;
  v338->fields._size = 0;
  v338->fields._version = v339;
  v340 = *p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v341 = v340->fields._version + 1;
  v340->fields._size = 0;
  v340->fields._version = v341;
  v342 = *p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v343 = v342->fields._version + 1;
  v342->fields._size = 0;
  v342->fields._version = v343;
  v8 = (UnityEngine_Object_o *)*v349;
  if ( !*v349 )
    goto LABEL_334;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)v8, 0);
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetControlPoint(
        Custom2dSplineMesh_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  float *v4; // x8
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  points = this->fields.points;
  if ( !points )
    sub_1C372B4(this);
  if ( LODWORD(points->max_length) <= index )
    sub_1C372BC(this);
  v4 = (float *)((char *)points + 12 * index);
  v5 = v4[8];
  v6 = v4[9];
  v7 = v4[10];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


int32_t Custom2dSplineMesh__GetControlPointMode(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v4; // w9

  modes = this->fields.modes;
  if ( !modes )
    sub_1C372B4(this);
  v4 = (index + 1) / 3;
  if ( (unsigned int)v4 >= LODWORD(modes->max_length) )
    sub_1C372BC(this);
  return modes->m_Items[v4];
}


// local variable allocation has failed, the output may be wrong!
float Custom2dSplineMesh__GetCurveWeight(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  __int64 v5; // x0
  struct System_Single_array *curveWeight; // x8
  int v7; // w9

  Custom2dSplineMesh__checkWeightNull(this, *(const MethodInfo **)&index);
  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_1C372B4(v5);
  v7 = (index + 1) / 3;
  if ( (unsigned int)v7 >= LODWORD(curveWeight->max_length) )
    sub_1C372BC(v5);
  return curveWeight->m_Items[v7];
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetDirection(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  float z; // s10
  float v6; // s2
  float v7; // s0
  float v8; // s1
  float v9; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Velocity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Velocity = Custom2dSplineMesh__GetVelocity(this, t, method);
  x = Velocity.fields.x;
  y = Velocity.fields.y;
  z = Velocity.fields.z;
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v6 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v7 = static_fields->zeroVector.fields.x;
    v8 = static_fields->zeroVector.fields.y;
    v9 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v7 = x / v6;
    v8 = y / v6;
    v9 = z / v6;
  }
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
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
  float v35; // s0
  float v36; // s1
  float v37; // s2
  UnityEngine_Vector3_o Direction; // 0:s0.4,4:s1.4,8:s2.4
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
  if ( !byte_4C3C924 )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C924 = 1;
  }
  v19 = v13 - v14;
  v20 = v15 - v16;
  v21 = v17 - v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( v22 <= 0.00001 )
  {
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
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
  v35 = fabsf(Width * v27);
  if ( v31 )
    v35 = v32;
  v36 = fabsf(v33);
  if ( v31 != 1 )
    v36 = v33;
  v37 = fabsf(v34);
  if ( v31 != 2 )
    v37 = v34;
  result.fields.z = v37;
  result.fields.y = v36;
  result.fields.x = v35;
  return result;
}


float Custom2dSplineMesh__GetPathRate(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  return this->fields.PathRate;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetPoint(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Vector3_o v5; // x0
  const MethodInfo *v6; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  float innerT; // [xsp+2Ch] [xbp-14h] BYREF

  innerT = 0.0;
  *(_QWORD *)&v5.fields.x = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  points = this->fields.points;
  if ( !points )
    sub_1C372B4(*(_QWORD *)&v5.fields.x);
  max_length = points->max_length;
  if ( LODWORD(v5.fields.x) >= max_length
    || LODWORD(v5.fields.x) + 1 >= max_length
    || LODWORD(v5.fields.x) + 2 >= max_length
    || LODWORD(v5.fields.x) + 3 >= max_length )
  {
    sub_1C372BC(*(_QWORD *)&v5.fields.x);
  }
  return Bezier__GetPoint_41539392(
           points->m_Items[SLODWORD(v5.fields.x)],
           points->m_Items[LODWORD(v5.fields.x) + 1],
           points->m_Items[LODWORD(v5.fields.x) + 2],
           v5,
           COERCE_FLOAT(*(_QWORD *)&points->m_Items[LODWORD(v5.fields.x) + 3].fields.x),
           v6);
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetPointAsWorld(
        Custom2dSplineMesh_o *this,
        float t,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v9; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  if ( !transform )
    sub_1C372B4(v7);
  v9.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  v9.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
  v9.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
  return UnityEngine_Transform__TransformPoint(transform, v9, 0);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Custom2dSplineMesh__GetPointAsWorldFlatten(
        Custom2dSplineMesh_o *this,
        float t,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x0
  int32_t flattenAxis; // w8
  float v9; // s1 OVERLAPPED
  float v10; // s2
  float v11; // s0
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  flattenAxis = this->fields.flattenAxis;
  v9 = Point.fields.y + this->fields.PointOffset.fields.y;
  v10 = Point.fields.z + this->fields.PointOffset.fields.z;
  if ( flattenAxis )
  {
    v11 = Point.fields.x + this->fields.PointOffset.fields.x;
    if ( flattenAxis == 1 )
    {
      v9 = 0.0;
    }
    else if ( flattenAxis == 2 )
    {
      v10 = 0.0;
    }
  }
  else
  {
    v11 = 0.0;
  }
  if ( !transform )
    sub_1C372B4(v7);
  return UnityEngine_Transform__TransformPoint(transform, *(UnityEngine_Vector3_o *)(&v9 - 1), 0);
}


float Custom2dSplineMesh__GetTotalWeight(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  struct System_Single_array *curveWeight; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v6; // x9
  float *m_Items; // x11
  float result; // s0
  float v9; // s1

  Custom2dSplineMesh__checkWeightNull(this, method);
  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_1C372B4(v3);
  max_length_low = LODWORD(curveWeight->max_length);
  if ( (__int64)(max_length_low << 32) < 1 )
    return 0.0;
  v6 = 0;
  m_Items = curveWeight->m_Items;
  result = 0.0;
  do
  {
    if ( v6 >= max_length_low )
      sub_1C372BC(v3);
    v9 = m_Items[v6++];
    result = result + v9;
  }
  while ( (__int64)v6 < (int)max_length_low );
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        float coordU,
        float coordV,
        const MethodInfo *method)
{
  UnityEngine_Vector2_o UV_41556024; // kr00_8
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.StrictUVmode )
  {
    UV_41556024 = Custom2dSplineMesh__GetUV_41556024(this, pos, method);
    coordU = UV_41556024.fields.x;
    coordV = UV_41556024.fields.y;
  }
  v6 = coordU;
  v7 = coordV;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV_41556024(
        Custom2dSplineMesh_o *this,
        UnityEngine_Vector3_o pos,
        const MethodInfo *method)
{
  int32_t flattenAxis; // w8
  float v4; // s3
  float x; // s0
  float y; // s1
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
    x = pos.fields.x * UVrate;
    y = v8 * UVrate;
    goto LABEL_11;
  }
  if ( flattenAxis == 1 )
  {
    UVrate = this->fields.UVrate;
    v8 = pos.fields.z + this->fields.UVslice;
    goto LABEL_7;
  }
  if ( flattenAxis )
  {
    if ( !byte_4C3C81A )
    {
      sub_1C37058(&UnityEngine_Vector2_TypeInfo);
      byte_4C3C81A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
  }
  else
  {
    v4 = this->fields.UVrate;
    x = pos.fields.y * v4;
    y = (float)(pos.fields.z + this->fields.UVslice) * v4;
  }
LABEL_11:
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetVelocity(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t WeightedPointIdxAndT; // w21
  UnityEngine_Vector3_o v6; // x0
  const MethodInfo *v7; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  UnityEngine_Transform_o *v10; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v14; // s0
  float v15; // s1
  float v16; // s2
  float innerT; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o FirstDerivative_41539656; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  innerT = 0.0;
  WeightedPointIdxAndT = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  *(_QWORD *)&v6.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  points = this->fields.points;
  if ( !points )
    goto LABEL_10;
  max_length = points->max_length;
  if ( WeightedPointIdxAndT >= max_length
    || WeightedPointIdxAndT + 1 >= max_length
    || WeightedPointIdxAndT + 2 >= max_length
    || WeightedPointIdxAndT + 3 >= max_length )
  {
    sub_1C372BC(*(_QWORD *)&v6.fields.x);
  }
  v10 = *(UnityEngine_Transform_o **)&v6.fields.x;
  FirstDerivative_41539656 = Bezier__GetFirstDerivative_41539656(
                               points->m_Items[WeightedPointIdxAndT],
                               points->m_Items[WeightedPointIdxAndT + 1],
                               points->m_Items[WeightedPointIdxAndT + 2],
                               v6,
                               COERCE_FLOAT(*(_QWORD *)&points->m_Items[WeightedPointIdxAndT + 3].fields.x),
                               v7);
  if ( !v10
    || (v19 = UnityEngine_Transform__TransformPoint(v10, FirstDerivative_41539656, 0),
        x = v19.fields.x,
        y = v19.fields.y,
        z = v19.fields.z,
        (*(_QWORD *)&v6.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C372B4(*(_QWORD *)&v6.fields.x);
  }
  position = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)&v6.fields.x, 0);
  v14 = x - position.fields.x;
  v15 = y - position.fields.y;
  v16 = z - position.fields.z;
  result.fields.z = v16;
  result.fields.y = v15;
  result.fields.x = v14;
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
          sub_1C372BC(v10);
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
    sub_1C372B4(this);
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
  float v5; // s0
  float v6; // s2
  float v7; // s0
  float DrawWidth; // s1
  float v10; // s0
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.flattenAxisAsWidthVariable )
    return this->fields.DrawWidth;
  flattenAxis = this->fields.flattenAxis;
  switch ( flattenAxis )
  {
    case 2:
      Point = Custom2dSplineMesh__GetPoint(this, rate, method);
      DrawWidth = this->fields.DrawWidth;
      v10 = Point.fields.z + this->fields.AxisWidthOffset;
      break;
    case 1:
      v12 = Custom2dSplineMesh__GetPoint(this, rate, method);
      v6 = this->fields.DrawWidth;
      v7 = v12.fields.y + this->fields.AxisWidthOffset;
      return v7 + v6;
    case 0:
      v5 = COERCE_FLOAT(Custom2dSplineMesh__GetPoint(this, rate, method));
      v6 = this->fields.DrawWidth;
      v7 = v5 + this->fields.AxisWidthOffset;
      return v7 + v6;
    default:
      v10 = this->fields.DrawWidth;
      DrawWidth = this->fields.AxisWidthOffset;
      break;
  }
  return v10 + DrawWidth;
}


void Custom2dSplineMesh__OnDestroy(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0
  UnityEngine_Object_o *drawMesh; // x19

  if ( (byte_4C42A00 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42A00 = 1;
  }
  meshFilter = this->fields.meshFilter;
  if ( !meshFilter
    || (UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0),
        (meshFilter = (UnityEngine_MeshFilter_o *)this->fields.drawMesh) == 0) )
  {
    sub_1C372B4(meshFilter);
  }
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)meshFilter, 0);
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(drawMesh, 0);
}


void Custom2dSplineMesh__RemoveMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0

  meshFilter = this->fields.meshFilter;
  if ( !meshFilter )
    sub_1C372B4(0);
  UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0);
}


void Custom2dSplineMesh__Reset(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  unsigned int v6; // w8
  struct BezierControlPointMode_array *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C429FA & 1) == 0 )
  {
    sub_1C37058(&BezierControlPointMode___TypeInfo);
    sub_1C37058(&float___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    byte_4C429FA = 1;
  }
  v3 = sub_1C37100(UnityEngine_Vector3___TypeInfo, 4);
  if ( !v3 )
    goto LABEL_12;
  v6 = *(_DWORD *)(v3 + 24);
  if ( !v6
    || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 1065353216, v6 == 1)
    || (*(_DWORD *)(v3 + 52) = 0, *(_QWORD *)(v3 + 44) = 0x40000000, v6 <= 2)
    || (*(_DWORD *)(v3 + 64) = 0, *(_QWORD *)(v3 + 56) = 1077936128, v6 == 3) )
  {
LABEL_11:
    sub_1C372BC(v3);
  }
  *(_DWORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 68) = 1082130432;
  this->fields.points = (struct UnityEngine_Vector3_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.points, v3, v4, v5);
  v7 = (struct BezierControlPointMode_array *)sub_1C37100(BezierControlPointMode___TypeInfo, 2);
  this->fields.modes = v7;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.modes, (int32_t)v7, v8, v9);
  v3 = sub_1C37100(float___TypeInfo, 1);
  if ( !v3 )
LABEL_12:
    sub_1C372B4(v3);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v3 + 32) = 1065353216;
  this->fields.curveWeight = (struct System_Single_array *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.curveWeight, v3, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
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
  float v8; // s0 OVERLAPPED
  float v9; // s1
  float v10; // s2
  float v11; // s1
  float v12; // s2
  float v13; // s0
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
      v10 = angleDegree * 0.017453;
      v8 = 0.0;
      v9 = 0.0;
LABEL_10:
      v17 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v8, 0);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      v14 = UnityEngine_Quaternion__op_Multiply_71206052(v17, v16, 0);
      x = v14.fields.x;
      y = v14.fields.y;
      z = v14.fields.z;
      break;
    case 1:
      v9 = angleDegree * 0.017453;
      v8 = 0.0;
      goto LABEL_9;
    case 0:
      v8 = angleDegree * 0.017453;
      v9 = 0.0;
LABEL_9:
      v10 = 0.0;
      goto LABEL_10;
  }
  v11 = y;
  v12 = z;
  v13 = x;
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v13;
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
        sub_1C372B4(this);
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
    sub_1C372BC(this);
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
    sub_1C372B4(this);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(modes->max_length) )
    sub_1C372BC(this);
  modes->m_Items[v5] = mode;
  Custom2dSplineMesh__EnforceMode(this, index, *(const MethodInfo **)&mode);
}


void Custom2dSplineMesh__SetList(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Vector3__o *splinePos; // x0
  int v4; // w8

  if ( (byte_4C42A01 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__Clear__);
    byte_4C42A01 = 1;
  }
  splinePos = this->fields.splinePos;
  if ( !splinePos )
    sub_1C372B4(0);
  v4 = splinePos->fields._version + 1;
  splinePos->fields._size = 0;
  splinePos->fields._version = v4;
  System_Collections_Generic_List_Vector3___AddRange(
    splinePos,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.points,
    (const MethodInfo_37FC01C *)Method_System_Collections_Generic_List_Vector3__AddRange__);
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
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1

  if ( (byte_4C429FE & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4C429FE = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v4, v5);
    Custom2dSplineMesh__SetList(this, v6);
    Custom2dSplineMesh__GenMesh(this, v7);
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
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C429FF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    this = (Custom2dSplineMesh_o *)sub_1C37058(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    byte_4C429FF = 1;
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
                       (const MethodInfo_37FBABC *)Method_System_Collections_Generic_List_Vector3__get_Item__);
              v8 = v2->fields.points;
              if ( !v8 )
                break;
              if ( v7 >= LODWORD(v8->max_length) )
                sub_1C372BC(this);
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
            sub_1C372B4(this);
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
  CGThumbnailListItem_o *p_curveWeight; // x19
  System_Collections_Generic_IEnumerable_T__o *curveWeight; // x21
  unsigned __int64 monitor_low; // x8
  struct BezierControlPointMode_array *modes; // x8
  __int64 v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  unsigned __int64 v10; // x9
  char *v11; // x12
  struct BezierControlPointMode_array *v12; // x9
  System_Collections_Generic_List_float__o *v13; // x20
  System_Single_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v2 = this;
  if ( (byte_4C429FB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_float___ctor___78066576);
    sub_1C37058(&System_Collections_Generic_List_float__TypeInfo);
    this = (Custom2dSplineMesh_o *)sub_1C37058(&float___TypeInfo);
    byte_4C429FB = 1;
  }
  p_curveWeight = (CGThumbnailListItem_o *)&v2->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.curveWeight;
  if ( !curveWeight || (monitor_low = (unsigned __int64)curveWeight[1].monitor) == 0 )
  {
    modes = v2->fields.modes;
    if ( !modes )
      goto LABEL_18;
    v7 = sub_1C37100(float___TypeInfo, (unsigned int)(LODWORD(modes->max_length) - 1));
    p_curveWeight->klass = (CGThumbnailListItem_c *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.curveWeight, v7, v8, v9);
    curveWeight = (System_Collections_Generic_IEnumerable_T__o *)p_curveWeight->klass;
    if ( !p_curveWeight->klass )
      goto LABEL_18;
    monitor_low = LODWORD(curveWeight[1].monitor);
    if ( (__int64)(monitor_low << 32) >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= monitor_low )
          sub_1C372BC(this);
        v11 = (char *)curveWeight + 4 * v10++;
        *((_DWORD *)v11 + 8) = 1065353216;
      }
      while ( (__int64)v10 < (int)monitor_low );
    }
  }
  v12 = v2->fields.modes;
  if ( !v12 )
    goto LABEL_18;
  if ( (_DWORD)monitor_low == LODWORD(v12->max_length) )
  {
    v13 = (System_Collections_Generic_List_float__o *)sub_1C372A4(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor_58492012(
      v13,
      curveWeight,
      (const MethodInfo_37C846C *)Method_System_Collections_Generic_List_float___ctor___78066576);
    if ( p_curveWeight->klass && v13 )
    {
      System_Collections_Generic_List_float___RemoveAt(
        v13,
        LODWORD(p_curveWeight->klass->_1.namespaze) - 1,
        (const MethodInfo_37CA320 *)Method_System_Collections_Generic_List_float__RemoveAt__);
      v14 = System_Collections_Generic_List_float___ToArray(
              v13,
              (const MethodInfo_37CA658 *)Method_System_Collections_Generic_List_float__ToArray__);
      p_curveWeight->klass = (CGThumbnailListItem_c *)v14;
      sub_1C36FFC(p_curveWeight, (int32_t)v14, v15, v16);
      return;
    }
LABEL_18:
    sub_1C372B4(this);
  }
}


int32_t Custom2dSplineMesh__get_ControlPointCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C372B4(this);
  return points->max_length;
}


int32_t Custom2dSplineMesh__get_CurveCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned __int64 v3; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C372B4(this);
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
  float TotalWeight; // s0
  float v11; // s1
  struct System_Single_array *curveWeight; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v14; // x9
  float *m_Items; // x11
  float v16; // s2
  bool result; // w0

  *jumps = 0.0;
  if ( !this->fields.CutOnFreePoint || !this->fields.DrawCap )
    return 0;
  TotalWeight = Custom2dSplineMesh__GetTotalWeight(this, (const MethodInfo *)jumps);
  v11 = 0.0 / TotalWeight;
  if ( (float)(0.0 / TotalWeight) <= now )
  {
    curveWeight = this->fields.curveWeight;
    if ( !curveWeight )
      sub_1C372B4(v9);
    max_length_low = LODWORD(curveWeight->max_length);
    if ( (__int64)(max_length_low << 32) >= 1 )
    {
      v14 = 0;
      m_Items = curveWeight->m_Items;
      v16 = 0.0;
      do
      {
        if ( v14 >= max_length_low )
          sub_1C372BC(v9);
        v16 = v16 + m_Items[v14];
        v11 = v16 / TotalWeight;
        if ( (float)(v16 / TotalWeight) > now )
          break;
        ++v14;
      }
      while ( (__int64)v14 < (int)max_length_low );
    }
  }
  result = 0;
  if ( (float)(now + increment) < 1.0 && v11 < (float)(now + increment) )
  {
    result = 1;
    *jumps = v11;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__upVec(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  int32_t flattenAxis; // w9
  int v3; // w8
  int v4; // w10
  float v5; // s0
  int v6; // w10
  float v7; // s1
  float v8; // s2
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
  v5 = (float)v4;
  if ( flattenAxis == 1 )
    v6 = v3;
  else
    v6 = 0;
  if ( flattenAxis != 2 )
    v3 = 0;
  v7 = (float)v6;
  v8 = (float)v3;
  result.fields.z = v8;
  result.fields.y = v7;
  result.fields.x = v5;
  return result;
}