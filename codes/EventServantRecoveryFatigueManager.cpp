void EventServantRecoveryFatigueManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v4; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v6; // x8
  __int64 v7; // d0
  float v8; // s1
  struct UnityEngine_Vector3_StaticFields *v9; // x8
  __int64 v10; // d0
  float v11; // s1
  struct UnityEngine_Vector3_StaticFields *v12; // x8
  __int64 v13; // d0
  float v14; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  __int64 v16; // d0
  float v17; // s1
  struct UnityEngine_Vector3_StaticFields *v18; // x8
  __int64 v19; // d0
  float v20; // s1
  struct UnityEngine_Vector3_StaticFields *v21; // x8
  __int64 v22; // d0
  float v23; // s1
  struct UnityEngine_Vector3_StaticFields *v24; // x8
  __int64 v25; // d0
  float v26; // s1
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  __int64 v28; // d0
  float v29; // s1
  struct UnityEngine_Vector3_StaticFields *v30; // x8
  __int64 v31; // d0
  float v32; // s1
  struct UnityEngine_Vector3_StaticFields *v33; // x8
  __int64 v34; // d0
  float v35; // s1
  struct EventServantRecoveryFatigueManager_StaticFields *v36; // x0
  __int128 v37; // [xsp+10h] [xbp-270h]
  __int128 v38; // [xsp+30h] [xbp-250h]
  __int128 v39; // [xsp+50h] [xbp-230h]
  __int128 v40; // [xsp+70h] [xbp-210h]
  __int128 v41; // [xsp+90h] [xbp-1F0h]
  __int128 v42; // [xsp+B0h] [xbp-1D0h]
  __int128 v43; // [xsp+D0h] [xbp-1B0h]
  __int128 v44; // [xsp+F0h] [xbp-190h]
  __int128 v45; // [xsp+110h] [xbp-170h]
  __int128 v46; // [xsp+130h] [xbp-150h]
  __int128 v47; // [xsp+150h] [xbp-130h]
  __int128 v48; // [xsp+170h] [xbp-110h]
  __int128 v49; // [xsp+190h] [xbp-F0h]
  __int128 v50; // [xsp+1B0h] [xbp-D0h]
  __int128 v51; // [xsp+1D0h] [xbp-B0h]
  __int128 v52; // [xsp+210h] [xbp-70h]
  __int128 v53; // [xsp+220h] [xbp-60h]
  __int128 v54; // [xsp+220h] [xbp-60h]
  __int128 v55; // [xsp+220h] [xbp-60h]
  __int128 v56; // [xsp+220h] [xbp-60h]
  __int128 v57; // [xsp+220h] [xbp-60h]
  __int128 v58; // [xsp+220h] [xbp-60h]
  __int128 v59; // [xsp+220h] [xbp-60h]
  __int128 v60; // [xsp+220h] [xbp-60h]
  __int128 v61; // [xsp+220h] [xbp-60h]
  __int128 v62; // [xsp+220h] [xbp-60h]
  __int128 v63; // [xsp+220h] [xbp-60h]
  __int128 v64; // [xsp+220h] [xbp-60h]
  __int128 v65; // [xsp+220h] [xbp-60h]
  __int128 v66; // [xsp+220h] [xbp-60h]
  __int128 v67; // [xsp+220h] [xbp-60h]
  __int128 v68; // [xsp+230h] [xbp-50h] BYREF

  if ( (byte_4C3D980 & 1) == 0 )
  {
    sub_1C37058(&EventServantRecoveryFatigueManager_EffectSet___TypeInfo);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&StringLiteral_18935/*"effect_prefab_2"*/);
    sub_1C37058(&StringLiteral_22990/*"recovery{0}"*/);
    sub_1C37058(&StringLiteral_18934/*"effect_prefab"*/);
    byte_4C3D980 = 1;
  }
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->BG_FILE = (struct System_String_o *)StringLiteral_22990/*"recovery{0}"*/;
  sub_1C36FFC(EventServantRecoveryFatigueManager_TypeInfo->static_fields, StringLiteral_22990/*"recovery{0}"*/);
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->defaultEventId = 80273;
  v1 = sub_1C37100(EventServantRecoveryFatigueManager_EffectSet___TypeInfo, 16);
  *(_QWORD *)&v68 = 0;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v52 = v68;
  if ( !v1 )
    sub_1C372B4(v2);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_43;
  *(_OWORD *)(v1 + 32) = 0x100013991uLL;
  *(_OWORD *)(v1 + 48) = v52;
  sub_1C36FFC(v1 + 56, 0);
  *(_QWORD *)&v68 = 0;
  *(_QWORD *)&v53 = 0x200013991LL;
  *((_QWORD *)&v53 + 1) = 0xC2D6000000000000LL;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v51 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 64) = v53;
  *(_OWORD *)(v1 + 80) = v51;
  sub_1C36FFC(v1 + 88, 0);
  *(_QWORD *)&v68 = 0;
  *(_QWORD *)&v54 = 0x300013991LL;
  *((_QWORD *)&v54 + 1) = 0xC2AC0000C1000000LL;
  *((_QWORD *)&v68 + 1) = StringLiteral_18935/*"effect_prefab_2"*/;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18935/*"effect_prefab_2"*/);
  v50 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 96) = v54;
  *(_OWORD *)(v1 + 112) = v50;
  sub_1C36FFC(v1 + 120, 0);
  *(_QWORD *)&v68 = 0;
  *(_QWORD *)&v55 = 0x400013991LL;
  *((_QWORD *)&v55 + 1) = 0xC2600000C2580000LL;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v49 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 128) = v55;
  *(_OWORD *)(v1 + 144) = v49;
  sub_1C36FFC(v1 + 152, 0);
  *(_QWORD *)&v68 = 0;
  *(_QWORD *)&v56 = 0x500013991LL;
  *((_QWORD *)&v56 + 1) = 0xC2C00000C1500000LL;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v48 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 4u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 160) = v56;
  *(_OWORD *)(v1 + 176) = v48;
  sub_1C36FFC(v1 + 184, 0);
  v68 = 0u;
  v57 = 0x2000139BEuLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v4 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v57 + 1) = v4;
  *(float *)&v68 = z;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v47 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 5u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 192) = v57;
  *(_OWORD *)(v1 + 208) = v47;
  sub_1C36FFC(v1 + 216, 0);
  v68 = 0u;
  v58 = 0x3000139BEuLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v6 = UnityEngine_Vector3_TypeInfo->static_fields;
  v7 = *(_QWORD *)&v6->zeroVector.fields.x;
  v8 = v6->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v58 + 1) = v7;
  *(float *)&v68 = v8;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v46 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 6u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 224) = v58;
  *(_OWORD *)(v1 + 240) = v46;
  sub_1C36FFC(v1 + 248, 0);
  v68 = 0u;
  v59 = 0x4000139BEuLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v9 = UnityEngine_Vector3_TypeInfo->static_fields;
  v10 = *(_QWORD *)&v9->zeroVector.fields.x;
  v11 = v9->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v59 + 1) = v10;
  *(float *)&v68 = v11;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v45 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 7u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 256) = v59;
  *(_OWORD *)(v1 + 272) = v45;
  sub_1C36FFC(v1 + 280, 0);
  v68 = 0u;
  v60 = 0x5000139BEuLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v12 = UnityEngine_Vector3_TypeInfo->static_fields;
  v13 = *(_QWORD *)&v12->zeroVector.fields.x;
  v14 = v12->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v60 + 1) = v13;
  *(float *)&v68 = v14;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v44 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 8u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 288) = v60;
  *(_OWORD *)(v1 + 304) = v44;
  sub_1C36FFC(v1 + 312, 0);
  v68 = 0u;
  v61 = 0x6000139BEuLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v15 = UnityEngine_Vector3_TypeInfo->static_fields;
  v16 = *(_QWORD *)&v15->zeroVector.fields.x;
  v17 = v15->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v61 + 1) = v16;
  *(float *)&v68 = v17;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v43 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 9u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 320) = v61;
  *(_OWORD *)(v1 + 336) = v43;
  sub_1C36FFC(v1 + 344, 0);
  v68 = 0u;
  v62 = 0x200013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v18 = UnityEngine_Vector3_TypeInfo->static_fields;
  v19 = *(_QWORD *)&v18->zeroVector.fields.x;
  v20 = v18->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v62 + 1) = v19;
  *(float *)&v68 = v20;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v42 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xAu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 352) = v62;
  *(_OWORD *)(v1 + 368) = v42;
  sub_1C36FFC(v1 + 376, 0);
  v68 = 0u;
  v63 = 0x300013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo->static_fields;
  v22 = *(_QWORD *)&v21->zeroVector.fields.x;
  v23 = v21->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v63 + 1) = v22;
  *(float *)&v68 = v23;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v41 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xBu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 384) = v63;
  *(_OWORD *)(v1 + 400) = v41;
  sub_1C36FFC(v1 + 408, 0);
  v68 = 0u;
  v64 = 0x400013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v24 = UnityEngine_Vector3_TypeInfo->static_fields;
  v25 = *(_QWORD *)&v24->zeroVector.fields.x;
  v26 = v24->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v64 + 1) = v25;
  *(float *)&v68 = v26;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v40 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xCu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 416) = v64;
  *(_OWORD *)(v1 + 432) = v40;
  sub_1C36FFC(v1 + 440, 0);
  v68 = 0u;
  v65 = 0x600013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v27 = UnityEngine_Vector3_TypeInfo->static_fields;
  v28 = *(_QWORD *)&v27->zeroVector.fields.x;
  v29 = v27->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v65 + 1) = v28;
  *(float *)&v68 = v29;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v39 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xDu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 448) = v65;
  *(_OWORD *)(v1 + 464) = v39;
  sub_1C36FFC(v1 + 472, 0);
  v68 = 0u;
  v66 = 0x700013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v30 = UnityEngine_Vector3_TypeInfo->static_fields;
  v31 = *(_QWORD *)&v30->zeroVector.fields.x;
  v32 = v30->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v66 + 1) = v31;
  *(float *)&v68 = v32;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v38 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xEu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 480) = v66;
  *(_OWORD *)(v1 + 496) = v38;
  sub_1C36FFC(v1 + 504, 0);
  v68 = 0u;
  v67 = 0x800013A30uLL;
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  v33 = UnityEngine_Vector3_TypeInfo->static_fields;
  v34 = *(_QWORD *)&v33->zeroVector.fields.x;
  v35 = v33->zeroVector.fields.z;
  *((_QWORD *)&v68 + 1) = StringLiteral_18934/*"effect_prefab"*/;
  *((_QWORD *)&v67 + 1) = v34;
  *(float *)&v68 = v35;
  v2 = sub_1C36FFC((char *)&v68 + 8, StringLiteral_18934/*"effect_prefab"*/);
  v37 = v68;
  if ( *(_DWORD *)(v1 + 24) <= 0xFu )
