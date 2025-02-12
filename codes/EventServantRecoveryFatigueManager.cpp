void __fastcall EventServantRecoveryFatigueManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x19
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v11; // d0
  float z; // s1
  __int64 v13; // x1
  struct UnityEngine_Vector3_StaticFields *v14; // x8
  __int64 v15; // d0
  float v16; // s1
  __int64 v17; // x1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  __int64 v19; // d0
  float v20; // s1
  __int64 v21; // x1
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  __int64 v23; // d0
  float v24; // s1
  __int64 v25; // x1
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  __int64 v27; // d0
  float v28; // s1
  __int64 v29; // x1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  __int64 v31; // d0
  float v32; // s1
  __int64 v33; // x1
  struct UnityEngine_Vector3_StaticFields *v34; // x8
  __int64 v35; // d0
  float v36; // s1
  __int64 v37; // x1
  struct UnityEngine_Vector3_StaticFields *v38; // x8
  __int64 v39; // d0
  float v40; // s1
  __int64 v41; // x1
  struct UnityEngine_Vector3_StaticFields *v42; // x8
  __int64 v43; // d0
  float v44; // s1
  __int64 v45; // x1
  struct UnityEngine_Vector3_StaticFields *v46; // x8
  __int64 v47; // d0
  float v48; // s1
  __int64 v49; // x1
  struct UnityEngine_Vector3_StaticFields *v50; // x8
  __int64 v51; // d0
  float v52; // s1
  struct EventServantRecoveryFatigueManager_StaticFields *v53; // x0
  __int128 v54; // [xsp+10h] [xbp-270h]
  __int128 v55; // [xsp+30h] [xbp-250h]
  __int128 v56; // [xsp+50h] [xbp-230h]
  __int128 v57; // [xsp+70h] [xbp-210h]
  __int128 v58; // [xsp+90h] [xbp-1F0h]
  __int128 v59; // [xsp+B0h] [xbp-1D0h]
  __int128 v60; // [xsp+D0h] [xbp-1B0h]
  __int128 v61; // [xsp+F0h] [xbp-190h]
  __int128 v62; // [xsp+110h] [xbp-170h]
  __int128 v63; // [xsp+130h] [xbp-150h]
  __int128 v64; // [xsp+150h] [xbp-130h]
  __int128 v65; // [xsp+170h] [xbp-110h]
  __int128 v66; // [xsp+190h] [xbp-F0h]
  __int128 v67; // [xsp+1B0h] [xbp-D0h]
  __int128 v68; // [xsp+1D0h] [xbp-B0h]
  __int128 v69; // [xsp+210h] [xbp-70h]
  __int128 v70; // [xsp+220h] [xbp-60h]
  __int128 v71; // [xsp+220h] [xbp-60h]
  __int128 v72; // [xsp+220h] [xbp-60h]
  __int128 v73; // [xsp+220h] [xbp-60h]
  __int128 v74; // [xsp+220h] [xbp-60h]
  __int128 v75; // [xsp+220h] [xbp-60h]
  __int128 v76; // [xsp+220h] [xbp-60h]
  __int128 v77; // [xsp+220h] [xbp-60h]
  __int128 v78; // [xsp+220h] [xbp-60h]
  __int128 v79; // [xsp+220h] [xbp-60h]
  __int128 v80; // [xsp+220h] [xbp-60h]
  __int128 v81; // [xsp+220h] [xbp-60h]
  __int128 v82; // [xsp+220h] [xbp-60h]
  __int128 v83; // [xsp+220h] [xbp-60h]
  __int128 v84; // [xsp+220h] [xbp-60h]
  __int128 v85; // [xsp+230h] [xbp-50h] BYREF

  if ( (byte_4BAF642 & 1) == 0 )
  {
    sub_1C13D24(&EventServantRecoveryFatigueManager_EffectSet___TypeInfo, v1);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v2);
    sub_1C13D24(&StringLiteral_19223/*"effectFirstIdListKey"*/, v3);
    sub_1C13D24(&StringLiteral_23190/*"reader"*/, v4);
    sub_1C13D24(&StringLiteral_19222/*"effectExplanation"*/, v5);
    byte_4BAF642 = 1;
  }
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->BG_FILE = (struct System_String_o *)StringLiteral_23190/*"reader"*/;
  sub_1C13CC8(EventServantRecoveryFatigueManager_TypeInfo->static_fields);
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->defaultEventId = 80273;
  v6 = sub_1C13DCC(EventServantRecoveryFatigueManager_EffectSet___TypeInfo, 16LL);
  *(_QWORD *)&v85 = 0LL;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v69 = v85;
  if ( !v6 )
    sub_1C13F80(v7, v8);
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_43;
  *(_OWORD *)(v6 + 32) = 0x100013991uLL;
  *(_OWORD *)(v6 + 48) = v69;
  sub_1C13CC8(v6 + 56);
  *(_QWORD *)&v85 = 0LL;
  *(_QWORD *)&v70 = 0x200013991LL;
  *((_QWORD *)&v70 + 1) = 0xC2D6000000000000LL;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v68 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 64) = v70;
  *(_OWORD *)(v6 + 80) = v68;
  sub_1C13CC8(v6 + 88);
  *(_QWORD *)&v85 = 0LL;
  *(_QWORD *)&v71 = 0x300013991LL;
  *((_QWORD *)&v71 + 1) = 0xC2AC0000C1000000LL;
  *((_QWORD *)&v85 + 1) = StringLiteral_19223/*"effectFirstIdListKey"*/;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v67 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 96) = v71;
  *(_OWORD *)(v6 + 112) = v67;
  sub_1C13CC8(v6 + 120);
  *(_QWORD *)&v85 = 0LL;
  *(_QWORD *)&v72 = 0x400013991LL;
  *((_QWORD *)&v72 + 1) = 0xC2600000C2580000LL;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v66 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 128) = v72;
  *(_OWORD *)(v6 + 144) = v66;
  sub_1C13CC8(v6 + 152);
  *(_QWORD *)&v85 = 0LL;
  *(_QWORD *)&v73 = 0x500013991LL;
  *((_QWORD *)&v73 + 1) = 0xC2C00000C1500000LL;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v65 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 4u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 160) = v73;
  *(_OWORD *)(v6 + 176) = v65;
  sub_1C13CC8(v6 + 184);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v74 = 0x2000139BEuLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v9);
    byte_4BAEDA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v11 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v74 + 1) = v11;
  *(float *)&v85 = z;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v64 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 5u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 192) = v74;
  *(_OWORD *)(v6 + 208) = v64;
  sub_1C13CC8(v6 + 216);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v75 = 0x3000139BEuLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v13);
    byte_4BAEDA1 = 1;
  }
  v14 = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = *(_QWORD *)&v14->zeroVector.fields.x;
  v16 = v14->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v75 + 1) = v15;
  *(float *)&v85 = v16;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v63 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 6u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 224) = v75;
  *(_OWORD *)(v6 + 240) = v63;
  sub_1C13CC8(v6 + 248);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v76 = 0x4000139BEuLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v17);
    byte_4BAEDA1 = 1;
  }
  v18 = UnityEngine_Vector3_TypeInfo->static_fields;
  v19 = *(_QWORD *)&v18->zeroVector.fields.x;
  v20 = v18->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v76 + 1) = v19;
  *(float *)&v85 = v20;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v62 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 7u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 256) = v76;
  *(_OWORD *)(v6 + 272) = v62;
  sub_1C13CC8(v6 + 280);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v77 = 0x5000139BEuLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v21);
    byte_4BAEDA1 = 1;
  }
  v22 = UnityEngine_Vector3_TypeInfo->static_fields;
  v23 = *(_QWORD *)&v22->zeroVector.fields.x;
  v24 = v22->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v77 + 1) = v23;
  *(float *)&v85 = v24;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v61 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 8u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 288) = v77;
  *(_OWORD *)(v6 + 304) = v61;
  sub_1C13CC8(v6 + 312);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v78 = 0x6000139BEuLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v25);
    byte_4BAEDA1 = 1;
  }
  v26 = UnityEngine_Vector3_TypeInfo->static_fields;
  v27 = *(_QWORD *)&v26->zeroVector.fields.x;
  v28 = v26->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v78 + 1) = v27;
  *(float *)&v85 = v28;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v60 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 9u )
    goto LABEL_43;
  *(_OWORD *)(v6 + 320) = v78;
  *(_OWORD *)(v6 + 336) = v60;
  sub_1C13CC8(v6 + 344);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v79 = 0x200013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v29);
    byte_4BAEDA1 = 1;
  }
  v30 = UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = *(_QWORD *)&v30->zeroVector.fields.x;
  v32 = v30->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v79 + 1) = v31;
  *(float *)&v85 = v32;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v59 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xAu )
    goto LABEL_43;
  *(_OWORD *)(v6 + 352) = v79;
  *(_OWORD *)(v6 + 368) = v59;
  sub_1C13CC8(v6 + 376);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v80 = 0x300013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v33);
    byte_4BAEDA1 = 1;
  }
  v34 = UnityEngine_Vector3_TypeInfo->static_fields;
  v35 = *(_QWORD *)&v34->zeroVector.fields.x;
  v36 = v34->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v80 + 1) = v35;
  *(float *)&v85 = v36;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v58 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xBu )
    goto LABEL_43;
  *(_OWORD *)(v6 + 384) = v80;
  *(_OWORD *)(v6 + 400) = v58;
  sub_1C13CC8(v6 + 408);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v81 = 0x400013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v37);
    byte_4BAEDA1 = 1;
  }
  v38 = UnityEngine_Vector3_TypeInfo->static_fields;
  v39 = *(_QWORD *)&v38->zeroVector.fields.x;
  v40 = v38->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v81 + 1) = v39;
  *(float *)&v85 = v40;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v57 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xCu )
    goto LABEL_43;
  *(_OWORD *)(v6 + 416) = v81;
  *(_OWORD *)(v6 + 432) = v57;
  sub_1C13CC8(v6 + 440);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v82 = 0x600013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v41);
    byte_4BAEDA1 = 1;
  }
  v42 = UnityEngine_Vector3_TypeInfo->static_fields;
  v43 = *(_QWORD *)&v42->zeroVector.fields.x;
  v44 = v42->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v82 + 1) = v43;
  *(float *)&v85 = v44;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v56 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xDu )
    goto LABEL_43;
  *(_OWORD *)(v6 + 448) = v82;
  *(_OWORD *)(v6 + 464) = v56;
  sub_1C13CC8(v6 + 472);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v83 = 0x700013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v45);
    byte_4BAEDA1 = 1;
  }
  v46 = UnityEngine_Vector3_TypeInfo->static_fields;
  v47 = *(_QWORD *)&v46->zeroVector.fields.x;
  v48 = v46->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v83 + 1) = v47;
  *(float *)&v85 = v48;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v55 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xEu )
    goto LABEL_43;
  *(_OWORD *)(v6 + 480) = v83;
  *(_OWORD *)(v6 + 496) = v55;
  sub_1C13CC8(v6 + 504);
  DWORD1(v85) = 0;
  *((_QWORD *)&v85 + 1) = 0LL;
  v84 = 0x800013A30uLL;
  if ( !byte_4BAEDA1 )
  {
    sub_1C13D24(&UnityEngine_Vector3_TypeInfo, v49);
    byte_4BAEDA1 = 1;
  }
  v50 = UnityEngine_Vector3_TypeInfo->static_fields;
  v51 = *(_QWORD *)&v50->zeroVector.fields.x;
  v52 = v50->zeroVector.fields.z;
  *((_QWORD *)&v85 + 1) = StringLiteral_19222/*"effectExplanation"*/;
  *((_QWORD *)&v84 + 1) = v51;
  *(float *)&v85 = v52;
  v7 = sub_1C13CC8((char *)&v85 + 8);
  v54 = v85;
  if ( *(_DWORD *)(v6 + 24) <= 0xFu )
