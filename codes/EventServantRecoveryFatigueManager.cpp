void __fastcall EventServantRecoveryFatigueManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x19
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v17; // d0
  float z; // s1
  __int64 v19; // x1
  __int64 v20; // x2
  struct UnityEngine_Vector3_StaticFields *v21; // x8
  __int64 v22; // d0
  float v23; // s1
  __int64 v24; // x1
  __int64 v25; // x2
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  __int64 v27; // d0
  float v28; // s1
  __int64 v29; // x1
  __int64 v30; // x2
  struct UnityEngine_Vector3_StaticFields *v31; // x8
  __int64 v32; // d0
  float v33; // s1
  __int64 v34; // x1
  __int64 v35; // x2
  struct UnityEngine_Vector3_StaticFields *v36; // x8
  __int64 v37; // d0
  float v38; // s1
  __int64 v39; // x1
  __int64 v40; // x2
  struct UnityEngine_Vector3_StaticFields *v41; // x8
  __int64 v42; // d0
  float v43; // s1
  __int64 v44; // x1
  __int64 v45; // x2
  struct UnityEngine_Vector3_StaticFields *v46; // x8
  __int64 v47; // d0
  float v48; // s1
  __int64 v49; // x1
  __int64 v50; // x2
  struct UnityEngine_Vector3_StaticFields *v51; // x8
  __int64 v52; // d0
  float v53; // s1
  __int64 v54; // x1
  __int64 v55; // x2
  struct UnityEngine_Vector3_StaticFields *v56; // x8
  __int64 v57; // d0
  float v58; // s1
  __int64 v59; // x1
  __int64 v60; // x2
  struct UnityEngine_Vector3_StaticFields *v61; // x8
  __int64 v62; // d0
  float v63; // s1
  __int64 v64; // x1
  __int64 v65; // x2
  struct UnityEngine_Vector3_StaticFields *v66; // x8
  __int64 v67; // d0
  float v68; // s1
  struct EventServantRecoveryFatigueManager_StaticFields *v69; // x0
  __int128 v70; // [xsp+10h] [xbp-270h]
  __int128 v71; // [xsp+30h] [xbp-250h]
  __int128 v72; // [xsp+50h] [xbp-230h]
  __int128 v73; // [xsp+70h] [xbp-210h]
  __int128 v74; // [xsp+90h] [xbp-1F0h]
  __int128 v75; // [xsp+B0h] [xbp-1D0h]
  __int128 v76; // [xsp+D0h] [xbp-1B0h]
  __int128 v77; // [xsp+F0h] [xbp-190h]
  __int128 v78; // [xsp+110h] [xbp-170h]
  __int128 v79; // [xsp+130h] [xbp-150h]
  __int128 v80; // [xsp+150h] [xbp-130h]
  __int128 v81; // [xsp+170h] [xbp-110h]
  __int128 v82; // [xsp+190h] [xbp-F0h]
  __int128 v83; // [xsp+1B0h] [xbp-D0h]
  __int128 v84; // [xsp+1D0h] [xbp-B0h]
  __int128 v85; // [xsp+210h] [xbp-70h]
  __int128 v86; // [xsp+220h] [xbp-60h]
  __int128 v87; // [xsp+220h] [xbp-60h]
  __int128 v88; // [xsp+220h] [xbp-60h]
  __int128 v89; // [xsp+220h] [xbp-60h]
  __int128 v90; // [xsp+220h] [xbp-60h]
  __int128 v91; // [xsp+220h] [xbp-60h]
  __int128 v92; // [xsp+220h] [xbp-60h]
  __int128 v93; // [xsp+220h] [xbp-60h]
  __int128 v94; // [xsp+220h] [xbp-60h]
  __int128 v95; // [xsp+220h] [xbp-60h]
  __int128 v96; // [xsp+220h] [xbp-60h]
  __int128 v97; // [xsp+220h] [xbp-60h]
  __int128 v98; // [xsp+220h] [xbp-60h]
  __int128 v99; // [xsp+220h] [xbp-60h]
  __int128 v100; // [xsp+220h] [xbp-60h]
  __int128 v101; // [xsp+230h] [xbp-50h] BYREF

  if ( (byte_4B1122E & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_EffectSet___TypeInfo, v1, v2);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_19121/*"effect_prefab_2"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_23058/*"recovery{0}"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_19120/*"effect_prefab"*/, v9, v10);
    byte_4B1122E = 1;
  }
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->BG_FILE = (struct System_String_o *)StringLiteral_23058/*"recovery{0}"*/;
  sub_1BCA784(EventServantRecoveryFatigueManager_TypeInfo->static_fields, StringLiteral_23058/*"recovery{0}"*/);
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->defaultEventId = 80273;
  v11 = sub_1BCA888(EventServantRecoveryFatigueManager_EffectSet___TypeInfo, 16LL);
  *(_QWORD *)&v101 = 0LL;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v85 = v101;
  if ( !v11 )
    sub_1BCAA3C(v12, v13);
  if ( !*(_DWORD *)(v11 + 24) )
    goto LABEL_43;
  *(_OWORD *)(v11 + 32) = 0x100013991uLL;
  *(_OWORD *)(v11 + 48) = v85;
  sub_1BCA784(v11 + 56, 0LL);
  *(_QWORD *)&v101 = 0LL;
  *(_QWORD *)&v86 = 0x200013991LL;
  *((_QWORD *)&v86 + 1) = 0xC2D6000000000000LL;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v84 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 1u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 64) = v86;
  *(_OWORD *)(v11 + 80) = v84;
  sub_1BCA784(v11 + 88, 0LL);
  *(_QWORD *)&v101 = 0LL;
  *(_QWORD *)&v87 = 0x300013991LL;
  *((_QWORD *)&v87 + 1) = 0xC2AC0000C1000000LL;
  *((_QWORD *)&v101 + 1) = StringLiteral_19121/*"effect_prefab_2"*/;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19121/*"effect_prefab_2"*/);
  v83 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 2u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 96) = v87;
  *(_OWORD *)(v11 + 112) = v83;
  sub_1BCA784(v11 + 120, 0LL);
  *(_QWORD *)&v101 = 0LL;
  *(_QWORD *)&v88 = 0x400013991LL;
  *((_QWORD *)&v88 + 1) = 0xC2600000C2580000LL;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v82 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 3u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 128) = v88;
  *(_OWORD *)(v11 + 144) = v82;
  sub_1BCA784(v11 + 152, 0LL);
  *(_QWORD *)&v101 = 0LL;
  *(_QWORD *)&v89 = 0x500013991LL;
  *((_QWORD *)&v89 + 1) = 0xC2C00000C1500000LL;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v81 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 4u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 160) = v89;
  *(_OWORD *)(v11 + 176) = v81;
  sub_1BCA784(v11 + 184, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v90 = 0x2000139BEuLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v17 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v90 + 1) = v17;
  *(float *)&v101 = z;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v80 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 5u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 192) = v90;
  *(_OWORD *)(v11 + 208) = v80;
  sub_1BCA784(v11 + 216, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v91 = 0x3000139BEuLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v19, v20);
    byte_4B109C1 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo->static_fields;
  v22 = *(_QWORD *)&v21->zeroVector.fields.x;
  v23 = v21->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v91 + 1) = v22;
  *(float *)&v101 = v23;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v79 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 6u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 224) = v91;
  *(_OWORD *)(v11 + 240) = v79;
  sub_1BCA784(v11 + 248, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v92 = 0x4000139BEuLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v24, v25);
    byte_4B109C1 = 1;
  }
  v26 = UnityEngine_Vector3_TypeInfo->static_fields;
  v27 = *(_QWORD *)&v26->zeroVector.fields.x;
  v28 = v26->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v92 + 1) = v27;
  *(float *)&v101 = v28;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v78 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 7u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 256) = v92;
  *(_OWORD *)(v11 + 272) = v78;
  sub_1BCA784(v11 + 280, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v93 = 0x5000139BEuLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v29, v30);
    byte_4B109C1 = 1;
  }
  v31 = UnityEngine_Vector3_TypeInfo->static_fields;
  v32 = *(_QWORD *)&v31->zeroVector.fields.x;
  v33 = v31->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v93 + 1) = v32;
  *(float *)&v101 = v33;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v77 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 8u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 288) = v93;
  *(_OWORD *)(v11 + 304) = v77;
  sub_1BCA784(v11 + 312, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v94 = 0x6000139BEuLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v34, v35);
    byte_4B109C1 = 1;
  }
  v36 = UnityEngine_Vector3_TypeInfo->static_fields;
  v37 = *(_QWORD *)&v36->zeroVector.fields.x;
  v38 = v36->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v94 + 1) = v37;
  *(float *)&v101 = v38;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v76 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 9u )
    goto LABEL_43;
  *(_OWORD *)(v11 + 320) = v94;
  *(_OWORD *)(v11 + 336) = v76;
  sub_1BCA784(v11 + 344, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v95 = 0x200013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v39, v40);
    byte_4B109C1 = 1;
  }
  v41 = UnityEngine_Vector3_TypeInfo->static_fields;
  v42 = *(_QWORD *)&v41->zeroVector.fields.x;
  v43 = v41->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v95 + 1) = v42;
  *(float *)&v101 = v43;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v75 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xAu )
    goto LABEL_43;
  *(_OWORD *)(v11 + 352) = v95;
  *(_OWORD *)(v11 + 368) = v75;
  sub_1BCA784(v11 + 376, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v96 = 0x300013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v44, v45);
    byte_4B109C1 = 1;
  }
  v46 = UnityEngine_Vector3_TypeInfo->static_fields;
  v47 = *(_QWORD *)&v46->zeroVector.fields.x;
  v48 = v46->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v96 + 1) = v47;
  *(float *)&v101 = v48;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v74 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xBu )
    goto LABEL_43;
  *(_OWORD *)(v11 + 384) = v96;
  *(_OWORD *)(v11 + 400) = v74;
  sub_1BCA784(v11 + 408, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v97 = 0x400013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v49, v50);
    byte_4B109C1 = 1;
  }
  v51 = UnityEngine_Vector3_TypeInfo->static_fields;
  v52 = *(_QWORD *)&v51->zeroVector.fields.x;
  v53 = v51->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v97 + 1) = v52;
  *(float *)&v101 = v53;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v73 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xCu )
    goto LABEL_43;
  *(_OWORD *)(v11 + 416) = v97;
  *(_OWORD *)(v11 + 432) = v73;
  sub_1BCA784(v11 + 440, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v98 = 0x600013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v54, v55);
    byte_4B109C1 = 1;
  }
  v56 = UnityEngine_Vector3_TypeInfo->static_fields;
  v57 = *(_QWORD *)&v56->zeroVector.fields.x;
  v58 = v56->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v98 + 1) = v57;
  *(float *)&v101 = v58;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v72 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xDu )
    goto LABEL_43;
  *(_OWORD *)(v11 + 448) = v98;
  *(_OWORD *)(v11 + 464) = v72;
  sub_1BCA784(v11 + 472, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v99 = 0x700013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v59, v60);
    byte_4B109C1 = 1;
  }
  v61 = UnityEngine_Vector3_TypeInfo->static_fields;
  v62 = *(_QWORD *)&v61->zeroVector.fields.x;
  v63 = v61->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v99 + 1) = v62;
  *(float *)&v101 = v63;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v71 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xEu )
    goto LABEL_43;
  *(_OWORD *)(v11 + 480) = v99;
  *(_OWORD *)(v11 + 496) = v71;
  sub_1BCA784(v11 + 504, 0LL);
  DWORD1(v101) = 0;
  *((_QWORD *)&v101 + 1) = 0LL;
  v100 = 0x800013A30uLL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v64, v65);
    byte_4B109C1 = 1;
  }
  v66 = UnityEngine_Vector3_TypeInfo->static_fields;
  v67 = *(_QWORD *)&v66->zeroVector.fields.x;
  v68 = v66->zeroVector.fields.z;
  *((_QWORD *)&v101 + 1) = StringLiteral_19120/*"effect_prefab"*/;
  *((_QWORD *)&v100 + 1) = v67;
  *(float *)&v101 = v68;
  v12 = sub_1BCA784((char *)&v101 + 8, StringLiteral_19120/*"effect_prefab"*/);
  v70 = v101;
  if ( *(_DWORD *)(v11 + 24) <= 0xFu )
