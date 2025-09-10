void EventServantRecoveryFatigueManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  __int64 v6; // d0
  float z; // s1
  struct UnityEngine_Vector3_StaticFields *v8; // x8
  __int64 v9; // d0
  float v10; // s1
  struct UnityEngine_Vector3_StaticFields *v11; // x8
  __int64 v12; // d0
  float v13; // s1
  struct UnityEngine_Vector3_StaticFields *v14; // x8
  __int64 v15; // d0
  float v16; // s1
  struct UnityEngine_Vector3_StaticFields *v17; // x8
  __int64 v18; // d0
  float v19; // s1
  struct UnityEngine_Vector3_StaticFields *v20; // x8
  __int64 v21; // d0
  float v22; // s1
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  __int64 v24; // d0
  float v25; // s1
  struct UnityEngine_Vector3_StaticFields *v26; // x8
  __int64 v27; // d0
  float v28; // s1
  struct UnityEngine_Vector3_StaticFields *v29; // x8
  __int64 v30; // d0
  float v31; // s1
  struct UnityEngine_Vector3_StaticFields *v32; // x8
  __int64 v33; // d0
  float v34; // s1
  struct UnityEngine_Vector3_StaticFields *v35; // x8
  __int64 v36; // d0
  float v37; // s1
  struct EventServantRecoveryFatigueManager_StaticFields *v38; // x0
  __int128 v39; // [xsp+10h] [xbp-270h]
  __int128 v40; // [xsp+30h] [xbp-250h]
  __int128 v41; // [xsp+50h] [xbp-230h]
  __int128 v42; // [xsp+70h] [xbp-210h]
  __int128 v43; // [xsp+90h] [xbp-1F0h]
  __int128 v44; // [xsp+B0h] [xbp-1D0h]
  __int128 v45; // [xsp+D0h] [xbp-1B0h]
  __int128 v46; // [xsp+F0h] [xbp-190h]
  __int128 v47; // [xsp+110h] [xbp-170h]
  __int128 v48; // [xsp+130h] [xbp-150h]
  __int128 v49; // [xsp+150h] [xbp-130h]
  __int128 v50; // [xsp+170h] [xbp-110h]
  __int128 v51; // [xsp+190h] [xbp-F0h]
  __int128 v52; // [xsp+1B0h] [xbp-D0h]
  __int128 v53; // [xsp+1D0h] [xbp-B0h]
  __int128 v54; // [xsp+210h] [xbp-70h]
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
  __int128 v68; // [xsp+220h] [xbp-60h]
  __int128 v69; // [xsp+220h] [xbp-60h]
  __int128 v70; // [xsp+230h] [xbp-50h] BYREF

  if ( (byte_4C21BFB & 1) == 0 )
  {
    sub_1C2D490(&EventServantRecoveryFatigueManager_EffectSet___TypeInfo);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&StringLiteral_18923/*"effect_prefab_2"*/);
    sub_1C2D490(&StringLiteral_22969/*"recovery{0}"*/);
    sub_1C2D490(&StringLiteral_18922/*"effect_prefab"*/);
    byte_4C21BFB = 1;
  }
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->BG_FILE = (struct System_String_o *)StringLiteral_22969/*"recovery{0}"*/;
  sub_1C2D434(EventServantRecoveryFatigueManager_TypeInfo->static_fields);
  EventServantRecoveryFatigueManager_TypeInfo->static_fields->defaultEventId = 80273;
  v1 = sub_1C2D538(EventServantRecoveryFatigueManager_EffectSet___TypeInfo, 16);
  *(_QWORD *)&v70 = 0;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v54 = v70;
  if ( !v1 )
    sub_1C2D6EC(v2, v3);
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_43;
  *(_OWORD *)(v1 + 32) = 0x100013991uLL;
  *(_OWORD *)(v1 + 48) = v54;
  sub_1C2D434(v1 + 56);
  *(_QWORD *)&v70 = 0;
  *(_QWORD *)&v55 = 0x200013991LL;
  *((_QWORD *)&v55 + 1) = 0xC2D6000000000000LL;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v53 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 1u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 64) = v55;
  *(_OWORD *)(v1 + 80) = v53;
  sub_1C2D434(v1 + 88);
  *(_QWORD *)&v70 = 0;
  *(_QWORD *)&v56 = 0x300013991LL;
  *((_QWORD *)&v56 + 1) = 0xC2AC0000C1000000LL;
  *((_QWORD *)&v70 + 1) = StringLiteral_18923/*"effect_prefab_2"*/;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v52 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 2u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 96) = v56;
  *(_OWORD *)(v1 + 112) = v52;
  sub_1C2D434(v1 + 120);
  *(_QWORD *)&v70 = 0;
  *(_QWORD *)&v57 = 0x400013991LL;
  *((_QWORD *)&v57 + 1) = 0xC2600000C2580000LL;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v51 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 3u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 128) = v57;
  *(_OWORD *)(v1 + 144) = v51;
  sub_1C2D434(v1 + 152);
  *(_QWORD *)&v70 = 0;
  *(_QWORD *)&v58 = 0x500013991LL;
  *((_QWORD *)&v58 + 1) = 0xC2C00000C1500000LL;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v50 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 4u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 160) = v58;
  *(_OWORD *)(v1 + 176) = v50;
  sub_1C2D434(v1 + 184);
  v70 = 0u;
  v59 = 0x2000139BEuLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  v6 = *(_QWORD *)&static_fields->zeroVector.fields.x;
  z = static_fields->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v59 + 1) = v6;
  *(float *)&v70 = z;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v49 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 5u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 192) = v59;
  *(_OWORD *)(v1 + 208) = v49;
  sub_1C2D434(v1 + 216);
  v70 = 0u;
  v60 = 0x3000139BEuLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v8 = UnityEngine_Vector3_TypeInfo->static_fields;
  v9 = *(_QWORD *)&v8->zeroVector.fields.x;
  v10 = v8->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v60 + 1) = v9;
  *(float *)&v70 = v10;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v48 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 6u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 224) = v60;
  *(_OWORD *)(v1 + 240) = v48;
  sub_1C2D434(v1 + 248);
  v70 = 0u;
  v61 = 0x4000139BEuLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v11 = UnityEngine_Vector3_TypeInfo->static_fields;
  v12 = *(_QWORD *)&v11->zeroVector.fields.x;
  v13 = v11->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v61 + 1) = v12;
  *(float *)&v70 = v13;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v47 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 7u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 256) = v61;
  *(_OWORD *)(v1 + 272) = v47;
  sub_1C2D434(v1 + 280);
  v70 = 0u;
  v62 = 0x5000139BEuLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v14 = UnityEngine_Vector3_TypeInfo->static_fields;
  v15 = *(_QWORD *)&v14->zeroVector.fields.x;
  v16 = v14->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v62 + 1) = v15;
  *(float *)&v70 = v16;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v46 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 8u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 288) = v62;
  *(_OWORD *)(v1 + 304) = v46;
  sub_1C2D434(v1 + 312);
  v70 = 0u;
  v63 = 0x6000139BEuLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v17 = UnityEngine_Vector3_TypeInfo->static_fields;
  v18 = *(_QWORD *)&v17->zeroVector.fields.x;
  v19 = v17->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v63 + 1) = v18;
  *(float *)&v70 = v19;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v45 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 9u )
    goto LABEL_43;
  *(_OWORD *)(v1 + 320) = v63;
  *(_OWORD *)(v1 + 336) = v45;
  sub_1C2D434(v1 + 344);
  v70 = 0u;
  v64 = 0x200013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v20 = UnityEngine_Vector3_TypeInfo->static_fields;
  v21 = *(_QWORD *)&v20->zeroVector.fields.x;
  v22 = v20->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v64 + 1) = v21;
  *(float *)&v70 = v22;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v44 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xAu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 352) = v64;
  *(_OWORD *)(v1 + 368) = v44;
  sub_1C2D434(v1 + 376);
  v70 = 0u;
  v65 = 0x300013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v23 = UnityEngine_Vector3_TypeInfo->static_fields;
  v24 = *(_QWORD *)&v23->zeroVector.fields.x;
  v25 = v23->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v65 + 1) = v24;
  *(float *)&v70 = v25;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v43 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xBu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 384) = v65;
  *(_OWORD *)(v1 + 400) = v43;
  sub_1C2D434(v1 + 408);
  v70 = 0u;
  v66 = 0x400013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v26 = UnityEngine_Vector3_TypeInfo->static_fields;
  v27 = *(_QWORD *)&v26->zeroVector.fields.x;
  v28 = v26->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v66 + 1) = v27;
  *(float *)&v70 = v28;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v42 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xCu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 416) = v66;
  *(_OWORD *)(v1 + 432) = v42;
  sub_1C2D434(v1 + 440);
  v70 = 0u;
  v67 = 0x600013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v29 = UnityEngine_Vector3_TypeInfo->static_fields;
  v30 = *(_QWORD *)&v29->zeroVector.fields.x;
  v31 = v29->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v67 + 1) = v30;
  *(float *)&v70 = v31;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v41 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xDu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 448) = v67;
  *(_OWORD *)(v1 + 464) = v41;
  sub_1C2D434(v1 + 472);
  v70 = 0u;
  v68 = 0x700013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v32 = UnityEngine_Vector3_TypeInfo->static_fields;
  v33 = *(_QWORD *)&v32->zeroVector.fields.x;
  v34 = v32->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v68 + 1) = v33;
  *(float *)&v70 = v34;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v40 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xEu )
    goto LABEL_43;
  *(_OWORD *)(v1 + 480) = v68;
  *(_OWORD *)(v1 + 496) = v40;
  sub_1C2D434(v1 + 504);
  v70 = 0u;
  v69 = 0x800013A30uLL;
  if ( !byte_4C20DA1 )
  {
    sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
    byte_4C20DA1 = 1;
  }
  v35 = UnityEngine_Vector3_TypeInfo->static_fields;
  v36 = *(_QWORD *)&v35->zeroVector.fields.x;
  v37 = v35->zeroVector.fields.z;
  *((_QWORD *)&v70 + 1) = StringLiteral_18922/*"effect_prefab"*/;
  *((_QWORD *)&v69 + 1) = v36;
  *(float *)&v70 = v37;
  v2 = sub_1C2D434((char *)&v70 + 8);
  v39 = v70;
  if ( *(_DWORD *)(v1 + 24) <= 0xFu )