LABEL_43:
    sub_1C13F88(v7, v8);
  *(_OWORD *)(v6 + 512) = v84;
  *(_OWORD *)(v6 + 528) = v54;
  sub_1C13CC8(v6 + 536);
  v53 = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
  v53->effectSet = (struct EventServantRecoveryFatigueManager_EffectSet_array *)v6;
  sub_1C13CC8(&v53->effectSet);
}


void __fastcall EventServantRecoveryFatigueManager___ctor(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BAF641 & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17141/*"ar102"*/, method);
    byte_4BAF641 = 1;
  }
  this->fields.settingSe = (struct System_String_o *)StringLiteral_17141/*"ar102"*/;
  sub_1C13CC8(&this->fields.settingSe);
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
  EventServantRecoveryFatigueItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v8; // w21

  if ( (byte_4BAF637 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, *(_QWORD *)&index);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v5);
    byte_4BAF637 = 1;
  }
  result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    do
    {
      result = (EventServantRecoveryFatigueItem_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)result,
                                                      v8,
                                                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.index == index )
        return result;
      if ( m_CancellationTokenSource == ++v8 )
        return 0LL;
      result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1C13F80(result, *(_QWORD *)&index);
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
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventServantRecoveryFatigueItem__o *servantItemList; // x8
  int32_t v8; // w1

  v4 = this;
  if ( (byte_4BAF636 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, *(_QWORD *)&index);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v5);
    this = (EventServantRecoveryFatigueManager_o *)sub_1C13D24(
                                                     &Method_System_Collections_Generic_List_string__get_Item__,
                                                     v6);
    byte_4BAF636 = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList || (this = (EventServantRecoveryFatigueManager_o *)v4->fields.settingSeList) == 0LL )
    sub_1C13F80(this, *(_QWORD *)&index);
  if ( servantItemList->fields._size != LODWORD(this->fields.m_CancellationTokenSource) )
    return v4->fields.settingSe;
  if ( index <= 0 )
    v8 = 0;
  else
    v8 = index - 1;
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v8,
                              (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_string__get_Item__);
}