LABEL_43:
    sub_1BCAA44(v12, v13);
  *(_OWORD *)(v11 + 512) = v100;
  *(_OWORD *)(v11 + 528) = v70;
  sub_1BCA784(v11 + 536, 0LL);
  v69 = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
  v69->effectSet = (struct EventServantRecoveryFatigueManager_EffectSet_array *)v11;
  sub_1BCA784(&v69->effectSet, v11);
}


void __fastcall EventServantRecoveryFatigueManager___ctor(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1

  if ( (byte_4B1122D & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17054/*"ar93"*/, method, v2);
    byte_4B1122D = 1;
  }
  v4 = StringLiteral_17054/*"ar93"*/;
  this->fields.settingSe = (struct System_String_o *)StringLiteral_17054/*"ar93"*/;
  sub_1BCA784(&this->fields.settingSe, v4);
  *(_QWORD *)&this->fields.openEffectTime = 0x400000003F800000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
EventServantRecoveryFatigueItem_o *__fastcall EventServantRecoveryFatigueManager__GetItem(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventServantRecoveryFatigueItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v9; // w21

  if ( (byte_4B11223 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v5, v6);
    byte_4B11223 = 1;
  }
  result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    do
    {
      result = (EventServantRecoveryFatigueItem_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)result,
                                                      v9,
                                                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.index == index )
        return result;
      if ( m_CancellationTokenSource == ++v9 )
        return 0LL;
      result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1BCAA3C(result, *(_QWORD *)&index);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventServantRecoveryFatigueManager__GetSettingSe(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Collections_Generic_List_EventServantRecoveryFatigueItem__o *servantItemList; // x8
  int32_t v10; // w1

  v4 = this;
  if ( (byte_4B11222 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v5, v6);
    this = (EventServantRecoveryFatigueManager_o *)sub_1BCA7E0(
                                                     &Method_System_Collections_Generic_List_string__get_Item__,
                                                     v7,
                                                     v8);
    byte_4B11222 = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList || (this = (EventServantRecoveryFatigueManager_o *)v4->fields.settingSeList) == 0LL )
    sub_1BCAA3C(this, *(_QWORD *)&index);
  if ( servantItemList->fields._size != LODWORD(this->fields.m_CancellationTokenSource) )
    return v4->fields.settingSe;
  if ( index <= 0 )
    v10 = 0;
  else
    v10 = index - 1;
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v10,
                              (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_string__get_Item__);
}


void __fastcall EventServantRecoveryFatigueManager__Init(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w21
  int32_t v8; // w20

  if ( (byte_4B11220 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v4, v5);
    byte_4B11220 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_9;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v8,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        break;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)servantItemList, method);
      if ( size == ++v8 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_9:
    sub_1BCAA3C(servantItemList, method);
  }
}


bool __fastcall EventServantRecoveryFatigueManager__IsFade(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B1122B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B1122B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v4);
  return CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL);
}