LABEL_43:
    sub_1C372BC(v2);
  *(_OWORD *)(v1 + 512) = v67;
  *(_OWORD *)(v1 + 528) = v37;
  sub_1C36FFC(v1 + 536, 0);
  v36 = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
  v36->effectSet = (struct EventServantRecoveryFatigueManager_EffectSet_array *)v1;
  sub_1C36FFC(&v36->effectSet, v1);
}


void EventServantRecoveryFatigueManager___ctor(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C3D97F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16865/*"ar93"*/);
    byte_4C3D97F = 1;
  }
  v3 = StringLiteral_16865/*"ar93"*/;
  this->fields.settingSe = (struct System_String_o *)StringLiteral_16865/*"ar93"*/;
  sub_1C36FFC(&this->fields.settingSe, v3);
  *(_QWORD *)&this->fields.openEffectTime = 0x400000003F800000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


EventServantRecoveryFatigueItem_o *EventServantRecoveryFatigueManager__GetItem(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v7; // w21

  if ( (byte_4C3D975 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C3D975 = 1;
  }
  result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    do
    {
      result = (EventServantRecoveryFatigueItem_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)result,
                                                      v7,
                                                      (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.index == index )
        return result;
      if ( m_CancellationTokenSource == ++v7 )
        return 0;
      result = (EventServantRecoveryFatigueItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1C372B4(result);
  }
  return 0;
}


System_String_o *EventServantRecoveryFatigueManager__GetSettingSe(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueManager_o *v4; // x20
  struct System_Collections_Generic_List_EventServantRecoveryFatigueItem__o *servantItemList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4C3D974 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (EventServantRecoveryFatigueManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C3D974 = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList || (this = (EventServantRecoveryFatigueManager_o *)v4->fields.settingSeList) == 0 )
    sub_1C372B4(this);
  if ( servantItemList->fields._size != LODWORD(this->fields.m_CancellationTokenSource) )
    return v4->fields.settingSe;
  if ( index <= 0 )
    v6 = 0;
  else
    v6 = index - 1;
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v6,
                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
}


void EventServantRecoveryFatigueManager__Init(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w21
  int32_t v5; // w20
  const MethodInfo *v6; // x1

  if ( (byte_4C3D972 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C3D972 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_9;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v5 = 0;
    do
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v5,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        break;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)servantItemList, v6);
      if ( size == ++v5 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_9:
    sub_1C372B4(servantItemList);
  }
}


bool EventServantRecoveryFatigueManager__IsFade(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3D97D & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3D97D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C372B4(Instance);
  return CommonUI__maskFadeIsDisp((CommonUI_o *)Instance, 0);
}


bool EventServantRecoveryFatigueManager__IsMask(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  return this->fields.maskCount > 0;
}


void EventServantRecoveryFatigueManager__ModifyItem(
        EventServantRecoveryFatigueManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w24
  int32_t v11; // w23
  const MethodInfo *v12; // x5

  if ( (byte_4C3D976 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C3D976 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C372B4(servantItemList);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      if ( servantItemList[2].fields._size == index )
        break;
      if ( size == ++v11 )
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
      0,
      v12);
  }
}


void EventServantRecoveryFatigueManager__OnNoticeChangeBtn(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  _BOOL4 isFatigueNotice; // w20
  System_Reflection_MethodBase_o *v5; // x0
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v7; // x8
  bool v8; // w21

  if ( (byte_4C3D97A & 1) == 0 )
  {
    sub_1C37058(&Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3D97A = 1;
  }
  v3 = Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__;
  isFatigueNotice = this->fields.isFatigueNotice;
  if ( (*((_BYTE *)Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  if ( !isFatigueNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
    if ( fatigueNoticeBtn )
    {
      v7 = &StringLiteral_17507/*"btn_on"*/;
      v8 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C372B4(fatigueNoticeBtn);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    goto LABEL_11;
  v7 = &StringLiteral_17506/*"btn_off"*/;
  v8 = 0;
LABEL_10:
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v7, 0);
  this->fields.isFatigueNotice = v8;
  EventRewardSaveData__SetFatigueNotiffication(!isFatigueNotice, 0);
}


void EventServantRecoveryFatigueManager__SetMaskPanel(
        EventServantRecoveryFatigueManager_o *this,
        UnityEngine_GameObject_o *maskPanel,
        const MethodInfo *method)
{
  this->fields.maskPanel = maskPanel;
  sub_1C36FFC(&this->fields.maskPanel, maskPanel);
}


System_Collections_IEnumerator_o *EventServantRecoveryFatigueManager__SetOpenEffect(
        EventServantRecoveryFatigueManager_o *this,
        EventServantRecoveryFatigueItem_o *item,
        int32_t eventId,
        int32_t num,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v11; // x24

  if ( (byte_4C3D97C & 1) == 0 )
  {
    sub_1C37058(&EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo);
    byte_4C3D97C = 1;
  }
  v11 = sub_1C372A4(EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = this;
  sub_1C36FFC(v11 + 32, this);
  *(_QWORD *)(v11 + 40) = item;
  sub_1C36FFC(v11 + 40, item);
  *(_DWORD *)(v11 + 48) = num;
  *(_DWORD *)(v11 + 52) = eventId;
  *(_QWORD *)(v11 + 56) = onClick;
  sub_1C36FFC(v11 + 56, onClick);
  return (System_Collections_IEnumerator_o *)v11;
}


void EventServantRecoveryFatigueManager__SetPreRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v7; // x2
  int v8; // w22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  EventServantRecoveryFatigueManager_c *v15; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x21
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3D978 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D978 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0);
  v8 = (_DWORD)RecoverydBgId - 1;
  if ( (int)RecoverydBgId < 1 )
    return;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v7);
  v15 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v15 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v20 = v8;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11, v12, v13, v14);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v19, 0);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__51154888(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  ExUITexture__SetImage(this->fields.bgTexture, (UnityEngine_Texture_o *)Instance, 0);
}


void EventServantRecoveryFatigueManager__SetRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v7; // x2
  int v8; // w21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  EventServantRecoveryFatigueManager_c *v15; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x22
  Il2CppObject *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C3D977 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D____78105200);
    sub_1C37058(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3D977 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0);
  if ( (int)RecoverydBgId < 1 )
    return;
  v8 = (int)RecoverydBgId;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v7);
  v15 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v15 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v15->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v20 = v8;
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20, v9, v10, v11, v12, v13, v14);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v19, 0);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__51154888(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_Texture2D____78105200),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C372B4(Instance);
  }
  ExUITexture__SetImage(this->fields.bgTexture, (UnityEngine_Texture_o *)Instance, 0);
}