void __fastcall EventServantRecoveryFatigueManager__Init(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w21
  int32_t v6; // w20

  if ( (byte_4BAF634 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v3);
    byte_4BAF634 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_9;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v6 = 0;
    do
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v6,
                                                                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        break;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)servantItemList, method);
      if ( size == ++v6 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_9:
    sub_1C13F80(servantItemList, method);
  }
}


bool __fastcall EventServantRecoveryFatigueManager__IsFade(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4BAF63F & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4BAF63F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C13F80(Instance, v3);
  return CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0LL);
}


bool __fastcall EventServantRecoveryFatigueManager__IsMask(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  return this->fields.maskCount > 0;
}


void __fastcall EventServantRecoveryFatigueManager__ModifyItem(
        EventServantRecoveryFatigueManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w24
  int32_t v12; // w23
  const MethodInfo *v13; // x5

  if ( (byte_4BAF638 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, userServantEntity);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v9);
    byte_4BAF638 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C13F80(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v12,
                                                                       (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      if ( servantItemList[2].fields._size == index )
        break;
      if ( size == ++v12 )
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
      v13);
  }
}


void __fastcall EventServantRecoveryFatigueManager__OnNoticeChangeBtn(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  _BOOL4 isFatigueNotice; // w20
  System_Reflection_MethodBase_o *v7; // x0
  __int64 v8; // x1
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v10; // x8
  bool v11; // w21

  if ( (byte_4BAF63C & 1) == 0 )
  {
    sub_1C13D24(&Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__, method);
    sub_1C13D24(&StringLiteral_17792/*"btn_getreward"*/, v3);
    sub_1C13D24(&StringLiteral_17791/*"btn_filter_on"*/, v4);
    byte_4BAF63C = 1;
  }
  v5 = Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__;
  isFatigueNotice = this->fields.isFatigueNotice;
  if ( (*((_BYTE *)Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C13D3C(Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C13D08(v5, v5[4]);
  if ( !isFatigueNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
    fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
    if ( fatigueNoticeBtn )
    {
      v10 = &StringLiteral_17792/*"btn_getreward"*/;
      v11 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C13F80(fatigueNoticeBtn, v8);
  }
  OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    goto LABEL_11;
  v10 = &StringLiteral_17791/*"btn_filter_on"*/;
  v11 = 0;
LABEL_10:
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v10, 0LL);
  this->fields.isFatigueNotice = v11;
  EventRewardSaveData__SetFatigueNotiffication(!isFatigueNotice, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager__SetMaskPanel(
        EventServantRecoveryFatigueManager_o *this,
        UnityEngine_GameObject_o *maskPanel,
        const MethodInfo *method)
{
  this->fields.maskPanel = maskPanel;
  sub_1C13CC8(&this->fields.maskPanel);
}


System_Collections_IEnumerator_o *__fastcall EventServantRecoveryFatigueManager__SetOpenEffect(
        EventServantRecoveryFatigueManager_o *this,
        EventServantRecoveryFatigueItem_o *item,
        int32_t eventId,
        int32_t num,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v11; // x24

  if ( (byte_4BAF63E & 1) == 0 )
  {
    sub_1C13D24(&EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo, item);
    byte_4BAF63E = 1;
  }
  v11 = sub_1C13F70(EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = this;
  sub_1C13CC8(v11 + 32);
  *(_QWORD *)(v11 + 40) = item;
  sub_1C13CC8(v11 + 40);
  *(_DWORD *)(v11 + 48) = num;
  *(_DWORD *)(v11 + 52) = eventId;
  *(_QWORD *)(v11 + 56) = onClick;
  sub_1C13CC8(v11 + 56);
  return (System_Collections_IEnumerator_o *)v11;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventServantRecoveryFatigueManager__SetPreRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v12; // x2
  int v13; // w22
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventServantRecoveryFatigueManager_c *v17; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x21
  Il2CppObject *v21; // x0
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BAF63A & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D____77466824, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, v5);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BAF63A = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0LL);
  v13 = (_DWORD)RecoverydBgId - 1;
  if ( (int)RecoverydBgId < 1 )
    return;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v12);
  v17 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v17 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v22 = v13;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v21, 0LL);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__49747248(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_2F71530 *)Method_AssetData_GetObject_Texture2D____77466824),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C13F80(Instance, v10);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v12; // x2
  int v13; // w21
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  EventServantRecoveryFatigueManager_c *v17; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x22
  Il2CppObject *v21; // x0
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BAF639 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_Texture2D____77466824, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___, v5);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v6);
    sub_1C13D24(&int_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4BAF639 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0LL);
  if ( (int)RecoverydBgId < 1 )
    return;
  v13 = (int)RecoverydBgId;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v12);
  v17 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v17 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v17->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v22 = v13;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v14, v15, v16);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v21, 0LL);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__49747248(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_2F71530 *)Method_AssetData_GetObject_Texture2D____77466824),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C13F80(Instance, v10);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  void *Instance; // x0
  __int64 v31; // x1
  Il2CppObject *Entity; // x24
  const MethodInfo *v33; // x2
  struct System_Action_o **p_endOpenEffectCallback; // x28
  UISprite_o *v35; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v40; // w20
  UnityEngine_Object_o *v41; // x24
  const MethodInfo *v42; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_Dictionary_int__long__o *RecoveryUserSvtDic; // x0
  int v45; // w26
  __int64 v46; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int32_t key; // w26
  Il2CppObject *value; // x28
  __int64 Item; // x0
  const MethodInfo *v51; // x1
  EventServantRecoveryFatigueItem_o *v52; // x27
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x1
  __int64 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x5
  Il2CppObject *v58; // x1
  const MethodInfo *v59; // x5
  const MethodInfo *v60; // x2
  BalanceConfig_c *v61; // x0
  const MethodInfo *v62; // x5
  System_Collections_IEnumerator_o *v63; // x1
  UnityEngine_Object_o *fatigueNotice; // x21
  int v65; // w20
  int32_t v66; // w21
  int v67; // w8
  int v68; // w20
  int32_t v69; // w23
  const MethodInfo *v70; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v71; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v72; // [xsp+30h] [xbp-B0h] BYREF
  int32_t eventIda; // [xsp+68h] [xbp-78h]
  int v74; // [xsp+6Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BAF635 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_UnityEngine_Component_GetComponent_UISprite___, v9);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventMaster___, v10);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___, v11);
    sub_1C13D24(&Method_DataManager_GetMasterData_UserServantMaster___, v12);
    sub_1C13D24(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v13);
    sub_1C13D24(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v14);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__, v15);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__, v17);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__, v18);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__, v19);
    sub_1C13D24(&EventRewardRootComponent_TypeInfo, v20);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v21);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__, v22);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__, v23);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__, v24);
    sub_1C13D24(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__, v25);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v26);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1C13D24(&StringLiteral_3304/*"Bg"*/, v28);
    sub_1C13D24(&StringLiteral_17817/*"btn_skill_on"*/, v29);
    byte_4BAF635 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_69;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3238624 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  EventServantRecoveryFatigueManager__SetRecoveryBg(this, eventId, v33);
  this->fields.endOpenEffectCallback = endCallback;
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  sub_1C13CC8(&this->fields.endOpenEffectCallback);
  Instance = this->fields.fatigueNotice;
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Transform__Find(
               (UnityEngine_Transform_o *)Instance,
               (System_String_o *)StringLiteral_3304/*"Bg"*/,
               0LL);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_2F85F10 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Instance )
    goto LABEL_69;
  v35 = (UISprite_o *)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_69;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0LL);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(v35, (System_String_o *)StringLiteral_17817/*"btn_skill_on"*/, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v35, 0LL);
  v76.fields.x = x;
  v76.fields.y = y;
  v76.fields.z = z;
  GameObjectExtensions__SetLocalScale(gameObject, v76, 0LL);
  Instance = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    Instance = EventServantRecoveryFatigueManager_TypeInfo;
  }
  v40 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 8LL) == eventId ? 0 : eventId;
  if ( !Entity )
    goto LABEL_69;
  if ( !EventEntity__IsOpen((EventEntity_o *)Entity, 0, 0LL) )
  {
    EventRewardSaveData__SetFatigueNotiffication(0, 0LL);
    fatigueNotice = (UnityEngine_Object_o *)this->fields.fatigueNotice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fatigueNotice, 0LL, 0LL) )
    {
      Instance = this->fields.fatigueNotice;
      if ( !Instance )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    }
    EventRewardSaveData__DeleteRecoveryIdx(v40, 0LL);
    Instance = this->fields.servantItemList;
    if ( Instance )
    {
      v65 = *((_DWORD *)Instance + 6);
      if ( v65 < 1 )
        goto LABEL_70;
      v66 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v66,
                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
        if ( !Instance )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
        if ( v65 == ++v66 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
      }
      while ( Instance );
    }