bool __fastcall EventServantRecoveryFatigueManager__IsMask(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  return this->fields.maskCount > 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__ModifyItem(
        EventServantRecoveryFatigueManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w24
  int32_t v13; // w23
  const MethodInfo *v14; // x5

  if ( (byte_4B11224 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__,
      userServantEntity,
      *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v9, v10);
    byte_4B11224 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1BCAA3C(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v13,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      if ( servantItemList[2].fields._size == index )
        break;
      if ( size == ++v13 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    EventServantRecoveryFatigueItem__SetServantInfo(
      (EventServantRecoveryFatigueItem_o *)servantItemList,
      userServantEntity,
      eventId,
      index,
      0LL,
      v14);
  }
}


void __fastcall EventServantRecoveryFatigueManager__OnNoticeChangeBtn(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  _BOOL4 isFatigueNotice; // w20
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v13; // x8
  bool v14; // w21

  if ( (byte_4B11228 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__, method, v2);
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v6, v7);
    byte_4B11228 = 1;
  }
  v8 = Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__;
  isFatigueNotice = this->fields.isFatigueNotice;
  if ( (*((_BYTE *)Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1BCA7F8(Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
  if ( !isFatigueNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
    if ( fatigueNoticeBtn )
    {
      v13 = &StringLiteral_17703/*"btn_on"*/;
      v14 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1BCAA3C(fatigueNoticeBtn, v11);
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    goto LABEL_11;
  v13 = &StringLiteral_17702/*"btn_off"*/;
  v14 = 0;
LABEL_10:
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v13, 0LL);
  this->fields.isFatigueNotice = v14;
  EventRewardSaveData__SetFatigueNotiffication(!isFatigueNotice, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager__SetMaskPanel(
        EventServantRecoveryFatigueManager_o *this,
        UnityEngine_GameObject_o *maskPanel,
        const MethodInfo *method)
{
  this->fields.maskPanel = maskPanel;
  sub_1BCA784(&this->fields.maskPanel, maskPanel);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall EventServantRecoveryFatigueManager__SetOpenEffect(
        EventServantRecoveryFatigueManager_o *this,
        EventServantRecoveryFatigueItem_o *item,
        int32_t eventId,
        int32_t num,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v11; // x24

  if ( (byte_4B1122A & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo, item, *(_QWORD *)&eventId);
    byte_4B1122A = 1;
  }
  v11 = sub_1BCAA2C(
          EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo,
          item,
          *(_QWORD *)&eventId,
          *(_QWORD *)&num);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = this;
  sub_1BCA784(v11 + 32, this);
  *(_QWORD *)(v11 + 40) = item;
  sub_1BCA784(v11 + 40, item);
  *(_DWORD *)(v11 + 48) = num;
  *(_DWORD *)(v11 + 52) = eventId;
  *(_QWORD *)(v11 + 56) = onClick;
  sub_1BCA784(v11 + 56, onClick);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__SetPreRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v16; // x2
  int v17; // w22
  __int64 v18; // x1
  EventServantRecoveryFatigueManager_c *v19; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x21
  Il2CppObject *v23; // x0
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11226 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, v5, v6);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B11226 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0LL);
  v17 = (_DWORD)RecoverydBgId - 1;
  if ( (int)RecoverydBgId < 1 )
    return;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v16);
  v19 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, v18);
    v19 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v24 = v17;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v23, 0LL);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__49237568(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  ExUITexture__SetImage(this->fields.bgTexture, (UnityEngine_Texture_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__SetRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v16; // x2
  int v17; // w21
  __int64 v18; // x1
  EventServantRecoveryFatigueManager_c *v19; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x22
  Il2CppObject *v23; // x0
  int v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B11225 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_Texture2D____76836720, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, v5, v6);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    byte_4B11225 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0LL);
  if ( (int)RecoverydBgId < 1 )
    return;
  v17 = (int)RecoverydBgId;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v16);
  v19 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, v18);
    v19 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v19->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v24 = v17;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v23, 0LL);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__49237568(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_Texture2D____76836720),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1BCAA3C(Instance, v14);
  }
  ExUITexture__SetImage(this->fields.bgTexture, (UnityEngine_Texture_o *)Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__SetServantRecoveryFatigue(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        System_Action_int__o *onClick,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  void *Instance; // x0
  __int64 v52; // x1
  Il2CppObject *Entity; // x24
  const MethodInfo *v54; // x2
  struct System_Action_o **p_endOpenEffectCallback; // x28
  UISprite_o *v56; // x23
  __int64 v57; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v62; // w20
  __int64 v63; // x1
  UnityEngine_Object_o *v64; // x24
  const MethodInfo *v65; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_Dictionary_int__long__o *RecoveryUserSvtDic; // x0
  int v68; // w26
  __int64 v69; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int32_t key; // w26
  Il2CppObject *value; // x28
  __int64 Item; // x0
  const MethodInfo *v74; // x1
  __int64 v75; // x2
  EventServantRecoveryFatigueItem_o *v76; // x27
  UnityEngine_GameObject_o *v77; // x0
  __int64 v78; // x1
  __int64 v79; // x0
  __int64 v80; // x1
  const MethodInfo *v81; // x5
  Il2CppObject *v82; // x1
  const MethodInfo *v83; // x5
  __int64 v84; // x1
  const MethodInfo *v85; // x2
  BalanceConfig_c *v86; // x0
  const MethodInfo *v87; // x5
  System_Collections_IEnumerator_o *v88; // x1
  __int64 v89; // x1
  UnityEngine_Object_o *fatigueNotice; // x21
  int v91; // w20
  int32_t v92; // w21
  int v93; // w8
  int v94; // w20
  int32_t v95; // w23
  const MethodInfo *v96; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v97; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v98; // [xsp+30h] [xbp-B0h] BYREF
  int32_t eventIda; // [xsp+68h] [xbp-78h]
  int v100; // [xsp+6Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B11221 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId, onClick);
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponent_UISprite___, v9, v10);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventMaster___, v11, v12);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v17, v18);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__, v21, v22);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__, v29, v30);
    sub_1BCA7E0(&EventRewardRootComponent_TypeInfo, v31, v32);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__, v35, v36);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__, v37, v38);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, v39, v40);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v41, v42);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v45, v46);
    sub_1BCA7E0(&StringLiteral_3293/*"Bg/Sprite"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_17727/*"btn_txt_Complete_notification"*/, v49, v50);
    byte_4B11221 = 1;
  }
  memset(&v98, 0, sizeof(v98));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_69;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  EventServantRecoveryFatigueManager__SetRecoveryBg(this, eventId, v54);
  this->fields.endOpenEffectCallback = endCallback;
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  sub_1BCA784(&this->fields.endOpenEffectCallback, endCallback);
  Instance = this->fields.fatigueNotice;
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Transform__Find(
               (UnityEngine_Transform_o *)Instance,
               (System_String_o *)StringLiteral_3293/*"Bg/Sprite"*/,
               0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_2F09734 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Instance )
    goto LABEL_69;
  v56 = (UISprite_o *)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo, v57);
  EventRewardRootComponent__setRewardInfoImg(v56, (System_String_o *)StringLiteral_17727/*"btn_txt_Complete_notification"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v56, 0LL);
  v102.fields.x = x;
  v102.fields.y = y;
  v102.fields.z = z;
  GameObjectExtensions__SetLocalScale(gameObject, v102, 0LL);
  Instance = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, v52);
    Instance = EventServantRecoveryFatigueManager_TypeInfo;
  }
  v62 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 8LL) == eventId ? 0 : eventId;
  if ( !Entity )
    goto LABEL_69;
  if ( !EventEntity__IsOpen((EventEntity_o *)Entity, 0, 0LL) )
  {
    EventRewardSaveData__SetFatigueNotiffication(0, 0LL);
    fatigueNotice = (UnityEngine_Object_o *)this->fields.fatigueNotice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v89);
    if ( UnityEngine_Object__op_Inequality(fatigueNotice, 0LL, 0LL) )
    {
      Instance = this->fields.fatigueNotice;
      if ( !Instance )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    EventRewardSaveData__DeleteRecoveryIdx(v62, 0LL);
    Instance = this->fields.servantItemList;
    if ( Instance )
    {
      v91 = *((_DWORD *)Instance + 6);
      if ( v91 < 1 )
        goto LABEL_70;
      v92 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v92,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        if ( v91 == ++v92 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
      }
      while ( Instance );
    }
LABEL_69:
    sub_1BCAA3C(Instance, v52);
  }
  v64 = (UnityEngine_Object_o *)this->fields.fatigueNotice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
  if ( UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
  {
    this->fields.isFatigueNotice = EventRewardSaveData__GetFatigueNotification(0LL);
    EventServantRecoveryFatigueManager__setNoticeValue(this, v65);
  }
  EventRewardSaveData__LoadRecoveryIdx(v62, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !Instance )
    goto LABEL_69;
  RecoveryUserSvtDic = UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
                         (UserEventServantFatigueMaster_o *)Instance,
                         eventId,
                         0LL);
  if ( !RecoveryUserSvtDic )
  {
    Instance = this->fields.servantItemList;
    if ( !Instance )
      goto LABEL_69;
    v93 = *((_DWORD *)Instance + 6);
    v94 = v93 - 1;
    if ( v93 >= 1 )
    {
      v95 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v95,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        EventServantRecoveryFatigueItem__SetServantInfo(
          (EventServantRecoveryFatigueItem_o *)Instance,
          0LL,
          eventId,
          v95,
          onClick,
          v96);
        if ( v94 == v95 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
        ++v95;
      }
      while ( Instance );
      goto LABEL_69;
    }
LABEL_70:
    if ( *p_endOpenEffectCallback )
    {
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_endOpenEffectCallback)->fields.m_target)(
        (*p_endOpenEffectCallback)->fields.original_method_info,
        *(_QWORD *)&(*p_endOpenEffectCallback)->fields.extra_arg);
      *p_endOpenEffectCallback = 0LL;
      sub_1BCA784(p_endOpenEffectCallback, 0LL);
    }
    return;
  }
  eventIda = v62;
  System_Collections_Generic_Dictionary_int__long___GetEnumerator(
    &v97,
    RecoveryUserSvtDic,
    (const MethodInfo_3203268 *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
  v68 = 0;
  v98 = v97;
LABEL_28:
  v100 = v68;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
            &v98,
            (const MethodInfo_3355E80 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      sub_1BCAA3C(0LL, v69);
    key = (int32_t)v98.fields._current.fields.key;
    value = v98.fields._current.fields.value;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      servantItemList,
                      LODWORD(v98.fields._current.fields.key) - 1,
                      (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    v76 = (EventServantRecoveryFatigueItem_o *)Item;
    if ( !byte_4B112D6 )
    {
      Item = sub_1BCA7E0(&EventRewardSaveData_TypeInfo, v74, v75);
      byte_4B112D6 = 1;
    }
    if ( (__int64)value <= 0 && EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField < key )
    {
      if ( !v76 )
        sub_1BCAA3C(Item, v74);
      if ( !EventServantRecoveryFatigueItem__IsAnimation(v76, v74) )
        goto LABEL_46;
      v86 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v84);
        v86 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v86->static_fields->RecoveryFatigueDelayedChangeBgEvents,
             eventId,
             (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
LABEL_46:
        EventServantRecoveryFatigueManager__SetPreRecoveryBg(this, eventId, v85);
      }
      EventRewardSaveData__SetRecoveryIdx(eventIda, key, 0LL);
      v88 = EventServantRecoveryFatigueManager__SetOpenEffect(this, v76, eventId, key, onClick, v87);
      v68 = 1;
      UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v88, 0LL);
      goto LABEL_28;
    }
    if ( !v76 )
      sub_1BCAA3C(Item, v74);
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v76, 0LL);
    if ( !v77 )
      sub_1BCAA3C(0LL, v78);
    UnityEngine_GameObject__SetActive(v77, 1, 0LL);
    if ( (__int64)value < 1 )
    {
      EventServantRecoveryFatigueItem__SetServantInfo(v76, 0LL, eventId, key, onClick, v81);
    }
    else
    {
      if ( !MasterData_object )
        sub_1BCAA3C(v79, v80);
      v82 = DataMasterBase_object__object__long___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int64_t)value,
              (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      EventServantRecoveryFatigueItem__SetServantInfo(v76, (UserServantEntity_o *)v82, eventId, key, onClick, v83);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
    &v98,
    (const MethodInfo_3355F98 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  if ( (v100 & 1) == 0 )
    goto LABEL_70;
}


bool __fastcall EventServantRecoveryFatigueManager___SetOpenEffect_b__31_0(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  return !EventServantRecoveryFatigueManager__IsFade(this, method);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall EventServantRecoveryFatigueManager__getEffect(
        int32_t eventId,
        int32_t num,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  AssetData_o *assetData; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *monitor; // x8
  struct EventServantRecoveryFatigueManager_EffectSet_array *effectSet; // x9
  int max_length; // w10
  int v17; // w11
  char *v18; // x13
  UnityEngine_GameObject_o *v19; // x20
  char *v20; // x9
  float v21; // s9
  float v22; // s10
  float v23; // s8
  System_String_o *v24; // x20
  __int64 v25; // x1
  Il2CppObject *Object_object__49237568; // x20
  __int64 v27; // x2
  UnityEngine_Transform_o *v28; // x19
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1122C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, *(_QWORD *)&num, parentTr);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B1122C = 1;
  }
  assetData = (AssetData_o *)EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, *(_QWORD *)&num);
    assetData = (AssetData_o *)EventServantRecoveryFatigueManager_TypeInfo;
  }
  monitor = (struct EventServantRecoveryFatigueManager_StaticFields *)assetData[2].monitor;
  effectSet = monitor->effectSet;
  if ( !effectSet )
    goto LABEL_27;
  max_length = effectSet->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( max_length == v17 )
        sub_1BCAA44(assetData, *(_QWORD *)&num);
      v18 = (char *)effectSet + 32 * v17;
      if ( *((_DWORD *)v18 + 8) == eventId && *((_DWORD *)v18 + 9) == num )
        break;
      if ( max_length == ++v17 )
        return 0LL;
    }
    v20 = (char *)effectSet + 32 * v17;
    v22 = *((float *)v20 + 10);
    v21 = *((float *)v20 + 11);
    v23 = *((float *)v20 + 12);
    v24 = (System_String_o *)*((_QWORD *)v20 + 7);
    if ( !assetData[2].fields.size )
    {
      j_il2cpp_runtime_class_init_0(assetData, *(_QWORD *)&num);
      monitor = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
    }
    assetData = monitor->assetData;
    if ( assetData )
    {
      Object_object__49237568 = AssetData__GetObject_object__49237568(
                                  assetData,
                                  v24,
                                  (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      assetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__49237568,
                                   (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( assetData )
      {
        v19 = (UnityEngine_GameObject_o *)assetData;
        assetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)assetData, 0LL);
        if ( assetData )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)assetData, parentTr, 0LL);
          assetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
          if ( assetData )
          {
            v30.fields.x = v22;
            v30.fields.y = v21;
            v30.fields.z = v23;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)assetData, v30, 0LL);
            assetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v19, 0LL);
            v28 = (UnityEngine_Transform_o *)assetData;
            if ( !byte_4B109C6 )
            {
              assetData = (AssetData_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&num, v27);
              byte_4B109C6 = 1;
            }
            if ( v28 )
            {
              UnityEngine_Transform__set_localScale(v28, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              return v19;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BCAA3C(assetData, *(_QWORD *)&num);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__loadAssetData(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *v21; // x19
  System_String_o *ServantFatigueFolder; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  EventServantRecoveryFatigueManager___c_c *v26; // x8
  System_String_o *v27; // x19
  AssetLoader_LoadEndDataHandler_o *_9__29_0; // x20
  Il2CppObject *v29; // x21
  struct EventServantRecoveryFatigueManager___c_StaticFields *static_fields; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11229 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, *(_QWORD *)&eventId, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&EventDetailEntity_TypeInfo, v8, v9);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13);
    sub_1BCA7E0(&Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__, v14, v15);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager___c_TypeInfo, v16, v17);
    byte_4B11229 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1BCAA3C(Instance, v19);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v21 = entity;
  if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo, v20);
  ServantFatigueFolder = EventDetailEntity__GetServantFatigueFolder((EventDetailEntity_o *)v21, 0LL);
  v26 = EventServantRecoveryFatigueManager___c_TypeInfo;
  v27 = ServantFatigueFolder;
  if ( !EventServantRecoveryFatigueManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager___c_TypeInfo, v23);
    v26 = EventServantRecoveryFatigueManager___c_TypeInfo;
  }
  _9__29_0 = v26->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v23);
      v26 = EventServantRecoveryFatigueManager___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v26->static_fields->__9;
    _9__29_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v23, v24, v25);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__29_0,
      v29,
      Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__,
      0LL);
    static_fields = EventServantRecoveryFatigueManager___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1BCA784(&static_fields->__9__29_0, _9__29_0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23);
  AssetManager__loadAssetStorage(v27, _9__29_0, 1, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager__setNoticeValue(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v7; // x8

  if ( (byte_4B11227 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_17703/*"btn_on"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_17702/*"btn_off"*/, v4, v5);
    byte_4B11227 = 1;
  }
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    sub_1BCAA3C(0LL, method);
  if ( this->fields.isFatigueNotice )
    v7 = &StringLiteral_17703/*"btn_on"*/;
  else
    v7 = &StringLiteral_17702/*"btn_off"*/;
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v7, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager__SetOpenEffect_d__31___ctor(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall EventServantRecoveryFatigueManager__SetOpenEffect_d__31__MoveNext(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  struct EventServantRecoveryFatigueManager_o *_4__this; // x20
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_bool__o *v19; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  UnityEngine_WaitUntil_o *v23; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  __int64 v26; // x2
  __int64 v27; // x3
  const MethodInfo *v28; // x2
  BalanceConfig_c *v29; // x0
  const MethodInfo *v30; // x5
  __int64 v31; // x2
  __int64 v32; // x3
  float endEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v34; // x20
  Il2CppObject **v35; // x19
  int v36; // w8
  int v37; // w8
  struct System_Action_o *v38; // x8
  struct System_Action_o **p_endOpenEffectCallback; // x20
  struct System_Action_o *endOpenEffectCallback; // t1
  int32_t eventId; // w21
  int32_t num; // w22
  __int64 v43; // x1
  const MethodInfo *v44; // x3
  UnityEngine_Transform_o *transform; // x23
  float openEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v47; // x20

  v3 = this;
  if ( (byte_4B11231 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v4, v5);
    sub_1BCA7E0(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__, v6, v7);
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v10, v11);
    sub_1BCA7E0(&UnityEngine_WaitForSeconds_TypeInfo, v12, v13);
    this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)sub_1BCA7E0(
                                                                          &UnityEngine_WaitUntil_TypeInfo,
                                                                          v14,
                                                                          v15);
    byte_4B11231 = 1;
  }
  _4__this = v3->fields.__4__this;
  switch ( v3->fields.__1__state )
  {
    case 0:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      ++_4__this->fields.maskCount;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)this, method);
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      if ( EventServantRecoveryFatigueItem__IsAnimation((EventServantRecoveryFatigueItem_o *)this, method) )
      {
        v19 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v17, v18);
        System_Func_bool____ctor(
          v19,
          (Il2CppObject *)_4__this,
          Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__,
          0LL);
        v23 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v20, v21, v22);
        UnityEngine_WaitUntil___ctor(v23, v19, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v23;
        p__2__current = &v3->fields.__2__current;
        sub_1BCA784(p__2__current, v23);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      else
      {
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
        if ( !this )
LABEL_38:
          sub_1BCAA3C(this, method);
        num = v3->fields.num;
        eventId = v3->fields.eventId;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, v43);
        EventServantRecoveryFatigueManager__getEffect(eventId, num, transform, v44);
LABEL_36:
        openEffectTime = _4__this->fields.openEffectTime;
        v47 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v26, v27);
        UnityEngine_WaitForSeconds___ctor(v47, openEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v47;
        v35 = &v3->fields.__2__current;
        sub_1BCA784(v35, v47);
        v36 = 2;
LABEL_37:
        *((_DWORD *)v35 - 2) = v36;
        return 1;
      }
      return result;
    case 1:
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      v3->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      EventServantRecoveryFatigueItem__SetAnimationPlay((EventServantRecoveryFatigueItem_o *)this, v3->fields.num, v2);
      if ( !_4__this )
        goto LABEL_38;
      goto LABEL_36;
    case 2:
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      v3->fields.__1__state = -1;
      if ( !this )
        goto LABEL_38;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)EventServantRecoveryFatigueItem__IsAnimation(
                                                                            (EventServantRecoveryFatigueItem_o *)this,
                                                                            method);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v29 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
          v29 = BalanceConfig_TypeInfo;
        }
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)System_Linq_Enumerable__Contains_int_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v29->static_fields->RecoveryFatigueDelayedChangeBgEvents,
                                                                              v3->fields.eventId,
                                                                              (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_22;
      }
      if ( !_4__this )
        goto LABEL_38;
      EventServantRecoveryFatigueManager__SetRecoveryBg(_4__this, v3->fields.eventId, v28);
