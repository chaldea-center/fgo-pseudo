void Custom2dSplineMesh___cctor(const MethodInfo *method)
{
  if ( (byte_4CB5D0E & 1) == 0 )
  {
    sub_1C6BA08(&Custom2dSplineMesh_TypeInfo);
    byte_4CB5D0E = 1;
  }
  LODWORD(Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD) = (struct Custom2dSplineMesh_StaticFields)953267991;
}


void Custom2dSplineMesh___ctor(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Vector3__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB5D0D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4CB5D0D = 1;
  }
  this->fields.PathRate = 1.0;
  this->fields.UVrate = 0.5;
  *(_QWORD *)&this->fields.complexity = 0x3F7D70A441A00000LL;
  this->fields.DrawWidth = 3.0;
  v3 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v3,
    (const MethodInfo_3882604 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.splinePos = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.splinePos, (int32_t)v3, v4, v5);
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
  unsigned __int64 UV_41790004; // kr00_8
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
  UnityEngine_Vector2_o v137; // kr28_8
  struct UnityEngine_Vector2_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  struct System_Collections_Generic_List_Vector2__o *v141; // x21
  UnityEngine_Vector2_o v142; // kr30_8
  struct UnityEngine_Vector2_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  float v146; // s2
  float v147; // s0
  float v148; // s1
  float v149; // s10
  int32_t v150; // w8
  float v151; // s9
  float v152; // s8
  int32_t v153; // w8
  float v154; // s0
  float v155; // s9
  struct UnityEngine_Vector3_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  float *v159; // x8
  struct System_Collections_Generic_List_Vector2__o *v160; // x21
  UnityEngine_Vector2_o v161; // kr38_8
  struct UnityEngine_Vector2_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  int32_t v165; // w8
  int v166; // w21
  int v167; // w27
  float v168; // s11
  float v169; // s12
  float v170; // s13
  float v171; // s10
  float v172; // s9
  int32_t v173; // w8
  float v174; // s8
  float v175; // s14
  struct UnityEngine_Vector3_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  float *v179; // x8
  struct System_Collections_Generic_List_Vector2__o *v180; // x20
  UnityEngine_Vector2_o v181; // kr40_8
  struct UnityEngine_Vector2_array *v182; // x8
  _QWORD *v183; // x9
  __int64 v184; // x10
  struct UnityEngine_Vector3_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  int v188; // w20
  int32_t vtxIdx; // w9
  struct UnityEngine_Vector3_array *v190; // x8
  _QWORD *v191; // x10
  __int64 v192; // x11
  int32_t v193; // w9
  struct UnityEngine_Vector3_array *v194; // x8
  _QWORD *v195; // x10
  __int64 v196; // x11
  int32_t *p_vtxIdx; // x19
  int32_t v198; // t1
  int32_t v199; // w8
  float v200; // s1
  float v201; // s3
  float v202; // s15
  int32_t v203; // w8
  float v204; // s12
  struct UnityEngine_Vector3_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  int32_t v208; // w9
  struct UnityEngine_Vector3_array *v209; // x8
  _QWORD *v210; // x10
  __int64 v211; // x11
  int32_t v212; // w9
  struct UnityEngine_Vector3_array *v213; // x8
  _QWORD *v214; // x10
  __int64 v215; // x11
  unsigned int max_length; // w12
  struct UnityEngine_Vector3_array *v217; // x8
  _QWORD *v218; // x9
  __int64 v219; // x10
  int32_t v220; // w9
  struct UnityEngine_Vector3_array *v221; // x8
  _QWORD *v222; // x10
  __int64 v223; // x11
  int32_t v224; // w9
  struct UnityEngine_Vector3_array *v225; // x8
  _QWORD *v226; // x9
  __int64 v227; // x10
  float *v228; // x8
  struct System_Collections_Generic_List_Vector2__o *v229; // x20
  UnityEngine_Vector2_o v230; // kr48_8
  struct UnityEngine_Vector2_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  int32_t v234; // t1
  int v235; // w8
  int32_t *v236; // x20
  struct UnityEngine_Vector3_array *v237; // x8
  _QWORD *v238; // x9
  __int64 v239; // x10
  float *v240; // x8
  struct UnityEngine_Vector3_array *v241; // x8
  _QWORD *v242; // x9
  __int64 v243; // x10
  float *v244; // x8
  struct System_Collections_Generic_List_Vector2__o *v245; // x21
  UnityEngine_Vector2_o v246; // kr50_8
  struct UnityEngine_Vector2_array *v247; // x8
  _QWORD *v248; // x9
  __int64 v249; // x10
  struct System_Collections_Generic_List_Vector2__o *v250; // x21
  UnityEngine_Vector2_o v251; // kr58_8
  struct UnityEngine_Vector2_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  int32_t v255; // w8
  float v256; // s8
  float v257; // s12
  float v258; // s13
  float v259; // s0
  float v260; // s14
  float v261; // s11
  float v262; // s15
  float v263; // s0
  struct UnityEngine_Vector3_array *v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  float *v267; // x8
  struct UnityEngine_Vector3_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  float *v271; // x8
  struct System_Collections_Generic_List_Vector2__o *v272; // x21
  UnityEngine_Vector2_o v273; // kr60_8
  struct UnityEngine_Vector2_array *v274; // x8
  _QWORD *v275; // x9
  __int64 v276; // x10
  struct System_Collections_Generic_List_Vector2__o *v277; // x21
  UnityEngine_Vector2_o v278; // kr68_8
  struct UnityEngine_Vector2_array *v279; // x8
  _QWORD *v280; // x9
  __int64 v281; // x10
  const MethodInfo *v282; // x1
  float v283; // s13
  int32_t v284; // w8
  float v285; // s11
  float v286; // s12
  float v287; // s14
  float v288; // s10
  int32_t v289; // w8
  float v290; // s9
  struct UnityEngine_Vector3_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  float *v294; // x8
  struct UnityEngine_Vector3_array *v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  float *v298; // x8
  struct System_Collections_Generic_List_Vector2__o *v299; // x20
  UnityEngine_Vector2_o v300; // kr70_8
  struct UnityEngine_Vector2_array *v301; // x8
  _QWORD *v302; // x9
  __int64 v303; // x10
  struct UnityEngine_Vector2_array *v304; // x8
  _QWORD *v305; // x9
  __int64 v306; // x10
  struct UnityEngine_Vector3_array *v307; // x8
  _QWORD *v308; // x9
  __int64 v309; // x10
  int32_t v310; // w9
  struct UnityEngine_Vector3_array *v311; // x8
  _QWORD *v312; // x10
  __int64 v313; // x11
  int32_t v314; // w9
  struct UnityEngine_Vector3_array *v315; // x8
  _QWORD *v316; // x10
  __int64 v317; // x11
  int32_t v318; // w9
  struct UnityEngine_Vector3_array *v319; // x8
  _QWORD *v320; // x10
  __int64 v321; // x11
  int32_t v322; // w9
  struct UnityEngine_Vector3_array *v323; // x8
  _QWORD *v324; // x10
  __int64 v325; // x11
  int32_t v326; // w9
  struct UnityEngine_Vector3_array *v327; // x8
  _QWORD *v328; // x10
  __int64 v329; // x11
  int32_t v330; // w1
  float v331; // [xsp+14h] [xbp-ACh]
  float v332; // [xsp+14h] [xbp-ACh]
  float v333; // [xsp+18h] [xbp-A8h]
  float v334; // [xsp+18h] [xbp-A8h]
  float x; // [xsp+1Ch] [xbp-A4h]
  float v336; // [xsp+28h] [xbp-98h]
  float item; // [xsp+2Ch] [xbp-94h]
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
  UnityEngine_Vector3_o v369; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v370; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v371; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v372; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v373; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v374; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v375; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v376; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v377; // 0:s1.4,4:s2.4,8:s3.4

  v7 = isTail;
  z = normalizedDir.fields.z;
  y = normalizedDir.fields.y;
  v10 = pos.fields.y;
  x = normalizedDir.fields.x;
  v336 = pos.fields.x;
  item = pos.fields.z;
  if ( (byte_4CB5D0C & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__Add__);
    byte_4CB5D0C = 1;
  }
  v12 = offset.fields.y;
  v13 = offset.fields.x;
  if ( !this->fields.StrictUVmode )
  {
LABEL_7:
    v331 = y;
    v333 = z;
    if ( !v7 )
    {
      flattenAxis = this->fields.flattenAxis;
      v16 = v336 - (float)(x * width);
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
        v339.fields.x = v18;
        v339.fields.y = v19;
        v339.fields.z = v21;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v339,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
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
        v340.fields.x = v24;
        v340.fields.y = v22;
        v340.fields.z = v23;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v340,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
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
        v341.fields.x = v18;
        v341.fields.y = v19;
        v341.fields.z = v21;
        UV_41790004 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v341, (const MethodInfo *)isTail);
        if ( !uvs )
          goto LABEL_374;
      }
      else
      {
        UV_41790004 = __PAIR64__(LODWORD(this->fields.capVmin), 0);
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
          (UnityEngine_Vector2_o)UV_41790004,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = v59 + 1;
        v57->m_Items[v59] = (UnityEngine_Vector2_o)UV_41790004;
      }
      v60 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v342.fields.x = v24;
        v342.fields.y = v22;
        v342.fields.z = v23;
        v61 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v342, (const MethodInfo *)isTail);
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
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
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
    v67 = v336 + v13;
    if ( v65 == 2 )
    {
      v70 = v10 - v12;
      v68 = 0.0;
      v72 = 0.0;
      v71 = v336 - v13;
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
            v343.fields.x = v67;
            v343.fields.y = v66;
            v343.fields.z = v68;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v343,
              *(const MethodInfo_3882E98 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
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
                v344.fields.x = v71;
                v344.fields.y = v70;
                v344.fields.z = v72;
                System_Collections_Generic_List_Vector3___AddWithResize(
                  verts,
                  v344,
                  *(const MethodInfo_3882E98 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
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
              v83 = v7 ? 0.75 : 0.25;
              if ( this->fields.StrictUVmode )
              {
                v345.fields.x = v67;
                v345.fields.y = v66;
                v345.fields.z = v68;
                v84 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v345, (const MethodInfo *)isTail);
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
                    *(const MethodInfo_38805C0 **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
                }
                else
                {
                  v82->fields._size = v87 + 1;
                  v85->m_Items[v87] = (UnityEngine_Vector2_o)v84;
                }
                v88 = this->fields.uvs;
                if ( this->fields.StrictUVmode )
                {
                  v346.fields.x = v71;
                  v346.fields.y = v70;
                  v346.fields.z = v72;
                  v90 = Custom2dSplineMesh__GetUV_41790004(this, v346, (const MethodInfo *)isTail);
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
                        *(const MethodInfo_38805C0 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v94 = (float *)(&v91->obj.klass + v93);
                      v88->fields._size = v93 + 1;
                      v94[8] = v83;
                      v94[9] = capVmax;
                    }
                    if ( v7 )
                    {
                      v96 = this->fields.flattenAxis;
                      v97 = v336 + (float)(x * width);
                      v98 = offset.fields.x + v97;
                      v99 = v10 + (float)(v331 * width);
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
                        v101 = item + (float)(v333 * width);
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
                        v347.fields.x = v98;
                        v347.fields.y = v100;
                        v347.fields.z = v102;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v347,
                          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
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
                        v348.fields.x = v105;
                        v348.fields.y = v103;
                        v348.fields.z = v104;
                        System_Collections_Generic_List_Vector3___AddWithResize(
                          verts,
                          v348,
                          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
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
                        v349.fields.x = v98;
                        v349.fields.y = v100;
                        v349.fields.z = v102;
                        v115 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(
                                                   this,
                                                   v349,
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
                          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
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
                      v124 = Custom2dSplineMesh__GetUV_41790004(
                               v120,
                               *(UnityEngine_Vector3_o *)&v121,
                               (const MethodInfo *)isTail);
                      if ( !v119 )
                        goto LABEL_374;
LABEL_343:
                      v304 = v119->fields._items;
                      v305 = Method_System_Collections_Generic_List_Vector2__Add__;
                      ++v119->fields._version;
                      if ( !v304 )
                        goto LABEL_374;
                      v306 = v119->fields._size;
                      if ( (unsigned int)v306 >= LODWORD(v304->max_length) )
                      {
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v119,
                          v124,
                          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v305[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v119->fields._size = v306 + 1;
                        v304->m_Items[v306] = v124;
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
      sub_1C6BC60(verts, isTail);
    }
    v68 = item + offset.fields.z;
    if ( v65 == 1 )
    {
      v73 = v336;
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
      v73 = v336;
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
          v44 = v336;
          v45 = item;
          v155 = 0.0;
        }
        else
        {
          v44 = v336;
          if ( v41 == 2 )
            v45 = 0.0;
          else
            v45 = item;
          v155 = v42;
        }
      }
      else
      {
        v45 = item;
        v154 = v10;
        v43 = offset.fields.z;
        v44 = 0.0;
        v42 = v154;
        v155 = v154;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v156 = verts->fields._items;
      v157 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v156 )
        goto LABEL_374;
      v158 = verts->fields._size;
      if ( (unsigned int)v158 >= LODWORD(v156->max_length) )
      {
        v354.fields.x = v44;
        v354.fields.y = v155;
        v354.fields.z = v45;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v354,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
      }
      else
      {
        v159 = (float *)((char *)v156 + 12 * v158);
        verts->fields._size = v158 + 1;
        v159[8] = v44;
        v159[9] = v155;
        v159[10] = v45;
      }
      v160 = this->fields.uvs;
      v355.fields.x = v44;
      v355.fields.y = v155;
      v355.fields.z = v45;
      v161 = Custom2dSplineMesh__GetUV_41790004(this, v355, (const MethodInfo *)isTail);
      if ( !v160 )
        goto LABEL_374;
      v162 = v160->fields._items;
      v163 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v160->fields._version;
      if ( !v162 )
        goto LABEL_374;
      v164 = v160->fields._size;
      if ( (unsigned int)v164 >= LODWORD(v162->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v160,
          v161,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
      }
      else
      {
        v160->fields._size = v164 + 1;
        v162->m_Items[v164] = v161;
      }
      v165 = this->fields.CapComplexity;
      v166 = v165 + 1;
      if ( v165 + 1 >= 0 )
      {
        v167 = 0;
        if ( v7 )
          v168 = -v43;
        else
          v168 = v43;
        if ( v7 )
          v169 = -offset.fields.y;
        else
          v169 = offset.fields.y;
        if ( v7 )
          v170 = -offset.fields.x;
        else
          v170 = offset.fields.x;
        v171 = v42;
        do
        {
          v375.fields.x = v170;
          v375.fields.y = v169;
          v375.fields.z = v168;
          v356 = Custom2dSplineMesh__RotateVec3(
                   this,
                   (float)((float)v167 * 180.0) / (float)v166,
                   v375,
                   (const MethodInfo *)isTail);
          v172 = v171 + v356.fields.y;
          v173 = this->fields.flattenAxis;
          v174 = item + v356.fields.z;
          if ( v173 )
          {
            v175 = v336 + v356.fields.x;
            if ( v173 == 1 )
            {
              v172 = 0.0;
            }
            else if ( v173 == 2 )
            {
              v174 = 0.0;
            }
          }
          else
          {
            v175 = 0.0;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v176 = verts->fields._items;
          v177 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v176 )
            goto LABEL_374;
          v178 = verts->fields._size;
          if ( (unsigned int)v178 >= LODWORD(v176->max_length) )
          {
            v357.fields.x = v175;
            v357.fields.y = v172;
            v357.fields.z = v174;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v357,
              *(const MethodInfo_3882E98 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v179 = (float *)((char *)v176 + 12 * v178);
            verts->fields._size = v178 + 1;
            v179[8] = v175;
            v179[9] = v172;
            v179[10] = v174;
          }
          v180 = this->fields.uvs;
          v358.fields.x = v175;
          v358.fields.y = v172;
          v358.fields.z = v174;
          v181 = Custom2dSplineMesh__GetUV_41790004(this, v358, (const MethodInfo *)isTail);
          if ( !v180 )
            goto LABEL_374;
          v182 = v180->fields._items;
          v183 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v180->fields._version;
          if ( !v182 )
            goto LABEL_374;
          v184 = v180->fields._size;
          if ( (unsigned int)v184 >= LODWORD(v182->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v180,
              v181,
              *(const MethodInfo_38805C0 **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
          }
          else
          {
            v180->fields._size = v184 + 1;
            v182->m_Items[v184] = v181;
          }
          if ( v167 <= 0 )
          {
            v188 = v167 + 1;
          }
          else
          {
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v185 = verts->fields._items;
            v186 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v185 )
              goto LABEL_374;
            v187 = verts->fields._size;
            if ( (unsigned int)v187 >= LODWORD(v185->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v187 + 1;
              *((_DWORD *)&v185->m_Items[0].fields.x + v187) = isTail;
            }
            vtxIdx = this->fields.vtxIdx;
            v190 = verts->fields._items;
            v191 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v190 )
              goto LABEL_374;
            v192 = verts->fields._size;
            v188 = v167 + 1;
            *(_QWORD *)&isTail = (unsigned int)(v167 + 1 + vtxIdx);
            if ( (unsigned int)v192 >= LODWORD(v190->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v192 + 1;
              *((_DWORD *)&v190->m_Items[0].fields.x + v192) = isTail;
            }
            v193 = this->fields.vtxIdx;
            v194 = verts->fields._items;
            v195 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v194 )
              goto LABEL_374;
            v196 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v193 + v167);
            if ( (unsigned int)v196 >= LODWORD(v194->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
            }
            else
            {
              verts->fields._size = v196 + 1;
              *((_DWORD *)&v194->m_Items[0].fields.x + v196) = isTail;
            }
          }
          v167 = v188;
        }
        while ( v188 <= v166 );
        v165 = this->fields.CapComplexity;
      }
      v198 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v199 = v198 + v165;
LABEL_262:
      v235 = v199 + 3;
      v236 = p_vtxIdx;
      goto LABEL_373;
    }
    v34 = this->fields.flattenAxis;
    v332 = y;
    v334 = z;
    v35 = v10 + offset.fields.y;
    v36 = v336 + offset.fields.x;
    if ( v34 == 2 )
    {
      v39 = v10 - offset.fields.y;
      v125 = 0.0;
      v40 = v336 - offset.fields.x;
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
        v350.fields.x = v36;
        v350.fields.y = v35;
        v350.fields.z = v37;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v350,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
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
        v351.fields.x = v40;
        v351.fields.y = v39;
        v351.fields.z = v125;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v351,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
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
      v352.fields.x = v36;
      v352.fields.y = v35;
      v352.fields.z = v37;
      v137 = Custom2dSplineMesh__GetUV_41790004(this, v352, (const MethodInfo *)isTail);
      if ( !v136 )
        goto LABEL_374;
      v138 = v136->fields._items;
      v139 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v136->fields._version;
      if ( !v138 )
        goto LABEL_374;
      v140 = v136->fields._size;
      if ( (unsigned int)v140 >= LODWORD(v138->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v136,
          v137,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
      }
      else
      {
        v136->fields._size = v140 + 1;
        v138->m_Items[v140] = v137;
      }
      v141 = this->fields.uvs;
      v353.fields.x = v40;
      v353.fields.y = v39;
      v353.fields.z = v125;
      v142 = Custom2dSplineMesh__GetUV_41790004(this, v353, (const MethodInfo *)isTail);
      if ( !v141 )
        goto LABEL_374;
      v143 = v141->fields._items;
      v144 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v141->fields._version;
      if ( !v143 )
        goto LABEL_374;
      v145 = v141->fields._size;
      if ( (unsigned int)v145 >= LODWORD(v143->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v141,
          v142,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
      }
      else
      {
        v141->fields._size = v145 + 1;
        v143->m_Items[v145] = v142;
      }
      v146 = v334 * width;
      v147 = x * width;
      v148 = v332 * width;
      if ( v7 )
      {
        v149 = v10 + v148;
        v150 = this->fields.flattenAxis;
        v151 = item + v146;
        if ( v150 )
        {
          v152 = v336 + v147;
          if ( v150 == 1 )
          {
            v149 = 0.0;
          }
          else if ( v150 == 2 )
          {
            v151 = 0.0;
          }
        }
        else
        {
          v152 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
        v205 = verts->fields._items;
        v206 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v205 )
          goto LABEL_374;
        v207 = verts->fields._size;
        if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v207 + 1;
          *((_DWORD *)&v205->m_Items[0].fields.x + v207) = isTail;
        }
        v208 = this->fields.vtxIdx;
        v209 = verts->fields._items;
        v210 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v209 )
          goto LABEL_374;
        v211 = verts->fields._size;
        *(_QWORD *)&isTail = (unsigned int)(v208 + 2);
        if ( (unsigned int)v211 >= LODWORD(v209->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v211 + 1;
          *((_DWORD *)&v209->m_Items[0].fields.x + v211) = isTail;
        }
        v212 = this->fields.vtxIdx;
        v213 = verts->fields._items;
        v214 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v213 )
          goto LABEL_374;
        v215 = verts->fields._size;
        max_length = v213->max_length;
        *(_QWORD *)&isTail = (unsigned int)(v212 + 1);
      }
      else
      {
        v149 = v10 - v148;
        v153 = this->fields.flattenAxis;
        v151 = item - v146;
        if ( v153 )
        {
          v152 = v336 - v147;
          if ( v153 == 1 )
          {
            v149 = 0.0;
          }
          else if ( v153 == 2 )
          {
            v151 = 0.0;
          }
        }
        else
        {
          v152 = 0.0;
        }
        verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
        if ( !verts )
          goto LABEL_374;
        *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
        v217 = verts->fields._items;
        v218 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v217 )
          goto LABEL_374;
        v219 = verts->fields._size;
        if ( (unsigned int)v219 >= LODWORD(v217->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v219 + 1;
          *((_DWORD *)&v217->m_Items[0].fields.x + v219) = isTail;
        }
        v220 = this->fields.vtxIdx;
        v221 = verts->fields._items;
        v222 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v221 )
          goto LABEL_374;
        v223 = verts->fields._size;
        *(_QWORD *)&isTail = (unsigned int)(v220 + 1);
        if ( (unsigned int)v223 >= LODWORD(v221->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)verts,
            isTail,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
          verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
          if ( !verts )
            goto LABEL_374;
        }
        else
        {
          verts->fields._size = v223 + 1;
          *((_DWORD *)&v221->m_Items[0].fields.x + v223) = isTail;
        }
        v224 = this->fields.vtxIdx;
        v213 = verts->fields._items;
        v214 = Method_System_Collections_Generic_List_int__Add__;
        ++verts->fields._version;
        if ( !v213 )
          goto LABEL_374;
        v215 = verts->fields._size;
        max_length = v213->max_length;
        *(_QWORD *)&isTail = (unsigned int)(v224 + 2);
      }
      if ( (unsigned int)v215 >= max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)verts,
          isTail,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
      }
      else
      {
        verts->fields._size = v215 + 1;
        *((_DWORD *)&v213->m_Items[0].fields.x + v215) = isTail;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v225 = verts->fields._items;
      v226 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v225 )
        goto LABEL_374;
      v227 = verts->fields._size;
      if ( (unsigned int)v227 >= LODWORD(v225->max_length) )
      {
        v360.fields.x = v152;
        v360.fields.y = v149;
        v360.fields.z = v151;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v360,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
      }
      else
      {
        v228 = (float *)((char *)v225 + 12 * v227);
        verts->fields._size = v227 + 1;
        v228[8] = v152;
        v228[9] = v149;
        v228[10] = v151;
      }
      v229 = this->fields.uvs;
      v361.fields.x = v152;
      v361.fields.y = v149;
      v361.fields.z = v151;
      v230 = Custom2dSplineMesh__GetUV_41790004(this, v361, (const MethodInfo *)isTail);
      if ( !v229 )
        goto LABEL_374;
      v231 = v229->fields._items;
      v232 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v229->fields._version;
      if ( !v231 )
        goto LABEL_374;
      v233 = v229->fields._size;
      if ( (unsigned int)v233 >= LODWORD(v231->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v229,
          v230,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
      }
      else
      {
        v229->fields._size = v233 + 1;
        v231->m_Items[v233] = v230;
      }
      v234 = this->fields.vtxIdx;
      p_vtxIdx = &this->fields.vtxIdx;
      v199 = v234;
      goto LABEL_262;
    }
    v37 = item + offset.fields.z;
    if ( v34 == 1 )
    {
      v126 = v336;
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
      v126 = v336;
      v127 = offset.fields.x;
      v39 = v10 - offset.fields.y;
    }
    v40 = v126 - v127;
    v38 = item;
    goto LABEL_127;
  }
  if ( !v7 )
  {
    v25 = offset.fields.x;
    v26 = offset.fields.z;
    v338 = Custom2dSplineMesh__RotateVec3(this, 60.0, *(UnityEngine_Vector3_o *)(&v12 - 1), (const MethodInfo *)isTail);
    v28 = v10 + v338.fields.y;
    v29 = this->fields.flattenAxis;
    v30 = 0.0;
    v31 = item + v338.fields.z;
    if ( v29 )
    {
      v32 = offset.fields.y;
      v33 = v336 + v338.fields.x;
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
    v200 = offset.fields.x;
    v201 = offset.fields.z;
    v359 = Custom2dSplineMesh__RotateVec3(this, 120.0, *(UnityEngine_Vector3_o *)(&v32 - 1), v27);
    v202 = v10 + v359.fields.y;
    v203 = this->fields.flattenAxis;
    v204 = item + v359.fields.z;
    if ( v203 )
    {
      v30 = v336 + v359.fields.x;
      if ( v203 == 1 )
      {
        v202 = 0.0;
      }
      else if ( v203 == 2 )
      {
        v204 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v237 = verts->fields._items;
    v238 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v237 )
      goto LABEL_374;
    v239 = verts->fields._size;
    if ( (unsigned int)v239 >= LODWORD(v237->max_length) )
    {
      v362.fields.x = v33;
      v362.fields.y = v28;
      v362.fields.z = v31;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v362,
        *(const MethodInfo_3882E98 **)(*(_QWORD *)(v238[4] + 192LL) + 112LL));
    }
    else
    {
      v240 = (float *)((char *)v237 + 12 * v239);
      verts->fields._size = v239 + 1;
      v240[8] = v33;
      v240[9] = v28;
      v240[10] = v31;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v241 = verts->fields._items;
    v242 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v241 )
      goto LABEL_374;
    v243 = verts->fields._size;
    if ( (unsigned int)v243 >= LODWORD(v241->max_length) )
    {
      v363.fields.x = v30;
      v363.fields.y = v202;
      v363.fields.z = v204;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v363,
        *(const MethodInfo_3882E98 **)(*(_QWORD *)(v242[4] + 192LL) + 112LL));
    }
    else
    {
      v244 = (float *)((char *)v241 + 12 * v243);
      verts->fields._size = v243 + 1;
      v244[8] = v30;
      v244[9] = v202;
      v244[10] = v204;
    }
    v245 = this->fields.uvs;
    v364.fields.x = v33;
    v364.fields.y = v28;
    v364.fields.z = v31;
    v246 = Custom2dSplineMesh__GetUV_41790004(this, v364, (const MethodInfo *)isTail);
    if ( !v245 )
      goto LABEL_374;
    v247 = v245->fields._items;
    v248 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v245->fields._version;
    if ( !v247 )
      goto LABEL_374;
    v249 = v245->fields._size;
    if ( (unsigned int)v249 >= LODWORD(v247->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v245,
        v246,
        *(const MethodInfo_38805C0 **)(*(_QWORD *)(v248[4] + 192LL) + 112LL));
    }
    else
    {
      v245->fields._size = v249 + 1;
      v247->m_Items[v249] = v246;
    }
    v250 = this->fields.uvs;
    v365.fields.x = v30;
    v365.fields.y = v202;
    v365.fields.z = v204;
    v251 = Custom2dSplineMesh__GetUV_41790004(this, v365, (const MethodInfo *)isTail);
    if ( !v250 )
      goto LABEL_374;
    v252 = v250->fields._items;
    v253 = Method_System_Collections_Generic_List_Vector2__Add__;
    v13 = offset.fields.x;
    ++v250->fields._version;
    if ( !v252 )
      goto LABEL_374;
    v254 = v250->fields._size;
    if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v250,
        v251,
        *(const MethodInfo_38805C0 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    }
    else
    {
      v250->fields._size = v254 + 1;
      v252->m_Items[v254] = v251;
    }
    v12 = offset.fields.y;
  }
  v255 = this->fields.flattenAxis;
  v256 = v10 + v12;
  v257 = v336 + v13;
  if ( v255 == 2 )
  {
    v260 = v10 - v12;
    v258 = 0.0;
    v261 = v336 - v13;
    v262 = 0.0;
    goto LABEL_294;
  }
  v258 = item + offset.fields.z;
  if ( v255 == 1 )
  {
    v263 = v336;
    v256 = 0.0;
    v260 = 0.0;
LABEL_292:
    v261 = v263 - v13;
    v259 = item;
    goto LABEL_293;
  }
  if ( v255 )
  {
    v263 = v336;
    v260 = v10 - v12;
    goto LABEL_292;
  }
  v259 = item;
  v260 = v10 - v12;
  v257 = 0.0;
  v261 = 0.0;
LABEL_293:
  v262 = v259 - offset.fields.z;
LABEL_294:
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v264 = verts->fields._items;
  v265 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v264 )
    goto LABEL_374;
  v266 = verts->fields._size;
  if ( (unsigned int)v266 >= LODWORD(v264->max_length) )
  {
    v366.fields.x = v257;
    v366.fields.y = v256;
    v366.fields.z = v258;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v366,
      *(const MethodInfo_3882E98 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
  }
  else
  {
    v267 = (float *)((char *)v264 + 12 * v266);
    verts->fields._size = v266 + 1;
    v267[8] = v257;
    v267[9] = v256;
    v267[10] = v258;
  }
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v268 = verts->fields._items;
  v269 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v268 )
    goto LABEL_374;
  v270 = verts->fields._size;
  if ( (unsigned int)v270 >= LODWORD(v268->max_length) )
  {
    v367.fields.x = v261;
    v367.fields.y = v260;
    v367.fields.z = v262;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v367,
      *(const MethodInfo_3882E98 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
  }
  else
  {
    v271 = (float *)((char *)v268 + 12 * v270);
    verts->fields._size = v270 + 1;
    v271[8] = v261;
    v271[9] = v260;
    v271[10] = v262;
  }
  v272 = this->fields.uvs;
  v368.fields.x = v257;
  v368.fields.y = v256;
  v368.fields.z = v258;
  v273 = Custom2dSplineMesh__GetUV_41790004(this, v368, (const MethodInfo *)isTail);
  if ( !v272 )
    goto LABEL_374;
  v274 = v272->fields._items;
  v275 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v272->fields._version;
  if ( !v274 )
    goto LABEL_374;
  v276 = v272->fields._size;
  if ( (unsigned int)v276 >= LODWORD(v274->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v272,
      v273,
      *(const MethodInfo_38805C0 **)(*(_QWORD *)(v275[4] + 192LL) + 112LL));
  }
  else
  {
    v272->fields._size = v276 + 1;
    v274->m_Items[v276] = v273;
  }
  v277 = this->fields.uvs;
  v369.fields.x = v261;
  v369.fields.y = v260;
  v369.fields.z = v262;
  v278 = Custom2dSplineMesh__GetUV_41790004(this, v369, (const MethodInfo *)isTail);
  if ( !v277 )
    goto LABEL_374;
  v279 = v277->fields._items;
  v280 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v277->fields._version;
  if ( !v279 )
    goto LABEL_374;
  v281 = v277->fields._size;
  if ( (unsigned int)v281 >= LODWORD(v279->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v277,
      v278,
      *(const MethodInfo_38805C0 **)(*(_QWORD *)(v280[4] + 192LL) + 112LL));
  }
  else
  {
    v277->fields._size = v281 + 1;
    v279->m_Items[v281] = v278;
  }
  if ( v7 )
  {
    v376.fields.x = -offset.fields.x;
    v376.fields.y = -offset.fields.y;
    v376.fields.z = -offset.fields.z;
    v370 = Custom2dSplineMesh__RotateVec3(this, 120.0, v376, (const MethodInfo *)isTail);
    v283 = v10 + v370.fields.y;
    v284 = this->fields.flattenAxis;
    v285 = 0.0;
    v286 = item + v370.fields.z;
    if ( v284 )
    {
      v287 = v336 + v370.fields.x;
      if ( v284 == 1 )
      {
        v283 = 0.0;
      }
      else if ( v284 == 2 )
      {
        v286 = 0.0;
      }
    }
    else
    {
      v287 = 0.0;
    }
    v377.fields.x = -offset.fields.x;
    v377.fields.y = -offset.fields.y;
    v377.fields.z = -offset.fields.z;
    v371 = Custom2dSplineMesh__RotateVec3(this, 60.0, v377, v282);
    v288 = v10 + v371.fields.y;
    v289 = this->fields.flattenAxis;
    v290 = item + v371.fields.z;
    if ( v289 )
    {
      v285 = v336 + v371.fields.x;
      if ( v289 == 1 )
      {
        v288 = 0.0;
      }
      else if ( v289 == 2 )
      {
        v290 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v291 = verts->fields._items;
    v292 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v291 )
      goto LABEL_374;
    v293 = verts->fields._size;
    if ( (unsigned int)v293 >= LODWORD(v291->max_length) )
    {
      v372.fields.x = v287;
      v372.fields.y = v283;
      v372.fields.z = v286;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v372,
        *(const MethodInfo_3882E98 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
    }
    else
    {
      v294 = (float *)((char *)v291 + 12 * v293);
      verts->fields._size = v293 + 1;
      v294[8] = v287;
      v294[9] = v283;
      v294[10] = v286;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v295 = verts->fields._items;
    v296 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v295 )
      goto LABEL_374;
    v297 = verts->fields._size;
    if ( (unsigned int)v297 >= LODWORD(v295->max_length) )
    {
      v373.fields.x = v285;
      v373.fields.y = v288;
      v373.fields.z = v290;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v373,
        *(const MethodInfo_3882E98 **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
    }
    else
    {
      v298 = (float *)((char *)v295 + 12 * v297);
      verts->fields._size = v297 + 1;
      v298[8] = v285;
      v298[9] = v288;
      v298[10] = v290;
    }
    v299 = this->fields.uvs;
    v374.fields.x = v287;
    v374.fields.y = v283;
    v374.fields.z = v286;
    v300 = Custom2dSplineMesh__GetUV_41790004(this, v374, (const MethodInfo *)isTail);
    if ( !v299 )
      goto LABEL_374;
    v301 = v299->fields._items;
    v302 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v299->fields._version;
    if ( !v301 )
      goto LABEL_374;
    v303 = v299->fields._size;
    if ( (unsigned int)v303 >= LODWORD(v301->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v299,
        v300,
        *(const MethodInfo_38805C0 **)(*(_QWORD *)(v302[4] + 192LL) + 112LL));
    }
    else
    {
      v299->fields._size = v303 + 1;
      v301->m_Items[v303] = v300;
    }
    v119 = this->fields.uvs;
    v120 = this;
    v121 = v285;
    v122 = v288;
    v123 = v290;
    goto LABEL_342;
  }
LABEL_347:
  v236 = &this->fields.vtxIdx;
  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
  if ( !verts )
    goto LABEL_374;
  v307 = verts->fields._items;
  v308 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v307 )
    goto LABEL_374;
  v309 = verts->fields._size;
  if ( (unsigned int)v309 >= LODWORD(v307->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v309 + 1;
    *((_DWORD *)&v307->m_Items[0].fields.x + v309) = isTail;
  }
  v310 = *v236;
  v311 = verts->fields._items;
  v312 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v311 )
    goto LABEL_374;
  v313 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v310 + 2);
  if ( (unsigned int)v313 >= LODWORD(v311->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v313 + 1;
    *((_DWORD *)&v311->m_Items[0].fields.x + v313) = isTail;
  }
  v314 = *v236;
  v315 = verts->fields._items;
  v316 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v315 )
    goto LABEL_374;
  v317 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v314 + 1);
  if ( (unsigned int)v317 >= LODWORD(v315->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v317 + 1;
    *((_DWORD *)&v315->m_Items[0].fields.x + v317) = isTail;
  }
  v318 = *v236;
  v319 = verts->fields._items;
  v320 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v319 )
    goto LABEL_374;
  v321 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v318 + 2);
  if ( (unsigned int)v321 >= LODWORD(v319->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v321 + 1;
    *((_DWORD *)&v319->m_Items[0].fields.x + v321) = isTail;
  }
  v322 = *v236;
  v323 = verts->fields._items;
  v324 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v323 )
    goto LABEL_374;
  v325 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v322 + 3);
  if ( (unsigned int)v325 >= LODWORD(v323->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v325 + 1;
    *((_DWORD *)&v323->m_Items[0].fields.x + v325) = isTail;
  }
  v326 = *v236;
  v327 = verts->fields._items;
  v328 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v327 )
    goto LABEL_374;
  v329 = verts->fields._size;
  v330 = v326 + 1;
  if ( (unsigned int)v329 >= LODWORD(v327->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v330,
      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  }
  else
  {
    verts->fields._size = v329 + 1;
    *((_DWORD *)&v327->m_Items[0].fields.x + v329) = v330;
  }
  v235 = *v236 + 4;
LABEL_373:
  *v236 = v235;
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
  UnityEngine_Vector3_o v14; // x0 OVERLAPPED
  int v16; // kr00_4
  int v17; // w26
  const MethodInfo *v18; // x2
  struct UnityEngine_Vector3_array *v19; // x8
  unsigned int max_length; // w10
  __int64 v21; // x28
  __int64 v22; // x22
  int v23; // w9
  int32_t v24; // w26
  __int64 v25; // x27
  const MethodInfo *v26; // x2
  struct UnityEngine_Vector3_array *v27; // x8
  unsigned int v28; // w9
  UnityEngine_Transform_o *v29; // x29
  float x; // s8
  float y; // s9
  float z; // s10
  float v33; // s11
  float v34; // s12
  float v35; // s13
  float v36; // s11
  float v37; // s9
  float v38; // s8
  float v39; // s0
  float v40; // s10
  float v41; // s9
  float v42; // s11
  struct UnityEngine_Vector3_array *v43; // x8
  il2cpp_array_size_t v44; // x26
  float *v45; // x10
  UnityEngine_Vector3_o *m_Items; // x8
  float *p_x; // x11
  float *v48; // x9
  float v49; // s9
  float v50; // s10
  float v51; // s8
  struct UnityEngine_Vector3_array *items; // x8
  float v53; // s12
  float v54; // s13
  float v55; // s11
  float v56; // s1
  float v57; // s2
  float v58; // s0
  _QWORD *v59; // x9
  __int64 size; // x10
  float v61; // s3
  float v62; // s0 OVERLAPPED
  float v63; // s1
  float v64; // s2
  float *v65; // x8
  struct UnityEngine_Vector3_array *v66; // x9
  float *v67; // x9
  struct UnityEngine_Vector3_array *v68; // x8
  float v69; // s1
  float v70; // s2
  float v71; // s0
  _QWORD *v72; // x9
  __int64 v73; // x10
  float v74; // s3
  float v75; // s0 OVERLAPPED
  float v76; // s1
  float v77; // s2
  float *v78; // x8
  struct UnityEngine_Vector3_array *v79; // x8
  _QWORD *v80; // x9
  __int64 v81; // x10
  float v82; // s0 OVERLAPPED
  float v83; // s1
  float v84; // s2
  float *v85; // x8
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  struct System_Single_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v93; // x8
  unsigned int v94; // w9
  float *v95; // x9
  float *v96; // x8
  float v97; // s8
  float v98; // s12
  float v99; // s15
  float v100; // s14
  float v101; // s13
  struct UnityEngine_Vector3_array *v102; // x8
  unsigned int v103; // w9
  float *v104; // x9
  float v105; // s10
  float v106; // s11
  float v107; // s9
  float *v108; // x8
  float v109; // s13
  float v110; // s14
  float v111; // s12
  unsigned int v112; // w8
  float v113; // s5
  float v114; // s0
  float v115; // s1
  float v116; // s2
  float v117; // s3
  float v118; // s4
  float v119; // s5
  UnityEngine_Vector3_array *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_Int32Enum_array *v123; // x0
  int32_t v124; // w2
  const MethodInfo *v125; // x3
  System_Single_array *v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
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
  UnityEngine_Vector3_o Point_41773372; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FirstDerivative_41773636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CB5D04 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__InsertRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__Insert__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float___ctor___78529424);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3___ctor___78536120);
    sub_1C6BA08(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    byte_4CB5D04 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_59254572(
    v7,
    points,
    (const MethodInfo_388272C *)Method_System_Collections_Generic_List_Vector3___ctor___78536120);
  p_modes = &this->fields.modes;
  modes = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  v10 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58612304(
    v10,
    modes,
    (const MethodInfo_37E5A50 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  p_curveWeight = (CGThumbnailListItem_o *)&this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v13 = (System_Collections_Generic_List_float__o *)sub_1C6BC54(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_58875324(
    v13,
    curveWeight,
    (const MethodInfo_3825DBC *)Method_System_Collections_Generic_List_float___ctor___78529424);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !*p_modes )
      goto LABEL_79;
    v16 = index + 1;
    v17 = (index + 1) / 3;
    if ( v16 / 3 < LODWORD((*p_modes)->max_length) - 1 )
    {
      *(_QWORD *)&v14.fields.x = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 3);
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
              v25 = *(_QWORD *)&v14.fields.x;
              *(_QWORD *)indexa = v23;
              Point_41773372 = Bezier__GetPoint_41773372(
                                 v19->m_Items[v21],
                                 v19->m_Items[v22],
                                 v19->m_Items[v23],
                                 v14,
                                 COERCE_FLOAT(*(_QWORD *)&v19->m_Items[v24].fields.x),
                                 v18);
              if ( !v25 )
                goto LABEL_79;
              if ( *(_DWORD *)(v25 + 24) > 1u )
              {
                *(UnityEngine_Vector3_o *)(v25 + 44) = Point_41773372;
                *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                v27 = this->fields.points;
                if ( !v27 )
                  goto LABEL_79;
                v28 = v27->max_length;
                if ( (unsigned int)v21 < v28 && (unsigned int)v22 < v28 && indexa[0] < v28 && v24 < v28 )
                {
                  v29 = *(UnityEngine_Transform_o **)&v14.fields.x;
                  FirstDerivative_41773636 = Bezier__GetFirstDerivative_41773636(
                                               v27->m_Items[v21],
                                               v27->m_Items[v22],
                                               v27->m_Items[*(_QWORD *)indexa],
                                               v14,
                                               COERCE_FLOAT(*(_QWORD *)&v27->m_Items[v24].fields.x),
                                               v26);
                  if ( !v29 )
                    goto LABEL_79;
                  v142 = UnityEngine_Transform__TransformPoint(v29, FirstDerivative_41773636, 0);
                  x = v142.fields.x;
                  y = v142.fields.y;
                  z = v142.fields.z;
                  *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                  if ( !*(_QWORD *)&v14.fields.x )
                    goto LABEL_79;
                  position = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)&v14.fields.x, 0);
                  v33 = position.fields.x;
                  v34 = position.fields.y;
                  v35 = position.fields.z;
                  if ( !byte_4CAFC0C )
                  {
                    sub_1C6BA08(&System_Math_TypeInfo);
                    byte_4CAFC0C = 1;
                  }
                  v36 = x - v33;
                  v37 = y - v34;
                  v38 = z - v35;
                  *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                  if ( !System_Math_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                  v39 = sqrtf((float)(v38 * v38) + (float)((float)(v36 * v36) + (float)(v37 * v37)));
                  if ( v39 <= 0.00001 )
                  {
                    if ( !byte_4CAFC09 )
                    {
                      *(_QWORD *)&v14.fields.x = sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
                      byte_4CAFC09 = 1;
                    }
                    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                    v40 = static_fields->zeroVector.fields.x;
                    v41 = static_fields->zeroVector.fields.y;
                    v42 = static_fields->zeroVector.fields.z;
                  }
                  else
                  {
                    v40 = v36 / v39;
                    v41 = v37 / v39;
                    v42 = v38 / v39;
                  }
                  v93 = *p_points;
                  if ( !*p_points )
                    goto LABEL_79;
                  v94 = v93->max_length;
                  if ( (unsigned int)v21 < v94 && (unsigned int)v22 < v94 )
                  {
                    v95 = (float *)((char *)v93 + 12 * v21);
                    v96 = (float *)((char *)v93 + 12 * v22);
                    v98 = v95[8];
                    v97 = v95[9];
                    v99 = v95[10];
                    v100 = v96[8];
                    v101 = v96[10];
                    v137 = v96[9];
                    if ( !byte_4CAFC07 )
                    {
                      sub_1C6BA08(&System_Math_TypeInfo);
                      byte_4CAFC07 = 1;
                    }
                    *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                    if ( !System_Math_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                    v102 = *p_points;
                    if ( !*p_points )
                      goto LABEL_79;
                    v103 = v102->max_length;
                    if ( indexa[0] < v103 )
                    {
                      v131 = v100;
                      v132 = v101;
                      v133 = v98;
                      v134 = v42;
                      v135 = v41;
                      v136 = v40;
                      if ( v24 < v103 )
                      {
                        v104 = (float *)((char *)v102 + 12 * *(_QWORD *)indexa);
                        v106 = v104[8];
                        v105 = v104[9];
                        v107 = v104[10];
                        v108 = (float *)((char *)v102 + 12 * v24);
                        v110 = v108[8];
                        v109 = v108[9];
                        v111 = v108[10];
                        if ( !byte_4CAFC07 )
                        {
                          sub_1C6BA08(&System_Math_TypeInfo);
                          byte_4CAFC07 = 1;
                        }
                        *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                        if ( !System_Math_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
                        v112 = *(_DWORD *)(v25 + 24);
                        p_curveWeight = (CGThumbnailListItem_o *)&this->fields.curveWeight;
                        if ( v112 > 1 )
                        {
                          v113 = (float)(sqrtf(
                                           (float)((float)(v99 - v132) * (float)(v99 - v132))
                                         + (float)((float)((float)(v133 - v131) * (float)(v133 - v131))
                                                 + (float)((float)(v97 - v137) * (float)(v97 - v137))))
                                       + sqrtf(
                                           (float)((float)(v107 - v111) * (float)(v107 - v111))
                                         + (float)((float)((float)(v106 - v110) * (float)(v106 - v110))
                                                 + (float)((float)(v105 - v109) * (float)(v105 - v109)))))
                               * 0.5;
                          v114 = *(float *)(v25 + 44);
                          v115 = *(float *)(v25 + 48);
                          v116 = *(float *)(v25 + 52);
                          v117 = v136 * v113;
                          v118 = v135 * v113;
                          v119 = v134 * v113;
                          *(float *)(v25 + 32) = v114 - v117;
                          *(float *)(v25 + 36) = v115 - v118;
                          *(float *)(v25 + 40) = v116 - v119;
                          if ( v112 != 2 )
                          {
                            *(float *)(v25 + 56) = v117 + v114;
                            *(float *)(v25 + 60) = v118 + v115;
                            *(float *)(v25 + 64) = v119 + v116;
                            if ( v7 )
                            {
                              System_Collections_Generic_List_Vector3___InsertRange(
                                v7,
                                indexa[0],
                                (System_Collections_Generic_IEnumerable_T__o *)v25,
                                (const MethodInfo_3883F14 *)Method_System_Collections_Generic_List_Vector3__InsertRange__);
                              if ( v10 )
                              {
                                System_Collections_Generic_List_Int32Enum___Insert(
                                  v10,
                                  v138 + 1,
                                  0,
                                  (const MethodInfo_37E6F00 *)Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
                                if ( v13 )
                                {
                                  System_Collections_Generic_List_float___Insert(
                                    v13,
                                    v138 + 1,
                                    1.0,
                                    (const MethodInfo_3827278 *)Method_System_Collections_Generic_List_float__Insert__);
                                  goto LABEL_77;
                                }
                              }
                            }
LABEL_79:
                            sub_1C6BC60(*(_QWORD *)&v14.fields.x, *(_QWORD *)&v14.fields.z);
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
      sub_1C6BC68(*(_QWORD *)&v14.fields.x);
    }
  }
  v43 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  v44 = v43->max_length;
  if ( (unsigned int)v44 < 4 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_79;
  v45 = (float *)((char *)v43 + 12 * ((__int64)((v44 << 32) - 0x100000000LL) >> 32));
  m_Items = v43->m_Items;
  p_x = &m_Items[(__int64)((v44 << 32) - 0x400000000LL) >> 32].fields.x;
  v48 = &m_Items[(__int64)((v44 << 32) - 0x300000000LL) >> 32].fields.x;
  v49 = v45[8];
  v50 = v45[9];
  v51 = v45[10];
  items = v7->fields._items;
  v54 = *p_x;
  v53 = p_x[1];
  v55 = p_x[2];
  v56 = *v48;
  v57 = v48[1];
  v58 = v48[2];
  v59 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_79;
  size = v7->fields._size;
  v61 = v58 - v55;
  v62 = v49 + (float)(v56 - v54);
  v63 = v50 + (float)(v57 - v53);
  v64 = v51 + v61;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v62,
      *(const MethodInfo_3882E98 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = (float *)((char *)items + 12 * size);
    v7->fields._size = size + 1;
    v65[8] = v62;
    v65[9] = v63;
    v65[10] = v64;
  }
  v66 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  if ( (unsigned int)(v44 - 2) >= LODWORD(v66->max_length) )
    goto LABEL_80;
  v67 = (float *)((char *)v66 + 12 * (int)v44 - 24);
  v68 = v7->fields._items;
  v70 = v67[8];
  v69 = v67[9];
  v71 = v67[10];
  v72 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v68 )
    goto LABEL_79;
  v73 = v7->fields._size;
  v74 = v71 - v55;
  v75 = v49 + (float)(v70 - v54);
  v76 = v50 + (float)(v69 - v53);
  v77 = v51 + v74;
  if ( (unsigned int)v73 >= LODWORD(v68->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v75,
      *(const MethodInfo_3882E98 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v78 = (float *)((char *)v68 + 12 * v73);
    v7->fields._size = v73 + 1;
    v78[8] = v75;
    v78[9] = v76;
    v78[10] = v77;
  }
  v79 = v7->fields._items;
  v80 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v79 )
    goto LABEL_79;
  v81 = v7->fields._size;
  v82 = v49 + (float)(v49 - v54);
  v83 = v50 + (float)(v50 - v53);
  v84 = v51 + (float)(v51 - v55);
  if ( (unsigned int)v81 >= LODWORD(v79->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v82,
      *(const MethodInfo_3882E98 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = (float *)((char *)v79 + 12 * v81);
    v7->fields._size = v81 + 1;
    v85[8] = v82;
    v85[9] = v83;
    v85[10] = v84;
  }
  if ( !v10 )
    goto LABEL_79;
  v86 = v10->fields._items;
  v87 = Method_System_Collections_Generic_List_BezierControlPointMode__Add__;
  ++v10->fields._version;
  if ( !v86 )
    goto LABEL_79;
  v88 = v10->fields._size;
  if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v88 + 1;
    *((_DWORD *)v86->m_Items + v88) = 0;
  }
  if ( !v13 )
    goto LABEL_79;
  v89 = v13->fields._items;
  v90 = Method_System_Collections_Generic_List_float__Add__;
  ++v13->fields._version;
  if ( !v89 )
    goto LABEL_79;
  v91 = v13->fields._size;
  if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
  {
    System_Collections_Generic_List_float___AddWithResize(
      v13,
      1.0,
      *(const MethodInfo_38264F0 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v91 + 1;
    v89->m_Items[v91] = 1.0;
  }
  v24 = v44 + 2;
LABEL_77:
  v120 = System_Collections_Generic_List_Vector3___ToArray(
           v7,
           (const MethodInfo_3884A68 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v120;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.points, (int32_t)v120, v121, v122);
  v123 = System_Collections_Generic_List_Int32Enum___ToArray(
           v10,
           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  *p_modes = (struct BezierControlPointMode_array *)v123;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.modes, (int32_t)v123, v124, v125);
  v126 = System_Collections_Generic_List_float___ToArray(
           v13,
           (const MethodInfo_3827FA8 *)Method_System_Collections_Generic_List_float__ToArray__);
  p_curveWeight->klass = (CGThumbnailListItem_c *)v126;
  sub_1C6B9AC(p_curveWeight, (int32_t)v126, v127, v128);
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
    sub_1C6BC60(this, index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(curveWeight->max_length) )
    sub_1C6BC68(this);
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

  if ( (byte_4CB5D0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4CB5D0A = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v4, v5);
    Custom2dSplineMesh__SetList(this, v6);
    Custom2dSplineMesh__GenMesh(this, v7);
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

  if ( (byte_4CB5D05 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__RemoveRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float___ctor___78529424);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3___ctor___78536120);
    sub_1C6BA08(&System_Collections_Generic_List_float__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_4CB5D05 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (index + 1) / 3;
  v8 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_59254572(
    v8,
    points,
    (const MethodInfo_388272C *)Method_System_Collections_Generic_List_Vector3___ctor___78536120);
  p_curveWeight = &this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v11 = (System_Collections_Generic_List_float__o *)sub_1C6BC54(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_58875324(
    v11,
    curveWeight,
    (const MethodInfo_3825DBC *)Method_System_Collections_Generic_List_float___ctor___78529424);
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
            (const MethodInfo_3884798 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
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
        (const MethodInfo_3884798 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
      v13 = v7;
      if ( v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C6BC60(v12, v13);
  }
  if ( !v8 )
    goto LABEL_18;
  System_Collections_Generic_List_Vector3___RemoveRange(
    v8,
    0,
    3,
    (const MethodInfo_3884798 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
LABEL_16:
  System_Collections_Generic_List_float___RemoveAt(
    v11,
    v13,
    (const MethodInfo_3827C70 *)Method_System_Collections_Generic_List_float__RemoveAt__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  p_modes = (CGThumbnailListItem_o *)&this->fields.modes;
  v17 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_58612304(
    v17,
    v16,
    (const MethodInfo_37E5A50 *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    v17,
    v7,
    (const MethodInfo_37E78FC *)Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
  v18 = System_Collections_Generic_List_Vector3___ToArray(
          v8,
          (const MethodInfo_3884A68 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_points, (int32_t)v18, v19, v20);
  v21 = System_Collections_Generic_List_Int32Enum___ToArray(
          v17,
          (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  p_modes->klass = (CGThumbnailListItem_c *)v21;
  sub_1C6B9AC(p_modes, (int32_t)v21, v22, v23);
  v24 = System_Collections_Generic_List_float___ToArray(
          v11,
          (const MethodInfo_3827FA8 *)Method_System_Collections_Generic_List_float__ToArray__);
  *p_curveWeight = v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_curveWeight, (int32_t)v24, v25, v26);
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
        sub_1C6BC68(this);
      }
      if ( !byte_4CAFC0C )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC0C = 1;
      }
      this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v20.n64_u64[0] = vmul_f32(v18, v18).n64_u64[0];
      v20.n64_f32[0] = sqrtf((float)(v19 * v19) + vaddv_f32(v20));
      if ( v20.n64_f32[0] <= 0.00001 )
      {
        if ( !byte_4CAFC09 )
        {
          this = (Custom2dSplineMesh_o *)sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC09 = 1;
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
        if ( !byte_4CAFC07 )
        {
          sub_1C6BA08(&System_Math_TypeInfo);
          byte_4CAFC07 = 1;
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
      sub_1C6BC60(this, *(_QWORD *)&index);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__GenMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *drawMesh; // x21
  struct UnityEngine_Mesh_o **p_drawMesh; // x23
  unsigned __int64 v5; // x1
  UnityEngine_Mesh_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_Object_o *v9; // x0
  struct UnityEngine_MeshFilter_o **p_meshFilter; // x21
  UnityEngine_Object_o *meshFilter; // x22
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_Vector3__o *v15; // x22
  struct System_Collections_Generic_List_Vector3__o **p_verts; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_List_int__o *v19; // x23
  struct System_Collections_Generic_List_int__o **p_trianges; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_List_Vector2__o *v23; // x24
  int32_t v24; // w2
  const MethodInfo *v25; // x3
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
  const MethodInfo *v49; // x2
  float v50; // s12
  float v51; // s13
  float v52; // s14
  const MethodInfo *v53; // x2
  float width; // s15
  float v55; // s0
  float v56; // s3 OVERLAPPED
  float v57; // s4
  float v58; // s5
  struct UnityEngine_Vector3_StaticFields *v59; // x8
  float PathRate; // s0
  float v61; // s12
  float v62; // s13
  float v63; // s14
  float v64; // s11
  int v65; // w28
  float v66; // s0
  float v67; // s1
  float v68; // s2
  float v69; // s3
  float v70; // s9
  float v71; // s12
  float v72; // s13
  float v73; // s14
  float v74; // s15
  struct UnityEngine_Vector3_StaticFields *v75; // x8
  int32_t flattenAxis; // w8
  float v77; // s11
  float v78; // s10
  float v79; // s8
  float v80; // s0
  float v81; // s14
  float v82; // s13
  float v83; // s15
  intptr_t m_CachedPtr; // x8
  _QWORD *v85; // x9
  __int64 klass_low; // x10
  float *v87; // x8
  intptr_t v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  float *v91; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x26
  unsigned __int64 UV_41790004; // kr00_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_Vector2__o *v97; // x26
  unsigned __int64 v98; // kr08_8
  struct UnityEngine_Vector2_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  const MethodInfo *v102; // x1
  float v103; // s0
  Custom2dSplineMesh_c *v104; // x0
  float v105; // s1
  float v106; // s11
  float v107; // s13
  float v108; // s9
  float v109; // s15
  float v110; // s14
  float v111; // s8
  const MethodInfo *v112; // x1
  float v113; // s11
  float v114; // s10
  float v115; // s9
  const MethodInfo *v116; // x1
  float v117; // s0
  int32_t v118; // w8
  float v119; // s15
  float v120; // s11
  float v121; // s14
  float v122; // s13
  float v123; // s10
  intptr_t v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  int32_t v127; // w9
  intptr_t v128; // x8
  _QWORD *v129; // x10
  __int64 v130; // x11
  int32_t v131; // w9
  intptr_t v132; // x8
  _QWORD *v133; // x10
  __int64 v134; // x11
  int32_t v135; // w9
  intptr_t v136; // x8
  _QWORD *v137; // x10
  __int64 v138; // x11
  int32_t v139; // w9
  intptr_t v140; // x8
  _QWORD *v141; // x10
  __int64 v142; // x11
  int32_t v143; // w9
  intptr_t v144; // x8
  _QWORD *v145; // x10
  __int64 v146; // x11
  const MethodInfo *v147; // x1
  float v148; // s0
  intptr_t v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  float *v152; // x8
  intptr_t v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  float *v156; // x8
  float v157; // s9
  struct System_Collections_Generic_List_Vector2__o *v158; // x26
  float v159; // s8
  unsigned __int64 v160; // kr10_8
  struct UnityEngine_Vector2_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  struct System_Collections_Generic_List_Vector2__o *v164; // x26
  float lineVmax; // s1 OVERLAPPED
  UnityEngine_Vector2_o v166; // kr18_8
  struct UnityEngine_Vector2_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  float *v170; // x8
  float v171; // s0
  intptr_t v172; // x8
  _QWORD *v173; // x9
  __int64 v174; // x10
  int32_t v175; // w9
  intptr_t v176; // x8
  _QWORD *v177; // x10
  __int64 v178; // x11
  int32_t v179; // w9
  intptr_t v180; // x8
  _QWORD *v181; // x10
  __int64 v182; // x11
  int32_t v183; // w9
  intptr_t v184; // x8
  _QWORD *v185; // x10
  __int64 v186; // x11
  int32_t v187; // w9
  intptr_t v188; // x8
  _QWORD *v189; // x10
  __int64 v190; // x11
  int32_t v191; // w9
  intptr_t v192; // x8
  _QWORD *v193; // x10
  __int64 v194; // x11
  const MethodInfo *v195; // x1
  const MethodInfo *v196; // x2
  float v197; // s8
  float v198; // s9
  float v199; // s10
  float v200; // s0
  float v201; // s3 OVERLAPPED
  float v202; // s4
  float v203; // s5
  struct UnityEngine_Vector3_StaticFields *v204; // x8
  float v205; // s12
  const MethodInfo *v206; // x1
  const MethodInfo *v207; // x1
  float v208; // s9
  float v209; // s10
  float v210; // s11
  float v211; // s0
  float v212; // s14
  float v213; // s15
  struct UnityEngine_Vector3_StaticFields *v214; // x8
  float v215; // s9
  float v216; // s10
  float v217; // s11
  const MethodInfo *v218; // x2
  int32_t v219; // w8
  float v220; // s14
  float v221; // s13
  float v222; // s15
  float v223; // s0
  float v224; // s11
  float v225; // s9
  float v226; // s0
  float v227; // s10
  intptr_t v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  float *v231; // x8
  intptr_t v232; // x8
  _QWORD *v233; // x9
  __int64 v234; // x10
  float *v235; // x8
  struct System_Collections_Generic_List_Vector2__o *v236; // x26
  unsigned __int64 v237; // kr20_8
  struct UnityEngine_Vector2_array *v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  struct System_Collections_Generic_List_Vector2__o *v241; // x26
  unsigned __int64 v242; // kr28_8
  struct UnityEngine_Vector2_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  const MethodInfo *v246; // x1
  int32_t v247; // w8
  float v248; // s12
  float v249; // s11
  float v250; // s13
  float v251; // s0
  float v252; // s8
  float v253; // s10
  float v254; // s9
  intptr_t v255; // x8
  _QWORD *v256; // x9
  __int64 v257; // x10
  float *v258; // x8
  intptr_t v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  float *v262; // x8
  struct System_Collections_Generic_List_Vector2__o *v263; // x26
  unsigned __int64 v264; // kr30_8
  float v265; // s11
  struct UnityEngine_Vector2_array *v266; // x8
  _QWORD *v267; // x9
  __int64 v268; // x10
  struct System_Collections_Generic_List_Vector2__o *v269; // x26
  float v270; // s1 OVERLAPPED
  UnityEngine_Vector2_o v271; // kr38_8
  struct UnityEngine_Vector2_array *v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  float *v275; // x8
  float v276; // s0
  intptr_t v277; // x8
  _QWORD *v278; // x9
  __int64 v279; // x10
  int32_t v280; // w9
  intptr_t v281; // x8
  _QWORD *v282; // x10
  __int64 v283; // x11
  int32_t v284; // w9
  intptr_t v285; // x8
  _QWORD *v286; // x10
  __int64 v287; // x11
  int32_t v288; // w9
  intptr_t v289; // x8
  _QWORD *v290; // x10
  __int64 v291; // x11
  int32_t v292; // w9
  intptr_t v293; // x8
  _QWORD *v294; // x10
  __int64 v295; // x11
  int32_t v296; // w9
  intptr_t v297; // x8
  _QWORD *v298; // x10
  __int64 v299; // x11
  float v300; // s8
  float v301; // s9
  float v302; // s10
  const MethodInfo *v303; // x1
  float v304; // s11
  const MethodInfo *v305; // x1
  const MethodInfo *v306; // x2
  float v307; // s12
  float v308; // s13
  float v309; // s14
  float v310; // s0
  float v311; // s3 OVERLAPPED
  float v312; // s4
  float v313; // s5
  struct UnityEngine_Vector3_StaticFields *v314; // x8
  UnityEngine_Mesh_o *v315; // x19
  UnityEngine_Mesh_o *v316; // x19
  UnityEngine_Mesh_o *v317; // x19
  struct System_Collections_Generic_List_Vector3__o *v318; // x8
  int v319; // w9
  struct System_Collections_Generic_List_int__o *v320; // x8
  int v321; // w9
  struct System_Collections_Generic_List_Vector2__o *v322; // x8
  int v323; // w9
  UnityEngine_Vector3_o offset; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offseta; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetb; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetc; // [xsp+0h] [xbp-140h]
  struct System_Collections_Generic_List_Vector2__o **p_uvs; // [xsp+20h] [xbp-120h]
  struct UnityEngine_Mesh_o **v329; // [xsp+28h] [xbp-118h]
  float v330; // [xsp+34h] [xbp-10Ch]
  float v331; // [xsp+38h] [xbp-108h]
  float v332; // [xsp+3Ch] [xbp-104h]
  float v333; // [xsp+40h] [xbp-100h]
  float v334; // [xsp+44h] [xbp-FCh]
  float v335; // [xsp+48h] [xbp-F8h]
  float v336; // [xsp+4Ch] [xbp-F4h]
  float UVrate; // [xsp+50h] [xbp-F0h]
  float pos; // [xsp+54h] [xbp-ECh]
  float v339; // [xsp+58h] [xbp-E8h]
  float v340; // [xsp+5Ch] [xbp-E4h]
  float v341; // [xsp+60h] [xbp-E0h]
  float v342; // [xsp+64h] [xbp-DCh]
  float v343; // [xsp+68h] [xbp-D8h]
  float v344; // [xsp+68h] [xbp-D8h]
  float v345; // [xsp+6Ch] [xbp-D4h]
  float v346; // [xsp+6Ch] [xbp-D4h]
  float v347; // [xsp+70h] [xbp-D0h]
  float v348; // [xsp+70h] [xbp-D0h]
  float normalizedDir; // [xsp+78h] [xbp-C8h]
  float normalizedDir_4; // [xsp+7Ch] [xbp-C4h]
  float normalizedDir_8; // [xsp+80h] [xbp-C0h]
  float normalizedDir_8a; // [xsp+80h] [xbp-C0h]
  float rate; // [xsp+84h] [xbp-BCh]
  float v354; // [xsp+88h] [xbp-B8h]
  float v355; // [xsp+88h] [xbp-B8h]
  float v356; // [xsp+8Ch] [xbp-B4h]
  float v357; // [xsp+8Ch] [xbp-B4h]
  float v358; // [xsp+90h] [xbp-B0h]
  float v359; // [xsp+90h] [xbp-B0h]
  float z; // [xsp+94h] [xbp-ACh]
  float v361; // [xsp+94h] [xbp-ACh]
  float v362; // [xsp+94h] [xbp-ACh]
  UnityEngine_Vector2_o item; // [xsp+98h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v365; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Direction; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v395; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v396; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v397; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v398; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v399; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v400; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4CB5D0B & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    sub_1C6BA08(&Custom2dSplineMesh_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_1C6BA08(&UnityEngine_Mesh_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_12277/*"SPLINE MESH"*/);
    byte_4CB5D0B = 1;
  }
  item.fields.y = 0.0;
  p_drawMesh = &this->fields.drawMesh;
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(drawMesh, 0, 0) )
  {
    v6 = (UnityEngine_Mesh_o *)sub_1C6BC54(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v6, 0);
    *p_drawMesh = v6;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.drawMesh, (int32_t)v6, v7, v8);
    v9 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Object__set_name(v9, (System_String_o *)StringLiteral_12277/*"SPLINE MESH"*/, 0);
  }
  else
  {
    v9 = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_334;
    UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)v9, 0);
  }
  p_meshFilter = &this->fields.meshFilter;
  meshFilter = (UnityEngine_Object_o *)this->fields.meshFilter;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(meshFilter, 0, 0) )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v13, v14);
  }
  v9 = (UnityEngine_Object_o *)*p_meshFilter;
  v329 = &this->fields.drawMesh;
  if ( !*p_meshFilter )
    goto LABEL_334;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)v9, this->fields.drawMesh, 0);
  v15 = (System_Collections_Generic_List_Vector3__o *)sub_1C6BC54(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v15,
    (const MethodInfo_3882604 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.verts = v15;
  p_verts = &this->fields.verts;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.verts, (int32_t)v15, v17, v18);
  v19 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.trianges = v19;
  p_trianges = &this->fields.trianges;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.trianges, (int32_t)v19, v21, v22);
  v23 = (System_Collections_Generic_List_Vector2__o *)sub_1C6BC54(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v23,
    (const MethodInfo_387FD58 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.uvs = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.uvs, (int32_t)v23, v24, v25);
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
  Point = Custom2dSplineMesh__GetPoint(this, 0.0, (const MethodInfo *)v5);
  x = Point.fields.x;
  y = Point.fields.y;
  z = Point.fields.z;
  v365 = Custom2dSplineMesh__GetPoint(this, v28, v32);
  v33 = v365.fields.x;
  v34 = v365.fields.y;
  v35 = v365.fields.z;
  v366 = Custom2dSplineMesh__GetPoint(this, this->fields.PathRate, v36);
  v331 = v366.fields.y;
  v332 = v366.fields.x;
  v330 = v366.fields.z;
  Direction = Custom2dSplineMesh__GetDirection(this, 0.0, v37);
  v358 = Direction.fields.x;
  item.fields.x = Direction.fields.y;
  v354 = Direction.fields.z;
  if ( !byte_4CAFC0C )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC0C = 1;
  }
  v39 = x;
  v40 = v33 - x;
  v347 = v34;
  v41 = v34 - y;
  v42 = v35 - z;
  v356 = v35;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v43 = sqrtf((float)(v42 * v42) + (float)((float)(v40 * v40) + (float)(v41 * v41)));
  v44 = v39;
  if ( v43 <= 0.00001 )
  {
    v45 = z;
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    normalizedDir_8 = static_fields->zeroVector.fields.x;
    v343 = static_fields->zeroVector.fields.z;
    v345 = static_fields->zeroVector.fields.y;
  }
  else
  {
    normalizedDir_8 = v40 / v43;
    v343 = v42 / v43;
    v345 = v41 / v43;
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
  v368 = Custom2dSplineMesh__GetOffset(this, 0.0, v38);
  v342 = v28;
  if ( this->fields.DrawCap )
  {
    v50 = v368.fields.x;
    v51 = v368.fields.y;
    v52 = v368.fields.z;
    width = Custom2dSplineMesh__GetWidth(this, 0.0, (const MethodInfo *)v5);
    if ( !byte_4CAFC0C )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CAFC0C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v55 = sqrtf((float)(v354 * v354) + (float)((float)(v358 * v358) + (float)(item.fields.x * item.fields.x)));
    if ( v55 <= 0.00001 )
    {
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      v59 = UnityEngine_Vector3_TypeInfo->static_fields;
      v56 = v59->zeroVector.fields.x;
      v57 = v59->zeroVector.fields.y;
      v58 = v59->zeroVector.fields.z;
    }
    else
    {
      v56 = v358 / v55;
      v57 = item.fields.x / v55;
      v58 = v354 / v55;
    }
    v369.fields.y = y;
    v369.fields.x = v44;
    v369.fields.z = v45;
    *(_QWORD *)&offset.fields.y = __PAIR64__(LODWORD(v52), LODWORD(v51));
    offset.fields.x = v50;
    Custom2dSplineMesh__AddCap(this, v369, *(UnityEngine_Vector3_o *)&v56, offset, width, 0, v53);
    v28 = v342;
  }
  PathRate = this->fields.PathRate;
  v61 = v347;
  v62 = v356;
  v63 = y;
  item.fields.x = 0.0;
  if ( PathRate > 0.0 )
  {
    item.fields.x = 0.0;
    v64 = 0.0;
    while ( 1 )
    {
      if ( Custom2dSplineMesh__isJumpcut(this, v64, v28, &item.fields.y, v49) )
      {
        v65 = 1;
      }
      else
      {
        v65 = 0;
        if ( v64 != 0.0 && !this->fields.createVertsEveryStep )
        {
          v370 = Custom2dSplineMesh__GetDirection(this, v64, (const MethodInfo *)v5);
          if ( (float)((float)(v343 * v370.fields.z)
                     + (float)((float)(normalizedDir_8 * v370.fields.x) + (float)(v345 * v370.fields.y))) >= this->fields.directionChange )
            goto LABEL_131;
          v65 = 0;
        }
      }
      if ( !byte_4CAFC0C )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC0C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v66 = v33 - v44;
      v67 = v61 - v63;
      v68 = v62 - v45;
      v69 = sqrtf((float)(v68 * v68) + (float)((float)(v67 * v67) + (float)(v66 * v66)));
      v361 = v45;
      v70 = v63;
      v348 = v61;
      v355 = v33;
      v357 = v62;
      if ( v69 <= 0.00001 )
      {
        if ( !byte_4CAFC09 )
        {
          sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC09 = 1;
        }
        v71 = item.fields.x;
        v75 = UnityEngine_Vector3_TypeInfo->static_fields;
        v72 = v75->zeroVector.fields.x;
        v73 = v75->zeroVector.fields.y;
        v74 = v75->zeroVector.fields.z;
      }
      else
      {
        v71 = item.fields.x;
        v72 = v66 / v69;
        v73 = v67 / v69;
        v74 = v68 / v69;
      }
      rate = v64;
      v371 = Custom2dSplineMesh__GetOffset(this, v64, (const MethodInfo *)v5);
      flattenAxis = this->fields.flattenAxis;
      v77 = v44 + v371.fields.x;
      v78 = v70 + v371.fields.y;
      v359 = v44;
      normalizedDir_8 = v72;
      v343 = v74;
      v345 = v73;
      if ( flattenAxis == 2 )
      {
        v82 = v44 - v371.fields.x;
        v81 = v70 - v371.fields.y;
        v79 = 0.0;
        v83 = 0.0;
        goto LABEL_67;
      }
      v79 = v361 + v371.fields.z;
      if ( flattenAxis == 1 )
        break;
      if ( flattenAxis )
      {
        v81 = v70 - v371.fields.y;
        v82 = v359 - v371.fields.x;
        goto LABEL_65;
      }
      v80 = v361;
      v81 = v70 - v371.fields.y;
      v77 = 0.0;
      v82 = 0.0;
LABEL_66:
      v83 = v80 - v371.fields.z;
LABEL_67:
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      m_CachedPtr = v9->fields.m_CachedPtr;
      v85 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_334;
      klass_low = SLODWORD(v9[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        v372.fields.x = v77;
        v372.fields.y = v78;
        v372.fields.z = v79;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v372,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
      }
      else
      {
        v87 = (float *)(m_CachedPtr + 12 * klass_low);
        LODWORD(v9[1].klass) = klass_low + 1;
        v87[8] = v77;
        v87[9] = v78;
        v87[10] = v79;
      }
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v88 = v9->fields.m_CachedPtr;
      v89 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v88 )
        goto LABEL_334;
      v90 = SLODWORD(v9[1].klass);
      if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
      {
        v373.fields.x = v82;
        v373.fields.y = v81;
        v373.fields.z = v83;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v373,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = (float *)(v88 + 12 * v90);
        LODWORD(v9[1].klass) = v90 + 1;
        v91[8] = v82;
        v91[9] = v81;
        v91[10] = v83;
      }
      uvs = this->fields.uvs;
      item.fields.x = v71;
      if ( this->fields.StrictUVmode )
      {
        v374.fields.x = v77;
        v374.fields.y = v78;
        v374.fields.z = v79;
        UV_41790004 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v374, (const MethodInfo *)v5);
      }
      else
      {
        UV_41790004 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(v71));
      }
      v64 = rate;
      v33 = v355;
      v44 = v359;
      if ( !uvs )
        goto LABEL_334;
      items = uvs->fields._items;
      v95 = Method_System_Collections_Generic_List_Vector2__Add__;
      v61 = v348;
      ++uvs->fields._version;
      if ( !items )
        goto LABEL_334;
      size = uvs->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          (UnityEngine_Vector2_o)UV_41790004,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = size + 1;
        items->m_Items[size] = (UnityEngine_Vector2_o)UV_41790004;
      }
      v97 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v375.fields.x = v82;
        v375.fields.y = v81;
        v375.fields.z = v83;
        v98 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v375, (const MethodInfo *)v5);
      }
      else
      {
        v98 = __PAIR64__(LODWORD(this->fields.lineVmax), LODWORD(item.fields.x));
      }
      v28 = v342;
      v62 = v357;
      v63 = v70;
      v45 = v361;
      if ( !v97 )
        goto LABEL_334;
      v99 = v97->fields._items;
      v100 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v97->fields._version;
      if ( !v99 )
        goto LABEL_334;
      v101 = v97->fields._size;
      if ( (unsigned int)v101 >= LODWORD(v99->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v97,
          (UnityEngine_Vector2_o)v98,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
      }
      else
      {
        v97->fields._size = v101 + 1;
        v99->m_Items[v101] = (UnityEngine_Vector2_o)v98;
      }
      if ( rate == 0.0 )
      {
        if ( !v65 )
          goto LABEL_131;
      }
      else
      {
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
        v5 = (unsigned int)*p_vtxIdx;
        v124 = v9->fields.m_CachedPtr;
        v125 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v124 )
          goto LABEL_334;
        v126 = SLODWORD(v9[1].klass);
        if ( (unsigned int)v126 >= *(_DWORD *)(v124 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
          v9 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v9[1].klass) = v126 + 1;
          *(_DWORD *)(v124 + 4 * v126 + 32) = v5;
        }
        v127 = *p_vtxIdx;
        v128 = v9->fields.m_CachedPtr;
        v129 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v128 )
          goto LABEL_334;
        v130 = SLODWORD(v9[1].klass);
        v5 = (unsigned int)(v127 + 2);
        if ( (unsigned int)v130 >= *(_DWORD *)(v128 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
          v9 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v9[1].klass) = v130 + 1;
          *(_DWORD *)(v128 + 4 * v130 + 32) = v5;
        }
        v131 = *p_vtxIdx;
        v132 = v9->fields.m_CachedPtr;
        v133 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v132 )
          goto LABEL_334;
        v134 = SLODWORD(v9[1].klass);
        v5 = (unsigned int)(v131 + 1);
        if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
          v9 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v9[1].klass) = v134 + 1;
          *(_DWORD *)(v132 + 4 * v134 + 32) = v5;
        }
        v135 = *p_vtxIdx;
        v136 = v9->fields.m_CachedPtr;
        v137 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v136 )
          goto LABEL_334;
        v138 = SLODWORD(v9[1].klass);
        v5 = (unsigned int)(v135 + 2);
        if ( (unsigned int)v138 >= *(_DWORD *)(v136 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
          v9 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v9[1].klass) = v138 + 1;
          *(_DWORD *)(v136 + 4 * v138 + 32) = v5;
        }
        v139 = *p_vtxIdx;
        v140 = v9->fields.m_CachedPtr;
        v141 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v140 )
          goto LABEL_334;
        v142 = SLODWORD(v9[1].klass);
        v5 = (unsigned int)(v139 + 3);
        if ( (unsigned int)v142 >= *(_DWORD *)(v140 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
          v9 = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_334;
        }
        else
        {
          LODWORD(v9[1].klass) = v142 + 1;
          *(_DWORD *)(v140 + 4 * v142 + 32) = v5;
        }
        v143 = *p_vtxIdx;
        v144 = v9->fields.m_CachedPtr;
        v145 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(v9[1].klass);
        if ( !v144 )
          goto LABEL_334;
        v146 = SLODWORD(v9[1].klass);
        v5 = (unsigned int)(v143 + 1);
        if ( (unsigned int)v146 >= *(_DWORD *)(v144 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)v9,
            v5,
            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(v9[1].klass) = v146 + 1;
          *(_DWORD *)(v144 + 4 * v146 + 32) = v5;
        }
        *p_vtxIdx += 2;
        if ( !v65 )
        {
LABEL_131:
          if ( !byte_4CAFC07 )
          {
            sub_1C6BA08(&System_Math_TypeInfo);
            byte_4CAFC07 = 1;
          }
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          item.fields.x = item.fields.x
                        + (float)((float)(sqrtf(
                                            (float)((float)(v45 - v62) * (float)(v45 - v62))
                                          + (float)((float)((float)(v63 - v61) * (float)(v63 - v61))
                                                  + (float)((float)(v44 - v33) * (float)(v44 - v33))))
                                        / Custom2dSplineMesh__GetWidth(this, v64, (const MethodInfo *)v5))
                                * this->fields.UVrate);
          goto LABEL_249;
        }
      }
      if ( !byte_4CAFC07 )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC07 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v103 = Custom2dSplineMesh__GetWidth(this, rate, (const MethodInfo *)v5);
      v104 = Custom2dSplineMesh_TypeInfo;
      pos = v63;
      v336 = v103;
      UVrate = this->fields.UVrate;
      v105 = item.fields.y;
      if ( !Custom2dSplineMesh_TypeInfo->_2.cctor_finished )
      {
        v106 = item.fields.y;
        j_il2cpp_runtime_class_init_0(Custom2dSplineMesh_TypeInfo);
        v104 = Custom2dSplineMesh_TypeInfo;
        v105 = v106;
      }
      v107 = v105;
      v108 = v105 - v104->static_fields->JUMP_THRESH_HOLD;
      v376 = Custom2dSplineMesh__GetPoint(this, v105, v102);
      v109 = v376.fields.x;
      v110 = v376.fields.y;
      v111 = v376.fields.z;
      v334 = v108;
      v377 = Custom2dSplineMesh__GetOffset(this, v108, v112);
      v113 = v377.fields.x;
      v114 = v377.fields.y;
      v115 = v377.fields.z;
      v340 = v107;
      v117 = Custom2dSplineMesh__GetWidth(this, v107, v116);
      v118 = this->fields.flattenAxis;
      normalizedDir = v109;
      normalizedDir_4 = v110;
      normalizedDir_8a = v113;
      v119 = v109 + v113;
      v120 = v114;
      v121 = v110 + v114;
      v335 = v117;
      if ( v118 == 2 )
      {
        v123 = v355;
        v122 = 0.0;
        v344 = normalizedDir_4 - v120;
        v346 = normalizedDir - normalizedDir_8a;
        v148 = 0.0;
LABEL_139:
        v339 = v148;
        goto LABEL_140;
      }
      v122 = v111 + v115;
      if ( v118 == 1 )
      {
        v123 = v355;
        v121 = 0.0;
        v339 = v111 - v115;
        v344 = 0.0;
        v346 = normalizedDir - normalizedDir_8a;
      }
      else
      {
        v123 = v355;
        if ( v118 )
        {
          v344 = normalizedDir_4 - v120;
          v346 = normalizedDir - normalizedDir_8a;
          v148 = v111 - v115;
          goto LABEL_139;
        }
        v119 = 0.0;
        v339 = v111 - v115;
        v344 = normalizedDir_4 - v120;
        v346 = 0.0;
      }
LABEL_140:
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v149 = v9->fields.m_CachedPtr;
      v150 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v149 )
        goto LABEL_334;
      v151 = SLODWORD(v9[1].klass);
      v341 = v111;
      v333 = v115;
      if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
      {
        v378.fields.x = v119;
        v378.fields.y = v121;
        v378.fields.z = v122;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v378,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
      }
      else
      {
        v152 = (float *)(v149 + 12 * v151);
        LODWORD(v9[1].klass) = v151 + 1;
        v152[8] = v119;
        v152[9] = v121;
        v152[10] = v122;
      }
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v153 = v9->fields.m_CachedPtr;
      v154 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v153 )
        goto LABEL_334;
      v155 = SLODWORD(v9[1].klass);
      if ( (unsigned int)v155 >= *(_DWORD *)(v153 + 24) )
      {
        v379.fields.y = v344;
        v379.fields.x = v346;
        v379.fields.z = v339;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v379,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
      }
      else
      {
        v156 = (float *)(v153 + 12 * v155);
        LODWORD(v9[1].klass) = v155 + 1;
        v156[8] = v346;
        v156[9] = v344;
        v156[10] = v339;
      }
      v157 = sqrtf(
               (float)((float)(v361 - v357) * (float)(v361 - v357))
             + (float)((float)((float)(pos - v348) * (float)(pos - v348))
                     + (float)((float)(v359 - v123) * (float)(v359 - v123))));
      v158 = this->fields.uvs;
      v159 = item.fields.x + (float)((float)(v157 / v336) * UVrate);
      if ( this->fields.StrictUVmode )
      {
        v380.fields.x = v119;
        v380.fields.y = v121;
        v380.fields.z = v122;
        v160 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v380, (const MethodInfo *)v5);
        if ( !v158 )
          goto LABEL_334;
      }
      else
      {
        v160 = __PAIR64__(LODWORD(this->fields.lineVmin), item.fields.x + (float)((float)(v157 / v336) * UVrate));
        if ( !v158 )
          goto LABEL_334;
      }
      v161 = v158->fields._items;
      v162 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v158->fields._version;
      if ( !v161 )
        goto LABEL_334;
      v163 = v158->fields._size;
      if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v158,
          (UnityEngine_Vector2_o)v160,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
      }
      else
      {
        v158->fields._size = v163 + 1;
        v161->m_Items[v163] = (UnityEngine_Vector2_o)v160;
      }
      v164 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v381.fields.y = v344;
        v381.fields.x = v346;
        v381.fields.z = v339;
        v166 = Custom2dSplineMesh__GetUV_41790004(this, v381, (const MethodInfo *)v5);
        lineVmax = v166.fields.y;
        v159 = v166.fields.x;
        if ( !v164 )
          goto LABEL_334;
      }
      else
      {
        lineVmax = this->fields.lineVmax;
        if ( !v164 )
          goto LABEL_334;
      }
      v167 = v164->fields._items;
      v168 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v164->fields._version;
      if ( !v167 )
        goto LABEL_334;
      v169 = v164->fields._size;
      if ( (unsigned int)v169 >= LODWORD(v167->max_length) )
      {
        v171 = v159;
        System_Collections_Generic_List_Vector2___AddWithResize(
          v164,
          *(UnityEngine_Vector2_o *)(&lineVmax - 1),
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
      }
      else
      {
        v170 = (float *)(&v167->obj.klass + v169);
        v164->fields._size = v169 + 1;
        v170[8] = v159;
        v170[9] = lineVmax;
      }
      v9 = (UnityEngine_Object_o *)*p_trianges;
      if ( !*p_trianges )
        goto LABEL_334;
      v5 = (unsigned int)*p_vtxIdx;
      v172 = v9->fields.m_CachedPtr;
      v173 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v172 )
        goto LABEL_334;
      v174 = SLODWORD(v9[1].klass);
      if ( (unsigned int)v174 >= *(_DWORD *)(v172 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          v5,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v9[1].klass) = v174 + 1;
        *(_DWORD *)(v172 + 4 * v174 + 32) = v5;
      }
      v175 = *p_vtxIdx;
      v176 = v9->fields.m_CachedPtr;
      v177 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v176 )
        goto LABEL_334;
      v178 = SLODWORD(v9[1].klass);
      v5 = (unsigned int)(v175 + 2);
      if ( (unsigned int)v178 >= *(_DWORD *)(v176 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          v5,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v9[1].klass) = v178 + 1;
        *(_DWORD *)(v176 + 4 * v178 + 32) = v5;
      }
      v179 = *p_vtxIdx;
      v180 = v9->fields.m_CachedPtr;
      v181 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v180 )
        goto LABEL_334;
      v182 = SLODWORD(v9[1].klass);
      v5 = (unsigned int)(v179 + 1);
      if ( (unsigned int)v182 >= *(_DWORD *)(v180 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          v5,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v9[1].klass) = v182 + 1;
        *(_DWORD *)(v180 + 4 * v182 + 32) = v5;
      }
      v183 = *p_vtxIdx;
      v184 = v9->fields.m_CachedPtr;
      v185 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v184 )
        goto LABEL_334;
      v186 = SLODWORD(v9[1].klass);
      v5 = (unsigned int)(v183 + 2);
      if ( (unsigned int)v186 >= *(_DWORD *)(v184 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          v5,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v185[4] + 192LL) + 112LL));
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v9[1].klass) = v186 + 1;
        *(_DWORD *)(v184 + 4 * v186 + 32) = v5;
      }
      v187 = *p_vtxIdx;
      v188 = v9->fields.m_CachedPtr;
      v189 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v188 )
        goto LABEL_334;
      v190 = SLODWORD(v9[1].klass);
      v5 = (unsigned int)(v187 + 3);
      if ( (unsigned int)v190 >= *(_DWORD *)(v188 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          v5,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
        v9 = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_334;
      }
      else
      {
        LODWORD(v9[1].klass) = v190 + 1;
        *(_DWORD *)(v188 + 4 * v190 + 32) = v5;
      }
      v191 = *p_vtxIdx;
      v192 = v9->fields.m_CachedPtr;
      v193 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v192 )
        goto LABEL_334;
      v194 = SLODWORD(v9[1].klass);
      v195 = (const MethodInfo *)(unsigned int)(v191 + 1);
      v362 = v157;
      if ( (unsigned int)v194 >= *(_DWORD *)(v192 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)v9,
          (int32_t)v195,
          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(v9[1].klass) = v194 + 1;
        *(_DWORD *)(v192 + 4 * v194 + 32) = (_DWORD)v195;
      }
      this->fields.vtxIdx += 4;
      v382 = Custom2dSplineMesh__GetDirection(this, v334, v195);
      v197 = v382.fields.x;
      v198 = v382.fields.y;
      v199 = v382.fields.z;
      if ( !byte_4CAFC0C )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC0C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v200 = sqrtf((float)(v199 * v199) + (float)((float)(v197 * v197) + (float)(v198 * v198)));
      if ( v200 <= 0.00001 )
      {
        if ( !byte_4CAFC09 )
        {
          sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC09 = 1;
        }
        v204 = UnityEngine_Vector3_TypeInfo->static_fields;
        v201 = v204->zeroVector.fields.x;
        v202 = v204->zeroVector.fields.y;
        v203 = v204->zeroVector.fields.z;
      }
      else
      {
        v201 = v197 / v200;
        v202 = v198 / v200;
        v203 = v199 / v200;
      }
      v383.fields.y = normalizedDir_4;
      v383.fields.z = v341;
      offseta.fields.x = normalizedDir_8a;
      *(_QWORD *)&offseta.fields.y = __PAIR64__(LODWORD(v333), LODWORD(v120));
      v383.fields.x = normalizedDir;
      Custom2dSplineMesh__AddCap(this, v383, *(UnityEngine_Vector3_o *)&v201, offseta, v335, 1, v196);
      v205 = v340 + Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD;
      v384 = Custom2dSplineMesh__GetDirection(this, v205, v206);
      v208 = v384.fields.x;
      v209 = v384.fields.y;
      v210 = v384.fields.z;
      if ( !byte_4CAFC0C )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC0C = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v211 = sqrtf((float)(v210 * v210) + (float)((float)(v208 * v208) + (float)(v209 * v209)));
      if ( v211 <= 0.00001 )
      {
        if ( !byte_4CAFC09 )
        {
          sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
          byte_4CAFC09 = 1;
        }
        v214 = UnityEngine_Vector3_TypeInfo->static_fields;
        v212 = v214->zeroVector.fields.y;
        v213 = v214->zeroVector.fields.z;
        normalizedDir_8 = v214->zeroVector.fields.x;
      }
      else
      {
        normalizedDir_8 = v208 / v211;
        v212 = v209 / v211;
        v213 = v210 / v211;
      }
      v385 = Custom2dSplineMesh__GetOffset(this, v205, v207);
      v400.fields.x = normalizedDir_8;
      v215 = v385.fields.x;
      v216 = v385.fields.y;
      v217 = v385.fields.z;
      offsetb = v385;
      v385.fields.x = normalizedDir;
      v385.fields.y = normalizedDir_4;
      v385.fields.z = v341;
      v400.fields.y = v212;
      v400.fields.z = v213;
      v343 = v213;
      v345 = v212;
      Custom2dSplineMesh__AddCap(this, v385, v400, offsetb, v335, 0, v218);
      v219 = this->fields.flattenAxis;
      v220 = normalizedDir + v215;
      v221 = normalizedDir_4 + v216;
      if ( v219 == 2 )
      {
        v226 = normalizedDir;
        v222 = 0.0;
        v224 = 0.0;
        goto LABEL_216;
      }
      v222 = v341 + v217;
      if ( v219 != 1 )
      {
        if ( v219 )
        {
          v226 = normalizedDir;
          v224 = v341 - v217;
LABEL_216:
          v225 = v226 - v215;
          v223 = normalizedDir_4;
        }
        else
        {
          v223 = normalizedDir_4;
          v224 = v341 - v217;
          v220 = 0.0;
          v225 = 0.0;
        }
        v227 = v223 - v216;
        goto LABEL_218;
      }
      v224 = v341 - v217;
      v221 = 0.0;
      v227 = 0.0;
      v225 = normalizedDir - v215;
LABEL_218:
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v228 = v9->fields.m_CachedPtr;
      v229 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v228 )
        goto LABEL_334;
      v230 = SLODWORD(v9[1].klass);
      if ( (unsigned int)v230 >= *(_DWORD *)(v228 + 24) )
      {
        v386.fields.x = v220;
        v386.fields.y = v221;
        v386.fields.z = v222;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v386,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
      }
      else
      {
        v231 = (float *)(v228 + 12 * v230);
        LODWORD(v9[1].klass) = v230 + 1;
        v231[8] = v220;
        v231[9] = v221;
        v231[10] = v222;
      }
      v9 = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_334;
      v232 = v9->fields.m_CachedPtr;
      v233 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( !v232 )
        goto LABEL_334;
      v234 = SLODWORD(v9[1].klass);
      if ( (unsigned int)v234 >= *(_DWORD *)(v232 + 24) )
      {
        v387.fields.x = v225;
        v387.fields.y = v227;
        v387.fields.z = v224;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)v9,
          v387,
          *(const MethodInfo_3882E98 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
      }
      else
      {
        v235 = (float *)(v232 + 12 * v234);
        LODWORD(v9[1].klass) = v234 + 1;
        v235[8] = v225;
        v235[9] = v227;
        v235[10] = v224;
      }
      v236 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v388.fields.x = v220;
        v388.fields.y = v221;
        v388.fields.z = v222;
        v237 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v388, (const MethodInfo *)v5);
      }
      else
      {
        v237 = __PAIR64__(LODWORD(this->fields.lineVmin), 0);
      }
      v28 = v342;
      if ( !v236 )
        goto LABEL_334;
      v238 = v236->fields._items;
      v239 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v236->fields._version;
      if ( !v238 )
        goto LABEL_334;
      v240 = v236->fields._size;
      if ( (unsigned int)v240 >= LODWORD(v238->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v236,
          (UnityEngine_Vector2_o)v237,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
      }
      else
      {
        v236->fields._size = v240 + 1;
        v238->m_Items[v240] = (UnityEngine_Vector2_o)v237;
      }
      v241 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v389.fields.x = v225;
        v389.fields.y = v227;
        v389.fields.z = v224;
        v242 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v389, (const MethodInfo *)v5);
      }
      else
      {
        v242 = __PAIR64__(LODWORD(this->fields.lineVmax), 0);
      }
      if ( !v241 )
        goto LABEL_334;
      v243 = v241->fields._items;
      v244 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v241->fields._version;
      if ( !v243 )
        goto LABEL_334;
      v245 = v241->fields._size;
      if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v241,
          (UnityEngine_Vector2_o)v242,
          *(const MethodInfo_38805C0 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
      }
      else
      {
        v241->fields._size = v245 + 1;
        v243->m_Items[v245] = (UnityEngine_Vector2_o)v242;
      }
      if ( !byte_4CAFC07 )
      {
        sub_1C6BA08(&System_Math_TypeInfo);
        byte_4CAFC07 = 1;
      }
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      item.fields.x = (float)(v362 / Custom2dSplineMesh__GetWidth(this, rate, (const MethodInfo *)v5))
                    * this->fields.UVrate;
      v390 = Custom2dSplineMesh__GetPoint(this, v205, v246);
      v64 = v340;
      v33 = v390.fields.x;
      v61 = v390.fields.y;
      v62 = v390.fields.z;