void EventServantRecoveryFatigueManager__SetServantRecoveryFatigue(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        System_Action_int__o *onClick,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *Entity; // x24
  const MethodInfo *v11; // x2
  struct System_Action_o **p_endOpenEffectCallback; // x28
  UISprite_o *v13; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v18; // w20
  UnityEngine_Object_o *v19; // x24
  const MethodInfo *v20; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_Dictionary_int__long__o *RecoveryUserSvtDic; // x0
  int v23; // w26
  System_Collections_Generic_List_object__o *servantItemList; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *Item; // x0
  const MethodInfo *v27; // x1
  EventServantRecoveryFatigueItem_o *v28; // x27
  UnityEngine_GameObject_o *v29; // x0
  __int64 v30; // x0
  const MethodInfo *v31; // x5
  Il2CppObject *v32; // x1
  const MethodInfo *v33; // x5
  const MethodInfo *v34; // x2
  BalanceConfig_c *v35; // x0
  const MethodInfo *v36; // x5
  System_Collections_IEnumerator_o *v37; // x1
  UnityEngine_Object_o *fatigueNotice; // x21
  int v39; // w20
  int32_t v40; // w21
  int v41; // w8
  int v42; // w20
  int32_t v43; // w23
  const MethodInfo *v44; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v46; // [xsp+30h] [xbp-B0h] BYREF
  int32_t eventIda; // [xsp+68h] [xbp-78h]
  int v48; // [xsp+6Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D973 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_1C37058(&EventRewardRootComponent_TypeInfo);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3151/*"Bg/Sprite"*/);
    sub_1C37058(&StringLiteral_17538/*"btn_txt_Complete_notification"*/);
    byte_4C3D973 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_69;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  EventServantRecoveryFatigueManager__SetRecoveryBg(this, eventId, v11);
  this->fields.endOpenEffectCallback = endCallback;
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  sub_1C36FFC(&this->fields.endOpenEffectCallback, endCallback);
  Instance = this->fields.fatigueNotice;
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_3151/*"Bg/Sprite"*/, 0);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Instance )
    goto LABEL_69;
  v13 = (UISprite_o *)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_69;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(v13, (System_String_o *)StringLiteral_17538/*"btn_txt_Complete_notification"*/, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
  v50.fields.x = x;
  v50.fields.y = y;
  v50.fields.z = z;
  GameObjectExtensions__SetLocalScale(gameObject, v50, 0);
  Instance = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    Instance = EventServantRecoveryFatigueManager_TypeInfo;
  }
  v18 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 8LL) == eventId ? 0 : eventId;
  if ( !Entity )
    goto LABEL_69;
  if ( !EventEntity__IsOpen((EventEntity_o *)Entity, 0, 0) )
  {
    EventRewardSaveData__SetFatigueNotiffication(0, 0);
    fatigueNotice = (UnityEngine_Object_o *)this->fields.fatigueNotice;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(fatigueNotice, 0, 0) )
    {
      Instance = this->fields.fatigueNotice;
      if ( !Instance )
        goto LABEL_69;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    }
    EventRewardSaveData__DeleteRecoveryIdx(v18, 0);
    Instance = this->fields.servantItemList;
    if ( Instance )
    {
      v39 = *((_DWORD *)Instance + 6);
      if ( v39 < 1 )
        goto LABEL_70;
      v40 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v40,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        if ( v39 == ++v40 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
      }
      while ( Instance );
    }
