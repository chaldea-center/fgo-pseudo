void Custom2dSplineMesh___cctor(const MethodInfo *method)
{
  if ( (byte_59380CB & 1) == 0 )
  {
    sub_21FFC50(&Custom2dSplineMesh_TypeInfo);
    byte_59380CB = 1;
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

  if ( (byte_59380CA & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_59380CA = 1;
  }
  v3 = System_Collections_Generic_List_Vector3__TypeInfo;
  this->fields.PathRate = 1.0;
  this->fields.UVrate = 0.5;
  *(_QWORD *)&this->fields.complexity = 0x3F7D70A441A00000LL;
  this->fields.DrawWidth = 3.0;
  v4 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(v3);
  System_Collections_Generic_List_Vector3____ctor(
    v4,
    (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.splinePos = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.splinePos, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  float v12; // s3 OVERLAPPED
  float v13; // s14
  int32_t CapComplexity; // w8
  int32_t flattenAxis; // w8
  float v16; // s1
  float v17; // s0
  float v18; // s9
  float v19; // s11
  float v20; // s2
  float v21; // s12
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s13
  float v26; // s14
  float v27; // s15
  int32_t v28; // w8
  float v29; // s9
  float v30; // s14
  float v31; // s15
  float v32; // s13
  float v33; // s12
  float v34; // s11
  float v35; // s1
  float v36; // s2
  const MethodInfo *v37; // x1
  float v38; // s9
  float v39; // s13
  int32_t v40; // w8
  float v41; // s14
  float v42; // s3 OVERLAPPED
  float v43; // s12
  int32_t v44; // w8
  float v45; // s12
  float v46; // s10
  float v47; // s11
  float v48; // s8
  float v49; // s9
  System_Collections_Generic_List_Vector3__o *verts; // x0
  struct UnityEngine_Vector3_array *items; // x8
  _QWORD *v52; // x9
  int32_t size; // w10
  float *v54; // x8
  struct UnityEngine_Vector3_array *v55; // x8
  _QWORD *v56; // x9
  int32_t v57; // w10
  float *v58; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x21
  unsigned __int64 UV_48509320; // kr00_8
  struct UnityEngine_Vector2_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  struct System_Collections_Generic_List_Vector2__o *v64; // x21
  unsigned __int64 v65; // kr08_8
  struct UnityEngine_Vector2_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  int32_t v69; // w8
  float v70; // s11
  float v71; // s12
  float v72; // s9
  float v73; // s0
  float v74; // s13
  float v75; // s15
  float v76; // s14
  float v77; // s1
  struct UnityEngine_Vector3_array *v78; // x8
  _QWORD *v79; // x9
  int32_t v80; // w10
  float *v81; // x8
  struct UnityEngine_Vector3_array *v82; // x8
  _QWORD *v83; // x9
  int32_t v84; // w10
  float *v85; // x8
  struct System_Collections_Generic_List_Vector2__o *v86; // x21
  float v87; // s8
  unsigned __int64 v88; // kr10_8
  struct UnityEngine_Vector2_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  struct System_Collections_Generic_List_Vector2__o *v92; // x21
  float capVmax; // s1 OVERLAPPED
  UnityEngine_Vector2_o v94; // kr18_8
  struct UnityEngine_Vector2_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  float *v98; // x8
  float v99; // s0
  int32_t v100; // w8
  float v101; // s0
  float v102; // s1
  float v103; // s11
  float v104; // s12
  float v105; // s2
  float v106; // s13
  float v107; // s8
  float v108; // s9
  float v109; // s10
  struct UnityEngine_Vector3_array *v110; // x8
  _QWORD *v111; // x9
  int32_t v112; // w10
  float *v113; // x8
  struct UnityEngine_Vector3_array *v114; // x8
  _QWORD *v115; // x9
  int32_t v116; // w10
  float *v117; // x8
  struct System_Collections_Generic_List_Vector2__o *v118; // x20
  unsigned __int64 v119; // kr20_8
  struct UnityEngine_Vector2_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  struct System_Collections_Generic_List_Vector2__o *v123; // x20
  float v124; // s0 OVERLAPPED
  float v125; // s1
  Custom2dSplineMesh_o *v126; // x0
  float v127; // s2
  UnityEngine_Vector2_o v128; // kr78_8
  float v129; // s0
  struct UnityEngine_Vector3_array *v130; // x8
  _QWORD *v131; // x9
  int32_t v132; // w10
  float *v133; // x8
  struct UnityEngine_Vector3_array *v134; // x8
  _QWORD *v135; // x9
  int32_t v136; // w10
  float *v137; // x8
  struct System_Collections_Generic_List_Vector2__o *v138; // x21
  UnityEngine_Vector2_o v139; // kr28_8
  struct UnityEngine_Vector2_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  struct System_Collections_Generic_List_Vector2__o *v143; // x21
  UnityEngine_Vector2_o v144; // kr30_8
  struct UnityEngine_Vector2_array *v145; // x8
  _QWORD *v146; // x9
  __int64 v147; // x10
  int32_t v148; // w8
  float v149; // s0
  float v150; // s2
  float v151; // s1
  float v152; // s8
  float v153; // s10
  float v154; // s9
  struct UnityEngine_Vector3_array *v155; // x8
  _QWORD *v156; // x9
  int32_t v157; // w10
  float *v158; // x8
  struct System_Collections_Generic_List_Vector2__o *v159; // x21
  UnityEngine_Vector2_o v160; // kr38_8
  struct UnityEngine_Vector2_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  int32_t v164; // w8
  int v165; // w21
  int v166; // w26
  float v167; // s13
  float v168; // s11
  float v169; // s12
  int32_t v170; // w8
  float v171; // s9
  float v172; // s8
  float v173; // s14
  struct UnityEngine_Vector3_array *v174; // x8
  _QWORD *v175; // x9
  int32_t v176; // w10
  float *v177; // x8
  struct System_Collections_Generic_List_Vector2__o *v178; // x20
  UnityEngine_Vector2_o v179; // kr40_8
  struct UnityEngine_Vector2_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  struct UnityEngine_Vector3_array *v183; // x8
  _QWORD *v184; // x9
  __int64 v185; // x10
  int v186; // w20
  struct UnityEngine_Vector3_array *v187; // x8
  int32_t vtxIdx; // w10
  _QWORD *v189; // x9
  __int64 v190; // x11
  struct UnityEngine_Vector3_array *v191; // x8
  int32_t v192; // w10
  _QWORD *v193; // x9
  __int64 v194; // x11
  int32_t v195; // w8
  float v196; // s1
  float v197; // s2
  float v198; // s15
  int32_t v199; // w8
  float v200; // s11
  struct UnityEngine_Vector3_array *v201; // x8
  _QWORD *v202; // x9
  int32_t v203; // w10
  float *v204; // x8
  struct UnityEngine_Vector3_array *v205; // x8
  _QWORD *v206; // x9
  int32_t v207; // w10
  float *v208; // x8
  struct System_Collections_Generic_List_Vector2__o *v209; // x21
  UnityEngine_Vector2_o v210; // kr48_8
  struct UnityEngine_Vector2_array *v211; // x8
  _QWORD *v212; // x9
  __int64 v213; // x10
  struct System_Collections_Generic_List_Vector2__o *v214; // x21
  UnityEngine_Vector2_o v215; // kr50_8
  struct UnityEngine_Vector2_array *v216; // x8
  _QWORD *v217; // x9
  __int64 v218; // x10
  int32_t v219; // w8
  float v220; // s11
  float v221; // s9
  float v222; // s12
  float v223; // s0
  float v224; // s15
  float v225; // s13
  float v226; // s14
  float v227; // s1
  struct UnityEngine_Vector3_array *v228; // x8
  _QWORD *v229; // x9
  int32_t v230; // w10
  float *v231; // x8
  struct UnityEngine_Vector3_array *v232; // x8
  _QWORD *v233; // x9
  int32_t v234; // w10
  float *v235; // x8
  struct System_Collections_Generic_List_Vector2__o *v236; // x21
  UnityEngine_Vector2_o v237; // kr58_8
  struct UnityEngine_Vector2_array *v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  struct System_Collections_Generic_List_Vector2__o *v241; // x21
  UnityEngine_Vector2_o v242; // kr60_8
  struct UnityEngine_Vector2_array *v243; // x8
  _QWORD *v244; // x9
  __int64 v245; // x10
  const MethodInfo *v246; // x1
  float v247; // s11
  float v248; // s13
  int32_t v249; // w8
  float v250; // s12
  float v251; // s14
  struct UnityEngine_Vector3_array *v252; // x8
  _QWORD *v253; // x9
  __int64 v254; // x10
  struct UnityEngine_Vector3_array *v255; // x8
  int32_t v256; // w10
  _QWORD *v257; // x9
  __int64 v258; // x11
  struct UnityEngine_Vector3_array *v259; // x8
  int32_t v260; // w10
  _QWORD *v261; // x9
  __int64 v262; // x11
  unsigned int max_length; // w12
  struct UnityEngine_Vector3_array *v264; // x8
  _QWORD *v265; // x9
  __int64 v266; // x10
  struct UnityEngine_Vector3_array *v267; // x8
  int32_t v268; // w10
  _QWORD *v269; // x9
  __int64 v270; // x11
  int32_t v271; // w10
  struct UnityEngine_Vector3_array *v272; // x8
  _QWORD *v273; // x9
  int32_t v274; // w10
  float *v275; // x8
  struct System_Collections_Generic_List_Vector2__o *v276; // x20
  UnityEngine_Vector2_o v277; // kr68_8
  struct UnityEngine_Vector2_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  int32_t v281; // w8
  float v282; // s8
  int32_t v283; // w8
  float v284; // s9
  struct UnityEngine_Vector3_array *v285; // x8
  _QWORD *v286; // x9
  int32_t v287; // w10
  float *v288; // x8
  struct UnityEngine_Vector3_array *v289; // x8
  _QWORD *v290; // x9
  int32_t v291; // w10
  float *v292; // x8
  struct System_Collections_Generic_List_Vector2__o *v293; // x20
  UnityEngine_Vector2_o v294; // kr70_8
  struct UnityEngine_Vector2_array *v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  struct UnityEngine_Vector2_array *v298; // x8
  _QWORD *v299; // x9
  __int64 v300; // x10
  struct UnityEngine_Vector3_array *v301; // x8
  _QWORD *v302; // x9
  __int64 v303; // x10
  struct UnityEngine_Vector3_array *v304; // x8
  int32_t v305; // w10
  _QWORD *v306; // x9
  __int64 v307; // x11
  struct UnityEngine_Vector3_array *v308; // x8
  int32_t v309; // w10
  _QWORD *v310; // x9
  __int64 v311; // x11
  struct UnityEngine_Vector3_array *v312; // x8
  int32_t v313; // w10
  _QWORD *v314; // x9
  __int64 v315; // x11
  struct UnityEngine_Vector3_array *v316; // x8
  int32_t v317; // w10
  _QWORD *v318; // x9
  __int64 v319; // x11
  struct UnityEngine_Vector3_array *v320; // x8
  int32_t v321; // w10
  _QWORD *v322; // x9
  __int64 v323; // x11
  int32_t v324; // w1
  float v325; // [xsp+4h] [xbp-ACh]
  float v326; // [xsp+4h] [xbp-ACh]
  float v327; // [xsp+8h] [xbp-A8h]
  float v328; // [xsp+8h] [xbp-A8h]
  float x; // [xsp+10h] [xbp-A0h]
  float v330; // [xsp+1Ch] [xbp-94h]
  float v331; // [xsp+68h] [xbp-48h]
  float v332; // [xsp+6Ch] [xbp-44h]
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
  UnityEngine_Vector3_o v364; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v365; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v366; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v367; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v368; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v369; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v370; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v371; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v372; // 0:s1.4,4:s2.4,8:s3.4

  z = normalizedDir.fields.z;
  y = normalizedDir.fields.y;
  v9 = pos.fields.z;
  v10 = isTail;
  x = normalizedDir.fields.x;
  v331 = pos.fields.x;
  v332 = pos.fields.y;
  if ( (byte_59380C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Add__);
    byte_59380C9 = 1;
  }
  v13 = offset.fields.y;
  v12 = offset.fields.z;
  if ( !this->fields.StrictUVmode )
  {
LABEL_7:
    v325 = y;
    v327 = z;
    if ( !v10 )
    {
      flattenAxis = this->fields.flattenAxis;
      v16 = v332 - (float)(y * width);
      v17 = v331 - (float)(x * width);
      v18 = offset.fields.y + v16;
      v19 = offset.fields.x + v17;
      if ( flattenAxis == 2 )
      {
        v25 = v17 - offset.fields.x;
        v26 = v16 - offset.fields.y;
        v21 = 0.0;
        v27 = 0.0;
      }
      else
      {
        v20 = v9 - (float)(v327 * width);
        v21 = offset.fields.z + v20;
        if ( flattenAxis == 1 )
        {
          v25 = v17 - offset.fields.x;
          v27 = v20 - offset.fields.z;
          v18 = 0.0;
          v26 = 0.0;
        }
        else
        {
          v22 = v17 - offset.fields.x;
          v23 = v16 - offset.fields.y;
          v24 = v20 - offset.fields.z;
          if ( flattenAxis )
          {
            v25 = v22;
          }
          else
          {
            v19 = 0.0;
            v25 = 0.0;
          }
          v26 = v23;
          v27 = v24;
        }
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      items = verts->fields._items;
      v52 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !items )
        goto LABEL_374;
      size = verts->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        v334.fields.x = v19;
        v334.fields.y = v18;
        v334.fields.z = v21;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v334,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = (float *)((char *)items + 12 * size);
        verts->fields._size = size + 1;
        v54[8] = v19;
        v54[9] = v18;
        v54[10] = v21;
      }
      verts = this->fields.verts;
      if ( !verts )
        goto LABEL_374;
      v55 = verts->fields._items;
      v56 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++verts->fields._version;
      if ( !v55 )
        goto LABEL_374;
      v57 = verts->fields._size;
      if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
      {
        v335.fields.x = v25;
        v335.fields.y = v26;
        v335.fields.z = v27;
        System_Collections_Generic_List_Vector3___AddWithResize(
          verts,
          v335,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = (float *)((char *)v55 + 12 * v57);
        verts->fields._size = v57 + 1;
        v58[8] = v25;
        v58[9] = v26;
        v58[10] = v27;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v336.fields.x = v19;
        v336.fields.y = v18;
        v336.fields.z = v21;
        UV_48509320 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v336, (const MethodInfo *)isTail);
        if ( !uvs )
          goto LABEL_374;
      }
      else
      {
        UV_48509320 = __PAIR64__(LODWORD(this->fields.capVmin), 0);
        if ( !uvs )
          goto LABEL_374;
      }
      v61 = uvs->fields._items;
      v62 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++uvs->fields._version;
      if ( !v61 )
        goto LABEL_374;
      v63 = uvs->fields._size;
      if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          (UnityEngine_Vector2_o)UV_48509320,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = v63 + 1;
        v61->m_Items[v63] = (UnityEngine_Vector2_o)UV_48509320;
      }
      v64 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v337.fields.x = v25;
        v337.fields.y = v26;
        v337.fields.z = v27;
        v65 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v337, (const MethodInfo *)isTail);
      }
      else
      {
        v65 = __PAIR64__(LODWORD(this->fields.capVmax), 0);
      }
      v13 = offset.fields.y;
      if ( !v64 )
        goto LABEL_374;
      v66 = v64->fields._items;
      v67 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v64->fields._version;
      if ( !v66 )
        goto LABEL_374;
      v68 = v64->fields._size;
      if ( (unsigned int)v68 >= LODWORD(v66->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v64,
          (UnityEngine_Vector2_o)v65,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v64->fields._size = v68 + 1;
        v66->m_Items[v68] = (UnityEngine_Vector2_o)v65;
      }
      v12 = offset.fields.z;
    }
    v69 = this->fields.flattenAxis;
    v70 = v331 + offset.fields.x;
    v71 = v332 + v13;
    if ( v69 == 2 )
    {
      v77 = v331;
      v73 = v332;
      v72 = 0.0;
      v74 = 0.0;
    }
    else
    {
      v72 = v9 + v12;
      if ( v69 == 1 )
      {
        v74 = v9 - v12;
        v71 = 0.0;
        v76 = 0.0;
        v75 = v331 - offset.fields.x;
LABEL_65:
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
              v338.fields.x = v70;
              v338.fields.y = v71;
              v338.fields.z = v72;
              System_Collections_Generic_List_Vector3___AddWithResize(
                verts,
                v338,
                *(const MethodInfo_44AF470 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
            }
            else
            {
              v81 = (float *)((char *)v78 + 12 * v80);
              verts->fields._size = v80 + 1;
              v81[8] = v70;
              v81[9] = v71;
              v81[10] = v72;
            }
            verts = this->fields.verts;
            if ( verts )
            {
              v82 = verts->fields._items;
              v83 = Method_System_Collections_Generic_List_Vector3__Add__;
              ++verts->fields._version;
              if ( v82 )
              {
                v84 = verts->fields._size;
                if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
                {
                  v339.fields.x = v75;
                  v339.fields.y = v76;
                  v339.fields.z = v74;
                  System_Collections_Generic_List_Vector3___AddWithResize(
                    verts,
                    v339,
                    *(const MethodInfo_44AF470 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                }
                else
                {
                  v85 = (float *)((char *)v82 + 12 * v84);
                  verts->fields._size = v84 + 1;
                  v85[8] = v75;
                  v85[9] = v76;
                  v85[10] = v74;
                }
                v86 = this->fields.uvs;
                v87 = v10 ? 0.75 : 0.25;
                if ( this->fields.StrictUVmode )
                {
                  v340.fields.x = v70;
                  v340.fields.y = v71;
                  v340.fields.z = v72;
                  v88 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v340, (const MethodInfo *)isTail);
                  if ( !v86 )
                    goto LABEL_374;
                }
                else
                {
                  v88 = __PAIR64__(LODWORD(this->fields.capVmin), LODWORD(v87));
                  if ( !v86 )
                    goto LABEL_374;
                }
                v89 = v86->fields._items;
                v90 = Method_System_Collections_Generic_List_Vector2__Add__;
                ++v86->fields._version;
                if ( v89 )
                {
                  v91 = v86->fields._size;
                  if ( (unsigned int)v91 >= LODWORD(v89->max_length) )
                  {
                    System_Collections_Generic_List_Vector2___AddWithResize(
                      v86,
                      (UnityEngine_Vector2_o)v88,
                      *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v86->fields._size = v91 + 1;
                    v89->m_Items[v91] = (UnityEngine_Vector2_o)v88;
                  }
                  v92 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v341.fields.x = v75;
                    v341.fields.y = v76;
                    v341.fields.z = v74;
                    v94 = Custom2dSplineMesh__GetUV_48509320(this, v341, (const MethodInfo *)isTail);
                    capVmax = v94.fields.y;
                    v87 = v94.fields.x;
                  }
                  else
                  {
                    capVmax = this->fields.capVmax;
                  }
                  if ( v92 )
                  {
                    v95 = v92->fields._items;
                    v96 = Method_System_Collections_Generic_List_Vector2__Add__;
                    ++v92->fields._version;
                    if ( v95 )
                    {
                      v97 = v92->fields._size;
                      if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
                      {
                        v99 = v87;
                        System_Collections_Generic_List_Vector2___AddWithResize(
                          v92,
                          *(UnityEngine_Vector2_o *)(&capVmax - 1),
                          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v98 = (float *)(&v95->obj.klass + v97);
                        v92->fields._size = v97 + 1;
                        v98[8] = v87;
                        v98[9] = capVmax;
                      }
                      if ( v10 )
                      {
                        v100 = this->fields.flattenAxis;
                        v101 = v331 + (float)(x * width);
                        v102 = v332 + (float)(v325 * width);
                        v103 = offset.fields.x + v101;
                        v104 = offset.fields.y + v102;
                        if ( v100 == 2 )
                        {
                          v109 = v101 - offset.fields.x;
                          v108 = v102 - offset.fields.y;
                          v106 = 0.0;
                          v107 = 0.0;
                        }
                        else
                        {
                          v105 = v9 + (float)(v327 * width);
                          v106 = offset.fields.z + v105;
                          v107 = v105 - offset.fields.z;
                          if ( v100 == 1 )
                          {
                            v109 = v101 - offset.fields.x;
                            v104 = 0.0;
                            v108 = 0.0;
                          }
                          else
                          {
                            v108 = v102 - offset.fields.y;
                            if ( v100 )
                            {
                              v109 = v101 - offset.fields.x;
                            }
                            else
                            {
                              v103 = 0.0;
                              v109 = 0.0;
                            }
                          }
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
                          v342.fields.x = v103;
                          v342.fields.y = v104;
                          v342.fields.z = v106;
                          System_Collections_Generic_List_Vector3___AddWithResize(
                            verts,
                            v342,
                            *(const MethodInfo_44AF470 **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v113 = (float *)((char *)v110 + 12 * v112);
                          verts->fields._size = v112 + 1;
                          v113[8] = v103;
                          v113[9] = v104;
                          v113[10] = v106;
                        }
                        verts = this->fields.verts;
                        if ( !verts )
                          goto LABEL_374;
                        v114 = verts->fields._items;
                        v115 = Method_System_Collections_Generic_List_Vector3__Add__;
                        ++verts->fields._version;
                        if ( !v114 )
                          goto LABEL_374;
                        v116 = verts->fields._size;
                        if ( (unsigned int)v116 >= LODWORD(v114->max_length) )
                        {
                          v343.fields.x = v109;
                          v343.fields.y = v108;
                          v343.fields.z = v107;
                          System_Collections_Generic_List_Vector3___AddWithResize(
                            verts,
                            v343,
                            *(const MethodInfo_44AF470 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v117 = (float *)((char *)v114 + 12 * v116);
                          verts->fields._size = v116 + 1;
                          v117[8] = v109;
                          v117[9] = v108;
                          v117[10] = v107;
                        }
                        v118 = this->fields.uvs;
                        if ( this->fields.StrictUVmode )
                        {
                          v344.fields.x = v103;
                          v344.fields.y = v104;
                          v344.fields.z = v106;
                          v119 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(
                                                     this,
                                                     v344,
                                                     (const MethodInfo *)isTail);
                          if ( !v118 )
                            goto LABEL_374;
                        }
                        else
                        {
                          v119 = __PAIR64__(LODWORD(this->fields.capVmin), 1.0);
                          if ( !v118 )
                            goto LABEL_374;
                        }
                        v120 = v118->fields._items;
                        v121 = Method_System_Collections_Generic_List_Vector2__Add__;
                        ++v118->fields._version;
                        if ( !v120 )
                          goto LABEL_374;
                        v122 = v118->fields._size;
                        if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
                        {
                          System_Collections_Generic_List_Vector2___AddWithResize(
                            v118,
                            (UnityEngine_Vector2_o)v119,
                            *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v118->fields._size = v122 + 1;
                          v120->m_Items[v122] = (UnityEngine_Vector2_o)v119;
                        }
                        v123 = this->fields.uvs;
                        if ( !this->fields.StrictUVmode )
                        {
                          v128 = (UnityEngine_Vector2_o)__PAIR64__(LODWORD(this->fields.capVmax), 1.0);
                          if ( !v123 )
                            goto LABEL_374;
                          goto LABEL_343;
                        }
                        v124 = v109;
                        v125 = v108;
                        v126 = this;
                        v127 = v107;
LABEL_342:
                        v128 = Custom2dSplineMesh__GetUV_48509320(
                                 v126,
                                 *(UnityEngine_Vector3_o *)&v124,
                                 (const MethodInfo *)isTail);
                        if ( !v123 )
                          goto LABEL_374;
LABEL_343:
                        v298 = v123->fields._items;
                        v299 = Method_System_Collections_Generic_List_Vector2__Add__;
                        ++v123->fields._version;
                        if ( !v298 )
                          goto LABEL_374;
                        v300 = v123->fields._size;
                        if ( (unsigned int)v300 >= LODWORD(v298->max_length) )
                        {
                          System_Collections_Generic_List_Vector2___AddWithResize(
                            v123,
                            v128,
                            *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v123->fields._size = v300 + 1;
                          v298->m_Items[v300] = v128;
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
        sub_21FFECC(verts, isTail);
      }
      if ( !v69 )
      {
        v73 = v332;
        v74 = v9 - v12;
        v70 = 0.0;
        v75 = 0.0;
LABEL_64:
        v76 = v73 - v13;
        goto LABEL_65;
      }
      v77 = v331;
      v73 = v332;
      v74 = v9 - v12;
    }
    v75 = v77 - offset.fields.x;
    goto LABEL_64;
  }
  CapComplexity = this->fields.CapComplexity;
  if ( CapComplexity != 2 )
  {
    if ( CapComplexity != 1 )
    {
      if ( !CapComplexity )
        goto LABEL_7;
      v44 = this->fields.flattenAxis;
      if ( v44 )
      {
        v45 = v9;
        v46 = offset.fields.x;
        if ( v44 == 1 )
        {
          v48 = v331;
          v49 = 0.0;
        }
        else
        {
          if ( v44 == 2 )
          {
            v47 = 0.0;
            v48 = v331;
            v49 = v332;
LABEL_161:
            verts = this->fields.verts;
            if ( !verts )
              goto LABEL_374;
            v155 = verts->fields._items;
            v156 = Method_System_Collections_Generic_List_Vector3__Add__;
            ++verts->fields._version;
            if ( !v155 )
              goto LABEL_374;
            v157 = verts->fields._size;
            if ( (unsigned int)v157 >= LODWORD(v155->max_length) )
            {
              v349.fields.x = v48;
              v349.fields.y = v49;
              v349.fields.z = v47;
              System_Collections_Generic_List_Vector3___AddWithResize(
                verts,
                v349,
                *(const MethodInfo_44AF470 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
            }
            else
            {
              v158 = (float *)((char *)v155 + 12 * v157);
              verts->fields._size = v157 + 1;
              v158[8] = v48;
              v158[9] = v49;
              v158[10] = v47;
            }
            v350.fields.x = v48;
            v350.fields.y = v49;
            v159 = this->fields.uvs;
            v350.fields.z = v47;
            v160 = Custom2dSplineMesh__GetUV_48509320(this, v350, (const MethodInfo *)isTail);
            if ( !v159 )
              goto LABEL_374;
            v161 = v159->fields._items;
            v162 = Method_System_Collections_Generic_List_Vector2__Add__;
            ++v159->fields._version;
            if ( !v161 )
              goto LABEL_374;
            v163 = v159->fields._size;
            if ( (unsigned int)v163 >= LODWORD(v161->max_length) )
            {
              System_Collections_Generic_List_Vector2___AddWithResize(
                v159,
                v160,
                *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
            }
            else
            {
              v159->fields._size = v163 + 1;
              v161->m_Items[v163] = v160;
            }
            v164 = this->fields.CapComplexity;
            v165 = v164 + 1;
            if ( v164 + 1 >= 0 )
            {
              v330 = v45;
              v166 = 0;
              if ( v10 )
                v167 = -offset.fields.z;
              else
                v167 = offset.fields.z;
              if ( v10 )
                v168 = -v46;
              else
                v168 = v46;
              if ( v10 )
                v169 = -offset.fields.y;
              else
                v169 = offset.fields.y;
              do
              {
                v370.fields.x = v168;
                v370.fields.y = v169;
                v370.fields.z = v167;
                v351 = Custom2dSplineMesh__RotateVec3(
                         this,
                         (float)((float)v166 * 180.0) / (float)v165,
                         v370,
                         (const MethodInfo *)isTail);
                v170 = this->fields.flattenAxis;
                v171 = v332 + v351.fields.y;
                v172 = v330 + v351.fields.z;
                if ( v170 )
                {
                  v173 = v331 + v351.fields.x;
                  if ( v170 == 1 )
                  {
                    v171 = 0.0;
                  }
                  else if ( v170 == 2 )
                  {
                    v172 = 0.0;
                  }
                }
                else
                {
                  v173 = 0.0;
                }
                verts = this->fields.verts;
                if ( !verts )
                  goto LABEL_374;
                v174 = verts->fields._items;
                v175 = Method_System_Collections_Generic_List_Vector3__Add__;
                ++verts->fields._version;
                if ( !v174 )
                  goto LABEL_374;
                v176 = verts->fields._size;
                if ( (unsigned int)v176 >= LODWORD(v174->max_length) )
                {
                  v352.fields.x = v173;
                  v352.fields.y = v171;
                  v352.fields.z = v172;
                  System_Collections_Generic_List_Vector3___AddWithResize(
                    verts,
                    v352,
                    *(const MethodInfo_44AF470 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
                }
                else
                {
                  v177 = (float *)((char *)v174 + 12 * v176);
                  verts->fields._size = v176 + 1;
                  v177[8] = v173;
                  v177[9] = v171;
                  v177[10] = v172;
                }
                v353.fields.x = v173;
                v353.fields.y = v171;
                v178 = this->fields.uvs;
                v353.fields.z = v172;
                v179 = Custom2dSplineMesh__GetUV_48509320(this, v353, (const MethodInfo *)isTail);
                if ( !v178 )
                  goto LABEL_374;
                v180 = v178->fields._items;
                v181 = Method_System_Collections_Generic_List_Vector2__Add__;
                ++v178->fields._version;
                if ( !v180 )
                  goto LABEL_374;
                v182 = v178->fields._size;
                if ( (unsigned int)v182 >= LODWORD(v180->max_length) )
                {
                  System_Collections_Generic_List_Vector2___AddWithResize(
                    v178,
                    v179,
                    *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
                }
                else
                {
                  v178->fields._size = v182 + 1;
                  v180->m_Items[v182] = v179;
                }
                if ( v166 <= 0 )
                {
                  v186 = v166 + 1;
                }
                else
                {
                  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                  if ( !verts )
                    goto LABEL_374;
                  v183 = verts->fields._items;
                  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
                  v184 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v183 )
                    goto LABEL_374;
                  v185 = verts->fields._size;
                  if ( (unsigned int)v185 >= LODWORD(v183->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
                    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                    if ( !verts )
                      goto LABEL_374;
                  }
                  else
                  {
                    verts->fields._size = v185 + 1;
                    *((_DWORD *)&v183->m_Items[0].fields.x + v185) = isTail;
                  }
                  v187 = verts->fields._items;
                  vtxIdx = this->fields.vtxIdx;
                  v189 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v187 )
                    goto LABEL_374;
                  v190 = verts->fields._size;
                  v186 = v166 + 1;
                  *(_QWORD *)&isTail = (unsigned int)(v166 + 1 + vtxIdx);
                  if ( (unsigned int)v190 >= LODWORD(v187->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
                    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
                    if ( !verts )
                      goto LABEL_374;
                  }
                  else
                  {
                    verts->fields._size = v190 + 1;
                    *((_DWORD *)&v187->m_Items[0].fields.x + v190) = isTail;
                  }
                  v191 = verts->fields._items;
                  v192 = this->fields.vtxIdx;
                  v193 = Method_System_Collections_Generic_List_int__Add__;
                  ++verts->fields._version;
                  if ( !v191 )
                    goto LABEL_374;
                  v194 = verts->fields._size;
                  *(_QWORD *)&isTail = (unsigned int)(v192 + v166);
                  if ( (unsigned int)v194 >= LODWORD(v191->max_length) )
                  {
                    System_Collections_Generic_List_int___AddWithResize(
                      (System_Collections_Generic_List_int__o *)verts,
                      isTail,
                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    verts->fields._size = v194 + 1;
                    *((_DWORD *)&v191->m_Items[0].fields.x + v194) = isTail;
                  }
                }
                v166 = v186;
              }
              while ( v186 <= v165 );
              v164 = this->fields.CapComplexity;
            }
            v195 = this->fields.vtxIdx + v164;
            goto LABEL_318;
          }
          v48 = v331;
          v49 = v332;
        }
        v47 = v45;
        goto LABEL_161;
      }
      v47 = v9;
      v49 = v332;
      v46 = offset.fields.x;
      v48 = 0.0;
      v45 = v47;
      goto LABEL_161;
    }
    v326 = y;
    v328 = z;
    v28 = this->fields.flattenAxis;
    v29 = v331 + offset.fields.x;
    v30 = v332 + offset.fields.y;
    if ( v28 != 2 )
    {
      v31 = v9 + offset.fields.z;
      if ( v28 == 1 )
      {
        v129 = v331;
        v32 = v9 - offset.fields.z;
        v30 = 0.0;
        v33 = 0.0;
      }
      else
      {
        v32 = v9 - offset.fields.z;
        v33 = v332 - offset.fields.y;
        if ( !v28 )
        {
          v29 = 0.0;
          v34 = 0.0;
LABEL_128:
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v130 = verts->fields._items;
          v131 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v130 )
            goto LABEL_374;
          v132 = verts->fields._size;
          if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
          {
            v345.fields.x = v29;
            v345.fields.y = v30;
            v345.fields.z = v31;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v345,
              *(const MethodInfo_44AF470 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
          }
          else
          {
            v133 = (float *)((char *)v130 + 12 * v132);
            verts->fields._size = v132 + 1;
            v133[8] = v29;
            v133[9] = v30;
            v133[10] = v31;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v134 = verts->fields._items;
          v135 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v134 )
            goto LABEL_374;
          v136 = verts->fields._size;
          if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
          {
            v346.fields.x = v34;
            v346.fields.y = v33;
            v346.fields.z = v32;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v346,
              *(const MethodInfo_44AF470 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
          }
          else
          {
            v137 = (float *)((char *)v134 + 12 * v136);
            verts->fields._size = v136 + 1;
            v137[8] = v34;
            v137[9] = v33;
            v137[10] = v32;
          }
          v347.fields.x = v29;
          v347.fields.y = v30;
          v138 = this->fields.uvs;
          v347.fields.z = v31;
          v139 = Custom2dSplineMesh__GetUV_48509320(this, v347, (const MethodInfo *)isTail);
          if ( !v138 )
            goto LABEL_374;
          v140 = v138->fields._items;
          v141 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v138->fields._version;
          if ( !v140 )
            goto LABEL_374;
          v142 = v138->fields._size;
          if ( (unsigned int)v142 >= LODWORD(v140->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v138,
              v139,
              *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
          }
          else
          {
            v138->fields._size = v142 + 1;
            v140->m_Items[v142] = v139;
          }
          v348.fields.x = v34;
          v348.fields.y = v33;
          v143 = this->fields.uvs;
          v348.fields.z = v32;
          v144 = Custom2dSplineMesh__GetUV_48509320(this, v348, (const MethodInfo *)isTail);
          if ( !v143 )
            goto LABEL_374;
          v145 = v143->fields._items;
          v146 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v143->fields._version;
          if ( !v145 )
            goto LABEL_374;
          v147 = v143->fields._size;
          if ( (unsigned int)v147 >= LODWORD(v145->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v143,
              v144,
              *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v146[4] + 192LL) + 112LL));
          }
          else
          {
            v143->fields._size = v147 + 1;
            v145->m_Items[v147] = v144;
          }
          v148 = this->fields.flattenAxis;
          v149 = x * width;
          v150 = v326 * width;
          v151 = v328 * width;
          if ( v10 )
          {
            v152 = v9 + v151;
            v153 = v332 + v150;
            if ( v148 )
            {
              v154 = v331 + v149;
              if ( v148 == 1 )
              {
                v153 = 0.0;
              }
              else if ( v148 == 2 )
              {
                v152 = 0.0;
              }
            }
            else
            {
              v154 = 0.0;
            }
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            v252 = verts->fields._items;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v253 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v252 )
              goto LABEL_374;
            v254 = verts->fields._size;
            if ( (unsigned int)v254 >= LODWORD(v252->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v254 + 1;
              *((_DWORD *)&v252->m_Items[0].fields.x + v254) = isTail;
            }
            v255 = verts->fields._items;
            v256 = this->fields.vtxIdx;
            v257 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v255 )
              goto LABEL_374;
            v258 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v256 + 2);
            if ( (unsigned int)v258 >= LODWORD(v255->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v258 + 1;
              *((_DWORD *)&v255->m_Items[0].fields.x + v258) = isTail;
            }
            v259 = verts->fields._items;
            v260 = this->fields.vtxIdx;
            v261 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v259 )
              goto LABEL_374;
            v262 = verts->fields._size;
            max_length = v259->max_length;
            *(_QWORD *)&isTail = (unsigned int)(v260 + 1);
          }
          else
          {
            v152 = v9 - v151;
            v153 = v332 - v150;
            if ( v148 )
            {
              v154 = v331 - v149;
              if ( v148 == 1 )
              {
                v153 = 0.0;
              }
              else if ( v148 == 2 )
              {
                v152 = 0.0;
              }
            }
            else
            {
              v154 = 0.0;
            }
            verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
            if ( !verts )
              goto LABEL_374;
            v264 = verts->fields._items;
            *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
            v265 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v264 )
              goto LABEL_374;
            v266 = verts->fields._size;
            if ( (unsigned int)v266 >= LODWORD(v264->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v265[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v266 + 1;
              *((_DWORD *)&v264->m_Items[0].fields.x + v266) = isTail;
            }
            v267 = verts->fields._items;
            v268 = this->fields.vtxIdx;
            v269 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v267 )
              goto LABEL_374;
            v270 = verts->fields._size;
            *(_QWORD *)&isTail = (unsigned int)(v268 + 1);
            if ( (unsigned int)v270 >= LODWORD(v267->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)verts,
                isTail,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
              verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
              if ( !verts )
                goto LABEL_374;
            }
            else
            {
              verts->fields._size = v270 + 1;
              *((_DWORD *)&v267->m_Items[0].fields.x + v270) = isTail;
            }
            v259 = verts->fields._items;
            v271 = this->fields.vtxIdx;
            v261 = Method_System_Collections_Generic_List_int__Add__;
            ++verts->fields._version;
            if ( !v259 )
              goto LABEL_374;
            v262 = verts->fields._size;
            max_length = v259->max_length;
            *(_QWORD *)&isTail = (unsigned int)(v271 + 2);
          }
          if ( (unsigned int)v262 >= max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)verts,
              isTail,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
          }
          else
          {
            verts->fields._size = v262 + 1;
            *((_DWORD *)&v259->m_Items[0].fields.x + v262) = isTail;
          }
          verts = this->fields.verts;
          if ( !verts )
            goto LABEL_374;
          v272 = verts->fields._items;
          v273 = Method_System_Collections_Generic_List_Vector3__Add__;
          ++verts->fields._version;
          if ( !v272 )
            goto LABEL_374;
          v274 = verts->fields._size;
          if ( (unsigned int)v274 >= LODWORD(v272->max_length) )
          {
            v364.fields.x = v154;
            v364.fields.y = v153;
            v364.fields.z = v152;
            System_Collections_Generic_List_Vector3___AddWithResize(
              verts,
              v364,
              *(const MethodInfo_44AF470 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
          }
          else
          {
            v275 = (float *)((char *)v272 + 12 * v274);
            verts->fields._size = v274 + 1;
            v275[8] = v154;
            v275[9] = v153;
            v275[10] = v152;
          }
          v365.fields.x = v154;
          v365.fields.y = v153;
          v276 = this->fields.uvs;
          v365.fields.z = v152;
          v277 = Custom2dSplineMesh__GetUV_48509320(this, v365, (const MethodInfo *)isTail);
          if ( !v276 )
            goto LABEL_374;
          v278 = v276->fields._items;
          v279 = Method_System_Collections_Generic_List_Vector2__Add__;
          ++v276->fields._version;
          if ( !v278 )
            goto LABEL_374;
          v280 = v276->fields._size;
          if ( (unsigned int)v280 >= LODWORD(v278->max_length) )
          {
            System_Collections_Generic_List_Vector2___AddWithResize(
              v276,
              v277,
              *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
          }
          else
          {
            v276->fields._size = v280 + 1;
            v278->m_Items[v280] = v277;
          }
          v195 = this->fields.vtxIdx;
LABEL_318:
          v281 = v195 + 3;
          goto LABEL_373;
        }
        v129 = v331;
      }
      v34 = v129 - offset.fields.x;
      goto LABEL_128;
    }
    v31 = 0.0;
    v32 = 0.0;
    v34 = v331 - offset.fields.x;
    v33 = v332 - offset.fields.y;
    goto LABEL_128;
  }
  if ( !v10 )
  {
    v35 = offset.fields.x;
    v36 = offset.fields.y;
    v333 = Custom2dSplineMesh__RotateVec3(this, 60.0, *(UnityEngine_Vector3_o *)(&v12 - 2), (const MethodInfo *)isTail);
    v38 = 0.0;
    v39 = v9 + v333.fields.z;
    v40 = this->fields.flattenAxis;
    v41 = v332 + v333.fields.y;
    if ( v40 )
    {
      v42 = offset.fields.z;
      v43 = v331 + v333.fields.x;
      if ( v40 == 1 )
      {
        v41 = 0.0;
      }
      else if ( v40 == 2 )
      {
        v39 = 0.0;
      }
    }
    else
    {
      v42 = offset.fields.z;
      v43 = 0.0;
    }
    v196 = offset.fields.x;
    v197 = offset.fields.y;
    v354 = Custom2dSplineMesh__RotateVec3(this, 120.0, *(UnityEngine_Vector3_o *)(&v42 - 2), v37);
    v198 = v9 + v354.fields.z;
    v199 = this->fields.flattenAxis;
    v200 = v332 + v354.fields.y;
    if ( v199 )
    {
      v38 = v331 + v354.fields.x;
      if ( v199 == 1 )
      {
        v200 = 0.0;
      }
      else if ( v199 == 2 )
      {
        v198 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v201 = verts->fields._items;
    v202 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v201 )
      goto LABEL_374;
    v203 = verts->fields._size;
    if ( (unsigned int)v203 >= LODWORD(v201->max_length) )
    {
      v355.fields.x = v43;
      v355.fields.y = v41;
      v355.fields.z = v39;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v355,
        *(const MethodInfo_44AF470 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
    }
    else
    {
      v204 = (float *)((char *)v201 + 12 * v203);
      verts->fields._size = v203 + 1;
      v204[8] = v43;
      v204[9] = v41;
      v204[10] = v39;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v205 = verts->fields._items;
    v206 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v205 )
      goto LABEL_374;
    v207 = verts->fields._size;
    if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
    {
      v356.fields.x = v38;
      v356.fields.y = v200;
      v356.fields.z = v198;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v356,
        *(const MethodInfo_44AF470 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
    }
    else
    {
      v208 = (float *)((char *)v205 + 12 * v207);
      verts->fields._size = v207 + 1;
      v208[8] = v38;
      v208[9] = v200;
      v208[10] = v198;
    }
    v357.fields.x = v43;
    v357.fields.y = v41;
    v209 = this->fields.uvs;
    v357.fields.z = v39;
    v210 = Custom2dSplineMesh__GetUV_48509320(this, v357, (const MethodInfo *)isTail);
    if ( !v209 )
      goto LABEL_374;
    v211 = v209->fields._items;
    v212 = Method_System_Collections_Generic_List_Vector2__Add__;
    v13 = offset.fields.y;
    ++v209->fields._version;
    if ( !v211 )
      goto LABEL_374;
    v213 = v209->fields._size;
    if ( (unsigned int)v213 >= LODWORD(v211->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v209,
        v210,
        *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v212[4] + 192LL) + 112LL));
    }
    else
    {
      v209->fields._size = v213 + 1;
      v211->m_Items[v213] = v210;
    }
    v358.fields.x = v38;
    v358.fields.y = v200;
    v214 = this->fields.uvs;
    v358.fields.z = v198;
    v215 = Custom2dSplineMesh__GetUV_48509320(this, v358, (const MethodInfo *)isTail);
    if ( !v214 )
      goto LABEL_374;
    v216 = v214->fields._items;
    v217 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v214->fields._version;
    if ( !v216 )
      goto LABEL_374;
    v218 = v214->fields._size;
    if ( (unsigned int)v218 >= LODWORD(v216->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v214,
        v215,
        *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v217[4] + 192LL) + 112LL));
    }
    else
    {
      v214->fields._size = v218 + 1;
      v216->m_Items[v218] = v215;
    }
    v12 = offset.fields.z;
  }
  v219 = this->fields.flattenAxis;
  v220 = v331 + offset.fields.x;
  v221 = v332 + v13;
  if ( v219 == 2 )
  {
    v227 = v331;
    v223 = v332;
    v222 = 0.0;
    v224 = 0.0;
LABEL_251:
    v225 = v227 - offset.fields.x;
    goto LABEL_252;
  }
  v222 = v9 + v12;
  if ( v219 == 1 )
  {
    v224 = v9 - v12;
    v221 = 0.0;
    v226 = 0.0;
    v225 = v331 - offset.fields.x;
    goto LABEL_253;
  }
  if ( v219 )
  {
    v227 = v331;
    v223 = v332;
    v224 = v9 - v12;
    goto LABEL_251;
  }
  v223 = v332;
  v224 = v9 - v12;
  v220 = 0.0;
  v225 = 0.0;
LABEL_252:
  v226 = v223 - v13;
LABEL_253:
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v228 = verts->fields._items;
  v229 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v228 )
    goto LABEL_374;
  v230 = verts->fields._size;
  if ( (unsigned int)v230 >= LODWORD(v228->max_length) )
  {
    v359.fields.x = v220;
    v359.fields.y = v221;
    v359.fields.z = v222;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v359,
      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
  }
  else
  {
    v231 = (float *)((char *)v228 + 12 * v230);
    verts->fields._size = v230 + 1;
    v231[8] = v220;
    v231[9] = v221;
    v231[10] = v222;
  }
  verts = this->fields.verts;
  if ( !verts )
    goto LABEL_374;
  v232 = verts->fields._items;
  v233 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++verts->fields._version;
  if ( !v232 )
    goto LABEL_374;
  v234 = verts->fields._size;
  if ( (unsigned int)v234 >= LODWORD(v232->max_length) )
  {
    v360.fields.x = v225;
    v360.fields.y = v226;
    v360.fields.z = v224;
    System_Collections_Generic_List_Vector3___AddWithResize(
      verts,
      v360,
      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
  }
  else
  {
    v235 = (float *)((char *)v232 + 12 * v234);
    verts->fields._size = v234 + 1;
    v235[8] = v225;
    v235[9] = v226;
    v235[10] = v224;
  }
  v361.fields.x = v220;
  v361.fields.y = v221;
  v236 = this->fields.uvs;
  v361.fields.z = v222;
  v237 = Custom2dSplineMesh__GetUV_48509320(this, v361, (const MethodInfo *)isTail);
  if ( !v236 )
    goto LABEL_374;
  v238 = v236->fields._items;
  v239 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v236->fields._version;
  if ( !v238 )
    goto LABEL_374;
  v240 = v236->fields._size;
  if ( (unsigned int)v240 >= LODWORD(v238->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v236,
      v237,
      *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
  }
  else
  {
    v236->fields._size = v240 + 1;
    v238->m_Items[v240] = v237;
  }
  v362.fields.x = v225;
  v362.fields.y = v226;
  v241 = this->fields.uvs;
  v362.fields.z = v224;
  v242 = Custom2dSplineMesh__GetUV_48509320(this, v362, (const MethodInfo *)isTail);
  if ( !v241 )
    goto LABEL_374;
  v243 = v241->fields._items;
  v244 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v241->fields._version;
  if ( !v243 )
    goto LABEL_374;
  v245 = v241->fields._size;
  if ( (unsigned int)v245 >= LODWORD(v243->max_length) )
  {
    System_Collections_Generic_List_Vector2___AddWithResize(
      v241,
      v242,
      *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v244[4] + 192LL) + 112LL));
  }
  else
  {
    v241->fields._size = v245 + 1;
    v243->m_Items[v245] = v242;
  }
  if ( v10 )
  {
    v371.fields.x = -offset.fields.x;
    v371.fields.y = -offset.fields.y;
    v371.fields.z = -offset.fields.z;
    v363 = Custom2dSplineMesh__RotateVec3(this, 120.0, v371, (const MethodInfo *)isTail);
    v247 = 0.0;
    v248 = v9 + v363.fields.z;
    v249 = this->fields.flattenAxis;
    v250 = v332 + v363.fields.y;
    if ( v249 )
    {
      v251 = v331 + v363.fields.x;
      if ( v249 == 1 )
      {
        v250 = 0.0;
      }
      else if ( v249 == 2 )
      {
        v248 = 0.0;
      }
    }
    else
    {
      v251 = 0.0;
    }
    v372.fields.x = -offset.fields.x;
    v372.fields.y = -offset.fields.y;
    v372.fields.z = -offset.fields.z;
    v366 = Custom2dSplineMesh__RotateVec3(this, 60.0, v372, v246);
    v282 = v9 + v366.fields.z;
    v283 = this->fields.flattenAxis;
    v284 = v332 + v366.fields.y;
    if ( v283 )
    {
      v247 = v331 + v366.fields.x;
      if ( v283 == 1 )
      {
        v284 = 0.0;
      }
      else if ( v283 == 2 )
      {
        v282 = 0.0;
      }
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v285 = verts->fields._items;
    v286 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v285 )
      goto LABEL_374;
    v287 = verts->fields._size;
    if ( (unsigned int)v287 >= LODWORD(v285->max_length) )
    {
      v367.fields.x = v251;
      v367.fields.y = v250;
      v367.fields.z = v248;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v367,
        *(const MethodInfo_44AF470 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
    }
    else
    {
      v288 = (float *)((char *)v285 + 12 * v287);
      verts->fields._size = v287 + 1;
      v288[8] = v251;
      v288[9] = v250;
      v288[10] = v248;
    }
    verts = this->fields.verts;
    if ( !verts )
      goto LABEL_374;
    v289 = verts->fields._items;
    v290 = Method_System_Collections_Generic_List_Vector3__Add__;
    ++verts->fields._version;
    if ( !v289 )
      goto LABEL_374;
    v291 = verts->fields._size;
    if ( (unsigned int)v291 >= LODWORD(v289->max_length) )
    {
      v368.fields.x = v247;
      v368.fields.y = v284;
      v368.fields.z = v282;
      System_Collections_Generic_List_Vector3___AddWithResize(
        verts,
        v368,
        *(const MethodInfo_44AF470 **)(*(_QWORD *)(v290[4] + 192LL) + 112LL));
    }
    else
    {
      v292 = (float *)((char *)v289 + 12 * v291);
      verts->fields._size = v291 + 1;
      v292[8] = v247;
      v292[9] = v284;
      v292[10] = v282;
    }
    v369.fields.x = v251;
    v369.fields.y = v250;
    v293 = this->fields.uvs;
    v369.fields.z = v248;
    v294 = Custom2dSplineMesh__GetUV_48509320(this, v369, (const MethodInfo *)isTail);
    if ( !v293 )
      goto LABEL_374;
    v295 = v293->fields._items;
    v296 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v293->fields._version;
    if ( !v295 )
      goto LABEL_374;
    v297 = v293->fields._size;
    if ( (unsigned int)v297 >= LODWORD(v295->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v293,
        v294,
        *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
    }
    else
    {
      v293->fields._size = v297 + 1;
      v295->m_Items[v297] = v294;
    }
    v124 = v247;
    v125 = v284;
    v123 = this->fields.uvs;
    v127 = v282;
    v126 = this;
    goto LABEL_342;
  }
LABEL_347:
  verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
  if ( !verts )
    goto LABEL_374;
  v301 = verts->fields._items;
  *(_QWORD *)&isTail = (unsigned int)this->fields.vtxIdx;
  v302 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v301 )
    goto LABEL_374;
  v303 = verts->fields._size;
  if ( (unsigned int)v303 >= LODWORD(v301->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v302[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v303 + 1;
    *((_DWORD *)&v301->m_Items[0].fields.x + v303) = isTail;
  }
  v304 = verts->fields._items;
  v305 = this->fields.vtxIdx;
  v306 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v304 )
    goto LABEL_374;
  v307 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v305 + 2);
  if ( (unsigned int)v307 >= LODWORD(v304->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v307 + 1;
    *((_DWORD *)&v304->m_Items[0].fields.x + v307) = isTail;
  }
  v308 = verts->fields._items;
  v309 = this->fields.vtxIdx;
  v310 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v308 )
    goto LABEL_374;
  v311 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v309 + 1);
  if ( (unsigned int)v311 >= LODWORD(v308->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v311 + 1;
    *((_DWORD *)&v308->m_Items[0].fields.x + v311) = isTail;
  }
  v312 = verts->fields._items;
  v313 = this->fields.vtxIdx;
  v314 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v312 )
    goto LABEL_374;
  v315 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v313 + 2);
  if ( (unsigned int)v315 >= LODWORD(v312->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v314[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v315 + 1;
    *((_DWORD *)&v312->m_Items[0].fields.x + v315) = isTail;
  }
  v316 = verts->fields._items;
  v317 = this->fields.vtxIdx;
  v318 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v316 )
    goto LABEL_374;
  v319 = verts->fields._size;
  *(_QWORD *)&isTail = (unsigned int)(v317 + 3);
  if ( (unsigned int)v319 >= LODWORD(v316->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      isTail,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v318[4] + 192LL) + 112LL));
    verts = (System_Collections_Generic_List_Vector3__o *)this->fields.trianges;
    if ( !verts )
      goto LABEL_374;
  }
  else
  {
    verts->fields._size = v319 + 1;
    *((_DWORD *)&v316->m_Items[0].fields.x + v319) = isTail;
  }
  v320 = verts->fields._items;
  v321 = this->fields.vtxIdx;
  v322 = Method_System_Collections_Generic_List_int__Add__;
  ++verts->fields._version;
  if ( !v320 )
    goto LABEL_374;
  v323 = verts->fields._size;
  v324 = v321 + 1;
  if ( (unsigned int)v323 >= LODWORD(v320->max_length) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)verts,
      v324,
      *(const MethodInfo_4433138 **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
  }
  else
  {
    verts->fields._size = v323 + 1;
    *((_DWORD *)&v320->m_Items[0].fields.x + v323) = v324;
  }
  v281 = this->fields.vtxIdx + 4;
LABEL_373:
  this->fields.vtxIdx = v281;
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
  MissionNaviTransitionBoardItem_o *p_curveWeight; // x29
  System_Collections_Generic_List_float__o *v13; // x25
  UnityEngine_Vector3_o v14; // x0 OVERLAPPED
  const MethodInfo *v16; // x2
  struct UnityEngine_Vector3_array *v17; // x8
  unsigned int max_length; // w10
  unsigned int v19; // w28
  __int64 v20; // x22
  int32_t v21; // w26
  __int64 v22; // x27
  const MethodInfo *v23; // x2
  struct UnityEngine_Vector3_array *v24; // x8
  unsigned int v25; // w9
  UnityEngine_Transform_o *v26; // x29
  float x; // s8
  float y; // s9
  float z; // s10
  float v30; // s11
  float v31; // s12
  float v32; // s13
  float v33; // s8
  float v34; // s9
  float v35; // s10
  float v36; // s0
  float v37; // s11
  float v38; // s12
  float v39; // s9
  struct UnityEngine_Vector3_array *v40; // x8
  il2cpp_array_size_t v41; // x26
  float *v42; // x9
  UnityEngine_Vector3_o *m_Items; // x8
  float *p_x; // x11
  float *v45; // x10
  struct UnityEngine_Vector3_array *items; // x8
  float v47; // s8
  float v48; // s9
  float v49; // s10
  float v50; // s11
  float v51; // s12
  float v52; // s13
  float v53; // s0
  float v54; // s1
  float v55; // s2
  _QWORD *v56; // x9
  int32_t size; // w10
  float v58; // s0 OVERLAPPED
  float v59; // s1
  float v60; // s2
  float *v61; // x8
  struct UnityEngine_Vector3_array *v62; // x8
  float *v63; // x9
  struct UnityEngine_Vector3_array *v64; // x8
  float v65; // s0
  float v66; // s1
  float v67; // s2
  _QWORD *v68; // x9
  int32_t v69; // w10
  float v70; // s0 OVERLAPPED
  float v71; // s1
  float v72; // s2
  float *v73; // x8
  struct UnityEngine_Vector3_array *v74; // x8
  _QWORD *v75; // x9
  int32_t v76; // w10
  float v77; // s0 OVERLAPPED
  float v78; // s1
  float v79; // s2
  float *v80; // x8
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  struct System_Single_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  struct UnityEngine_Vector3_array *v88; // x8
  unsigned int v89; // w9
  float *v90; // x9
  float *v91; // x8
  float v92; // s10
  float v93; // s15
  float v94; // s8
  float v95; // s13
  float v96; // s14
  struct UnityEngine_Vector3_array *v97; // x8
  unsigned int v98; // w9
  float *v99; // x9
  float *v100; // x8
  float v101; // s9
  float v102; // s11
  float v103; // s10
  float v104; // s12
  float v105; // s14
  float v106; // s13
  unsigned int v107; // w8
  float v108; // s5
  float v109; // s0
  float v110; // s2
  float v111; // s1
  float v112; // s0
  float v113; // s3
  float v114; // s4
  UnityEngine_Vector3_array *v115; // x0
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  System_Int32Enum_array *v122; // x0
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_Single_array *v129; // x0
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  const MethodInfo *v136; // x2
  float v138; // [xsp+38h] [xbp-D8h]
  float v139; // [xsp+3Ch] [xbp-D4h]
  float v140; // [xsp+40h] [xbp-D0h]
  float v141; // [xsp+44h] [xbp-CCh]
  float v142; // [xsp+48h] [xbp-C8h]
  float v143; // [xsp+4Ch] [xbp-C4h]
  int v144; // [xsp+50h] [xbp-C0h]
  float v145; // [xsp+58h] [xbp-B8h]
  int32_t indexa; // [xsp+68h] [xbp-A8h]
  UnityEngine_Vector3_o Point_48492896; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o FirstDerivative_48493164; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59380C1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_float__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__InsertRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__Insert__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float___ctor___91438352);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor___91445096);
    sub_21FFC50(&System_Collections_Generic_List_float__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_59380C1 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_72019172(
    v7,
    points,
    (const MethodInfo_44AECE4 *)Method_System_Collections_Generic_List_Vector3___ctor___91445096);
  p_modes = &this->fields.modes;
  modes = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  v10 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_71520764(
    v10,
    modes,
    (const MethodInfo_44351FC *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  p_curveWeight = (MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v13 = (System_Collections_Generic_List_float__o *)sub_21FFEBC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_71803492(
    v13,
    curveWeight,
    (const MethodInfo_447A264 *)Method_System_Collections_Generic_List_float___ctor___91438352);
  if ( (index & 0x80000000) == 0 )
  {
    if ( !*p_modes )
      goto LABEL_79;
    if ( (index + 1) / 3 < LODWORD((*p_modes)->max_length) - 1 )
    {
      *(_QWORD *)&v14.fields.x = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 3);
      v17 = *p_points;
      if ( !*p_points )
        goto LABEL_79;
      max_length = v17->max_length;
      v144 = (index + 1) / 3;
      v19 = 3 * v144;
      if ( 3 * v144 < max_length )
      {
        v20 = (int)v19 + 1LL;
        if ( (unsigned int)v20 < max_length && v19 + 2 < max_length )
        {
          v21 = v19 + 3;
          if ( v19 + 3 < max_length )
          {
            v22 = *(_QWORD *)&v14.fields.x;
            indexa = v19 + 2;
            Point_48492896 = Bezier__GetPoint_48492896(
                               v17->m_Items[3 * v144],
                               v17->m_Items[v20],
                               v17->m_Items[v19 + 2],
                               v14,
                               COERCE_FLOAT(*(_QWORD *)&v17->m_Items[v21].fields.x),
                               v16);
            if ( !v22 )
              goto LABEL_79;
            if ( (*(_DWORD *)(v22 + 24) & 0xFFFFFFFE) != 0 )
            {
              *(UnityEngine_Vector3_o *)(v22 + 44) = Point_48492896;
              *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
              v24 = this->fields.points;
              if ( !v24 )
                goto LABEL_79;
              v25 = v24->max_length;
              if ( v19 < v25 && (unsigned int)v20 < v25 && indexa < v25 && v21 < v25 )
              {
                v26 = *(UnityEngine_Transform_o **)&v14.fields.x;
                if ( !*(_QWORD *)&v14.fields.x )
                  goto LABEL_79;
                FirstDerivative_48493164 = Bezier__GetFirstDerivative_48493164(
                                             v24->m_Items[3 * v144],
                                             v24->m_Items[v20],
                                             v24->m_Items[indexa],
                                             v14,
                                             COERCE_FLOAT(*(_QWORD *)&v24->m_Items[v21].fields.x),
                                             v23);
                v149 = UnityEngine_Transform__TransformPoint(v26, FirstDerivative_48493164, 0);
                x = v149.fields.x;
                y = v149.fields.y;
                z = v149.fields.z;
                *(_QWORD *)&v14.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
                if ( !*(_QWORD *)&v14.fields.x )
                  goto LABEL_79;
                position = UnityEngine_Transform__get_position(*(UnityEngine_Transform_o **)&v14.fields.x, 0);
                v30 = position.fields.x;
                v31 = position.fields.y;
                v32 = position.fields.z;
                if ( !byte_5931943 )
                {
                  sub_21FFC50(&System_Math_TypeInfo);
                  byte_5931943 = 1;
                }
                v33 = x - v30;
                v34 = y - v31;
                v35 = z - v32;
                *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&v14.fields.z);
                v36 = sqrtf((float)(v35 * v35) + (float)((float)(v33 * v33) + (float)(v34 * v34)));
                if ( v36 <= 0.00001 )
                {
                  if ( !byte_5931940 )
                  {
                    *(_QWORD *)&v14.fields.x = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
                    byte_5931940 = 1;
                  }
                  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
                  v37 = static_fields->zeroVector.fields.x;
                  v38 = static_fields->zeroVector.fields.y;
                  v39 = static_fields->zeroVector.fields.z;
                }
                else
                {
                  v37 = v33 / v36;
                  v38 = v34 / v36;
                  v39 = v35 / v36;
                }
                p_curveWeight = (MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight;
                v88 = *p_points;
                if ( !*p_points )
                  goto LABEL_79;
                v89 = v88->max_length;
                if ( v19 < v89 && (unsigned int)v20 < v89 )
                {
                  v90 = (float *)((char *)v88 + 36 * v144);
                  v91 = (float *)((char *)v88 + 12 * v20);
                  v93 = v90[8];
                  v92 = v90[9];
                  v94 = v90[10];
                  v95 = v91[8];
                  v96 = v91[10];
                  v145 = v91[9];
                  if ( !byte_593193E )
                  {
                    sub_21FFC50(&System_Math_TypeInfo);
                    byte_593193E = 1;
                  }
                  *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&v14.fields.z);
                  v97 = *p_points;
                  if ( !*p_points )
                    goto LABEL_79;
                  v98 = v97->max_length;
                  if ( indexa < v98 )
                  {
                    v138 = v96;
                    v139 = v95;
                    v140 = v92;
                    v141 = v37;
                    v142 = v38;
                    v143 = v39;
                    if ( v21 < v98 )
                    {
                      v99 = (float *)((char *)v97 + 12 * indexa);
                      v100 = (float *)((char *)v97 + 12 * v21);
                      v102 = v99[8];
                      v101 = v99[9];
                      v103 = v99[10];
                      v105 = v100[8];
                      v104 = v100[9];
                      v106 = v100[10];
                      if ( !byte_593193E )
                      {
                        sub_21FFC50(&System_Math_TypeInfo);
                        byte_593193E = 1;
                      }
                      *(_QWORD *)&v14.fields.x = System_Math_TypeInfo;
                      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&v14.fields.z);
                      v107 = *(_DWORD *)(v22 + 24);
                      if ( v107 > 1 )
                      {
                        v108 = *(float *)(v22 + 52);
                        v109 = (float)(sqrtf(
                                         (float)((float)(v94 - v138) * (float)(v94 - v138))
                                       + (float)((float)((float)(v93 - v139) * (float)(v93 - v139))
                                               + (float)((float)(v140 - v145) * (float)(v140 - v145))))
                                     + sqrtf(
                                         (float)((float)(v103 - v106) * (float)(v103 - v106))
                                       + (float)((float)((float)(v102 - v105) * (float)(v102 - v105))
                                               + (float)((float)(v101 - v104) * (float)(v101 - v104)))))
                             * 0.5;
                        v110 = v141 * v109;
                        v111 = v142 * v109;
                        v112 = v143 * v109;
                        v113 = *(float *)(v22 + 44);
                        v114 = *(float *)(v22 + 48);
                        *(float *)(v22 + 32) = v113 - v110;
                        *(float *)(v22 + 36) = v114 - v111;
                        *(float *)(v22 + 40) = v108 - v112;
                        if ( v107 != 2 )
                        {
                          *(float *)(v22 + 56) = v110 + v113;
                          *(float *)(v22 + 60) = v111 + v114;
                          *(float *)(v22 + 64) = v112 + v108;
                          if ( v7 )
                          {
                            System_Collections_Generic_List_Vector3___InsertRange(
                              v7,
                              indexa,
                              (System_Collections_Generic_IEnumerable_T__o *)v22,
                              (const MethodInfo_44B04D4 *)Method_System_Collections_Generic_List_Vector3__InsertRange__);
                            if ( v10 )
                            {
                              System_Collections_Generic_List_Int32Enum___Insert(
                                v10,
                                v144 + 1,
                                0,
                                (const MethodInfo_44366BC *)Method_System_Collections_Generic_List_BezierControlPointMode__Insert__);
                              if ( v13 )
                              {
                                System_Collections_Generic_List_float___Insert(
                                  v13,
                                  v144 + 1,
                                  1.0,
                                  (const MethodInfo_447B728 *)Method_System_Collections_Generic_List_float__Insert__);
                                goto LABEL_77;
                              }
                            }
                          }
LABEL_79:
                          sub_21FFECC(*(_QWORD *)&v14.fields.x, *(_QWORD *)&v14.fields.z);
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
      sub_21FFED4(*(_QWORD *)&v14.fields.x);
    }
  }
  v40 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  v41 = v40->max_length;
  if ( (unsigned int)v41 < 4 )
    goto LABEL_80;
  if ( !v7 )
    goto LABEL_79;
  v42 = (float *)((char *)v40 + 12 * (int)(((v41 << 32) - 0x100000000LL) >> 32));
  m_Items = v40->m_Items;
  p_x = &m_Items[(int)(((v41 << 32) - 0x400000000LL) >> 32)].fields.x;
  v45 = &m_Items[(int)(((v41 << 32) - 0x300000000LL) >> 32)].fields.x;
  items = v7->fields._items;
  v47 = v42[8];
  v48 = v42[9];
  v49 = v42[10];
  v50 = *p_x;
  v51 = p_x[1];
  v52 = p_x[2];
  v53 = *v45;
  v54 = v45[1];
  v55 = v45[2];
  v56 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_79;
  size = v7->fields._size;
  v58 = v47 + (float)(v53 - v50);
  v59 = v48 + (float)(v54 - v51);
  v60 = v49 + (float)(v55 - v52);
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v58,
      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = (float *)((char *)items + 12 * size);
    v7->fields._size = size + 1;
    v61[8] = v58;
    v61[9] = v59;
    v61[10] = v60;
  }
  v62 = *p_points;
  if ( !*p_points )
    goto LABEL_79;
  if ( (unsigned int)(v41 - 2) >= LODWORD(v62->max_length) )
    goto LABEL_80;
  v63 = (float *)((char *)v62 + 12 * (int)v41 - 24);
  v64 = v7->fields._items;
  v65 = v63[8];
  v66 = v63[9];
  v67 = v63[10];
  v68 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v64 )
    goto LABEL_79;
  v69 = v7->fields._size;
  v70 = v47 + (float)(v65 - v50);
  v71 = v48 + (float)(v66 - v51);
  v72 = v49 + (float)(v67 - v52);
  if ( (unsigned int)v69 >= LODWORD(v64->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v70,
      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
  }
  else
  {
    v73 = (float *)((char *)v64 + 12 * v69);
    v7->fields._size = v69 + 1;
    v73[8] = v70;
    v73[9] = v71;
    v73[10] = v72;
  }
  v74 = v7->fields._items;
  v75 = Method_System_Collections_Generic_List_Vector3__Add__;
  ++v7->fields._version;
  if ( !v74 )
    goto LABEL_79;
  v76 = v7->fields._size;
  v77 = v47 + (float)(v47 - v50);
  v78 = v48 + (float)(v48 - v51);
  v79 = v49 + (float)(v49 - v52);
  if ( (unsigned int)v76 >= LODWORD(v74->max_length) )
  {
    System_Collections_Generic_List_Vector3___AddWithResize(
      v7,
      *(UnityEngine_Vector3_o *)&v77,
      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = (float *)((char *)v74 + 12 * v76);
    v7->fields._size = v76 + 1;
    v80[8] = v77;
    v80[9] = v78;
    v80[10] = v79;
  }
  if ( !v10 )
    goto LABEL_79;
  v81 = v10->fields._items;
  v82 = Method_System_Collections_Generic_List_BezierControlPointMode__Add__;
  ++v10->fields._version;
  if ( !v81 )
    goto LABEL_79;
  v83 = v10->fields._size;
  if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v10,
      0,
      *(const MethodInfo_4435950 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v10->fields._size = v83 + 1;
    *((_DWORD *)v81->m_Items + v83) = 0;
  }
  if ( !v13 )
    goto LABEL_79;
  v84 = v13->fields._items;
  v85 = Method_System_Collections_Generic_List_float__Add__;
  ++v13->fields._version;
  if ( !v84 )
    goto LABEL_79;
  v86 = v13->fields._size;
  if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
  {
    System_Collections_Generic_List_float___AddWithResize(
      v13,
      1.0,
      *(const MethodInfo_447A9BC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = v86 + 1;
    v84->m_Items[v86] = 1.0;
  }
  v21 = v41 + 2;
LABEL_77:
  v115 = System_Collections_Generic_List_Vector3___ToArray(
           v7,
           (const MethodInfo_44B0FF4 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v115;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.points,
    (int32_t)v115,
    v116,
    v117,
    v118,
    v119,
    v120,
    v121);
  v122 = System_Collections_Generic_List_Int32Enum___ToArray(
           v10,
           (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  *p_modes = (struct BezierControlPointMode_array *)v122;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.modes,
    (int32_t)v122,
    v123,
    v124,
    v125,
    v126,
    v127,
    v128);
  v129 = System_Collections_Generic_List_float___ToArray(
           v13,
           (const MethodInfo_447C438 *)Method_System_Collections_Generic_List_float__ToArray__);
  p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v129;
  sub_21FFBF4(p_curveWeight, (int32_t)v129, v130, v131, v132, v133, v134, v135);
  if ( !*p_points )
    goto LABEL_79;
  Custom2dSplineMesh__EnforceMode(this, LODWORD((*p_points)->max_length) - 4, v136);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void Custom2dSplineMesh__ChangeWeight(Custom2dSplineMesh_o *this, int32_t index, float value, const MethodInfo *method)
{
  struct System_Single_array *curveWeight; // x8
  int v5; // w9

  curveWeight = this->fields.curveWeight;
  if ( !curveWeight )
    sub_21FFECC(this, *(_QWORD *)&index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(curveWeight->max_length) )
    sub_21FFED4(this);
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

  if ( (byte_59380C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_59380C7 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_21FFBF4(
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

  if ( (byte_59380C2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__RemoveRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float___ctor___91438352);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor___91445096);
    sub_21FFC50(&System_Collections_Generic_List_float__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    byte_59380C2 = 1;
  }
  p_points = &this->fields.points;
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v7 = (index + 1) / 3;
  v8 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor_72019172(
    v8,
    points,
    (const MethodInfo_44AECE4 *)Method_System_Collections_Generic_List_Vector3___ctor___91445096);
  p_curveWeight = &this->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)this->fields.curveWeight;
  v11 = (System_Collections_Generic_List_float__o *)sub_21FFEBC(System_Collections_Generic_List_float__TypeInfo);
  System_Collections_Generic_List_float____ctor_71803492(
    v11,
    curveWeight,
    (const MethodInfo_447A264 *)Method_System_Collections_Generic_List_float___ctor___91438352);
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
            (const MethodInfo_44B0D20 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
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
        (const MethodInfo_44B0D20 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
      v13 = v7;
      if ( v11 )
        goto LABEL_16;
    }
LABEL_18:
    sub_21FFECC(v12, v13);
  }
  if ( !v8 )
    goto LABEL_18;
  System_Collections_Generic_List_Vector3___RemoveRange(
    v8,
    0,
    3,
    (const MethodInfo_44B0D20 *)Method_System_Collections_Generic_List_Vector3__RemoveRange__);
  v13 = 0;
  if ( !v11 )
    goto LABEL_18;
LABEL_16:
  System_Collections_Generic_List_float___RemoveAt(
    v11,
    v13,
    (const MethodInfo_447C0FC *)Method_System_Collections_Generic_List_float__RemoveAt__);
  v16 = (System_Collections_Generic_IEnumerable_T__o *)this->fields.modes;
  p_modes = (MissionNaviTransitionBoardItem_o *)&this->fields.modes;
  v17 = (System_Collections_Generic_List_T__o *)sub_21FFEBC(System_Collections_Generic_List_BezierControlPointMode__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor_71520764(
    v17,
    v16,
    (const MethodInfo_44351FC *)Method_System_Collections_Generic_List_BezierControlPointMode___ctor__);
  if ( !v17 )
    goto LABEL_18;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    v17,
    v7,
    (const MethodInfo_4437094 *)Method_System_Collections_Generic_List_BezierControlPointMode__RemoveAt__);
  v18 = System_Collections_Generic_List_Vector3___ToArray(
          v8,
          (const MethodInfo_44B0FF4 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  *p_points = v18;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_points, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = System_Collections_Generic_List_Int32Enum___ToArray(
          v17,
          (const MethodInfo_44373D0 *)Method_System_Collections_Generic_List_BezierControlPointMode__ToArray__);
  p_modes->klass = (MissionNaviTransitionBoardItem_c *)v25;
  sub_21FFBF4(p_modes, (int32_t)v25, v26, v27, v28, v29, v30, v31);
  v32 = System_Collections_Generic_List_float___ToArray(
          v11,
          (const MethodInfo_447C438 *)Method_System_Collections_Generic_List_float__ToArray__);
  *p_curveWeight = v32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_curveWeight, (int32_t)v32, v33, v34, v35, v36, v37, v38);
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
      sub_21FFED4(this);
    }
    if ( !byte_5931943 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931943 = 1;
    }
    this = (Custom2dSplineMesh_o *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&index);
    v23.n64_u64[0] = vmul_f32(v21, v21).n64_u64[0];
    v23.n64_f32[0] = sqrtf((float)(v22 * v22) + vaddv_f32(v23));
    if ( v23.n64_f32[0] <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        this = (Custom2dSplineMesh_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
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
      if ( !byte_593193E )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593193E = 1;
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
    sub_21FFECC(this, *(_QWORD *)&index);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  float x; // s8
  float y; // s11
  float z; // s10
  const MethodInfo *v55; // x1
  float v56; // s9
  float v57; // s13
  float v58; // s14
  const MethodInfo *v59; // x1
  const MethodInfo *v60; // x1
  const MethodInfo *v61; // x1
  float v62; // s12
  float v63; // s8
  float v64; // s13
  float v65; // s14
  float v66; // s0
  float v67; // s1
  float v68; // s0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float UVslice; // s0
  _BOOL4 DrawCap; // w8
  const MethodInfo *v72; // x2
  float v73; // s8
  float v74; // s13
  float v75; // s14
  __int64 v76; // x1
  const MethodInfo *v77; // x2
  float width; // s15
  float v79; // s0
  float v80; // s3 OVERLAPPED
  float v81; // s4
  float v82; // s5
  struct UnityEngine_Vector3_StaticFields *v83; // x8
  float PathRate; // s0
  float v85; // s11
  float v86; // s12
  float v87; // s13
  float v88; // s14
  float v89; // s8
  float v90; // s10
  bool isJumpcut; // w26
  float v92; // s0
  float v93; // s1
  float v94; // s2
  float v95; // s3
  float v96; // s9
  float v97; // s0
  struct UnityEngine_Vector3_StaticFields *v98; // x8
  float v99; // s15
  float v100; // s11
  int32_t flattenAxis; // w8
  float v102; // s3
  float v103; // s8
  float v104; // s12
  float v105; // s13
  float v106; // s14
  float v107; // s10
  intptr_t m_CachedPtr; // x8
  _QWORD *v109; // x9
  unsigned int klass; // w10
  float *v111; // x8
  intptr_t v112; // x8
  _QWORD *v113; // x9
  unsigned int v114; // w10
  float *v115; // x8
  struct System_Collections_Generic_List_Vector2__o *uvs; // x27
  unsigned __int64 UV_48509320; // kr00_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v119; // x9
  __int64 size; // x10
  struct System_Collections_Generic_List_Vector2__o *v121; // x27
  unsigned __int64 v122; // kr08_8
  struct UnityEngine_Vector2_array *v123; // x8
  _QWORD *v124; // x9
  __int64 v125; // x10
  const MethodInfo *v126; // x1
  float v127; // s0
  float v128; // s10
  Custom2dSplineMesh_c *v129; // x0
  float v130; // s9
  float v131; // s13
  float v132; // s8
  float v133; // s15
  const MethodInfo *v134; // x1
  float v135; // s14
  float v136; // s9
  float v137; // s11
  const MethodInfo *v138; // x1
  float v139; // s0
  float v140; // s14
  float v141; // s10
  int32_t v142; // w8
  float v143; // s13
  float v144; // s8
  float v145; // s1
  float v146; // s9
  intptr_t v147; // x8
  _QWORD *v148; // x9
  __int64 klass_low; // x10
  intptr_t v150; // x8
  int32_t v151; // w10
  _QWORD *v152; // x9
  __int64 v153; // x11
  intptr_t v154; // x8
  int32_t v155; // w10
  _QWORD *v156; // x9
  __int64 v157; // x11
  intptr_t v158; // x8
  int32_t v159; // w10
  _QWORD *v160; // x9
  __int64 v161; // x11
  intptr_t v162; // x8
  int32_t v163; // w10
  _QWORD *v164; // x9
  __int64 v165; // x11
  intptr_t v166; // x8
  int32_t v167; // w10
  _QWORD *v168; // x9
  __int64 v169; // x11
  const MethodInfo *v170; // x1
  float v171; // s0
  intptr_t v172; // x8
  _QWORD *v173; // x9
  unsigned int v174; // w10
  float *v175; // x8
  intptr_t v176; // x8
  _QWORD *v177; // x9
  unsigned int v178; // w10
  float v179; // s15
  float *v180; // x8
  struct System_Collections_Generic_List_Vector2__o *v181; // x26
  float v182; // s9
  float v183; // s0
  float v184; // s8
  unsigned __int64 v185; // kr10_8
  struct UnityEngine_Vector2_array *v186; // x8
  _QWORD *v187; // x9
  __int64 v188; // x10
  struct System_Collections_Generic_List_Vector2__o *v189; // x26
  float lineVmax; // s1 OVERLAPPED
  UnityEngine_Vector2_o v191; // kr18_8
  struct UnityEngine_Vector2_array *v192; // x8
  _QWORD *v193; // x9
  __int64 v194; // x10
  float *v195; // x8
  float v196; // s0
  intptr_t v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  intptr_t v200; // x8
  int32_t v201; // w10
  _QWORD *v202; // x9
  __int64 v203; // x11
  intptr_t v204; // x8
  int32_t v205; // w10
  _QWORD *v206; // x9
  __int64 v207; // x11
  intptr_t v208; // x8
  int32_t v209; // w10
  _QWORD *v210; // x9
  __int64 v211; // x11
  intptr_t v212; // x8
  int32_t v213; // w10
  _QWORD *v214; // x9
  __int64 v215; // x11
  intptr_t v216; // x8
  int32_t v217; // w10
  _QWORD *v218; // x9
  __int64 v219; // x11
  const MethodInfo *v220; // x1
  __int64 v221; // x1
  const MethodInfo *v222; // x2
  float v223; // s8
  float v224; // s9
  float v225; // s10
  float v226; // s0
  float v227; // s3 OVERLAPPED
  float v228; // s4
  float v229; // s5
  struct UnityEngine_Vector3_StaticFields *v230; // x8
  float v231; // s8
  const MethodInfo *v232; // x1
  const MethodInfo *v233; // x1
  float v234; // s9
  float v235; // s10
  float v236; // s11
  float v237; // s0
  float v238; // s14
  float v239; // s15
  struct UnityEngine_Vector3_StaticFields *v240; // x8
  float v241; // s11
  float v242; // s10
  float v243; // s9
  const MethodInfo *v244; // x2
  float v245; // s12
  float v246; // s14
  int32_t v247; // w8
  float v248; // s15
  float v249; // s9
  float v250; // s10
  float v251; // s11
  float v252; // s0
  intptr_t v253; // x8
  _QWORD *v254; // x9
  unsigned int v255; // w10
  float *v256; // x8
  intptr_t v257; // x8
  _QWORD *v258; // x9
  unsigned int v259; // w10
  float *v260; // x8
  struct System_Collections_Generic_List_Vector2__o *v261; // x26
  unsigned __int64 v262; // kr20_8
  struct UnityEngine_Vector2_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  struct System_Collections_Generic_List_Vector2__o *v266; // x26
  unsigned __int64 v267; // kr28_8
  struct UnityEngine_Vector2_array *v268; // x8
  _QWORD *v269; // x9
  __int64 v270; // x10
  const MethodInfo *v271; // x1
  float v272; // s14
  int32_t v273; // w8
  float v274; // s11
  float v275; // s12
  float v276; // s13
  float v277; // s8
  float v278; // s9
  float v279; // s10
  float v280; // s1
  intptr_t v281; // x8
  _QWORD *v282; // x9
  unsigned int v283; // w10
  float *v284; // x8
  intptr_t v285; // x8
  _QWORD *v286; // x9
  unsigned int v287; // w10
  float *v288; // x8
  struct System_Collections_Generic_List_Vector2__o *v289; // x26
  unsigned __int64 v290; // kr30_8
  float v291; // s11
  struct UnityEngine_Vector2_array *v292; // x8
  _QWORD *v293; // x9
  __int64 v294; // x10
  struct System_Collections_Generic_List_Vector2__o *v295; // x26
  float v296; // s1 OVERLAPPED
  UnityEngine_Vector2_o v297; // kr38_8
  struct UnityEngine_Vector2_array *v298; // x8
  _QWORD *v299; // x9
  __int64 v300; // x10
  float *v301; // x8
  float v302; // s0
  intptr_t v303; // x8
  _QWORD *v304; // x9
  __int64 v305; // x10
  intptr_t v306; // x8
  int32_t v307; // w10
  _QWORD *v308; // x9
  __int64 v309; // x11
  intptr_t v310; // x8
  int32_t v311; // w10
  _QWORD *v312; // x9
  __int64 v313; // x11
  intptr_t v314; // x8
  int32_t v315; // w10
  _QWORD *v316; // x9
  __int64 v317; // x11
  intptr_t v318; // x8
  int32_t v319; // w10
  _QWORD *v320; // x9
  __int64 v321; // x11
  intptr_t v322; // x8
  int32_t v323; // w10
  _QWORD *v324; // x9
  __int64 v325; // x11
  float v326; // s8
  float v327; // s9
  float v328; // s10
  const MethodInfo *v329; // x1
  float v330; // s11
  const MethodInfo *v331; // x1
  __int64 v332; // x1
  const MethodInfo *v333; // x2
  float v334; // s12
  float v335; // s13
  float v336; // s14
  float v337; // s0
  float v338; // s3 OVERLAPPED
  float v339; // s4
  float v340; // s5
  struct UnityEngine_Vector3_StaticFields *v341; // x8
  UnityEngine_Mesh_o *v342; // x20
  UnityEngine_Mesh_o *v343; // x20
  UnityEngine_Mesh_o *v344; // x20
  struct System_Collections_Generic_List_Vector3__o *v345; // x9
  struct System_Collections_Generic_List_int__o *v346; // x8
  int v347; // w10
  struct System_Collections_Generic_List_Vector2__o *v348; // x9
  int v349; // w10
  int v350; // w8
  UnityEngine_Vector3_o offset; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offseta; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetb; // [xsp+0h] [xbp-140h]
  UnityEngine_Vector3_o offsetc; // [xsp+0h] [xbp-140h]
  struct System_Collections_Generic_List_Vector2__o **p_uvs; // [xsp+28h] [xbp-118h]
  struct UnityEngine_Mesh_o **v356; // [xsp+30h] [xbp-110h]
  float v357; // [xsp+38h] [xbp-108h]
  float v358; // [xsp+3Ch] [xbp-104h]
  float v359; // [xsp+40h] [xbp-100h]
  float v360; // [xsp+44h] [xbp-FCh]
  float v361; // [xsp+48h] [xbp-F8h]
  float UVrate; // [xsp+4Ch] [xbp-F4h]
  float v363; // [xsp+50h] [xbp-F0h]
  float v364; // [xsp+54h] [xbp-ECh]
  float pos; // [xsp+58h] [xbp-E8h]
  float item; // [xsp+5Ch] [xbp-E4h]
  float v367; // [xsp+60h] [xbp-E0h]
  float v368; // [xsp+64h] [xbp-DCh]
  float v369; // [xsp+68h] [xbp-D8h]
  float v370; // [xsp+6Ch] [xbp-D4h]
  float v371; // [xsp+6Ch] [xbp-D4h]
  float v372; // [xsp+70h] [xbp-D0h]
  float v373; // [xsp+70h] [xbp-D0h]
  float v374; // [xsp+74h] [xbp-CCh]
  float v375; // [xsp+74h] [xbp-CCh]
  float v376; // [xsp+7Ch] [xbp-C4h]
  float v377; // [xsp+80h] [xbp-C0h]
  float normalizedDir; // [xsp+84h] [xbp-BCh]
  float normalizedDira; // [xsp+84h] [xbp-BCh]
  float normalizedDir_4; // [xsp+88h] [xbp-B8h]
  float normalizedDir_4a; // [xsp+88h] [xbp-B8h]
  float normalizedDir_8; // [xsp+8Ch] [xbp-B4h]
  float normalizedDir_8a; // [xsp+8Ch] [xbp-B4h]
  float v384; // [xsp+90h] [xbp-B0h]
  float v385; // [xsp+90h] [xbp-B0h]
  float v386; // [xsp+94h] [xbp-ACh]
  float v387; // [xsp+94h] [xbp-ACh]
  float v388; // [xsp+94h] [xbp-ACh]
  float v389; // [xsp+98h] [xbp-A8h]
  float jumps; // [xsp+9Ch] [xbp-A4h] BYREF
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v392; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v393; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Direction; // 0:s0.4,4:s1.4,8:s2.4
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
  UnityEngine_Vector3_o v420; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v421; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v422; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v423; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v424; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v425; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v426; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v427; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_59380C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    sub_21FFC50(&Custom2dSplineMesh_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector3__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_21FFC50(&UnityEngine_Mesh_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12770/*"SPLINE MESH"*/);
    byte_59380C8 = 1;
  }
  jumps = 0.0;
  p_drawMesh = &this->fields.drawMesh;
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(drawMesh, 0, 0) )
  {
    v6 = (UnityEngine_Mesh_o *)sub_21FFEBC(UnityEngine_Mesh_TypeInfo);
    UnityEngine_Mesh___ctor(v6, 0);
    *p_drawMesh = v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.drawMesh, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    trianges = (UnityEngine_Object_o *)*p_drawMesh;
    if ( !*p_drawMesh )
      goto LABEL_330;
    UnityEngine_Object__set_name(trianges, (System_String_o *)StringLiteral_12770/*"SPLINE MESH"*/, 0);
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
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_21FFBF4(
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
  v356 = &this->fields.drawMesh;
  UnityEngine_MeshFilter__set_mesh((UnityEngine_MeshFilter_o *)trianges, this->fields.drawMesh, 0);
  v24 = (System_Collections_Generic_List_Vector3__o *)sub_21FFEBC(System_Collections_Generic_List_Vector3__TypeInfo);
  System_Collections_Generic_List_Vector3____ctor(
    v24,
    (const MethodInfo_44AEBA8 *)Method_System_Collections_Generic_List_Vector3___ctor__);
  this->fields.verts = v24;
  p_verts = &this->fields.verts;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.verts, (int32_t)v24, v26, v27, v28, v29, v30, v31);
  v32 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v32,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.trianges = v32;
  p_trianges = &this->fields.trianges;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.trianges, (int32_t)v32, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v40,
    (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  this->fields.uvs = v40;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.uvs, (int32_t)v40, v41, v42, v43, v44, v45, v46);
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
  x = Point.fields.x;
  y = Point.fields.y;
  z = Point.fields.z;
  v392 = Custom2dSplineMesh__GetPoint(this, v51, v55);
  v56 = v392.fields.x;
  v57 = v392.fields.y;
  v58 = v392.fields.z;
  v393 = Custom2dSplineMesh__GetPoint(this, this->fields.PathRate, v59);
  v358 = v393.fields.y;
  v359 = v393.fields.x;
  v357 = v393.fields.z;
  Direction = Custom2dSplineMesh__GetDirection(this, 0.0, v60);
  v62 = Direction.fields.z;
  normalizedDir_4 = Direction.fields.x;
  normalizedDir_8 = Direction.fields.y;
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v386 = x;
  v389 = y;
  v63 = v56 - x;
  v374 = v57;
  v64 = v57 - y;
  v384 = v58;
  v65 = v58 - z;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v61);
  v66 = sqrtf((float)(v65 * v65) + (float)((float)(v63 * v63) + (float)(v64 * v64)));
  if ( v66 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v372 = static_fields->zeroVector.fields.y;
    v68 = static_fields->zeroVector.fields.z;
    normalizedDir = static_fields->zeroVector.fields.x;
  }
  else
  {
    normalizedDir = v63 / v66;
    v67 = v64 / v66;
    v68 = v65 / v66;
    v372 = v67;
  }
  v370 = v68;
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
  v395 = Custom2dSplineMesh__GetOffset(this, 0.0, v61);
  v369 = v51;
  if ( this->fields.DrawCap )
  {
    v73 = v395.fields.x;
    v74 = v395.fields.y;
    v75 = v395.fields.z;
    width = Custom2dSplineMesh__GetWidth(this, 0.0, (const MethodInfo *)vtxIdx);
    if ( !byte_5931943 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931943 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v76);
    v79 = sqrtf(
            (float)(v62 * v62)
          + (float)((float)(normalizedDir_4 * normalizedDir_4) + (float)(normalizedDir_8 * normalizedDir_8)));
    if ( v79 <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      v83 = UnityEngine_Vector3_TypeInfo->static_fields;
      v80 = v83->zeroVector.fields.x;
      v81 = v83->zeroVector.fields.y;
      v82 = v83->zeroVector.fields.z;
    }
    else
    {
      v80 = normalizedDir_4 / v79;
      v81 = normalizedDir_8 / v79;
      v82 = v62 / v79;
    }
    v396.fields.x = v386;
    v396.fields.y = y;
    v396.fields.z = z;
    *(_QWORD *)&offset.fields.y = __PAIR64__(LODWORD(v75), LODWORD(v74));
    offset.fields.x = v73;
    Custom2dSplineMesh__AddCap(this, v396, *(UnityEngine_Vector3_o *)&v80, offset, width, 0, v77);
    v51 = v369;
  }
  PathRate = this->fields.PathRate;
  v85 = 0.0;
  v86 = v374;
  v87 = v384;
  v88 = v386;
  v89 = z;
  if ( PathRate > 0.0 )
  {
    v90 = 0.0;
    do
    {
      isJumpcut = Custom2dSplineMesh__isJumpcut(this, v90, v51, &jumps, v72);
      if ( !isJumpcut && v90 != 0.0 && !this->fields.createVertsEveryStep )
      {
        v397 = Custom2dSplineMesh__GetDirection(this, v90, (const MethodInfo *)vtxIdx);
        if ( (float)((float)(v370 * v397.fields.z)
                   + (float)((float)(normalizedDir * v397.fields.x) + (float)(v372 * v397.fields.y))) >= this->fields.directionChange )
        {
LABEL_128:
          if ( !byte_593193E )
          {
            sub_21FFC50(&System_Math_TypeInfo);
            byte_593193E = 1;
          }
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
          v85 = v85
              + (float)((float)(sqrtf(
                                  (float)((float)(v89 - v87) * (float)(v89 - v87))
                                + (float)((float)((float)(v389 - v86) * (float)(v389 - v86))
                                        + (float)((float)(v88 - v56) * (float)(v88 - v56))))
                              / Custom2dSplineMesh__GetWidth(this, v90, (const MethodInfo *)vtxIdx))
                      * this->fields.UVrate);
          goto LABEL_246;
        }
      }
      if ( !byte_5931943 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931943 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v92 = v56 - v88;
      v375 = v86;
      normalizedDir_8a = v56;
      v93 = v86 - v389;
      v94 = v87 - v89;
      v95 = sqrtf((float)(v94 * v94) + (float)((float)(v93 * v93) + (float)(v92 * v92)));
      if ( v95 <= 0.00001 )
      {
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        v96 = v85;
        v98 = UnityEngine_Vector3_TypeInfo->static_fields;
        v372 = v98->zeroVector.fields.y;
        v97 = v98->zeroVector.fields.z;
        normalizedDir = v98->zeroVector.fields.x;
      }
      else
      {
        v96 = v85;
        normalizedDir = v92 / v95;
        v372 = v93 / v95;
        v97 = v94 / v95;
      }
      v370 = v97;
      v398 = Custom2dSplineMesh__GetOffset(this, v90, (const MethodInfo *)vtxIdx);
      v99 = v88 + v398.fields.x;
      v100 = v389 + v398.fields.y;
      flattenAxis = this->fields.flattenAxis;
      normalizedDir_4a = v90;
      v385 = v87;
      v387 = v88;
      if ( flattenAxis == 2 )
      {
        v107 = v88 - v398.fields.x;
        v104 = v89;
        v103 = 0.0;
        v105 = 0.0;
        v106 = v389 - v398.fields.y;
      }
      else
      {
        v102 = v89;
        v103 = v89 + v398.fields.z;
        v104 = v102;
        v105 = v102 - v398.fields.z;
        if ( flattenAxis == 1 )
        {
          v107 = v88 - v398.fields.x;
          v100 = 0.0;
          v106 = 0.0;
        }
        else
        {
          v106 = v389 - v398.fields.y;
          if ( flattenAxis )
          {
            v107 = v387 - v398.fields.x;
          }
          else
          {
            v99 = 0.0;
            v107 = 0.0;
          }
        }
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      m_CachedPtr = trianges->fields.m_CachedPtr;
      v109 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !m_CachedPtr )
        goto LABEL_330;
      klass = (unsigned int)trianges[1].klass;
      if ( klass >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        v399.fields.x = v99;
        v399.fields.y = v100;
        v399.fields.z = v103;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v399,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
      }
      else
      {
        v111 = (float *)(m_CachedPtr + 12LL * (int)klass);
        LODWORD(trianges[1].klass) = klass + 1;
        v111[8] = v99;
        v111[9] = v100;
        v111[10] = v103;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v112 = trianges->fields.m_CachedPtr;
      v113 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v112 )
        goto LABEL_330;
      v114 = (unsigned int)trianges[1].klass;
      if ( v114 >= *(_DWORD *)(v112 + 24) )
      {
        v400.fields.x = v107;
        v400.fields.y = v106;
        v400.fields.z = v105;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v400,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
      }
      else
      {
        v115 = (float *)(v112 + 12LL * (int)v114);
        LODWORD(trianges[1].klass) = v114 + 1;
        v115[8] = v107;
        v115[9] = v106;
        v115[10] = v105;
      }
      uvs = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v401.fields.x = v99;
        v401.fields.y = v100;
        v401.fields.z = v103;
        UV_48509320 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v401, (const MethodInfo *)vtxIdx);
        v85 = v96;
        v51 = v369;
      }
      else
      {
        v51 = v369;
        v85 = v96;
        UV_48509320 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(v96));
      }
      v89 = v104;
      v56 = normalizedDir_8a;
      if ( !uvs )
        goto LABEL_330;
      items = uvs->fields._items;
      v119 = Method_System_Collections_Generic_List_Vector2__Add__;
      v86 = v375;
      ++uvs->fields._version;
      if ( !items )
        goto LABEL_330;
      size = uvs->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          uvs,
          (UnityEngine_Vector2_o)UV_48509320,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v119[4] + 192LL) + 112LL));
      }
      else
      {
        uvs->fields._size = size + 1;
        items->m_Items[size] = (UnityEngine_Vector2_o)UV_48509320;
      }
      v121 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v402.fields.x = v107;
        v402.fields.y = v106;
        v402.fields.z = v105;
        v122 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v402, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v122 = __PAIR64__(LODWORD(this->fields.lineVmax), LODWORD(v85));
      }
      v87 = v385;
      v88 = v387;
      v90 = normalizedDir_4a;
      if ( !v121 )
        goto LABEL_330;
      v123 = v121->fields._items;
      v124 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v121->fields._version;
      if ( !v123 )
        goto LABEL_330;
      v125 = v121->fields._size;
      if ( (unsigned int)v125 >= LODWORD(v123->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v121,
          (UnityEngine_Vector2_o)v122,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v124[4] + 192LL) + 112LL));
      }
      else
      {
        v121->fields._size = v125 + 1;
        v123->m_Items[v125] = (UnityEngine_Vector2_o)v122;
      }
      if ( normalizedDir_4a == 0.0 )
      {
        if ( !isJumpcut )
          goto LABEL_128;
      }
      else
      {
        trianges = (UnityEngine_Object_o *)this->fields.trianges;
        if ( !trianges )
          goto LABEL_330;
        v147 = trianges->fields.m_CachedPtr;
        vtxIdx = (unsigned int)this->fields.vtxIdx;
        v148 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v147 )
          goto LABEL_330;
        klass_low = SLODWORD(trianges[1].klass);
        if ( (unsigned int)klass_low >= *(_DWORD *)(v147 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = klass_low + 1;
          *(_DWORD *)(v147 + 4 * klass_low + 32) = vtxIdx;
        }
        v150 = trianges->fields.m_CachedPtr;
        v151 = this->fields.vtxIdx;
        v152 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v150 )
          goto LABEL_330;
        v153 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v151 + 2);
        if ( (unsigned int)v153 >= *(_DWORD *)(v150 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v153 + 1;
          *(_DWORD *)(v150 + 4 * v153 + 32) = vtxIdx;
        }
        v154 = trianges->fields.m_CachedPtr;
        v155 = this->fields.vtxIdx;
        v156 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v154 )
          goto LABEL_330;
        v157 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v155 + 1);
        if ( (unsigned int)v157 >= *(_DWORD *)(v154 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v157 + 1;
          *(_DWORD *)(v154 + 4 * v157 + 32) = vtxIdx;
        }
        v158 = trianges->fields.m_CachedPtr;
        v159 = this->fields.vtxIdx;
        v160 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v158 )
          goto LABEL_330;
        v161 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v159 + 2);
        if ( (unsigned int)v161 >= *(_DWORD *)(v158 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v161 + 1;
          *(_DWORD *)(v158 + 4 * v161 + 32) = vtxIdx;
        }
        v162 = trianges->fields.m_CachedPtr;
        v163 = this->fields.vtxIdx;
        v164 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v162 )
          goto LABEL_330;
        v165 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v163 + 3);
        if ( (unsigned int)v165 >= *(_DWORD *)(v162 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
          trianges = (UnityEngine_Object_o *)*p_trianges;
          if ( !*p_trianges )
            goto LABEL_330;
        }
        else
        {
          LODWORD(trianges[1].klass) = v165 + 1;
          *(_DWORD *)(v162 + 4 * v165 + 32) = vtxIdx;
        }
        v166 = trianges->fields.m_CachedPtr;
        v167 = this->fields.vtxIdx;
        v168 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(trianges[1].klass);
        if ( !v166 )
          goto LABEL_330;
        v169 = SLODWORD(trianges[1].klass);
        vtxIdx = (unsigned int)(v167 + 1);
        if ( (unsigned int)v169 >= *(_DWORD *)(v166 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)trianges,
            vtxIdx,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(trianges[1].klass) = v169 + 1;
          *(_DWORD *)(v166 + 4 * v169 + 32) = vtxIdx;
        }
        this->fields.vtxIdx += 2;
        if ( !isJumpcut )
          goto LABEL_128;
      }
      if ( !byte_593193E )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593193E = 1;
      }
      pos = v89;
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v127 = Custom2dSplineMesh__GetWidth(this, normalizedDir_4a, (const MethodInfo *)vtxIdx);
      v128 = jumps;
      v363 = v85;
      v129 = Custom2dSplineMesh_TypeInfo;
      v361 = v127;
      UVrate = this->fields.UVrate;
      if ( !*(&Custom2dSplineMesh_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Custom2dSplineMesh_TypeInfo, v126);
        v129 = Custom2dSplineMesh_TypeInfo;
      }
      v130 = v128 - v129->static_fields->JUMP_THRESH_HOLD;
      v403 = Custom2dSplineMesh__GetPoint(this, v128, v126);
      v131 = v403.fields.x;
      v132 = v403.fields.y;
      v133 = v403.fields.z;
      v360 = v130;
      v404 = Custom2dSplineMesh__GetOffset(this, v130, v134);
      v135 = v404.fields.x;
      v136 = v404.fields.y;
      v137 = v404.fields.z;
      v367 = v128;
      v139 = Custom2dSplineMesh__GetWidth(this, v128, v138);
      normalizedDira = v135;
      v140 = v131 + v135;
      v141 = v132 + v136;
      v142 = this->fields.flattenAxis;
      v376 = v131;
      v377 = v132;
      v373 = v136;
      v364 = v139;
      if ( v142 == 2 )
      {
        v143 = 0.0;
        v144 = normalizedDir_8a;
        v146 = v376 - normalizedDira;
        v371 = v377 - v373;
        v171 = 0.0;
      }
      else
      {
        v143 = v133 + v137;
        if ( v142 == 1 )
        {
          v141 = 0.0;
          v144 = normalizedDir_8a;
          v146 = v376 - normalizedDira;
          item = v133 - v137;
          v371 = 0.0;
          goto LABEL_138;
        }
        v144 = normalizedDir_8a;
        if ( v142 )
        {
          v146 = v376 - normalizedDira;
          v145 = v373;
        }
        else
        {
          v145 = v136;
          v140 = 0.0;
          v146 = 0.0;
        }
        v371 = v377 - v145;
        v171 = v133 - v137;
      }
      item = v171;
LABEL_138:
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v172 = trianges->fields.m_CachedPtr;
      v173 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v172 )
        goto LABEL_330;
      v174 = (unsigned int)trianges[1].klass;
      if ( v174 >= *(_DWORD *)(v172 + 24) )
      {
        v405.fields.x = v140;
        v405.fields.y = v141;
        v405.fields.z = v143;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v405,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v173[4] + 192LL) + 112LL));
      }
      else
      {
        v175 = (float *)(v172 + 12LL * (int)v174);
        LODWORD(trianges[1].klass) = v174 + 1;
        v175[8] = v140;
        v175[9] = v141;
        v175[10] = v143;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v176 = trianges->fields.m_CachedPtr;
      v177 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v176 )
        goto LABEL_330;
      v178 = (unsigned int)trianges[1].klass;
      v368 = v133;
      if ( v178 >= *(_DWORD *)(v176 + 24) )
      {
        v406.fields.x = v146;
        v406.fields.y = v371;
        v406.fields.z = item;
        v179 = v146;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v406,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
      }
      else
      {
        v179 = v146;
        v180 = (float *)(v176 + 12LL * (int)v178);
        LODWORD(trianges[1].klass) = v178 + 1;
        v180[8] = v146;
        v180[9] = v371;
        v180[10] = item;
      }
      v181 = this->fields.uvs;
      v182 = sqrtf(
               (float)((float)(pos - v385) * (float)(pos - v385))
             + (float)((float)((float)(v389 - v375) * (float)(v389 - v375))
                     + (float)((float)(v387 - v144) * (float)(v387 - v144))));
      v183 = (float)(v182 / v361) * UVrate;
      v184 = v363 + v183;
      if ( this->fields.StrictUVmode )
      {
        v407.fields.x = v140;
        v407.fields.y = v141;
        v407.fields.z = v143;
        v185 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v407, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v185 = __PAIR64__(LODWORD(this->fields.lineVmin), v363 + v183);
      }
      if ( !v181 )
        goto LABEL_330;
      v186 = v181->fields._items;
      v187 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v181->fields._version;
      if ( !v186 )
        goto LABEL_330;
      v188 = v181->fields._size;
      if ( (unsigned int)v188 >= LODWORD(v186->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v181,
          (UnityEngine_Vector2_o)v185,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v187[4] + 192LL) + 112LL));
      }
      else
      {
        v181->fields._size = v188 + 1;
        v186->m_Items[v188] = (UnityEngine_Vector2_o)v185;
      }
      v189 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v408.fields.x = v179;
        v408.fields.y = v371;
        v408.fields.z = item;
        v191 = Custom2dSplineMesh__GetUV_48509320(this, v408, (const MethodInfo *)vtxIdx);
        lineVmax = v191.fields.y;
        v184 = v191.fields.x;
        if ( !v189 )
          goto LABEL_330;
      }
      else
      {
        lineVmax = this->fields.lineVmax;
        if ( !v189 )
          goto LABEL_330;
      }
      v192 = v189->fields._items;
      v193 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v189->fields._version;
      if ( !v192 )
        goto LABEL_330;
      v194 = v189->fields._size;
      if ( (unsigned int)v194 >= LODWORD(v192->max_length) )
      {
        v196 = v184;
        System_Collections_Generic_List_Vector2___AddWithResize(
          v189,
          *(UnityEngine_Vector2_o *)(&lineVmax - 1),
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v193[4] + 192LL) + 112LL));
      }
      else
      {
        v195 = (float *)(&v192->obj.klass + v194);
        v189->fields._size = v194 + 1;
        v195[8] = v184;
        v195[9] = lineVmax;
      }
      trianges = (UnityEngine_Object_o *)this->fields.trianges;
      if ( !trianges )
        goto LABEL_330;
      v197 = trianges->fields.m_CachedPtr;
      vtxIdx = (unsigned int)this->fields.vtxIdx;
      v198 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v197 )
        goto LABEL_330;
      v199 = SLODWORD(trianges[1].klass);
      if ( (unsigned int)v199 >= *(_DWORD *)(v197 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v199 + 1;
        *(_DWORD *)(v197 + 4 * v199 + 32) = vtxIdx;
      }
      v200 = trianges->fields.m_CachedPtr;
      v201 = this->fields.vtxIdx;
      v202 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v200 )
        goto LABEL_330;
      v203 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v201 + 2);
      if ( (unsigned int)v203 >= *(_DWORD *)(v200 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v202[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v203 + 1;
        *(_DWORD *)(v200 + 4 * v203 + 32) = vtxIdx;
      }
      v204 = trianges->fields.m_CachedPtr;
      v205 = this->fields.vtxIdx;
      v206 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v204 )
        goto LABEL_330;
      v207 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v205 + 1);
      if ( (unsigned int)v207 >= *(_DWORD *)(v204 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v207 + 1;
        *(_DWORD *)(v204 + 4 * v207 + 32) = vtxIdx;
      }
      v208 = trianges->fields.m_CachedPtr;
      v209 = this->fields.vtxIdx;
      v210 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v208 )
        goto LABEL_330;
      v211 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v209 + 2);
      if ( (unsigned int)v211 >= *(_DWORD *)(v208 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v210[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v211 + 1;
        *(_DWORD *)(v208 + 4 * v211 + 32) = vtxIdx;
      }
      v212 = trianges->fields.m_CachedPtr;
      v213 = this->fields.vtxIdx;
      v214 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v212 )
        goto LABEL_330;
      v215 = SLODWORD(trianges[1].klass);
      vtxIdx = (unsigned int)(v213 + 3);
      if ( (unsigned int)v215 >= *(_DWORD *)(v212 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          vtxIdx,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
        trianges = (UnityEngine_Object_o *)*p_trianges;
        if ( !*p_trianges )
          goto LABEL_330;
      }
      else
      {
        LODWORD(trianges[1].klass) = v215 + 1;
        *(_DWORD *)(v212 + 4 * v215 + 32) = vtxIdx;
      }
      v216 = trianges->fields.m_CachedPtr;
      v217 = this->fields.vtxIdx;
      v218 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v216 )
        goto LABEL_330;
      v219 = SLODWORD(trianges[1].klass);
      v220 = (const MethodInfo *)(unsigned int)(v217 + 1);
      v388 = v182;
      if ( (unsigned int)v219 >= *(_DWORD *)(v216 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)trianges,
          (int32_t)v220,
          *(const MethodInfo_4433138 **)(*(_QWORD *)(v218[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(trianges[1].klass) = v219 + 1;
        *(_DWORD *)(v216 + 4 * v219 + 32) = (_DWORD)v220;
      }
      this->fields.vtxIdx += 4;
      v409 = Custom2dSplineMesh__GetDirection(this, v360, v220);
      v223 = v409.fields.x;
      v224 = v409.fields.y;
      v225 = v409.fields.z;
      if ( !byte_5931943 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931943 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v221);
      v226 = sqrtf((float)(v225 * v225) + (float)((float)(v223 * v223) + (float)(v224 * v224)));
      if ( v226 <= 0.00001 )
      {
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        v230 = UnityEngine_Vector3_TypeInfo->static_fields;
        v227 = v230->zeroVector.fields.x;
        v228 = v230->zeroVector.fields.y;
        v229 = v230->zeroVector.fields.z;
      }
      else
      {
        v227 = v223 / v226;
        v228 = v224 / v226;
        v229 = v225 / v226;
      }
      v410.fields.z = v368;
      offseta.fields.x = normalizedDira;
      *(_QWORD *)&offseta.fields.y = __PAIR64__(LODWORD(v137), LODWORD(v373));
      v410.fields.x = v376;
      v410.fields.y = v377;
      Custom2dSplineMesh__AddCap(this, v410, *(UnityEngine_Vector3_o *)&v227, offseta, v364, 1, v222);
      v231 = v367 + Custom2dSplineMesh_TypeInfo->static_fields->JUMP_THRESH_HOLD;
      v411 = Custom2dSplineMesh__GetDirection(this, v231, v232);
      v234 = v411.fields.x;
      v235 = v411.fields.y;
      v236 = v411.fields.z;
      if ( !byte_5931943 )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_5931943 = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v233);
      v237 = sqrtf((float)(v236 * v236) + (float)((float)(v234 * v234) + (float)(v235 * v235)));
      if ( v237 <= 0.00001 )
      {
        if ( !byte_5931940 )
        {
          sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        v240 = UnityEngine_Vector3_TypeInfo->static_fields;
        v238 = v240->zeroVector.fields.y;
        v239 = v240->zeroVector.fields.z;
        normalizedDir = v240->zeroVector.fields.x;
      }
      else
      {
        v238 = v235 / v237;
        normalizedDir = v234 / v237;
        v239 = v236 / v237;
      }
      v412 = Custom2dSplineMesh__GetOffset(this, v231, v233);
      v241 = v412.fields.x;
      v242 = v412.fields.y;
      v243 = v412.fields.z;
      *(_QWORD *)&offsetb.fields.y = *(_QWORD *)&v412.fields.y;
      v427.fields.y = v238;
      v412.fields.x = v376;
      v412.fields.y = v377;
      v412.fields.z = v368;
      v427.fields.z = v239;
      v427.fields.x = normalizedDir;
      v370 = v239;
      v372 = v238;
      offsetb.fields.x = v241;
      Custom2dSplineMesh__AddCap(this, v412, v427, offsetb, v364, 0, v244);
      v245 = v376 + v241;
      v246 = v377 + v242;
      v247 = this->fields.flattenAxis;
      if ( v247 == 2 )
      {
        v248 = 0.0;
        v249 = 0.0;
        v251 = v376 - v241;
        v250 = v377 - v242;
      }
      else
      {
        v248 = v368 + v243;
        v249 = v368 - v243;
        if ( v247 == 1 )
        {
          v252 = v376;
          v246 = 0.0;
          v250 = 0.0;
LABEL_214:
          v251 = v252 - v241;
          goto LABEL_215;
        }
        v250 = v377 - v242;
        if ( v247 )
        {
          v252 = v376;
          goto LABEL_214;
        }
        v245 = 0.0;
        v251 = 0.0;
      }
LABEL_215:
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v253 = trianges->fields.m_CachedPtr;
      v254 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v253 )
        goto LABEL_330;
      v255 = (unsigned int)trianges[1].klass;
      if ( v255 >= *(_DWORD *)(v253 + 24) )
      {
        v413.fields.x = v245;
        v413.fields.y = v246;
        v413.fields.z = v248;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v413,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v254[4] + 192LL) + 112LL));
      }
      else
      {
        v256 = (float *)(v253 + 12LL * (int)v255);
        LODWORD(trianges[1].klass) = v255 + 1;
        v256[8] = v245;
        v256[9] = v246;
        v256[10] = v248;
      }
      trianges = (UnityEngine_Object_o *)*p_verts;
      if ( !*p_verts )
        goto LABEL_330;
      v257 = trianges->fields.m_CachedPtr;
      v258 = Method_System_Collections_Generic_List_Vector3__Add__;
      ++HIDWORD(trianges[1].klass);
      if ( !v257 )
        goto LABEL_330;
      v259 = (unsigned int)trianges[1].klass;
      if ( v259 >= *(_DWORD *)(v257 + 24) )
      {
        v414.fields.x = v251;
        v414.fields.y = v250;
        v414.fields.z = v249;
        System_Collections_Generic_List_Vector3___AddWithResize(
          (System_Collections_Generic_List_Vector3__o *)trianges,
          v414,
          *(const MethodInfo_44AF470 **)(*(_QWORD *)(v258[4] + 192LL) + 112LL));
      }
      else
      {
        v260 = (float *)(v257 + 12LL * (int)v259);
        LODWORD(trianges[1].klass) = v259 + 1;
        v260[8] = v251;
        v260[9] = v250;
        v260[10] = v249;
      }
      v261 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v415.fields.x = v245;
        v415.fields.y = v246;
        v415.fields.z = v248;
        v262 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v415, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v262 = __PAIR64__(LODWORD(this->fields.lineVmin), 0);
      }
      v51 = v369;
      if ( !v261 )
        goto LABEL_330;
      v263 = v261->fields._items;
      v264 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v261->fields._version;
      if ( !v263 )
        goto LABEL_330;
      v265 = v261->fields._size;
      if ( (unsigned int)v265 >= LODWORD(v263->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v261,
          (UnityEngine_Vector2_o)v262,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
      }
      else
      {
        v261->fields._size = v265 + 1;
        v263->m_Items[v265] = (UnityEngine_Vector2_o)v262;
      }
      v266 = this->fields.uvs;
      if ( this->fields.StrictUVmode )
      {
        v416.fields.x = v251;
        v416.fields.y = v250;
        v416.fields.z = v249;
        v267 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v416, (const MethodInfo *)vtxIdx);
      }
      else
      {
        v267 = __PAIR64__(LODWORD(this->fields.lineVmax), 0);
      }
      v90 = v367;
      if ( !v266 )
        goto LABEL_330;
      v268 = v266->fields._items;
      v269 = Method_System_Collections_Generic_List_Vector2__Add__;
      ++v266->fields._version;
      if ( !v268 )
        goto LABEL_330;
      v270 = v266->fields._size;
      if ( (unsigned int)v270 >= LODWORD(v268->max_length) )
      {
        System_Collections_Generic_List_Vector2___AddWithResize(
          v266,
          (UnityEngine_Vector2_o)v267,
          *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v269[4] + 192LL) + 112LL));
      }
      else
      {
        v266->fields._size = v270 + 1;
        v268->m_Items[v270] = (UnityEngine_Vector2_o)v267;
      }
      if ( !byte_593193E )
      {
        sub_21FFC50(&System_Math_TypeInfo);
        byte_593193E = 1;
      }
      if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, vtxIdx);
      v85 = (float)(v388 / Custom2dSplineMesh__GetWidth(this, normalizedDir_4a, (const MethodInfo *)vtxIdx))
          * this->fields.UVrate;
      v417 = Custom2dSplineMesh__GetPoint(this, v231, v271);
      v56 = v417.fields.x;
      v86 = v417.fields.y;
      v87 = v417.fields.z;
LABEL_246:
      v90 = v51 + v90;
      v88 = v56;
      v389 = v86;
      v89 = v87;
      v418 = Custom2dSplineMesh__GetPoint(this, v90, v170);
      v56 = v418.fields.x;
      PathRate = this->fields.PathRate;
      v86 = v418.fields.y;
      v87 = v418.fields.z;
    }
    while ( v90 < PathRate );
  }
  if ( PathRate > 0.0 )
  {
    v272 = v85;
    v419 = Custom2dSplineMesh__GetOffset(this, PathRate, (const MethodInfo *)vtxIdx);
    v273 = this->fields.flattenAxis;
    v274 = v359 + v419.fields.x;
    v275 = v358 + v419.fields.y;
    if ( v273 != 2 )
    {
      v276 = v357 + v419.fields.z;
      v277 = v357 - v419.fields.z;
      if ( v273 == 1 )
      {
        v280 = v359;
        v275 = 0.0;
        v278 = 0.0;
      }
      else
      {
        v278 = v358 - v419.fields.y;
        if ( !v273 )
        {
          v274 = 0.0;
          v279 = 0.0;
LABEL_256:
          trianges = (UnityEngine_Object_o *)*p_verts;
          if ( *p_verts )
          {
            v281 = trianges->fields.m_CachedPtr;
            v282 = Method_System_Collections_Generic_List_Vector3__Add__;
            ++HIDWORD(trianges[1].klass);
            if ( v281 )
            {
              v283 = (unsigned int)trianges[1].klass;
              if ( v283 >= *(_DWORD *)(v281 + 24) )
              {
                v420.fields.x = v274;
                v420.fields.y = v275;
                v420.fields.z = v276;
                System_Collections_Generic_List_Vector3___AddWithResize(
                  (System_Collections_Generic_List_Vector3__o *)trianges,
                  v420,
                  *(const MethodInfo_44AF470 **)(*(_QWORD *)(v282[4] + 192LL) + 112LL));
              }
              else
              {
                v284 = (float *)(v281 + 12LL * (int)v283);
                LODWORD(trianges[1].klass) = v283 + 1;
                v284[8] = v274;
                v284[9] = v275;
                v284[10] = v276;
              }
              trianges = (UnityEngine_Object_o *)*p_verts;
              if ( *p_verts )
              {
                v285 = trianges->fields.m_CachedPtr;
                v286 = Method_System_Collections_Generic_List_Vector3__Add__;
                ++HIDWORD(trianges[1].klass);
                if ( v285 )
                {
                  v287 = (unsigned int)trianges[1].klass;
                  if ( v287 >= *(_DWORD *)(v285 + 24) )
                  {
                    v421.fields.x = v279;
                    v421.fields.y = v278;
                    v421.fields.z = v277;
                    System_Collections_Generic_List_Vector3___AddWithResize(
                      (System_Collections_Generic_List_Vector3__o *)trianges,
                      v421,
                      *(const MethodInfo_44AF470 **)(*(_QWORD *)(v286[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v288 = (float *)(v285 + 12LL * (int)v287);
                    LODWORD(trianges[1].klass) = v287 + 1;
                    v288[8] = v279;
                    v288[9] = v278;
                    v288[10] = v277;
                  }
                  v289 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v422.fields.x = v274;
                    v422.fields.y = v275;
                    v422.fields.z = v276;
                    v290 = (unsigned __int64)Custom2dSplineMesh__GetUV_48509320(this, v422, (const MethodInfo *)vtxIdx);
                    v291 = v272;
                    if ( !v289 )
                      goto LABEL_330;
                  }
                  else
                  {
                    v291 = v272;
                    v290 = __PAIR64__(LODWORD(this->fields.lineVmin), LODWORD(v272));
                    if ( !v289 )
                      goto LABEL_330;
                  }
                  v292 = v289->fields._items;
                  v293 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v289->fields._version;
                  if ( !v292 )
                    goto LABEL_330;
                  v294 = v289->fields._size;
                  if ( (unsigned int)v294 >= LODWORD(v292->max_length) )
                  {
                    System_Collections_Generic_List_Vector2___AddWithResize(
                      v289,
                      (UnityEngine_Vector2_o)v290,
                      *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v293[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v289->fields._size = v294 + 1;
                    v292->m_Items[v294] = (UnityEngine_Vector2_o)v290;
                  }
                  v295 = this->fields.uvs;
                  if ( this->fields.StrictUVmode )
                  {
                    v423.fields.x = v279;
                    v423.fields.y = v278;
                    v423.fields.z = v277;
                    v297 = Custom2dSplineMesh__GetUV_48509320(this, v423, (const MethodInfo *)vtxIdx);
                    v296 = v297.fields.y;
                    v291 = v297.fields.x;
                    if ( !v295 )
                      goto LABEL_330;
                  }
                  else
                  {
                    v296 = this->fields.lineVmax;
                    if ( !v295 )
                      goto LABEL_330;
                  }
                  v298 = v295->fields._items;
                  v299 = Method_System_Collections_Generic_List_Vector2__Add__;
                  ++v295->fields._version;
                  if ( v298 )
                  {
                    v300 = v295->fields._size;
                    if ( (unsigned int)v300 >= LODWORD(v298->max_length) )
                    {
                      v302 = v291;
                      System_Collections_Generic_List_Vector2___AddWithResize(
                        v295,
                        *(UnityEngine_Vector2_o *)(&v296 - 1),
                        *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v299[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v301 = (float *)(&v298->obj.klass + v300);
                      v295->fields._size = v300 + 1;
                      v301[8] = v291;
                      v301[9] = v296;
                    }
                    trianges = (UnityEngine_Object_o *)this->fields.trianges;
                    if ( trianges )
                    {
                      v303 = trianges->fields.m_CachedPtr;
                      vtxIdx = (unsigned int)this->fields.vtxIdx;
                      v304 = Method_System_Collections_Generic_List_int__Add__;
                      ++HIDWORD(trianges[1].klass);
                      if ( v303 )
                      {
                        v305 = SLODWORD(trianges[1].klass);
                        if ( (unsigned int)v305 >= *(_DWORD *)(v303 + 24) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            (System_Collections_Generic_List_int__o *)trianges,
                            vtxIdx,
                            *(const MethodInfo_4433138 **)(*(_QWORD *)(v304[4] + 192LL) + 112LL));
                          trianges = (UnityEngine_Object_o *)*p_trianges;
                          if ( !*p_trianges )
                            goto LABEL_330;
                        }
                        else
                        {
                          LODWORD(trianges[1].klass) = v305 + 1;
                          *(_DWORD *)(v303 + 4 * v305 + 32) = vtxIdx;
                        }
                        v306 = trianges->fields.m_CachedPtr;
                        v307 = this->fields.vtxIdx;
                        v308 = Method_System_Collections_Generic_List_int__Add__;
                        ++HIDWORD(trianges[1].klass);
                        if ( v306 )
                        {
                          v309 = SLODWORD(trianges[1].klass);
                          vtxIdx = (unsigned int)(v307 + 2);
                          if ( (unsigned int)v309 >= *(_DWORD *)(v306 + 24) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              (System_Collections_Generic_List_int__o *)trianges,
                              vtxIdx,
                              *(const MethodInfo_4433138 **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
                            trianges = (UnityEngine_Object_o *)*p_trianges;
                            if ( !*p_trianges )
                              goto LABEL_330;
                          }
                          else
                          {
                            LODWORD(trianges[1].klass) = v309 + 1;
                            *(_DWORD *)(v306 + 4 * v309 + 32) = vtxIdx;
                          }
                          v310 = trianges->fields.m_CachedPtr;
                          v311 = this->fields.vtxIdx;
                          v312 = Method_System_Collections_Generic_List_int__Add__;
                          ++HIDWORD(trianges[1].klass);
                          if ( v310 )
                          {
                            v313 = SLODWORD(trianges[1].klass);
                            vtxIdx = (unsigned int)(v311 + 1);
                            if ( (unsigned int)v313 >= *(_DWORD *)(v310 + 24) )
                            {
                              System_Collections_Generic_List_int___AddWithResize(
                                (System_Collections_Generic_List_int__o *)trianges,
                                vtxIdx,
                                *(const MethodInfo_4433138 **)(*(_QWORD *)(v312[4] + 192LL) + 112LL));
                              trianges = (UnityEngine_Object_o *)*p_trianges;
                              if ( !*p_trianges )
                                goto LABEL_330;
                            }
                            else
                            {
                              LODWORD(trianges[1].klass) = v313 + 1;
                              *(_DWORD *)(v310 + 4 * v313 + 32) = vtxIdx;
                            }
                            v314 = trianges->fields.m_CachedPtr;
                            v315 = this->fields.vtxIdx;
                            v316 = Method_System_Collections_Generic_List_int__Add__;
                            ++HIDWORD(trianges[1].klass);
                            if ( v314 )
                            {
                              v317 = SLODWORD(trianges[1].klass);
                              vtxIdx = (unsigned int)(v315 + 2);
                              if ( (unsigned int)v317 >= *(_DWORD *)(v314 + 24) )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  (System_Collections_Generic_List_int__o *)trianges,
                                  vtxIdx,
                                  *(const MethodInfo_4433138 **)(*(_QWORD *)(v316[4] + 192LL) + 112LL));
                                trianges = (UnityEngine_Object_o *)*p_trianges;
                                if ( !*p_trianges )
                                  goto LABEL_330;
                              }
                              else
                              {
                                LODWORD(trianges[1].klass) = v317 + 1;
                                *(_DWORD *)(v314 + 4 * v317 + 32) = vtxIdx;
                              }
                              v318 = trianges->fields.m_CachedPtr;
                              v319 = this->fields.vtxIdx;
                              v320 = Method_System_Collections_Generic_List_int__Add__;
                              ++HIDWORD(trianges[1].klass);
                              if ( v318 )
                              {
                                v321 = SLODWORD(trianges[1].klass);
                                vtxIdx = (unsigned int)(v319 + 3);
                                if ( (unsigned int)v321 >= *(_DWORD *)(v318 + 24) )
                                {
                                  System_Collections_Generic_List_int___AddWithResize(
                                    (System_Collections_Generic_List_int__o *)trianges,
                                    vtxIdx,
                                    *(const MethodInfo_4433138 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
                                  trianges = (UnityEngine_Object_o *)*p_trianges;
                                  if ( !*p_trianges )
                                    goto LABEL_330;
                                }
                                else
                                {
                                  LODWORD(trianges[1].klass) = v321 + 1;
                                  *(_DWORD *)(v318 + 4 * v321 + 32) = vtxIdx;
                                }
                                v322 = trianges->fields.m_CachedPtr;
                                v323 = this->fields.vtxIdx;
                                v324 = Method_System_Collections_Generic_List_int__Add__;
                                ++HIDWORD(trianges[1].klass);
                                if ( v322 )
                                {
                                  v325 = SLODWORD(trianges[1].klass);
                                  vtxIdx = (unsigned int)(v323 + 1);
                                  if ( (unsigned int)v325 >= *(_DWORD *)(v322 + 24) )
                                  {
                                    System_Collections_Generic_List_int___AddWithResize(
                                      (System_Collections_Generic_List_int__o *)trianges,
                                      vtxIdx,
                                      *(const MethodInfo_4433138 **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
                                  }
                                  else
                                  {
                                    LODWORD(trianges[1].klass) = v325 + 1;
                                    *(_DWORD *)(v322 + 4 * v325 + 32) = vtxIdx;
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
          sub_21FFECC(trianges, vtxIdx);
        }
        v280 = v359;
      }
      v279 = v280 - v419.fields.x;
      goto LABEL_256;
    }
    v276 = 0.0;
    v277 = 0.0;
    v279 = v359 - v419.fields.x;
    v278 = v358 - v419.fields.y;
    goto LABEL_256;
  }
LABEL_308:
  if ( this->fields.DrawCap )
  {
    v424 = Custom2dSplineMesh__GetOffset(this, this->fields.PathRate, (const MethodInfo *)vtxIdx);
    v326 = v424.fields.x;
    v327 = v424.fields.y;
    v328 = v424.fields.z;
    v330 = Custom2dSplineMesh__GetWidth(this, this->fields.PathRate, v329);
    v425 = Custom2dSplineMesh__GetDirection(this, this->fields.PathRate, v331);
    v334 = v425.fields.x;
    v335 = v425.fields.y;
    v336 = v425.fields.z;
    if ( !byte_5931943 )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931943 = 1;
    }
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v332);
    v337 = sqrtf((float)(v336 * v336) + (float)((float)(v334 * v334) + (float)(v335 * v335)));
    if ( v337 <= 0.00001 )
    {
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      v341 = UnityEngine_Vector3_TypeInfo->static_fields;
      v338 = v341->zeroVector.fields.x;
      v339 = v341->zeroVector.fields.y;
      v340 = v341->zeroVector.fields.z;
    }
    else
    {
      v338 = v334 / v337;
      v339 = v335 / v337;
      v340 = v336 / v337;
    }
    v426.fields.y = v358;
    v426.fields.x = v359;
    v426.fields.z = v357;
    *(_QWORD *)&offsetc.fields.y = __PAIR64__(LODWORD(v328), LODWORD(v327));
    offsetc.fields.x = v326;
    Custom2dSplineMesh__AddCap(this, v426, *(UnityEngine_Vector3_o *)&v338, offsetc, v330, 1, v333);
  }
  trianges = (UnityEngine_Object_o *)*p_verts;
  if ( !*p_verts )
    goto LABEL_330;
  v342 = *v356;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector3___ToArray(
                                       (System_Collections_Generic_List_Vector3__o *)trianges,
                                       (const MethodInfo_44B0FF4 *)Method_System_Collections_Generic_List_Vector3__ToArray__);
  if ( !v342 )
    goto LABEL_330;
  UnityEngine_Mesh__set_vertices(v342, (UnityEngine_Vector3_array *)trianges, 0);
  trianges = (UnityEngine_Object_o *)*p_trianges;
  if ( !*p_trianges )
    goto LABEL_330;
  v343 = *v356;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_int___ToArray(
                                       (System_Collections_Generic_List_int__o *)trianges,
                                       (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v343 )
    goto LABEL_330;
  UnityEngine_Mesh__set_triangles(v343, (System_Int32_array *)trianges, 0);
  trianges = (UnityEngine_Object_o *)*p_uvs;
  if ( !*p_uvs )
    goto LABEL_330;
  v344 = *v356;
  trianges = (UnityEngine_Object_o *)System_Collections_Generic_List_Vector2___ToArray(
                                       (System_Collections_Generic_List_Vector2__o *)trianges,
                                       (const MethodInfo_44AE694 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  if ( !v344 )
    goto LABEL_330;
  UnityEngine_Mesh__set_uv(v344, (UnityEngine_Vector2_array *)trianges, 0);
  v345 = *p_verts;
  if ( !*p_verts )
    goto LABEL_330;
  v346 = *p_trianges;
  v347 = v345->fields._version + 1;
  v345->fields._size = 0;
  v345->fields._version = v347;
  if ( !v346 )
    goto LABEL_330;
  v348 = *p_uvs;
  v349 = v346->fields._version + 1;
  v346->fields._size = 0;
  v346->fields._version = v349;
  if ( !v348 )
    goto LABEL_330;
  trianges = (UnityEngine_Object_o *)*v356;
  v350 = v348->fields._version + 1;
  v348->fields._size = 0;
  v348->fields._version = v350;
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
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  points = this->fields.points;
  if ( !points )
    sub_21FFECC(this, *(_QWORD *)&index);
  if ( LODWORD(points->max_length) <= index )
    sub_21FFED4(this);
  v4 = (float *)((char *)points + 12 * index);
  v5 = v4[8];
  v6 = v4[9];
  v7 = v4[10];
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t Custom2dSplineMesh__GetControlPointMode(Custom2dSplineMesh_o *this, int32_t index, const MethodInfo *method)
{
  struct BezierControlPointMode_array *modes; // x8
  int v4; // w9

  modes = this->fields.modes;
  if ( !modes )
    sub_21FFECC(this, *(_QWORD *)&index);
  v4 = (index + 1) / 3;
  if ( (unsigned int)v4 >= LODWORD(modes->max_length) )
    sub_21FFED4(this);
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
    sub_21FFECC(v5, v6);
  v8 = (index + 1) / 3;
  if ( (unsigned int)v8 >= LODWORD(curveWeight->max_length) )
    sub_21FFED4(v5);
  return curveWeight->m_Items[v8];
}


UnityEngine_Vector3_o Custom2dSplineMesh__GetDirection(Custom2dSplineMesh_o *this, float t, const MethodInfo *method)
{
  __int64 v3; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  float v7; // s2
  float v8; // s0
  float v9; // s1
  float v10; // s2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Vector3_o Velocity; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  Velocity = Custom2dSplineMesh__GetVelocity(this, t, method);
  x = Velocity.fields.x;
  y = Velocity.fields.y;
  z = Velocity.fields.z;
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
  v7 = sqrtf((float)(z * z) + (float)((float)(x * x) + (float)(y * y)));
  if ( v7 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    v8 = static_fields->zeroVector.fields.x;
    v9 = static_fields->zeroVector.fields.y;
    v10 = static_fields->zeroVector.fields.z;
  }
  else
  {
    v8 = x / v7;
    v9 = y / v7;
    v10 = z / v7;
  }
  result.fields.z = v10;
  result.fields.y = v9;
  result.fields.x = v8;
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
  float v36; // s0
  float v37; // s1
  float v38; // s2
  UnityEngine_Vector3_o Direction; // 0:s0.4,4:s1.4,8:s2.4
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
  if ( !byte_5931943 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_5931943 = 1;
  }
  v19 = v13 - v14;
  v20 = v15 - v16;
  v21 = v17 - v18;
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v12);
  v22 = sqrtf((float)(v21 * v21) + (float)((float)(v19 * v19) + (float)(v20 * v20)));
  if ( v22 <= 0.00001 )
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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
    v36 = v32;
  else
    v36 = v28;
  if ( v30 == 2 )
    v37 = v29;
  else
    v37 = v35;
  if ( v30 == 2 )
    v38 = v34;
  else
    v38 = v31;
  result.fields.z = v38;
  result.fields.y = v37;
  result.fields.x = v36;
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
    sub_21FFECC(*(_QWORD *)&v5.fields.x, *(_QWORD *)&v5.fields.z);
  max_length = points->max_length;
  if ( LODWORD(v5.fields.x) >= max_length
    || LODWORD(v5.fields.x) + 1 >= max_length
    || LODWORD(v5.fields.x) + 2 >= max_length
    || LODWORD(v5.fields.x) + 3 >= max_length )
  {
    sub_21FFED4(*(_QWORD *)&v5.fields.x);
  }
  return Bezier__GetPoint_48492896(
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
    sub_21FFECC(v7, v8);
  v10.fields.x = Point.fields.x + this->fields.PointOffset.fields.x;
  v10.fields.z = Point.fields.z + this->fields.PointOffset.fields.z;
  v10.fields.y = Point.fields.y + this->fields.PointOffset.fields.y;
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
    sub_21FFECC(v7, v8);
  return UnityEngine_Transform__TransformPoint(transform, *(UnityEngine_Vector3_o *)(&v10 - 1), 0);
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
    sub_21FFECC(v3, v4);
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
        sub_21FFED4(v3);
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
  UnityEngine_Vector2_o UV_48509320; // kr00_8
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( this->fields.StrictUVmode )
  {
    UV_48509320 = Custom2dSplineMesh__GetUV_48509320(this, pos, method);
    coordU = UV_48509320.fields.x;
    coordV = UV_48509320.fields.y;
  }
  v6 = coordU;
  v7 = coordV;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o Custom2dSplineMesh__GetUV_48509320(
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
    goto LABEL_7;
  }
  if ( flattenAxis == 1 )
  {
    UVrate = this->fields.UVrate;
    v8 = pos.fields.z + this->fields.UVslice;
LABEL_7:
    x = pos.fields.x * UVrate;
    y = v8 * UVrate;
    goto LABEL_11;
  }
  if ( flattenAxis )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
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
  UnityEngine_Vector3_o FirstDerivative_48493164; // 0:s0.4,4:s1.4,8:s2.4
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
    sub_21FFED4(*(_QWORD *)&v6.fields.x);
  }
  v11 = *(UnityEngine_Transform_o **)&v6.fields.x;
  if ( !*(_QWORD *)&v6.fields.x
    || (FirstDerivative_48493164 = Bezier__GetFirstDerivative_48493164(
                                     points->m_Items[WeightedPointIdxAndT],
                                     points->m_Items[WeightedPointIdxAndT + 1],
                                     points->m_Items[WeightedPointIdxAndT + 2],
                                     v6,
                                     COERCE_FLOAT(*(_QWORD *)&points->m_Items[WeightedPointIdxAndT + 3].fields.x),
                                     v8),
        v20 = UnityEngine_Transform__TransformPoint(v11, FirstDerivative_48493164, 0),
        x = v20.fields.x,
        y = v20.fields.y,
        z = v20.fields.z,
        (*(_QWORD *)&v6.fields.x = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0)) == 0) )
  {
LABEL_10:
    sub_21FFECC(*(_QWORD *)&v6.fields.x, *(_QWORD *)&v6.fields.z);
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
          sub_21FFED4(v11);
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
    sub_21FFECC(this, innerT);
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
  UnityEngine_Vector3_o v8; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Point; // 0:s0.4,4:s1.4,8:s2.4

  if ( !this->fields.flattenAxisAsWidthVariable )
    return this->fields.DrawWidth;
  flattenAxis = this->fields.flattenAxis;
  if ( flattenAxis == 2 )
  {
    Point = Custom2dSplineMesh__GetPoint(this, rate, method);
    DrawWidth = Point.fields.z + this->fields.AxisWidthOffset;
  }
  else if ( flattenAxis == 1 )
  {
    v8 = Custom2dSplineMesh__GetPoint(this, rate, method);
    DrawWidth = v8.fields.y + this->fields.AxisWidthOffset;
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

  if ( (byte_59380C5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59380C5 = 1;
  }
  meshFilter = this->fields.meshFilter;
  if ( !meshFilter
    || (UnityEngine_MeshFilter__set_mesh(meshFilter, 0, 0),
        (meshFilter = (UnityEngine_MeshFilter_o *)this->fields.drawMesh) == 0) )
  {
    sub_21FFECC(meshFilter, method);
  }
  UnityEngine_Mesh__Clear((UnityEngine_Mesh_o *)meshFilter, 0);
  drawMesh = (UnityEngine_Object_o *)this->fields.drawMesh;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  UnityEngine_Object__Destroy_83246496(drawMesh, 0);
}


void Custom2dSplineMesh__RemoveMesh(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  UnityEngine_MeshFilter_o *meshFilter; // x0

  meshFilter = this->fields.meshFilter;
  if ( !meshFilter )
    sub_21FFECC(0, method);
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

  if ( (byte_59380BF & 1) == 0 )
  {
    sub_21FFC50(&BezierControlPointMode___TypeInfo);
    sub_21FFC50(&float___TypeInfo);
    sub_21FFC50(&UnityEngine_Vector3___TypeInfo);
    byte_59380BF = 1;
  }
  v3 = sub_21FFD10(UnityEngine_Vector3___TypeInfo, 4);
  if ( !v3 )
    goto LABEL_12;
  v11 = *(_DWORD *)(v3 + 24);
  if ( !v11
    || (*(_DWORD *)(v3 + 40) = 0, *(_QWORD *)(v3 + 32) = 1065353216, v11 == 1)
    || (*(_DWORD *)(v3 + 52) = 0, *(_QWORD *)(v3 + 44) = 0x40000000, v11 <= 2)
    || (*(_DWORD *)(v3 + 64) = 0, *(_QWORD *)(v3 + 56) = 1077936128, v11 == 3) )
  {
LABEL_11:
    sub_21FFED4(v3);
  }
  *(_DWORD *)(v3 + 76) = 0;
  *(_QWORD *)(v3 + 68) = 1082130432;
  this->fields.points = (struct UnityEngine_Vector3_array *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.points, v3, v5, v6, v7, v8, v9, v10);
  v12 = (struct BezierControlPointMode_array *)sub_21FFD10(BezierControlPointMode___TypeInfo, 2);
  this->fields.modes = v12;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.modes, (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v3 = sub_21FFD10(float___TypeInfo, 1);
  if ( !v3 )
LABEL_12:
    sub_21FFECC(v3, v4);
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_11;
  this->fields.curveWeight = (struct System_Single_array *)v3;
  *(_DWORD *)(v3 + 32) = 1065353216;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.curveWeight, v3, v19, v20, v21, v22, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
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

  y = org.fields.y;
  z = org.fields.z;
  x = org.fields.x;
  flattenAxis = this->fields.flattenAxis;
  if ( !this->fields.FlipMesh )
    angleDegree = -angleDegree;
  switch ( flattenAxis )
  {
    case 2:
      v10 = angleDegree * 0.017453;
      v8 = 0.0;
      v9 = 0.0;
      goto LABEL_10;
    case 1:
      v9 = angleDegree * 0.017453;
      v8 = 0.0;
      goto LABEL_8;
    case 0:
      v8 = angleDegree * 0.017453;
      v9 = 0.0;
LABEL_8:
      v10 = 0.0;
LABEL_10:
      v17 = UnityEngine_Quaternion__Internal_FromEulerRad(*(UnityEngine_Vector3_o *)&v8, 0);
      v16.fields.x = x;
      v16.fields.y = y;
      v16.fields.z = z;
      v14 = UnityEngine_Quaternion__op_Multiply_83158396(v17, v16, 0);
      x = v14.fields.x;
      y = v14.fields.y;
      z = v14.fields.z;
      break;
  }
  v11 = y;
  v12 = z;
  v13 = x;
  result.fields.z = v12;
  result.fields.y = v11;
  result.fields.x = v13;
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
        sub_21FFECC(this, *(_QWORD *)&index);
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
    sub_21FFED4(this);
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
    sub_21FFECC(this, *(_QWORD *)&index);
  v5 = (index + 1) / 3;
  if ( (unsigned int)v5 >= LODWORD(modes->max_length) )
    sub_21FFED4(this);
  modes->m_Items[v5] = mode;
  Custom2dSplineMesh__EnforceMode(this, index, *(const MethodInfo **)&mode);
}


void Custom2dSplineMesh__SetList(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_Vector3__o *splinePos; // x0
  System_Collections_Generic_IEnumerable_T__o *points; // x1
  int v5; // w9
  const MethodInfo_44AF6A4 *v6; // x2

  if ( (byte_59380C6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__Clear__);
    byte_59380C6 = 1;
  }
  splinePos = this->fields.splinePos;
  if ( !splinePos )
    sub_21FFECC(0, method);
  points = (System_Collections_Generic_IEnumerable_T__o *)this->fields.points;
  v5 = splinePos->fields._version + 1;
  v6 = (const MethodInfo_44AF6A4 *)Method_System_Collections_Generic_List_Vector3__AddRange__;
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

  if ( (byte_59380C3 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_MeshFilter___);
    byte_59380C3 = 1;
  }
  if ( this->fields.DrawPath )
  {
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_MeshFilter___);
    this->fields.meshFilter = (struct UnityEngine_MeshFilter_o *)Component_object;
    sub_21FFBF4(
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
  UnityEngine_Vector3_o Item; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_59380C4 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Count__);
    this = (Custom2dSplineMesh_o *)sub_21FFC50(&Method_System_Collections_Generic_List_Vector3__get_Item__);
    byte_59380C4 = 1;
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
    sub_21FFECC(this, method);
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
             (const MethodInfo_44AF140 *)Method_System_Collections_Generic_List_Vector3__get_Item__);
    v8 = v2->fields.points;
    if ( !v8 )
      goto LABEL_17;
    if ( v7 >= LODWORD(v8->max_length) )
      sub_21FFED4(this);
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
  if ( (byte_59380C0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_float__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_float___ctor___91438352);
    sub_21FFC50(&System_Collections_Generic_List_float__TypeInfo);
    this = (Custom2dSplineMesh_o *)sub_21FFC50(&float___TypeInfo);
    byte_59380C0 = 1;
  }
  p_curveWeight = (MissionNaviTransitionBoardItem_o *)&v2->fields.curveWeight;
  curveWeight = (System_Collections_Generic_IEnumerable_T__o *)v2->fields.curveWeight;
  if ( !curveWeight || (v5 = (unsigned __int64)curveWeight[1].monitor) == 0 )
  {
    modes = v2->fields.modes;
    if ( !modes )
      goto LABEL_18;
    v7 = sub_21FFD10(float___TypeInfo, (unsigned int)(LODWORD(modes->max_length) - 1));
    p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v7;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.curveWeight, v7, v8, v9, v10, v11, v12, v13);
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
          sub_21FFED4(this);
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
    v19 = (System_Collections_Generic_List_float__o *)sub_21FFEBC(System_Collections_Generic_List_float__TypeInfo);
    System_Collections_Generic_List_float____ctor_71803492(
      v19,
      curveWeight,
      (const MethodInfo_447A264 *)Method_System_Collections_Generic_List_float___ctor___91438352);
    if ( p_curveWeight->klass && v19 )
    {
      System_Collections_Generic_List_float___RemoveAt(
        v19,
        LODWORD(p_curveWeight->klass->_1.namespaze) - 1,
        (const MethodInfo_447C0FC *)Method_System_Collections_Generic_List_float__RemoveAt__);
      v20 = System_Collections_Generic_List_float___ToArray(
              v19,
              (const MethodInfo_447C438 *)Method_System_Collections_Generic_List_float__ToArray__);
      p_curveWeight->klass = (MissionNaviTransitionBoardItem_c *)v20;
      sub_21FFBF4(p_curveWeight, (int32_t)v20, v21, v22, v23, v24, v25, v26);
      return;
    }
LABEL_18:
    sub_21FFECC(this, method);
  }
}


int32_t Custom2dSplineMesh__get_ControlPointCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8

  points = this->fields.points;
  if ( !points )
    sub_21FFECC(this, method);
  return points->max_length;
}


int32_t Custom2dSplineMesh__get_CurveCount(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_array *points; // x8
  unsigned __int64 v3; // x8

  points = this->fields.points;
  if ( !points )
    sub_21FFECC(this, method);
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
      sub_21FFECC(v10, v11);
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
    result = 1;
    *jumps = v13;
  }
  return result;
}


UnityEngine_Vector3_o Custom2dSplineMesh__upVec(Custom2dSplineMesh_o *this, const MethodInfo *method)
{
  float v2; // s0
  int32_t flattenAxis; // w8
  float v4; // s4
  float v5; // s1
  float v6; // s2
  float v7; // s0
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
    v5 = v2;
  else
    v5 = 0.0;
  if ( flattenAxis == 2 )
    v6 = v2;
  else
    v6 = 0.0;
  if ( flattenAxis == 2 )
    v5 = 0.0;
  if ( (unsigned int)(flattenAxis - 1) >= 2 )
    v7 = v4;
  else
    v7 = 0.0;
  result.fields.z = v6;
  result.fields.y = v5;
  result.fields.x = v7;
  return result;
}