LABEL_249:
      v64 = v28 + v64;
      v44 = v33;
      v63 = v61;
      v45 = v62;
      v391 = Custom2dSplineMesh__GetPoint(this, v64, v147);
      v33 = v391.fields.x;
      PathRate = this->fields.PathRate;
      v61 = v391.fields.y;
      v62 = v391.fields.z;
      if ( v64 >= PathRate )
        goto LABEL_250;
    }
    v78 = 0.0;
    v81 = 0.0;
    v82 = v359 - v371.fields.x;
LABEL_65:
    v80 = v361;
    goto LABEL_66;
  }
LABEL_250:
  if ( PathRate > 0.0 )
  {
    v392 = Custom2dSplineMesh__GetOffset(this, PathRate, (const MethodInfo *)v5);
    v247 = this->fields.flattenAxis;
    v248 = v332 + v392.fields.x;
    v249 = v331 + v392.fields.y;
    if ( v247 == 2 )
    {
      v250 = 0.0;
      v253 = 0.0;
      v252 = v332 - v392.fields.x;
      v254 = v331 - v392.fields.y;
    }
    else
    {
      v250 = v330 + v392.fields.z;
      if ( v247 == 1 )
      {
        v249 = 0.0;
        v254 = 0.0;
        v252 = v332 - v392.fields.x;
      }
      else
      {
        if ( v247 )
        {
          v252 = v332 - v392.fields.x;
          v251 = v331;
        }
        else
        {
          v251 = v331;
          v248 = 0.0;
          v252 = 0.0;
        }
        v254 = v251 - v392.fields.y;
      }
      v253 = v330 - v392.fields.z;
    }
    v9 = (UnityEngine_Object_o *)*p_verts;
    if ( *p_verts )
    {
      v255 = v9->fields.m_CachedPtr;
      v256 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(v9[1].klass);
      if ( v255 )
      {
        v257 = SLODWORD(v9[1].klass);
        if ( (unsigned int)v257 >= *(_DWORD *)(v255 + 24) )
        {
          v393.fields.x = v248;
          v393.fields.y = v249;
          v393.fields.z = v250;
          System_Collections_Generic_List_Vector3___AddWithResize(
            (System_Collections_Generic_List_Vector3__o *)v9,
            v393,
            *(const MethodInfo_3882E98 **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
        }
        else
        {
          v258 = (float *)(v255 + 12 * v257);
          LODWORD(v9[1].klass) = v257 + 1;
          v258[8] = v248;
          v258[9] = v249;
          v258[10] = v250;
        }
        v9 = (UnityEngine_Object_o *)*p_verts;
        if ( *p_verts )
        {
          v259 = v9->fields.m_CachedPtr;
          v260 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++HIDWORD(v9[1].klass);
          if ( v259 )
          {
            v261 = SLODWORD(v9[1].klass);
            if ( (unsigned int)v261 >= *(_DWORD *)(v259 + 24) )
            {
              v394.fields.x = v252;
              v394.fields.y = v254;
              v394.fields.z = v253;
              System_Collections_Generic_List_Vector3___AddWithResize(
                (System_Collections_Generic_List_Vector3__o *)v9,
                v394,
                *(const MethodInfo_3882E98 **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
            }
            else
            {
              v262 = (float *)(v259 + 12 * v261);
              LODWORD(v9[1].klass) = v261 + 1;
              v262[8] = v252;
              v262[9] = v254;
              v262[10] = v253;
            }
            v263 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v395.fields.x = v248;
              v395.fields.y = v249;
              v395.fields.z = v250;
              v264 = (unsigned __int64)Custom2dSplineMesh__GetUV_41790004(this, v395, (const MethodInfo *)v5);
              v265 = item.fields.x;
              if ( !v263 )
                goto LABEL_334;
            }
            else
            {
              v265 = item.fields.x;
              v264 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(item.fields.x));
              if ( !v263 )
                goto LABEL_334;
            }
            v266 = v263->fields._items;
            v267 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v263->fields._version;
            if ( !v266 )
              goto LABEL_334;
            v268 = v263->fields._size;
            if ( (unsigned int)v268 >= LODWORD(v266->max_length) )
            {
              System_Collections_Generic_List_Vector2___AddWithResize(
                v263,
                (UnityEngine_Vector2_o)v264,
                *(const MethodInfo_38805C0 **)(*(_QWORD *)(v267[4] + 192LL) + 112LL));
            }
            else
            {
              v263->fields._size = v268 + 1;
              v266->m_Items[v268] = (UnityEngine_Vector2_o)v264;
            }
            v269 = this->fields.uvs;
            if ( this->fields.StrictUVmode )
            {
              v396.fields.x = v252;
              v396.fields.y = v254;
              v396.fields.z = v253;
              v271 = Custom2dSplineMesh__GetUV_41790004(this, v396, (const MethodInfo *)v5);
              v270 = v271.fields.y;
              v265 = v271.fields.x;
              if ( !v269 )
                goto LABEL_334;
            }
            else
            {
              v270 = this->fields.lineVmax;
              if ( !v269 )
                goto LABEL_334;
            }
            v272 = v269->fields._items;
            v273 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v269->fields._version;
            if ( v272 )
            {
              v274 = v269->fields._size;
              if ( (unsigned int)v274 >= LODWORD(v272->max_length) )
              {
                v276 = v265;
                System_Collections_Generic_List_Vector2___AddWithResize(
                  v269,
                  *(UnityEngine_Vector2_o *)(&v270 - 1),
                  *(const MethodInfo_38805C0 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
              }
              else
              {
                v275 = (float *)(&v272->obj.klass + v274);
                v269->fields._size = v274 + 1;
                v275[8] = v265;
                v275[9] = v270;
              }
              v9 = (UnityEngine_Object_o *)*p_trianges;
              if ( *p_trianges )
              {
                v5 = (unsigned int)*p_vtxIdx;
                v277 = v9->fields.m_CachedPtr;
                v278 = Method_System_Collections_Generic_List_int__Add__;
                ++HIDWORD(v9[1].klass);
                if ( v277 )
                {
                  v279 = SLODWORD(v9[1].klass);
                  if ( (unsigned int)v279 >= *(_DWORD *)(v277 + 24) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)v9,
                      v5,
                      *(const MethodInfo_37E3950 **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
                    v9 = (UnityEngine_Object_o *)*p_trianges;
                    if ( !*p_trianges )
                      goto LABEL_334;
                  }
                  else
                  {
                    LODWORD(v9[1].klass) = v279 + 1;
                    *(_DWORD *)(v277 + 4 * v279 + 32) = v5;
                  }
                  v280 = *p_vtxIdx;
                  v281 = v9->fields.m_CachedPtr;
                  v282 = Method_System_Collections_Generic_List_int__Add__;
                  ++HIDWORD(v9[1].klass);
                  if ( v281 )
                  {
                    v283 = SLODWORD(v9[1].klass);
                    v5 = (unsigned int)(v280 + 2);
                    if ( (unsigned int)v283 >= *(_DWORD *)(v281 + 24) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        (System_Collections_Generic_List_int__o *)v9,
                        v5,
                        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
                      v9 = (UnityEngine_Object_o *)*p_trianges;
                      if ( !*p_trianges )
                        goto LABEL_334;
                    }
                    else
                    {
                      LODWORD(v9[1].klass) = v283 + 1;
                      *(_DWORD *)(v281 + 4 * v283 + 32) = v5;
                    }
                    v284 = *p_vtxIdx;
                    v285 = v9->fields.m_CachedPtr;
                    v286 = Method_System_Collections_Generic_List_int__Add__;
                    ++HIDWORD(v9[1].klass);
                    if ( v285 )
                    {
                      v287 = SLODWORD(v9[1].klass);
                      v5 = (unsigned int)(v284 + 1);
                      if ( (unsigned int)v287 >= *(_DWORD *)(v285 + 24) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          (System_Collections_Generic_List_int__o *)v9,
                          v5,
                          *(const MethodInfo_37E3950 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
                        v9 = (UnityEngine_Object_o *)*p_trianges;
                        if ( !*p_trianges )
                          goto LABEL_334;
                      }
                      else
                      {
                        LODWORD(v9[1].klass) = v287 + 1;
                        *(_DWORD *)(v285 + 4 * v287 + 32) = v5;
                      }
                      v288 = *p_vtxIdx;
                      v289 = v9->fields.m_CachedPtr;
                      v290 = Method_System_Collections_Generic_List_int__Add__;
                      ++HIDWORD(v9[1].klass);
                      if ( v289 )
                      {
                        v291 = SLODWORD(v9[1].klass);
                        v5 = (unsigned int)(v288 + 2);
                        if ( (unsigned int)v291 >= *(_DWORD *)(v289 + 24) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            (System_Collections_Generic_List_int__o *)v9,
                            v5,
                            *(const MethodInfo_37E3950 **)(*(_QWORD *)(v290[4] + 192LL) + 112LL));
                          v9 = (UnityEngine_Object_o *)*p_trianges;
                          if ( !*p_trianges )
                            goto LABEL_334;
                        }
                        else
                        {
                          LODWORD(v9[1].klass) = v291 + 1;
                          *(_DWORD *)(v289 + 4 * v291 + 32) = v5;
                        }
                        v292 = *p_vtxIdx;
                        v293 = v9->fields.m_CachedPtr;
                        v294 = Method_System_Collections_Generic_List_int__Add__;
                        ++HIDWORD(v9[1].klass);
                        if ( v293 )
                        {
                          v295 = SLODWORD(v9[1].klass);
                          v5 = (unsigned int)(v292 + 3);
                          if ( (unsigned int)v295 >= *(_DWORD *)(v293 + 24) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              (System_Collections_Generic_List_int__o *)v9,
                              v5,
                              *(const MethodInfo_37E3950 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
                            v9 = (UnityEngine_Object_o *)*p_trianges;
                            if ( !*p_trianges )
                              goto LABEL_334;
                          }
                          else
                          {
                            LODWORD(v9[1].klass) = v295 + 1;
                            *(_DWORD *)(v293 + 4 * v295 + 32) = v5;
                          }
                          v296 = *p_vtxIdx;
                          v297 = v9->fields.m_CachedPtr;
                          v298 = Method_System_Collections_Generic_List_int__Add__;
                          ++HIDWORD(v9[1].klass);
                          if ( v297 )
                          {
                            v299 = SLODWORD(v9[1].klass);
                            v5 = (unsigned int)(v296 + 1);
                            if ( (unsigned int)v299 >= *(_DWORD *)(v297 + 24) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                (System_Collections_Generic_List_int__o *)v9,
                                v5,
                                *(const MethodInfo_37E3950 **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
                            }
                            else
                            {
                              LODWORD(v9[1].klass) = v299 + 1;
                              *(_DWORD *)(v297 + 4 * v299 + 32) = v5;
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
    sub_1C6BC60(v9, v5);
  }
LABEL_312:
  if ( this->fields.DrawCap )
  {
    v397 = Custom2dSplineMesh__GetOffset(this, this->fields.PathRate, (const MethodInfo *)v5);
    v300 = v397.fields.x;
    v301 = v397.fields.y;
    v302 = v397.fields.z;
    v304 = Custom2dSplineMesh__GetWidth(this, this->fields.PathRate, v303);
    v398 = Custom2dSplineMesh__GetDirection(this, this->fields.PathRate, v305);
    v307 = v398.fields.x;
    v308 = v398.fields.y;
    v309 = v398.fields.z;
    if ( !byte_4CAFC0C )
    {
      sub_1C6BA08(&System_Math_TypeInfo);
      byte_4CAFC0C = 1;
    }
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v310 = sqrtf((float)(v309 * v309) + (float)((float)(v307 * v307) + (float)(v308 * v308)));
    if ( v310 <= 0.00001 )
    {
      if ( !byte_4CAFC09 )
      {
        sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
        byte_4CAFC09 = 1;
      }
      v314 = UnityEngine_Vector3_TypeInfo->static_fields;
      v311 = v314->zeroVector.fields.x;
      v312 = v314->zeroVector.fields.y;
      v313 = v314->zeroVector.fields.z;
    }
    else
    {
      v311 = v307 / v310;
      v312 = v308 / v310;
      v313 = v309 / v310;
    }
    v399.fields.y = v331;
    v399.fields.x = v332;
    v399.fields.z = v330;
    *(_QWORD *)&offsetc.fields.y = __PAIR64__(LODWORD(v302), LODWORD(v301));
    offsetc.fields.x = v300;
    Custom2dSplineMesh__AddCap(this, v399, *(UnityEngine_Vector3_o *)&v311, offsetc, v304, 1, v306);
  }
  v9 = (UnityEngine_Object_o *)*p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v315 = *v329;
  v9 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector3___ToArray(
                                 (System_Collections_Generic_List_Vector3__o *)v9,
                                 (const MethodInfo_3884A68 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  if ( !v315 )
    goto LABEL_334;
  UnityEngine_Mesh__set_vertices(v315, (UnityEngine_Vector3_array *)v9, 0);
  v9 = (UnityEngine_Object_o *)*p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v316 = *v329;
  v9 = (UnityEngine_Object_o *)System_Collections_Generic_List_int___ToArray(
                                 (System_Collections_Generic_List_int__o *)v9,
                                 (const MethodInfo_37E5408 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v316 )
    goto LABEL_334;
  UnityEngine_Mesh__set_triangles(v316, (System_Int32_array *)v9, 0);
  v9 = (UnityEngine_Object_o *)*p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v317 = *v329;
  v9 = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector2___ToArray(
                                 (System_Collections_Generic_List_Vector2__o *)v9,
                                 (const MethodInfo_38820DC *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  if ( !v317 )
    goto LABEL_334;
  UnityEngine_Mesh__set_uv(v317, (UnityEngine_Vector2_array *)v9, 0);
  v318 = *p_verts;
  if ( !*p_verts )
    goto LABEL_334;
  v319 = v318->fields._version + 1;
  v318->fields._size = 0;
  v318->fields._version = v319;
  v320 = *p_trianges;
  if ( !*p_trianges )
    goto LABEL_334;
  v321 = v320->fields._version + 1;
  v320->fields._size = 0;
  v320->fields._version = v321;
  v322 = *p_uvs;
  if ( !*p_uvs )
    goto LABEL_334;
  v323 = v322->fields._version + 1;
  v322->fields._size = 0;
  v322->fields._version = v323;
  v9 = (UnityEngine_Object_o *)*v329;
  if ( !*v329 )
    goto LABEL_334;
  UnityEngine_Mesh__RecalculateNormals((UnityEngine_Mesh_o *)v9, 0);
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
    sub_1C6BC60(this, index);
  if ( LODWORD(points->max_length) <= index )
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, index);
  v4 = (index + 1) / 3;
  if ( (unsigned int)v4 >= LODWORD(modes->max_length) )
    sub_1C6BC68(this);
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
    sub_1C6BC60(v5, v6);
  v8 = (index + 1) / 3;
  if ( (unsigned int)v8 >= LODWORD(curveWeight->max_length) )
    sub_1C6BC68(v5);
  return curveWeight->m_Items[v8];
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
  if ( !byte_4CAFC0C )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC0C = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v6 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v6 <= 0.00001 )
  {
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
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
  if ( !byte_4CAFC0C )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC0C = 1;
  }
  v19 = v13 - v14;
  v20 = v15 - v16;
  v21 = v17 - v18;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( v22 <= 0.00001 )
  {
    if ( !byte_4CAFC09 )
    {
      sub_1C6BA08(&UnityEngine_Vector3_TypeInfo);
      byte_4CAFC09 = 1;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Custom2dSplineMesh__GetPoint(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  UnityEngine_Vector3_o v5; // x0 OVERLAPPED
  const MethodInfo *v7; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  float innerT; // [xsp+2Ch] [xbp-14h] BYREF

  innerT = 0.0;
  *(_QWORD *)&v5.fields.x = Custom2dSplineMesh__GetWeightedPointIdxAndT(this, t, &innerT, v3);
  points = this->fields.points;
  if ( !points )
    sub_1C6BC60(*(_QWORD *)&v5.fields.x, *(_QWORD *)&v5.fields.z);
  max_length = points->max_length;
  if ( LODWORD(v5.fields.x) >= max_length
    || LODWORD(v5.fields.x) + 1 >= max_length
    || LODWORD(v5.fields.x) + 2 >= max_length
    || LODWORD(v5.fields.x) + 3 >= max_length )
  {
    sub_1C6BC68(*(_QWORD *)&v5.fields.x);
  }
  return Bezier__GetPoint_41773372(
           points->m_Items[SLODWORD(v5.fields.x)],
           points->m_Items[LODWORD(v5.fields.x) + 1],
           points->m_Items[LODWORD(v5.fields.x) + 2],
           v5,
           COERCE_FLOAT(*(_QWORD *)&points->m_Items[LODWORD(v5.fields.x) + 3].fields.x),
           v7);
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
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v10; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  if ( !transform )
    sub_1C6BC60(v7, v8);
  v10.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  v10.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
  v10.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
  return UnityEngine_Transform__TransformPoint(transform, v10, 0);
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
  __int64 v8; // x1
  int32_t flattenAxis; // w8
  float v10; // s1 OVERLAPPED
  float v11; // s2
  float v12; // s0
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  Point = Custom2dSplineMesh__GetPoint(this, t, v6);
  flattenAxis = this->fields.flattenAxis;
  v10 = Point.fields.y + this->fields.PointOffset.fields.y;
  v11 = Point.fields.z + this->fields.PointOffset.fields.z;
  if ( flattenAxis )
  {
    v12 = Point.fields.x + this->fields.PointOffset.fields.x;
    if ( flattenAxis == 1 )
    {
      v10 = 0.0;
    }
    else if ( flattenAxis == 2 )
    {
      v11 = 0.0;
    }
  }
  else
  {
    v12 = 0.0;
  }
  if ( !transform )
    sub_1C6BC60(v7, v8);
  return UnityEngine_Transform__TransformPoint(transform, *(UnityEngine_Vector3_o *)(&v10 - 1), 0);
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
    sub_1C6BC60(v3, v4);
  max_length_low = LODWORD(curveWeight->max_length);
  if ( (__int64)(max_length_low << 32) < 1 )
    return 0.0;
  v7 = 0;
  m_Items = curveWeight->m_Items;
  result = 0.0;
  do
  {
    if ( v7 >= max_length_low )
      sub_1C6BC68(v3);
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
  UnityEngine_Vector2_o UV_41790004; // kr00_8
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.StrictUVmode )
  {
    UV_41790004 = Custom2dSplineMesh__GetUV_41790004(this, pos, method);
    coordU = UV_41790004.fields.x;
    coordV = UV_41790004.fields.y;
  }
  v6 = coordU;
  v7 = coordV;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV_41790004(
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
    if ( !byte_4CAFAE9 )
    {
      sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
      byte_4CAFAE9 = 1;
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector3_o Custom2dSplineMesh__GetVelocity(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  int32_t WeightedPointIdxAndT; // w21
  UnityEngine_Vector3_o v6; // x0 OVERLAPPED
  const MethodInfo *v8; // x2
  struct UnityEngine_Vector3_array *points; // x8
  unsigned int max_length; // w12
  UnityEngine_Transform_o *v11; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v15; // s0
  float v16; // s1
  float v17; // s2
  float innerT; // [xsp+3Ch] [xbp-34h] BYREF
  UnityEngine_Vector3_o FirstDerivative_41773636; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
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
    sub_1C6BC68(*(_QWORD *)&v6.fields.x);
  }
  v11 = *(UnityEngine_Transform_o **)&v6.fields.x;
  FirstDerivative_41773636 = Bezier__GetFirstDerivative_41773636(
                               points->m_Items[WeightedPointIdxAndT],
                               points->m_Items[WeightedPointIdxAndT + 1],
                               points->m_Items[WeightedPointIdxAndT + 2],
                               v6,
                               COERCE_FLOAT(*(_QWORD *)&points->m_Items[WeightedPointIdxAndT + 3].fields.x),
                               v8);
  if ( !v11
    || (v20 = UnityEngine_Transform__TransformPoint(v11, FirstDerivative_41773636, 0),
        x = v20.fields.x,
        y = v20.fields.y,
        z = v20.fields.z,
        (*(_QWORD *)&v6.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_1C6BC60(*(_QWORD *)&v6.fields.x, *(_QWORD *)&v6.fields.z);
  }
  position = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)&v6.fields.x, 0);
  v15 = x - position.fields.x;
  v16 = y - position.fields.y;
  v17 = z - position.fields.z;
  result.fields.z = v17;
  result.fields.y = v16;
  result.fields.x = v15;
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
          sub_1C6BC68(v10);
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
    sub_1C6BC60(this, innerT);
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

  if ( (byte_4CB5D08 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB5D08 = 1;
  }
  meshFilter = this->fields.meshFilter;
  if ( !meshFilter
    || (UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0),
        (meshFilter = (UnityEngine_MeshFilter_o *)this->fields.drawMesh) == 0) )
  {
    sub_1C6BC60(meshFilter, method);
  }
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)meshFilter, 0);
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71659676(drawMesh, 0);
}


void Custom2dSplineMesh__RemoveMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0

  meshFilter = this->fields.meshFilter;
  if ( !meshFilter )
    sub_1C6BC60(0, method);
  UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0);
}


void Custom2dSplineMesh__Reset(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  unsigned int v7; // w8
  struct BezierControlPointMode_array *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4CB5D02 & 1) == 0 )
  {
    sub_1C6BA08(&BezierControlPointMode___TypeInfo);
    sub_1C6BA08(&float___TypeInfo);
    sub_1C6BA08(&UnityEngine_Vector3___TypeInfo);
    byte_4CB5D02 = 1;
  }
  v3 = sub_1C6BAB0(UnityEngine_Vector3___TypeInfo, 4);
  if ( !v3 )
    goto LABEL_12;
  v7 = *(_DWORD *)(v3 + 24);
  if ( !v7
    || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 1065353216, v7 == 1)
    || (*(_DWORD *)(v3 + 52) = 0, *(_QWORD *)(v3 + 44) = 0x40000000, v7 <= 2)
    || (*(_DWORD *)(v3 + 64) = 0, *(_QWORD *)(v3 + 56) = 1077936128, v7 == 3) )
  {
LABEL_11:
    sub_1C6BC68(v3);
  }
  *(_DWORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 68) = 1082130432;
  this->fields.points = (struct UnityEngine_Vector3_array *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.points, v3, v5, v6);
  v8 = (struct BezierControlPointMode_array *)sub_1C6BAB0(BezierControlPointMode___TypeInfo, 2);
  this->fields.modes = v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.modes, (int32_t)v8, v9, v10);
  v3 = sub_1C6BAB0(float___TypeInfo, 1);
  if ( !v3 )
LABEL_12:
    sub_1C6BC60(v3, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  *(_DWORD *)(v3 + 32) = 1065353216;
  this->fields.curveWeight = (struct System_Single_array *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.curveWeight, v3, v11, v12);
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
      v14 = UnityEngine_Quaternion__op_Multiply_71598412(v17, v16, 0);
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
        sub_1C6BC60(this, index);
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
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(modes->max_length) )
    sub_1C6BC68(this);
  modes->m_Items[v5] = mode;
  Custom2dSplineMesh__EnforceMode(this, index, *(const MethodInfo **)&mode);
}


void Custom2dSplineMesh__SetList(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Vector3__o *splinePos; // x0
  int v4; // w8

  if ( (byte_4CB5D09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__Clear__);
    byte_4CB5D09 = 1;
  }
  splinePos = this->fields.splinePos;
  if ( !splinePos )
    sub_1C6BC60(0, method);
  v4 = splinePos->fields._version + 1;
  splinePos->fields._size = 0;
  splinePos->fields._version = v4;
  System_Collections_Generic_List_Vector3___AddRange(
    splinePos,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.points,
    (const MethodInfo_38830C8 *)Method_System_Collections_Generic_List_Vector3__AddRange__);
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

  if ( (byte_4CB5D06 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_4CB5D06 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.meshFilter, (int32_t)Component_object, v4, v5);
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
  if ( (byte_4CB5D07 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    this = (Custom2dSplineMesh_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    byte_4CB5D07 = 1;
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
                       (const MethodInfo_3882B68 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
              v8 = v2->fields.points;
              if ( !v8 )
                break;
              if ( v7 >= LODWORD(v8->max_length) )
                sub_1C6BC68(this);
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
            sub_1C6BC60(this, method);
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
  if ( (byte_4CB5D03 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_float___ctor___78529424);
    sub_1C6BA08(&System_Collections_Generic_List_float__TypeInfo);
    this = (Custom2dSplineMesh_o *)sub_1C6BA08(&float___TypeInfo);
    byte_4CB5D03 = 1;
  }
  p_curveWeight = (CGThumbnailListItem_o *)&v2->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.curveWeight;
  if ( !curveWeight || (monitor_low = (unsigned __int64)curveWeight[1].monitor) == 0 )
  {
    modes = v2->fields.modes;
    if ( !modes )
      goto LABEL_18;
    v7 = sub_1C6BAB0(float___TypeInfo, (unsigned int)(LODWORD(modes->max_length) - 1));
    p_curveWeight->klass = (CGThumbnailListItem_c *)v7;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v2->fields.curveWeight, v7, v8, v9);
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
          sub_1C6BC68(this);
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
    v13 = (System_Collections_Generic_List_float__o *)sub_1C6BC54(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor_58875324(
      v13,
      curveWeight,
      (const MethodInfo_3825DBC *)Method_System_Collections_Generic_List_float___ctor___78529424);
    if ( p_curveWeight->klass && v13 )
    {
      System_Collections_Generic_List_float___RemoveAt(
        v13,
        LODWORD(p_curveWeight->klass->_1.namespaze) - 1,
        (const MethodInfo_3827C70 *)Method_System_Collections_Generic_List_float__RemoveAt__);
      v14 = System_Collections_Generic_List_float___ToArray(
              v13,
              (const MethodInfo_3827FA8 *)Method_System_Collections_Generic_List_float__ToArray__);
      p_curveWeight->klass = (CGThumbnailListItem_c *)v14;
      sub_1C6B9AC(p_curveWeight, (int32_t)v14, v15, v16);
      return;
    }
LABEL_18:
    sub_1C6BC60(this, method);
  }
}


int32_t Custom2dSplineMesh__get_ControlPointCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C6BC60(this, method);
  return points->max_length;
}


int32_t Custom2dSplineMesh__get_CurveCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned __int64 v3; // x8

  points = this->fields.points;
  if ( !points )
    sub_1C6BC60(this, method);
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
      sub_1C6BC60(v9, v10);
    max_length_low = LODWORD(curveWeight->max_length);
    if ( (__int64)(max_length_low << 32) >= 1 )
    {
      v15 = 0;
      m_Items = curveWeight->m_Items;
      v17 = 0.0;
      do
      {
        if ( v15 >= max_length_low )
          sub_1C6BC68(v9);
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
    result = 1;
    *jumps = v12;
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