LABEL_69:
    sub_1C13F80(Instance, v31);
  }
  v41 = (UnityEngine_Object_o *)this->fields.fatigueNotice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v41, 0LL, 0LL) )
  {
    this->fields.isFatigueNotice = EventRewardSaveData__GetFatigueNotification(0LL);
    EventServantRecoveryFatigueManager__setNoticeValue(this, v42);
  }
  EventRewardSaveData__LoadRecoveryIdx(v40, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
    v67 = *((_DWORD *)Instance + 6);
    v68 = v67 - 1;
    if ( v67 >= 1 )
    {
      v69 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v69,
                     (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        EventServantRecoveryFatigueItem__SetServantInfo(
          (EventServantRecoveryFatigueItem_o *)Instance,
          0LL,
          eventId,
          v69,
          onClick,
          v70);
        if ( v68 == v69 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
        ++v69;
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
      sub_1C13CC8(p_endOpenEffectCallback);
    }
    return;
  }
  eventIda = v40;
  System_Collections_Generic_Dictionary_int__long___GetEnumerator(
    &v71,
    RecoveryUserSvtDic,
    (const MethodInfo_328F7CC *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
  v45 = 0;
  v72 = v71;
LABEL_28:
  v74 = v45;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
            &v72,
            (const MethodInfo_33E18F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      sub_1C13F80(0LL, v46);
    key = (int32_t)v72.fields._current.fields.key;
    value = v72.fields._current.fields.value;
    Item = (__int64)System_Collections_Generic_List_object___get_Item(
                      servantItemList,
                      LODWORD(v72.fields._current.fields.key) - 1,
                      (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    v52 = (EventServantRecoveryFatigueItem_o *)Item;
    if ( !byte_4BAF6E9 )
    {
      Item = sub_1C13D24(&EventRewardSaveData_TypeInfo, v51);
      byte_4BAF6E9 = 1;
    }
    if ( (__int64)value <= 0 && EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField < key )
    {
      if ( !v52 )
        sub_1C13F80(Item, v51);
      if ( !EventServantRecoveryFatigueItem__IsAnimation(v52, v51) )
        goto LABEL_46;
      v61 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v61 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v61->static_fields->RecoveryFatigueDelayedChangeBgEvents,
             eventId,
             (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
LABEL_46:
        EventServantRecoveryFatigueManager__SetPreRecoveryBg(this, eventId, v60);
      }
      EventRewardSaveData__SetRecoveryIdx(eventIda, key, 0LL);
      v63 = EventServantRecoveryFatigueManager__SetOpenEffect(this, v52, eventId, key, onClick, v62);
      v45 = 1;
      UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v63, 0LL);
      goto LABEL_28;
    }
    if ( !v52 )
      sub_1C13F80(Item, v51);
    v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v52, 0LL);
    if ( !v53 )
      sub_1C13F80(0LL, v54);
    UnityEngine_GameObject__SetActive(v53, 1, 0LL);
    if ( (__int64)value < 1 )
    {
      EventServantRecoveryFatigueItem__SetServantInfo(v52, 0LL, eventId, key, onClick, v57);
    }
    else
    {
      if ( !MasterData_object )
        sub_1C13F80(v55, v56);
      v58 = DataMasterBase_object__object__long___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int64_t)value,
              (const MethodInfo_323AB80 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      EventServantRecoveryFatigueItem__SetServantInfo(v52, (UserServantEntity_o *)v58, eventId, key, onClick, v59);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
    &v72,
    (const MethodInfo_33E1A08 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  if ( (v74 & 1) == 0 )
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
  __int64 v8; // x1
  __int64 v9; // x1
  AssetData_o *assetData; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *monitor; // x8
  struct EventServantRecoveryFatigueManager_EffectSet_array *effectSet; // x9
  int max_length; // w10
  int v14; // w11
  char *v15; // x13
  UnityEngine_GameObject_o *v16; // x20
  char *v17; // x9
  float v18; // s9
  float v19; // s10
  float v20; // s8
  System_String_o *v21; // x20
  Il2CppObject *Object_object__49747248; // x20
  UnityEngine_Transform_o *v23; // x19
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BAF640 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, *(_QWORD *)&num);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v7);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v9);
    byte_4BAF640 = 1;
  }
  assetData = (AssetData_o *)EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    assetData = (AssetData_o *)EventServantRecoveryFatigueManager_TypeInfo;
  }
  monitor = (struct EventServantRecoveryFatigueManager_StaticFields *)assetData[2].monitor;
  effectSet = monitor->effectSet;
  if ( !effectSet )
    goto LABEL_27;
  max_length = effectSet->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( max_length == v14 )
        sub_1C13F88(assetData, *(_QWORD *)&num);
      v15 = (char *)effectSet + 32 * v14;
      if ( *((_DWORD *)v15 + 8) == eventId && *((_DWORD *)v15 + 9) == num )
        break;
      if ( max_length == ++v14 )
        return 0LL;
    }
    v17 = (char *)effectSet + 32 * v14;
    v19 = *((float *)v17 + 10);
    v18 = *((float *)v17 + 11);
    v20 = *((float *)v17 + 12);
    v21 = (System_String_o *)*((_QWORD *)v17 + 7);
    if ( !assetData[2].fields.size )
    {
      j_il2cpp_runtime_class_init_0(assetData);
      monitor = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
    }
    assetData = monitor->assetData;
    if ( assetData )
    {
      Object_object__49747248 = AssetData__GetObject_object__49747248(
                                  assetData,
                                  v21,
                                  (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = (AssetData_o *)UnityEngine_Object__Instantiate_object_(
                                   Object_object__49747248,
                                   (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( assetData )
      {
        v16 = (UnityEngine_GameObject_o *)assetData;
        assetData = (AssetData_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)assetData, 0LL);
        if ( assetData )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)assetData, parentTr, 0LL);
          assetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
          if ( assetData )
          {
            v25.fields.x = v19;
            v25.fields.y = v18;
            v25.fields.z = v20;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)assetData, v25, 0LL);
            assetData = (AssetData_o *)UnityEngine_GameObject__get_transform(v16, 0LL);
            v23 = (UnityEngine_Transform_o *)assetData;
            if ( !byte_4BAEDA6 )
            {
              assetData = (AssetData_o *)sub_1C13D24(&UnityEngine_Vector3_TypeInfo, *(_QWORD *)&num);
              byte_4BAEDA6 = 1;
            }
            if ( v23 )
            {
              UnityEngine_Transform__set_localScale(v23, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
              return v16;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C13F80(assetData, *(_QWORD *)&num);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x19
  System_String_o *ServantFatigueFolder; // x0
  EventServantRecoveryFatigueManager___c_c *v15; // x8
  System_String_o *v16; // x19
  AssetLoader_LoadEndDataHandler_o *_9__29_0; // x20
  Il2CppObject *v18; // x21
  struct EventServantRecoveryFatigueManager___c_StaticFields *static_fields; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4BAF63D & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, *(_QWORD *)&eventId);
    sub_1C13D24(&Method_DataManager_GetMasterData_EventDetailMaster___, v4);
    sub_1C13D24(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5);
    sub_1C13D24(&EventDetailEntity_TypeInfo, v6);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1C13D24(&Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__, v9);
    sub_1C13D24(&EventServantRecoveryFatigueManager___c_TypeInfo, v10);
    byte_4BAF63D = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2F8F46C *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0LL )
  {
    sub_1C13F80(Instance, v12);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_3238670 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v13 = entity;
  if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
  ServantFatigueFolder = EventDetailEntity__GetServantFatigueFolder((EventDetailEntity_o *)v13, 0LL);
  v15 = EventServantRecoveryFatigueManager___c_TypeInfo;
  v16 = ServantFatigueFolder;
  if ( !EventServantRecoveryFatigueManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager___c_TypeInfo);
    v15 = EventServantRecoveryFatigueManager___c_TypeInfo;
  }
  _9__29_0 = v15->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      v15 = EventServantRecoveryFatigueManager___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v15->static_fields->__9;
    _9__29_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__29_0,
      v18,
      Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__,
      0LL);
    static_fields = EventServantRecoveryFatigueManager___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C13CC8(&static_fields->__9__29_0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v16, _9__29_0, 1, 0LL);
}


void __fastcall EventServantRecoveryFatigueManager__setNoticeValue(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v5; // x8

  if ( (byte_4BAF63B & 1) == 0 )
  {
    sub_1C13D24(&StringLiteral_17792/*"btn_getreward"*/, method);
    sub_1C13D24(&StringLiteral_17791/*"btn_filter_on"*/, v3);
    byte_4BAF63B = 1;
  }
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    sub_1C13F80(0LL, method);
  if ( this->fields.isFatigueNotice )
    v5 = &StringLiteral_17792/*"btn_getreward"*/;
  else
    v5 = &StringLiteral_17791/*"btn_filter_on"*/;
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v5, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventServantRecoveryFatigueManager_o *_4__this; // x20
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitUntil_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  const MethodInfo *v15; // x2
  BalanceConfig_c *v16; // x0
  const MethodInfo *v17; // x5
  float endEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v19; // x20
  Il2CppObject **v20; // x19
  int v21; // w8
  int v22; // w8
  struct System_Action_o *v23; // x8
  struct System_Action_o **p_endOpenEffectCallback; // x20
  struct System_Action_o *endOpenEffectCallback; // t1
  int32_t eventId; // w21
  int32_t num; // w22
  const MethodInfo *v28; // x3
  UnityEngine_Transform_o *transform; // x23
  float openEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v31; // x20

  v3 = this;
  if ( (byte_4BAF645 & 1) == 0 )
  {
    sub_1C13D24(&BalanceConfig_TypeInfo, method);
    sub_1C13D24(&Method_System_Linq_Enumerable_Contains_int___, v4);
    sub_1C13D24(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__, v5);
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, v6);
    sub_1C13D24(&System_Func_bool__TypeInfo, v7);
    sub_1C13D24(&UnityEngine_WaitForSeconds_TypeInfo, v8);
    this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)sub_1C13D24(&UnityEngine_WaitUntil_TypeInfo, v9);
    byte_4BAF645 = 1;
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
        v11 = (System_Func_bool__o *)sub_1C13F70(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v11,
          (Il2CppObject *)_4__this,
          Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__,
          0LL);
        v12 = (UnityEngine_WaitUntil_o *)sub_1C13F70(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v12;
        p__2__current = &v3->fields.__2__current;
        sub_1C13CC8(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      else
      {
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
        if ( !this )
LABEL_38:
          sub_1C13F80(this, method);
        num = v3->fields.num;
        eventId = v3->fields.eventId;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
        if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
        EventServantRecoveryFatigueManager__getEffect(eventId, num, transform, v28);
LABEL_36:
        openEffectTime = _4__this->fields.openEffectTime;
        v31 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v31, openEffectTime, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v31;
        v20 = &v3->fields.__2__current;
        sub_1C13CC8(v20);
        v21 = 2;
LABEL_37:
        *((_DWORD *)v20 - 2) = v21;
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
        v16 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v16 = BalanceConfig_TypeInfo;
        }
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)System_Linq_Enumerable__Contains_int_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v16->static_fields->RecoveryFatigueDelayedChangeBgEvents,
                                                                              v3->fields.eventId,
                                                                              (const MethodInfo_2FA7350 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_22;
      }
      if ( !_4__this )
        goto LABEL_38;
      EventServantRecoveryFatigueManager__SetRecoveryBg(_4__this, v3->fields.eventId, v15);
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
        v17);
      if ( !_4__this )
        goto LABEL_38;
      endEffectTime = _4__this->fields.endEffectTime;
      v19 = (UnityEngine_WaitForSeconds_o *)sub_1C13F70(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v19, endEffectTime, 0LL);
      v3->fields.__2__current = (Il2CppObject *)v19;
      v20 = &v3->fields.__2__current;
      sub_1C13CC8(v20);
      v21 = 3;
      goto LABEL_37;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v22 = _4__this->fields.maskCount - 1;
      _4__this->fields.maskCount = v22;
      if ( v22 )
        goto LABEL_29;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
LABEL_29:
      endOpenEffectCallback = _4__this->fields.endOpenEffectCallback;
      p_endOpenEffectCallback = &_4__this->fields.endOpenEffectCallback;
      v23 = endOpenEffectCallback;
      if ( endOpenEffectCallback )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v23->fields.m_target)(
          v23->fields.original_method_info,
          *(_QWORD *)&v23->fields.extra_arg);
        *p_endOpenEffectCallback = 0LL;
        sub_1C13CC8(p_endOpenEffectCallback);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
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
  Il2CppObject *v2; // x19

  if ( (byte_4BAF643 & 1) == 0 )
  {
    sub_1C13D24(&EventServantRecoveryFatigueManager___c_TypeInfo, v1);
    byte_4BAF643 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(EventServantRecoveryFatigueManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EventServantRecoveryFatigueManager___c_TypeInfo->static_fields->__9 = (struct EventServantRecoveryFatigueManager___c_o *)v2;
  sub_1C13CC8(EventServantRecoveryFatigueManager___c_TypeInfo->static_fields);
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

  if ( (byte_4BAF644 & 1) == 0 )
  {
    sub_1C13D24(&EventServantRecoveryFatigueManager_TypeInfo, data);
    byte_4BAF644 = 1;
  }
  if ( data )
  {
    v4 = EventServantRecoveryFatigueManager_TypeInfo;
    if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
      v4 = EventServantRecoveryFatigueManager_TypeInfo;
    }
    static_fields = v4->static_fields;
    static_fields->assetData = data;
    sub_1C13CC8(&static_fields->assetData);
  }
}