LABEL_43:
    sub_1C2D6F4(v2, v3, v4);
  *(_OWORD *)(v1 + 512) = v69;
  *(_OWORD *)(v1 + 528) = v39;
  sub_1C2D434(v1 + 536);
  v38 = EventServantRecoveryFatigueManager_TypeInfo->static_fields;
  v38->effectSet = (struct EventServantRecoveryFatigueManager_EffectSet_array *)v1;
  sub_1C2D434(&v38->effectSet);
}


void EventServantRecoveryFatigueManager___ctor(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  if ( (byte_4C21BFA & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_16860/*"ar93"*/);
    byte_4C21BFA = 1;
  }
  this->fields.settingSe = (struct System_String_o *)StringLiteral_16860/*"ar93"*/;
  sub_1C2D434(&this->fields.settingSe);
  *(_QWORD *)&this->fields.openEffectTime = 0x400000003F800000LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
EventServantRecoveryFatigueItem_o *EventServantRecoveryFatigueManager__GetItem(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v7; // w21

  if ( (byte_4C21BF0 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C21BF0 = 1;
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
                                                      (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
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
    sub_1C2D6EC(result, *(_QWORD *)&index);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *EventServantRecoveryFatigueManager__GetSettingSe(
        EventServantRecoveryFatigueManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventServantRecoveryFatigueManager_o *v4; // x20
  struct System_Collections_Generic_List_EventServantRecoveryFatigueItem__o *servantItemList; // x8
  int32_t v6; // w1

  v4 = this;
  if ( (byte_4C21BEF & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (EventServantRecoveryFatigueManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Item__);
    byte_4C21BEF = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList || (this = (EventServantRecoveryFatigueManager_o *)v4->fields.settingSeList) == 0 )
    sub_1C2D6EC(this, *(_QWORD *)&index);
  if ( servantItemList->fields._size != LODWORD(this->fields.m_CancellationTokenSource) )
    return v4->fields.settingSe;
  if ( index <= 0 )
    v6 = 0;
  else
    v6 = index - 1;
  return (System_String_o *)System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)this,
                              v6,
                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_string__get_Item__);
}


void EventServantRecoveryFatigueManager__Init(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w21
  int32_t v5; // w20

  if ( (byte_4C21BED & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C21BED = 1;
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
                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
      if ( !servantItemList )
        break;
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)servantItemList, method);
      if ( size == ++v5 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_9:
    sub_1C2D6EC(servantItemList, method);
  }
}


bool EventServantRecoveryFatigueManager__IsFade(EventServantRecoveryFatigueManager_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4C21BF8 & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C21BF8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  if ( CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0) )
    return 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_8:
    sub_1C2D6EC(Instance, v3);
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

  if ( (byte_4C21BF1 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    byte_4C21BF1 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1C2D6EC(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
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
  __int64 v6; // x1
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v8; // x8
  bool v9; // w21

  if ( (byte_4C21BF5 & 1) == 0 )
  {
    sub_1C2D490(&Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C21BF5 = 1;
  }
  v3 = Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__;
  isFatigueNotice = this->fields.isFatigueNotice;
  if ( (*((_BYTE *)Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C2D4A8(Method_EventServantRecoveryFatigueManager_OnNoticeChangeBtn__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
  if ( !isFatigueNotice )
  {
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
    if ( fatigueNoticeBtn )
    {
      v8 = &StringLiteral_17501/*"btn_on"*/;
      v9 = 1;
      goto LABEL_10;
    }
LABEL_11:
    sub_1C2D6EC(fatigueNoticeBtn, v6);
  }
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    goto LABEL_11;
  v8 = &StringLiteral_17500/*"btn_off"*/;
  v9 = 0;
LABEL_10:
  UIButton__set_normalSprite(fatigueNoticeBtn, (System_String_o *)*v8, 0);
  this->fields.isFatigueNotice = v9;
  EventRewardSaveData__SetFatigueNotiffication(!isFatigueNotice, 0);
}


void EventServantRecoveryFatigueManager__SetMaskPanel(
        EventServantRecoveryFatigueManager_o *this,
        UnityEngine_GameObject_o *maskPanel,
        const MethodInfo *method)
{
  this->fields.maskPanel = maskPanel;
  sub_1C2D434(&this->fields.maskPanel);
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

  if ( (byte_4C21BF7 & 1) == 0 )
  {
    sub_1C2D490(&EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo);
    byte_4C21BF7 = 1;
  }
  v11 = sub_1C2D6DC(EventServantRecoveryFatigueManager__SetOpenEffect_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 32) = this;
  sub_1C2D434(v11 + 32);
  *(_QWORD *)(v11 + 40) = item;
  sub_1C2D434(v11 + 40);
  *(_DWORD *)(v11 + 48) = num;
  *(_DWORD *)(v11 + 52) = eventId;
  *(_QWORD *)(v11 + 56) = onClick;
  sub_1C2D434(v11 + 56);
  return (System_Collections_IEnumerator_o *)v11;
}


void EventServantRecoveryFatigueManager__SetPreRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v8; // x2
  int v9; // w22
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  EventServantRecoveryFatigueManager_c *v13; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x21
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C21BF3 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BF3 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0);
  v9 = (_DWORD)RecoverydBgId - 1;
  if ( (int)RecoverydBgId < 1 )
    return;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v8);
  v13 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v13 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v18 = v9;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v10, v11, v12);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v17, 0);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__51051712(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v6);
  }
  ExUITexture__SetImage(this->fields.bgTexture, (UnityEngine_Texture_o *)Instance, 0);
}


void EventServantRecoveryFatigueManager__SetRecoveryBg(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  EventServantRecoveryFatigueManager_o *RecoverydBgId; // x0
  const MethodInfo *v8; // x2
  int v9; // w21
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  EventServantRecoveryFatigueManager_c *v13; // x0
  struct EventServantRecoveryFatigueManager_StaticFields *static_fields; // x8
  AssetData_o *assetData; // x20
  System_String_o *BG_FILE; // x22
  Il2CppObject *v17; // x0
  int v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C21BF2 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_Texture2D____77994112);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C21BF2 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventFatigueRecoveryMaster___);
  if ( !Instance )
    goto LABEL_12;
  RecoverydBgId = (EventServantRecoveryFatigueManager_o *)EventFatigueRecoveryMaster__GetRecoverydBgId(
                                                            (EventFatigueRecoveryMaster_o *)Instance,
                                                            eventId,
                                                            0);
  if ( (int)RecoverydBgId < 1 )
    return;
  v9 = (int)RecoverydBgId;
  EventServantRecoveryFatigueManager__loadAssetData(RecoverydBgId, eventId, v8);
  v13 = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    v13 = EventServantRecoveryFatigueManager_TypeInfo;
  }
  static_fields = v13->static_fields;
  assetData = static_fields->assetData;
  BG_FILE = static_fields->BG_FILE;
  v18 = v9;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v10, v11, v12);
  Instance = (DataManager_o *)System_String__Format(BG_FILE, v17, 0);
  if ( !assetData
    || (Instance = (DataManager_o *)AssetData__GetObject_object__51051712(
                                      assetData,
                                      (System_String_o *)Instance,
                                      (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_Texture2D____77994112),
        !this->fields.bgTexture) )
  {
LABEL_12:
    sub_1C2D6EC(Instance, v6);
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
  __int64 v10; // x1
  Il2CppObject *Entity; // x24
  const MethodInfo *v12; // x2
  struct System_Action_o **p_endOpenEffectCallback; // x28
  UISprite_o *v14; // x23
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v19; // w20
  UnityEngine_Object_o *v20; // x24
  const MethodInfo *v21; // x1
  Il2CppObject *MasterData_object; // x24
  System_Collections_Generic_Dictionary_int__long__o *RecoveryUserSvtDic; // x0
  int v24; // w26
  __int64 v25; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  Il2CppObject *Item; // x0
  const MethodInfo *v29; // x1
  EventServantRecoveryFatigueItem_o *v30; // x27
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x0
  __int64 v34; // x1
  const MethodInfo *v35; // x5
  Il2CppObject *v36; // x1
  const MethodInfo *v37; // x5
  const MethodInfo *v38; // x2
  BalanceConfig_c *v39; // x0
  const MethodInfo *v40; // x5
  System_Collections_IEnumerator_o *v41; // x1
  UnityEngine_Object_o *fatigueNotice; // x21
  int v43; // w20
  int32_t v44; // w21
  int v45; // w8
  int v46; // w20
  int32_t v47; // w23
  const MethodInfo *v48; // x5
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v49; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+30h] [xbp-B0h] BYREF
  int32_t eventIda; // [xsp+68h] [xbp-78h]
  int v52; // [xsp+6Ch] [xbp-74h]
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21BEE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C2D490(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_int__long__get_Current__);
    sub_1C2D490(&EventRewardRootComponent_TypeInfo);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Key__);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_int__long__get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3148/*"Bg/Sprite"*/);
    sub_1C2D490(&StringLiteral_17532/*"btn_txt_Complete_notification"*/);
    byte_4C21BEE = 1;
  }
  memset(&v50, 0, sizeof(v50));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_69;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             eventId,
             (const MethodInfo_3387D98 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
  EventServantRecoveryFatigueManager__SetRecoveryBg(this, eventId, v12);
  this->fields.endOpenEffectCallback = endCallback;
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  sub_1C2D434(&this->fields.endOpenEffectCallback);
  Instance = this->fields.fatigueNotice;
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Transform__Find((UnityEngine_Transform_o *)Instance, (System_String_o *)StringLiteral_3148/*"Bg/Sprite"*/, 0);
  if ( !Instance )
    goto LABEL_69;
  Instance = UnityEngine_Component__GetComponent_object_(
               (UnityEngine_Component_o *)Instance,
               (const MethodInfo_30C5120 *)Method_UnityEngine_Component_GetComponent_UISprite___);
  if ( !Instance )
    goto LABEL_69;
  v14 = (UISprite_o *)Instance;
  Instance = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_69;
  localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)Instance, 0);
  x = localScale.fields.x;
  y = localScale.fields.y;
  z = localScale.fields.z;
  if ( !EventRewardRootComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventRewardRootComponent_TypeInfo);
  EventRewardRootComponent__setRewardInfoImg(v14, (System_String_o *)StringLiteral_17532/*"btn_txt_Complete_notification"*/, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v14, 0);
  v54.fields.x = x;
  v54.fields.y = y;
  v54.fields.z = z;
  GameObjectExtensions__SetLocalScale(gameObject, v54, 0);
  Instance = EventServantRecoveryFatigueManager_TypeInfo;
  if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
    Instance = EventServantRecoveryFatigueManager_TypeInfo;
  }
  v19 = *(_DWORD *)(*((_QWORD *)Instance + 23) + 8LL) == eventId ? 0 : eventId;
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
    EventRewardSaveData__DeleteRecoveryIdx(v19, 0);
    Instance = this->fields.servantItemList;
    if ( Instance )
    {
      v43 = *((_DWORD *)Instance + 6);
      if ( v43 < 1 )
        goto LABEL_70;
      v44 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v44,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        Instance = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
        if ( !Instance )
          break;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
        if ( v43 == ++v44 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
      }
      while ( Instance );
    }