LABEL_22:
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      EventServantRecoveryFatigueItem__SetServantInfo(
        (EventServantRecoveryFatigueItem_o *)this,
        0LL,
        v3->fields.eventId,
        v3->fields.num,
        v3->fields.onClick,
        v30);
      if ( !_4__this )
        goto LABEL_38;
      endEffectTime = _4__this->fields.endEffectTime;
      v34 = (UnityEngine_WaitForSeconds_o *)sub_1BCAA2C(UnityEngine_WaitForSeconds_TypeInfo, method, v31, v32);
      UnityEngine_WaitForSeconds___ctor(v34, endEffectTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v34;
      v35 = &v3->fields.__2__current;
      sub_1BCA784(v35, v34);
      v36 = 3;
      goto LABEL_37;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v37 = _4__this->fields.maskCount - 1;
      _4__this->fields.maskCount = v37;
      if ( v37 )
        goto LABEL_29;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_29:
      endOpenEffectCallback = _4__this->fields.endOpenEffectCallback;
      p_endOpenEffectCallback = &_4__this->fields.endOpenEffectCallback;
      v38 = endOpenEffectCallback;
      if ( endOpenEffectCallback )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v38->fields.m_target)(
          v38->fields.original_method_info,
          *(_QWORD *)&v38->fields.extra_arg);
        *p_endOpenEffectCallback = 0LL;
        sub_1BCA784(p_endOpenEffectCallback, 0LL);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_IEnumerator_Reset(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_EventServantRecoveryFatigueManager__SetOpenEffect_d__31_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_IEnumerator_get_Current(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_IDisposable_Dispose(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventServantRecoveryFatigueManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1122F & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueManager___c_TypeInfo, v1, v2);
    byte_4B1122F = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EventServantRecoveryFatigueManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EventServantRecoveryFatigueManager___c_TypeInfo->static_fields->__9 = (struct EventServantRecoveryFatigueManager___c_o *)v4;
  sub_1BCA784(EventServantRecoveryFatigueManager___c_TypeInfo->static_fields, v4);
}


void __fastcall EventServantRecoveryFatigueManager___c___ctor(
        EventServantRecoveryFatigueManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager___c___loadAssetData_b__29_0(
        EventServantRecoveryFatigueManager___c_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueManager_c *v4; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x0

  if ( (byte_4B11230 & 1) == 0 )
  {
    sub_1BCA7E0(&EventServantRecoveryFatigueManager_TypeInfo, data, method);
    byte_4B11230 = 1;
  }
  if ( data )
  {
    v4 = EventServantRecoveryFatigueManager_TypeInfo;
    if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo, data);
      v4 = EventServantRecoveryFatigueManager_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->assetData = data;
    sub_1BCA784(&static_fields->assetData, data);
  }
}