LABEL_69:
    sub_1C372B4(Instance);
  }
  v19 = (UnityEngine_Object_o *)this->fields.fatigueNotice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v19, 0, 0) )
  {
    this->fields.isFatigueNotice = EventRewardSaveData__GetFatigueNotification(0);
    EventServantRecoveryFatigueManager__setNoticeValue(this, v20);
  }
  EventRewardSaveData__LoadRecoveryIdx(v18, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
  if ( !Instance )
    goto LABEL_69;
  RecoveryUserSvtDic = UserEventServantFatigueMaster__GetRecoveryUserSvtDic(
                         (UserEventServantFatigueMaster_o *)Instance,
                         eventId,
                         0);
  if ( !RecoveryUserSvtDic )
  {
    Instance = this->fields.servantItemList;
    if ( !Instance )
      goto LABEL_69;
    v41 = *((_DWORD *)Instance + 6);
    v42 = v41 - 1;
    if ( v41 >= 1 )
    {
      v43 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v43,
                     (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        EventServantRecoveryFatigueItem__SetServantInfo(
          (EventServantRecoveryFatigueItem_o *)Instance,
          0,
          eventId,
          v43,
          onClick,
          v44);
        if ( v42 == v43 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
        ++v43;
      }
      while ( Instance );
      goto LABEL_69;
    }
LABEL_70:
    if ( *p_endOpenEffectCallback )
    {
      ((void (__fastcall *)(intptr_t, intptr_t))(*p_endOpenEffectCallback)->fields.invoke_impl)(
        (*p_endOpenEffectCallback)->fields.method_code,
        (*p_endOpenEffectCallback)->fields.method);
      *p_endOpenEffectCallback = 0;
      sub_1C36FFC(p_endOpenEffectCallback, 0);
    }
    return;
  }
  eventIda = v18;
  System_Collections_Generic_Dictionary_int__long___GetEnumerator(
    &v45,
    RecoveryUserSvtDic,
    (const MethodInfo_33F7AB0 *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
  v23 = 0;
  v46 = v45;
LABEL_28:
  v48 = v23;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
            &v46,
            (const MethodInfo_3550B5C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      sub_1C372B4(0);
    current = v46.fields._current;
    Item = System_Collections_Generic_List_object___get_Item(
             servantItemList,
             LODWORD(v46.fields._current.fields.key) - 1,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    v28 = (EventServantRecoveryFatigueItem_o *)Item;
    if ( !byte_4C3D4B4 )
    {
      Item = (Il2CppObject *)sub_1C37058(&EventRewardSaveData_TypeInfo);
      byte_4C3D4B4 = 1;
    }
    if ( (__int64)current.fields.value <= 0
      && EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField < SLODWORD(current.fields.key) )
    {
      if ( !v28 )
        sub_1C372B4(Item);
      if ( !EventServantRecoveryFatigueItem__IsAnimation(v28, v27) )
        goto LABEL_46;
      v35 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v35 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v35->static_fields->RecoveryFatigueDelayedChangeBgEvents,
             eventId,
             (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
LABEL_46:
        EventServantRecoveryFatigueManager__SetPreRecoveryBg(this, eventId, v34);
      }
      EventRewardSaveData__SetRecoveryIdx(eventIda, (int32_t)current.fields.key, 0);
      v37 = EventServantRecoveryFatigueManager__SetOpenEffect(
              this,
              v28,
              eventId,
              (int32_t)current.fields.key,
              onClick,
              v36);
      v23 = 1;
      UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v37, 0);
      goto LABEL_28;
    }
    if ( !v28 )
      sub_1C372B4(Item);
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
    if ( !v29 )
      sub_1C372B4(0);
    UnityEngine_GameObject__SetActive(v29, 1, 0);
    if ( (__int64)current.fields.value < 1 )
    {
      EventServantRecoveryFatigueItem__SetServantInfo(v28, 0, eventId, (int32_t)current.fields.key, onClick, v31);
    }
    else
    {
      if ( !MasterData_object )
        sub_1C372B4(v30);
      v32 = DataMasterBase_object__object__long___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int64_t)current.fields.value,
              (const MethodInfo_33A35FC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      EventServantRecoveryFatigueItem__SetServantInfo(
        v28,
        (UserServantEntity_o *)v32,
        eventId,
        (int32_t)current.fields.key,
        onClick,
        v33);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
    &v46,
    (const MethodInfo_3550C74 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  if ( (v48 & 1) == 0 )
    goto LABEL_70;
}


bool EventServantRecoveryFatigueManager___SetOpenEffect_b__31_0(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  return !EventServantRecoveryFatigueManager__IsFade(this, method);
}


UnityEngine_GameObject_o *EventServantRecoveryFatigueManager__getEffect(
        int32_t eventId,
        int32_t num,
        UnityEngine_Transform_o *parentTr,
        const MethodInfo *method)
{
  void *assetData; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  struct EventServantRecoveryFatigueManager_EffectSet_array *effectSet; // x9
  int max_length; // w10
  int v11; // w11
  char *v12; // x13
  UnityEngine_GameObject_o *v13; // x20
  char *v14; // x9
  float v15; // s9
  float v16; // s10
  float v17; // s8
  System_String_o *v18; // x20
  Il2CppObject *Object_object__51154888; // x20
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3D97E & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3D97E = 1;
  }
  assetData = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    assetData = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = (struct EventServantRecoveryFatigueManager_StaticFields *)*((_QWORD *)assetData + 23);
  effectSet = static_fields->effectSet;
  if ( !effectSet )
    goto LABEL_27;
  max_length = effectSet->max_length;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( max_length == v11 )
        sub_1C372BC(assetData);
      v12 = (char *)effectSet + 32 * v11;
      if ( *((_DWORD *)v12 + 8) == eventId && *((_DWORD *)v12 + 9) == num )
        break;
      if ( max_length == ++v11 )
        return 0;
    }
    v14 = (char *)effectSet + 32 * v11;
    v16 = *((float *)v14 + 10);
    v15 = *((float *)v14 + 11);
    v17 = *((float *)v14 + 12);
    v18 = (System_String_o *)*((_QWORD *)v14 + 7);
    if ( !*((_DWORD *)assetData + 56) )
    {
      j_il2cpp_runtime_class_init_0(assetData);
      static_fields = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
    }
    assetData = static_fields->assetData;
    if ( assetData )
    {
      Object_object__51154888 = AssetData__GetObject_object__51154888(
                                  (AssetData_o *)assetData,
                                  v18,
                                  (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = UnityEngine_Object__Instantiate_object_(
                    Object_object__51154888,
                    (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      if ( assetData )
      {
        v13 = (UnityEngine_GameObject_o *)assetData;
        assetData = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)assetData, 0);
        if ( assetData )
        {
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)assetData, parentTr, 0);
          assetData = UnityEngine_GameObject__get_transform(v13, 0);
          if ( assetData )
          {
            v22.fields.x = v16;
            v22.fields.y = v15;
            v22.fields.z = v17;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)assetData, v22, 0);
            assetData = UnityEngine_GameObject__get_transform(v13, 0);
            v20 = (UnityEngine_Transform_o *)assetData;
            if ( !byte_4C3C926 )
            {
              assetData = (void *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
              byte_4C3C926 = 1;
            }
            if ( v20 )
            {
              UnityEngine_Transform__set_localScale(v20, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
              return v13;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C372B4(assetData);
  }
  return 0;
}


void EventServantRecoveryFatigueManager__loadAssetData(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v5; // x19
  System_String_o *ServantFatigueFolder; // x0
  EventServantRecoveryFatigueManager___c_c *v7; // x8
  System_String_o *v8; // x19
  AssetLoader_LoadEndDataHandler_o *_9__29_0; // x20
  Il2CppObject *v10; // x21
  struct EventServantRecoveryFatigueManager___c_StaticFields *static_fields; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D97B & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C37058(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C37058(&EventDetailEntity_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__);
    sub_1C37058(&EventServantRecoveryFatigueManager___c_TypeInfo);
    byte_4C3D97B = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C372B4(Instance);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_33A10EC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v5 = entity;
  if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
  ServantFatigueFolder = EventDetailEntity__GetServantFatigueFolder((EventDetailEntity_o *)v5, 0);
  v7 = EventServantRecoveryFatigueManager___c_TypeInfo;
  v8 = ServantFatigueFolder;
  if ( !EventServantRecoveryFatigueManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager___c_TypeInfo);
    v7 = EventServantRecoveryFatigueManager___c_TypeInfo;
  }
  _9__29_0 = v7->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = EventServantRecoveryFatigueManager___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__29_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__29_0,
      v10,
      Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__,
      0);
    static_fields = EventServantRecoveryFatigueManager___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C36FFC(&static_fields->__9__29_0, _9__29_0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v8, _9__29_0, 1, 0);
}


void EventServantRecoveryFatigueManager__setNoticeValue(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C3D979 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_17507/*"btn_on"*/);
    sub_1C37058(&StringLiteral_17506/*"btn_off"*/);
    byte_4C3D979 = 1;
  }
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    sub_1C372B4(0);
  if ( this->fields.isFatigueNotice )
    v4 = &StringLiteral_17507/*"btn_on"*/;
  else
    v4 = &StringLiteral_17506/*"btn_off"*/;
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v4, 0);
}


void EventServantRecoveryFatigueManager__SetOpenEffect_d__31___ctor(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool EventServantRecoveryFatigueManager__SetOpenEffect_d__31__MoveNext(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *v3; // x19
  struct EventServantRecoveryFatigueManager_o *_4__this; // x20
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  System_Func_bool__o *v7; // x21
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  const MethodInfo *v11; // x2
  BalanceConfig_c *v12; // x0
  const MethodInfo *v13; // x5
  float endEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v15; // x20
  Il2CppObject **v16; // x19
  int v17; // w8
  int v18; // w8
  struct System_Action_o *v19; // x8
  struct System_Action_o **p_endOpenEffectCallback; // x20
  struct System_Action_o *endOpenEffectCallback; // t1
  int32_t eventId; // w21
  int32_t num; // w22
  const MethodInfo *v24; // x3
  UnityEngine_Transform_o *transform; // x23
  float openEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v27; // x20

  v3 = this;
  if ( (byte_4C3D983 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__);
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C3D983 = 1;
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
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      ++_4__this->fields.maskCount;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)UnityEngine_Component__get_gameObject(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)this, v5);
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      if ( EventServantRecoveryFatigueItem__IsAnimation((EventServantRecoveryFatigueItem_o *)this, v6) )
      {
        v7 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v7,
          (Il2CppObject *)_4__this,
          Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__,
          0);
        v8 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v8, v7, 0);
        v3->fields.__2__current = (Il2CppObject *)v8;
        p__2__current = &v3->fields.__2__current;
        sub_1C36FFC(p__2__current, v8);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      else
      {
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
        if ( !this )
LABEL_38:
          sub_1C372B4(this);
        num = v3->fields.num;
        eventId = v3->fields.eventId;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
        EventServantRecoveryFatigueManager__getEffect(eventId, num, transform, v24);
LABEL_36:
        openEffectTime = _4__this->fields.openEffectTime;
        v27 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v27, openEffectTime, 0);
        v3->fields.__2__current = (Il2CppObject *)v27;
        v16 = &v3->fields.__2__current;
        sub_1C36FFC(v16, v27);
        v17 = 2;
LABEL_37:
        *((_DWORD *)v16 - 2) = v17;
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
        v12 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v12 = BalanceConfig_TypeInfo;
        }
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)System_Linq_Enumerable__Contains_int_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->RecoveryFatigueDelayedChangeBgEvents,
                                                                              v3->fields.eventId,
                                                                              (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_22;
      }
      if ( !_4__this )
        goto LABEL_38;
      EventServantRecoveryFatigueManager__SetRecoveryBg(_4__this, v3->fields.eventId, v11);
LABEL_22:
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      EventServantRecoveryFatigueItem__SetServantInfo(
        (EventServantRecoveryFatigueItem_o *)this,
        0,
        v3->fields.eventId,
        v3->fields.num,
        v3->fields.onClick,
        v13);
      if ( !_4__this )
        goto LABEL_38;
      endEffectTime = _4__this->fields.endEffectTime;
      v15 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v15, endEffectTime, 0);
      v3->fields.__2__current = (Il2CppObject *)v15;
      v16 = &v3->fields.__2__current;
      sub_1C36FFC(v16, v15);
      v17 = 3;
      goto LABEL_37;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v18 = _4__this->fields.maskCount - 1;
      _4__this->fields.maskCount = v18;
      if ( v18 )
        goto LABEL_29;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_29:
      endOpenEffectCallback = _4__this->fields.endOpenEffectCallback;
      p_endOpenEffectCallback = &_4__this->fields.endOpenEffectCallback;
      v19 = endOpenEffectCallback;
      if ( endOpenEffectCallback )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))v19->fields.invoke_impl)(v19->fields.method_code, v19->fields.method);
        *p_endOpenEffectCallback = 0;
        sub_1C36FFC(p_endOpenEffectCallback, 0);
      }
      return 0;
    default:
      return 0;
  }
}


Il2CppObject *EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_IEnumerator_Reset(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_Collections_IEnumerator_get_Current(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void EventServantRecoveryFatigueManager__SetOpenEffect_d__31__System_IDisposable_Dispose(
        EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void EventServantRecoveryFatigueManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D981 & 1) == 0 )
  {
    sub_1C37058(&EventServantRecoveryFatigueManager___c_TypeInfo);
    byte_4C3D981 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(EventServantRecoveryFatigueManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventServantRecoveryFatigueManager___c_TypeInfo->static_fields->__9 = (struct EventServantRecoveryFatigueManager___c_o *)v1;
  sub_1C36FFC(EventServantRecoveryFatigueManager___c_TypeInfo->static_fields, v1);
}


void EventServantRecoveryFatigueManager___c___ctor(
        EventServantRecoveryFatigueManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void EventServantRecoveryFatigueManager___c___loadAssetData_b__29_0(
        EventServantRecoveryFatigueManager___c_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueManager_c *v4; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x0

  if ( (byte_4C3D982 & 1) == 0 )
  {
    sub_1C37058(&EventServantRecoveryFatigueManager_TypeInfo);
    byte_4C3D982 = 1;
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
    sub_1C36FFC(&static_fields->assetData, data);
  }
}