LABEL_69:
    sub_1C2D6EC(Instance, v10);
  }
  v20 = (UnityEngine_Object_o *)this->fields.fatigueNotice;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v20, 0, 0) )
  {
    this->fields.isFatigueNotice = EventRewardSaveData__GetFatigueNotification(0);
    EventServantRecoveryFatigueManager__setNoticeValue(this, v21);
  }
  EventRewardSaveData__LoadRecoveryIdx(v19, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_69;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_UserEventServantFatigueMaster___);
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
    v45 = *((_DWORD *)Instance + 6);
    v46 = v45 - 1;
    if ( v45 >= 1 )
    {
      v47 = 0;
      do
      {
        Instance = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)Instance,
                     v47,
                     (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
        if ( !Instance )
          break;
        EventServantRecoveryFatigueItem__SetServantInfo(
          (EventServantRecoveryFatigueItem_o *)Instance,
          0,
          eventId,
          v47,
          onClick,
          v48);
        if ( v46 == v47 )
          goto LABEL_70;
        Instance = this->fields.servantItemList;
        ++v47;
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
      sub_1C2D434(p_endOpenEffectCallback);
    }
    return;
  }
  eventIda = v19;
  System_Collections_Generic_Dictionary_int__long___GetEnumerator(
    &v49,
    RecoveryUserSvtDic,
    (const MethodInfo_33DE7A8 *)Method_System_Collections_Generic_Dictionary_int__long__GetEnumerator__);
  v24 = 0;
  v50 = v49;
LABEL_28:
  v52 = v24;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__long___MoveNext(
            &v50,
            (const MethodInfo_3537854 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__MoveNext__) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      sub_1C2D6EC(0, v25);
    current = v50.fields._current;
    Item = System_Collections_Generic_List_object___get_Item(
             servantItemList,
             LODWORD(v50.fields._current.fields.key) - 1,
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventServantRecoveryFatigueItem__get_Item__);
    v30 = (EventServantRecoveryFatigueItem_o *)Item;
    if ( !byte_4C217FB )
    {
      Item = (Il2CppObject *)sub_1C2D490(&EventRewardSaveData_TypeInfo);
      byte_4C217FB = 1;
    }
    if ( (__int64)current.fields.value <= 0
      && EventRewardSaveData_TypeInfo->static_fields->_EventRecoveryIdx_k__BackingField < SLODWORD(current.fields.key) )
    {
      if ( !v30 )
        sub_1C2D6EC(Item, v29);
      if ( !EventServantRecoveryFatigueItem__IsAnimation(v30, v29) )
        goto LABEL_46;
      v39 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v39 = BalanceConfig_TypeInfo;
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v39->static_fields->RecoveryFatigueDelayedChangeBgEvents,
             eventId,
             (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
LABEL_46:
        EventServantRecoveryFatigueManager__SetPreRecoveryBg(this, eventId, v38);
      }
      EventRewardSaveData__SetRecoveryIdx(eventIda, (int32_t)current.fields.key, 0);
      v41 = EventServantRecoveryFatigueManager__SetOpenEffect(
              this,
              v30,
              eventId,
              (int32_t)current.fields.key,
              onClick,
              v40);
      v24 = 1;
      UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v41, 0);
      goto LABEL_28;
    }
    if ( !v30 )
      sub_1C2D6EC(Item, v29);
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v30, 0);
    if ( !v31 )
      sub_1C2D6EC(0, v32);
    UnityEngine_GameObject__SetActive(v31, 1, 0);
    if ( (__int64)current.fields.value < 1 )
    {
      EventServantRecoveryFatigueItem__SetServantInfo(v30, 0, eventId, (int32_t)current.fields.key, onClick, v35);
    }
    else
    {
      if ( !MasterData_object )
        sub_1C2D6EC(v33, v34);
      v36 = DataMasterBase_object__object__long___GetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              (int64_t)current.fields.value,
              (const MethodInfo_338A2F4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
      EventServantRecoveryFatigueItem__SetServantInfo(
        v30,
        (UserServantEntity_o *)v36,
        eventId,
        (int32_t)current.fields.key,
        onClick,
        v37);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_int__long___Dispose(
    &v50,
    (const MethodInfo_353796C *)Method_System_Collections_Generic_Dictionary_Enumerator_int__long__Dispose__);
  p_endOpenEffectCallback = &this->fields.endOpenEffectCallback;
  if ( (v52 & 1) == 0 )
    goto LABEL_70;
}


bool EventServantRecoveryFatigueManager___SetOpenEffect_b__31_0(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  return !EventServantRecoveryFatigueManager__IsFade(this, method);
}


// local variable allocation has failed, the output may be wrong!
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
  Il2CppObject *Object_object__51051712; // x20
  UnityEngine_Transform_o *v20; // x19
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C21BF9 & 1) == 0 )
  {
    sub_1C2D490(&Method_AssetData_GetObject_GameObject____77994080);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C21BF9 = 1;
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
        sub_1C2D6F4(assetData, *(_QWORD *)&num, parentTr);
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
      Object_object__51051712 = AssetData__GetObject_object__51051712(
                                  (AssetData_o *)assetData,
                                  v18,
                                  (const MethodInfo_30AFCC0 *)Method_AssetData_GetObject_GameObject____77994080);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      assetData = UnityEngine_Object__Instantiate_object_(
                    Object_object__51051712,
                    (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
            if ( !byte_4C20DA6 )
            {
              assetData = (void *)sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
              byte_4C20DA6 = 1;
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
    sub_1C2D6EC(assetData, *(_QWORD *)&num);
  }
  return 0;
}


void EventServantRecoveryFatigueManager__loadAssetData(
        EventServantRecoveryFatigueManager_o *this,
        int32_t eventId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  Il2CppObject *v6; // x19
  System_String_o *ServantFatigueFolder; // x0
  EventServantRecoveryFatigueManager___c_c *v8; // x8
  System_String_o *v9; // x19
  AssetLoader_LoadEndDataHandler_o *_9__29_0; // x20
  Il2CppObject *v11; // x21
  struct EventServantRecoveryFatigueManager___c_StaticFields *static_fields; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21BF6 & 1) == 0 )
  {
    sub_1C2D490(&AssetManager_TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C2D490(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C2D490(&EventDetailEntity_TypeInfo);
    sub_1C2D490(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__);
    sub_1C2D490(&EventServantRecoveryFatigueManager___c_TypeInfo);
    byte_4C21BF6 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventDetailMaster___)) == 0 )
  {
    sub_1C2D6EC(Instance, v5);
  }
  DataMasterBase_object__object__int___TryGetEntity(
    (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
    &entity,
    eventId,
    (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
  v6 = entity;
  if ( !EventDetailEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(EventDetailEntity_TypeInfo);
  ServantFatigueFolder = EventDetailEntity__GetServantFatigueFolder((EventDetailEntity_o *)v6, 0);
  v8 = EventServantRecoveryFatigueManager___c_TypeInfo;
  v9 = ServantFatigueFolder;
  if ( !EventServantRecoveryFatigueManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager___c_TypeInfo);
    v8 = EventServantRecoveryFatigueManager___c_TypeInfo;
  }
  _9__29_0 = v8->static_fields->__9__29_0;
  if ( !_9__29_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = EventServantRecoveryFatigueManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__29_0 = (AssetLoader_LoadEndDataHandler_o *)sub_1C2D6DC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      _9__29_0,
      v11,
      Method_EventServantRecoveryFatigueManager___c__loadAssetData_b__29_0__,
      0);
    static_fields = EventServantRecoveryFatigueManager___c_TypeInfo->static_fields;
    static_fields->__9__29_0 = _9__29_0;
    sub_1C2D434(&static_fields->__9__29_0);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v9, _9__29_0, 1, 0);
}


void EventServantRecoveryFatigueManager__setNoticeValue(
        EventServantRecoveryFatigueManager_o *this,
        const MethodInfo *method)
{
  UIButton_o *fatigueNoticeBtn; // x0
  __int64 *v4; // x8

  if ( (byte_4C21BF4 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_17501/*"btn_on"*/);
    sub_1C2D490(&StringLiteral_17500/*"btn_off"*/);
    byte_4C21BF4 = 1;
  }
  fatigueNoticeBtn = this->fields.fatigueNoticeBtn;
  if ( !fatigueNoticeBtn )
    sub_1C2D6EC(0, method);
  if ( this->fields.isFatigueNotice )
    v4 = &StringLiteral_17501/*"btn_on"*/;
  else
    v4 = &StringLiteral_17500/*"btn_off"*/;
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
  System_Func_bool__o *v5; // x21
  UnityEngine_WaitUntil_o *v6; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  const MethodInfo *v9; // x2
  BalanceConfig_c *v10; // x0
  const MethodInfo *v11; // x5
  float endEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v13; // x20
  Il2CppObject **v14; // x19
  int v15; // w8
  int v16; // w8
  struct System_Action_o *v17; // x8
  struct System_Action_o **p_endOpenEffectCallback; // x20
  struct System_Action_o *endOpenEffectCallback; // t1
  int32_t eventId; // w21
  int32_t num; // w22
  const MethodInfo *v22; // x3
  UnityEngine_Transform_o *transform; // x23
  float openEffectTime; // s8
  UnityEngine_WaitForSeconds_o *v25; // x20

  v3 = this;
  if ( (byte_4C21BFE & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C2D490(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__);
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    sub_1C2D490(&System_Func_bool__TypeInfo);
    sub_1C2D490(&UnityEngine_WaitForSeconds_TypeInfo);
    this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)sub_1C2D490(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C21BFE = 1;
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
      EventServantRecoveryFatigueItem__Init((EventServantRecoveryFatigueItem_o *)this, method);
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
      if ( !this )
        goto LABEL_38;
      if ( EventServantRecoveryFatigueItem__IsAnimation((EventServantRecoveryFatigueItem_o *)this, method) )
      {
        v5 = (System_Func_bool__o *)sub_1C2D6DC(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v5,
          (Il2CppObject *)_4__this,
          Method_EventServantRecoveryFatigueManager__SetOpenEffect_b__31_0__,
          0);
        v6 = (UnityEngine_WaitUntil_o *)sub_1C2D6DC(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v6, v5, 0);
        v3->fields.__2__current = (Il2CppObject *)v6;
        p__2__current = &v3->fields.__2__current;
        sub_1C2D434(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
      }
      else
      {
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)v3->fields.item;
        if ( !this )
LABEL_38:
          sub_1C2D6EC(this, method);
        num = v3->fields.num;
        eventId = v3->fields.eventId;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
        if ( !EventServantRecoveryFatigueManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(EventServantRecoveryFatigueManager_TypeInfo);
        EventServantRecoveryFatigueManager__getEffect(eventId, num, transform, v22);
LABEL_36:
        openEffectTime = _4__this->fields.openEffectTime;
        v25 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
        UnityEngine_WaitForSeconds___ctor(v25, openEffectTime, 0);
        v3->fields.__2__current = (Il2CppObject *)v25;
        v14 = &v3->fields.__2__current;
        sub_1C2D434(v14);
        v15 = 2;
LABEL_37:
        *((_DWORD *)v14 - 2) = v15;
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
        v10 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v10 = BalanceConfig_TypeInfo;
        }
        this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)System_Linq_Enumerable__Contains_int_(
                                                                              (System_Collections_Generic_IEnumerable_TSource__o *)v10->static_fields->RecoveryFatigueDelayedChangeBgEvents,
                                                                              v3->fields.eventId,
                                                                              (const MethodInfo_30EB900 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)this & 1) == 0 )
          goto LABEL_22;
      }
      if ( !_4__this )
        goto LABEL_38;
      EventServantRecoveryFatigueManager__SetRecoveryBg(_4__this, v3->fields.eventId, v9);
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
        v11);
      if ( !_4__this )
        goto LABEL_38;
      endEffectTime = _4__this->fields.endEffectTime;
      v13 = (UnityEngine_WaitForSeconds_o *)sub_1C2D6DC(UnityEngine_WaitForSeconds_TypeInfo);
      UnityEngine_WaitForSeconds___ctor(v13, endEffectTime, 0);
      v3->fields.__2__current = (Il2CppObject *)v13;
      v14 = &v3->fields.__2__current;
      sub_1C2D434(v14);
      v15 = 3;
      goto LABEL_37;
    case 3:
      v3->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_38;
      v16 = _4__this->fields.maskCount - 1;
      _4__this->fields.maskCount = v16;
      if ( v16 )
        goto LABEL_29;
      this = (EventServantRecoveryFatigueManager__SetOpenEffect_d__31_o *)_4__this->fields.maskPanel;
      if ( !this )
        goto LABEL_38;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_29:
      endOpenEffectCallback = _4__this->fields.endOpenEffectCallback;
      p_endOpenEffectCallback = &_4__this->fields.endOpenEffectCallback;
      v17 = endOpenEffectCallback;
      if ( endOpenEffectCallback )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))v17->fields.invoke_impl)(v17->fields.method_code, v17->fields.method);
        *p_endOpenEffectCallback = 0;
        sub_1C2D434(p_endOpenEffectCallback);
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

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_EventServantRecoveryFatigueManager__SetOpenEffect_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
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

  if ( (byte_4C21BFC & 1) == 0 )
  {
    sub_1C2D490(&EventServantRecoveryFatigueManager___c_TypeInfo);
    byte_4C21BFC = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(EventServantRecoveryFatigueManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  EventServantRecoveryFatigueManager___c_TypeInfo->static_fields->__9 = (struct EventServantRecoveryFatigueManager___c_o *)v1;
  sub_1C2D434(EventServantRecoveryFatigueManager___c_TypeInfo->static_fields);
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

  if ( (byte_4C21BFD & 1) == 0 )
  {
    sub_1C2D490(&EventServantRecoveryFatigueManager_TypeInfo);
    byte_4C21BFD = 1;
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
    sub_1C2D434(&static_fields->assetData);
  }
}