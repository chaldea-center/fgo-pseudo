void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Int32_array **v15; // x1
  System_Int32_array **v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42E9F6F & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1122/*"1B2FA5"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1117/*"11814B"*/, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1638/*"A51B1B"*/, v12, v13, v14);
    byte_42E9F6F = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_32A4620;
  v15 = (System_Int32_array **)StringLiteral_1638/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1638/*"A51B1B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v15, v2, v3, v4, v5, v6, v7);
  v16 = (System_Int32_array **)StringLiteral_1122/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1122/*"1B2FA5"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v16, v17, v18, v19, v20, v21, v22);
  v23 = (System_Int32_array **)StringLiteral_1117/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1117/*"11814B"*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v23, v24, v25, v26, v27, v28, v29);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  __int64 v25; // x22
  __int64 v26; // x0
  __int64 v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x21
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v47; // x21
  const MethodInfo *v48; // x1

  if ( (byte_42E9F67 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Action_EventFortificationDetailEntity___ctor__,
      (_DWORD)eventFortificationDetailEntities,
      (_DWORD)onClick,
      method);
    sub_B5D5C4(&System_Action_EventFortificationDetailEntity__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v13, v14, v15);
    sub_B5D5C4(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v16, v17, v18);
    sub_B5D5C4(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v19, v20, v21);
    sub_B5D5C4(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v22, v23, v24);
    byte_42E9F67 = 1;
  }
  v25 = sub_B5D694(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  EventFortificationWorkManager___c__DisplayClass29_0___ctor(
    (EventFortificationWorkManager___c__DisplayClass29_0_o *)v25,
    0LL);
  if ( !v25 )
    goto LABEL_6;
  *(_QWORD *)(v25 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 16), (System_Int32_array **)this, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v25 + 24) = onClick;
  sub_B5D560((BattleServantConfConponent_o *)(v25 + 24), (System_Int32_array **)onClick, v34, v35, v36, v37, v38, v39);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.servantItemList,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  v47 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v47,
    (Il2CppObject *)v25,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_EventFortificationDetailEntity___ctor__);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_B5D69C(v26, v27);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v47,
    (const MethodInfo_3057CD8 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v48);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationWorkManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x23
  int size; // w21
  unsigned int v11; // w22

  v5 = this;
  if ( (byte_42E9F69 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__,
      index,
      (_DWORD)method,
      v3);
    this = (EventFortificationWorkManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__,
                                                v6,
                                                v7,
                                                v8);
    byte_42E9F69 = 1;
  }
  servantItemList = v5->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_12;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    do
    {
      if ( servantItemList->fields._size <= v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      this = (EventFortificationWorkManager_o *)servantItemList->fields._items->m_Items[v11];
      if ( !this )
        break;
      if ( this->fields.bgSpriteOffSetWidth == index )
        return (EventFortificationWorkItem_o *)this;
      if ( (int)++v11 >= size )
        return 0LL;
      servantItemList = v5->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_12:
    sub_B5D69C(this, *(_QWORD *)&index);
  }
  return 0LL;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__ModifyItem(
        EventFortificationWorkManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  _DWORD *monitor; // x23
  int v22; // w24
  unsigned int v23; // w25
  EventFortificationWorkItem_o *v24; // x23
  System_Action_int__o *v25; // x24
  const MethodInfo *v26; // x5

  v8 = (Il2CppObject *)this;
  if ( (byte_42E9F6B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)userServantEntity, eventId, *(_QWORD *)&index);
    sub_B5D5C4(&System_Action_int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_EventFortificationWorkManager_OnClickItem__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v15, v16, v17);
    this = (EventFortificationWorkManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__,
                                                v18,
                                                v19,
                                                v20);
    byte_42E9F6B = 1;
  }
  monitor = v8[11].monitor;
  if ( !monitor )
LABEL_12:
    sub_B5D69C(this, userServantEntity);
  v22 = monitor[6];
  if ( v22 >= 1 )
  {
    v23 = 0;
    while ( 1 )
    {
      if ( monitor[6] <= v23 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v24 = *(EventFortificationWorkItem_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v23 + 32);
      if ( !v24 )
        goto LABEL_12;
      if ( v24->fields.position == index )
        break;
      if ( (int)++v23 >= v22 )
        return;
      monitor = v8[11].monitor;
      if ( !monitor )
        goto LABEL_12;
    }
    v25 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v25,
      v8,
      Method_EventFortificationWorkManager_OnClickItem__,
      (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
    EventFortificationWorkItem__SetServantInfo(v24, userServantEntity, eventId, index, v25, v26);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  DataManager_o *Instance; // x0
  __int64 v60; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v63; // x20
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v67; // w28
  SetSvtInfo_o *v68; // x24
  UserServantEntity_o *v69; // x22
  WebViewManager_o *v70; // x0
  __int64 v71; // x1
  EventFortificationSvtMaster_o *v72; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x5
  UserServantEntity_o *v75; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v76; // x0
  __int64 v77; // x1
  __int128 v78; // q1
  UserServantEntity_o *v79; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // kr00_16
  EventFortificationSvtEntity_o *v82; // x8
  UserServantEntity_o *v83; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // kr10_16
  WebViewManager_o *v85; // x0
  __int64 v86; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v87; // x0
  __int64 v88; // x1
  UserServantEntity_o *v89; // x23
  UserServantEntity_o *v90; // x22
  __int64 v91; // x0
  __int64 v92; // x1
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // kr20_16
  UserServantEntity_o *v95; // x8
  __int64 v96; // x22
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v98; // x0
  __int64 v99; // x1
  __int128 v100; // q1
  UserServantEntity_o *v101; // x23
  int32_t v102; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // kr30_16
  UserServantEntity_o *v104; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v105; // kr40_16
  UserServantEntity_o *v106; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v109; // x25
  const MethodInfo *v110; // x5
  _BOOL8 v111; // x0
  __int64 v112; // x1
  const MethodInfo *v113; // x1
  __int64 v114; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *v117; // [xsp+40h] [xbp-80h] BYREF
  UserServantEntity_o *v118; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v119; // [xsp+50h] [xbp-70h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42E9F6A & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_int__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v8, v9, v10);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v23, v24, v25);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v29, v30, v31);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v32, v33, v34);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__,
      v35,
      v36,
      v37);
    sub_B5D5C4(&Method_EventFortificationWorkManager_OnClickItem__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v41, v42, v43);
    sub_B5D5C4(&NetworkManager_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v53, v54, v55);
    sub_B5D5C4(&UserServantEntity_TypeInfo, v56, v57, v58);
    byte_42E9F6A = 1;
  }
  entity = 0LL;
  memset(&v119, 0, sizeof(v119));
  v117 = 0LL;
  v118 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           Instance,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_92;
  if ( !UserEventFortificationMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          (int64_t)Instance,
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_92:
    sub_B5D69C(Instance, v60);
  }
  v63 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v116,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.servantItemList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v119.fields.current = (Il2CppObject *)v116.fields.fakeValue;
  *(_OWORD *)&v119.fields.list = *(_OWORD *)&v116.fields.currentCryptoKey;
  while ( 1 )
  {
    v111 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v119,
             (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v111 )
      break;
    if ( !entity )
      sub_B5D69C(v111, v112);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_B5D69C(v111, v112);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v119.fields.current;
      v67 = 0;
LABEL_20:
      if ( v67 >= max_length )
      {
        v114 = sub_B5D6C8(v111);
        sub_B5D668(v114, 0LL);
      }
      v68 = setSvtInfos->m_Items[v67];
      if ( !v68 )
        sub_B5D69C(v111, v112);
      if ( !current )
        sub_B5D69C(v111, v112);
      if ( v68->fields.position != current->fields.position )
        goto LABEL_68;
      v69 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v69, 0LL);
      v118 = v69;
      if ( v68->fields.type )
      {
        v70 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v70 )
          sub_B5D69C(0LL, v71);
        v72 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v70,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_B5D69C(v72, v73);
        if ( !v72 )
          sub_B5D69C(0LL, v73);
        if ( EventFortificationSvtMaster__TryGetEntity(
               v72,
               &v117,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v68->fields.position,
               v74) )
        {
          v75 = v118;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v76 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v115, 0LL, 0LL);
          v116 = v115;
          if ( !v75 )
            sub_B5D69C(v76, v77);
          v78 = *(_OWORD *)&v116.fields.fakeValue;
          *(_OWORD *)&v75->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v116.fields.currentCryptoKey;
          *(_OWORD *)&v75->fields.userId.fields.fakeValue = v78;
          v79 = v118;
          svtId = v68->fields.svtId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v79 )
            sub_B5D69C(*(_QWORD *)&v81.fields.currentCryptoKey, *(_QWORD *)&v81.fields.fakeValue);
          v79->fields.svtId = v81;
          v82 = v117;
          if ( !v117 )
            sub_B5D69C(*(_QWORD *)&v81.fields.currentCryptoKey, *(_QWORD *)&v81.fields.fakeValue);
          v83 = v118;
          if ( !v118 )
            sub_B5D69C(*(_QWORD *)&v81.fields.currentCryptoKey, *(_QWORD *)&v81.fields.fakeValue);
          v118->fields.lv = v117->fields.lv;
          v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v82->fields.limitCount, 0LL);
          v83->fields.limitCount = v84;
          if ( !v118 )
            sub_B5D69C(*(_QWORD *)&v84.fields.currentCryptoKey, *(_QWORD *)&v84.fields.fakeValue);
          v118->fields.exceedCount = 0;
        }
      }
      else
      {
        v85 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v85 )
          sub_B5D69C(0LL, v86);
        v87 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v85,
                                                                                       (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v87 )
          sub_B5D69C(0LL, v88);
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v87,
          &v118,
          v68->fields.userSvtId,
          (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v63 || !EventEntity__IsEventPeriod(v63, 0LL, 0LL) )
        {
          v89 = v118;
          if ( v118 )
          {
            v90 = (UserServantEntity_o *)sub_B5D694(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_21827084(v90, v89, 0LL);
            v118 = v90;
            if ( !v90 )
              sub_B5D69C(v91, v92);
            v90->fields.lv = v68->fields.lv;
            iconLimitCount = v68->fields.iconLimitCount;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v90->fields.iconLimitCount = v94;
            v95 = v118;
            if ( !v118 )
              sub_B5D69C(*(_QWORD *)&v94.fields.currentCryptoKey, *(_QWORD *)&v94.fields.fakeValue);
          }
          else
          {
            if ( !v68->fields.svtId )
              goto LABEL_67;
            v96 = sub_B5D694(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v96, 0LL);
            v118 = (UserServantEntity_o *)v96;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            UserId = NetworkManager__get_UserId(0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v98 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v115, UserId, 0LL);
            v116 = v115;
            if ( !v96 )
              sub_B5D69C(v98, v99);
            v100 = *(_OWORD *)&v116.fields.fakeValue;
            *(_OWORD *)(v96 + 48) = *(_OWORD *)&v116.fields.currentCryptoKey;
            *(_OWORD *)(v96 + 64) = v100;
            v101 = v118;
            v102 = v68->fields.svtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v103 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v102, 0LL);
            if ( !v101 )
              sub_B5D69C(*(_QWORD *)&v103.fields.currentCryptoKey, *(_QWORD *)&v103.fields.fakeValue);
            v101->fields.svtId = v103;
            v104 = v118;
            if ( !v118 )
              sub_B5D69C(*(_QWORD *)&v103.fields.currentCryptoKey, *(_QWORD *)&v103.fields.fakeValue);
            v118->fields.lv = v68->fields.lv;
            v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v68->fields.iconLimitCount, 0LL);
            v104->fields.iconLimitCount = v105;
            v95 = v118;
            if ( !v118 )
              sub_B5D69C(*(_QWORD *)&v105.fields.currentCryptoKey, *(_QWORD *)&v105.fields.fakeValue);
          }
          v95->fields.exceedCount = v68->fields.exceedCount;
        }
      }
LABEL_67:
      v106 = v118;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v109 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v109,
        (Il2CppObject *)this,
        Method_EventFortificationWorkManager_OnClickItem__,
        (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
      EventFortificationWorkItem__SetServantInfo(current, v106, eventId, position, v109, v110);
LABEL_68:
      max_length = setSvtInfos->max_length;
      if ( (int)++v67 >= max_length )
        continue;
      goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v119,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v113);
}


void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationWorkItem_o *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_42E9F68 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_EventFortificationWorkItem___, index, (_DWORD)method, v3);
    byte_42E9F68 = 1;
  }
  Item = EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      onClick,
      (BlankEarth_QAARotateEarthResponse_o *)Item,
      (const MethodInfo_2CECD58 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v13; // x1
  struct FortificationOrganizationPanelComponent_o *v14; // x8
  struct ItemIconComponent_o *v15; // x20
  System_Action_o *v16; // x21
  System_Action_o *v17; // x2

  if ( (byte_42E9F6D & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42E9F6D = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v17 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_B5D69C(itemIcon, v13);
  }
  v14 = this->fields.orgPanel;
  if ( !v14 )
    goto LABEL_13;
  v14->fields.isTouchEnabled = 0;
  v15 = this->fields.itemIcon;
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v16, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v15 )
    goto LABEL_13;
  itemIcon = v15;
  v17 = v16;
LABEL_12:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v17, 0LL);
}


void __fastcall EventFortificationWorkManager__SerializeFieldNotNullCheck(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall EventFortificationWorkManager__SetPointText(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v27; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *servantItemList; // x0
  int v29; // w23
  const MethodInfo *v30; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v33; // x20
  System_String_o *v34; // x21
  Il2CppObject *v35; // x19
  Il2CppObject *v36; // x22
  Il2CppObject *v37; // x0
  int v38; // [xsp+Ch] [xbp-54h] BYREF
  int v39; // [xsp+10h] [xbp-50h] BYREF
  int32_t nowPoint; // [xsp+14h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42E9F6E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_6511/*"FORTIFICATION_POINT_INFO"*/, v23, v24, v25);
    byte_42E9F6E = 1;
  }
  memset(&v41, 0, sizeof(v41));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v41,
      servantItemList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v29 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v41,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v41.fields.current )
        sub_B5D69C(0LL, v30);
      v29 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v41.fields.current, v30);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v41,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_20;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v33 = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_6511/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v35 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v39 = maxFortificationPoint;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v39);
    v38 = v29;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v38);
    servantItemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__Format_44578852(v34, v35, v36, v37, 0LL);
    if ( !v33 )
LABEL_20:
      sub_B5D69C(servantItemList, v27);
    UILabel__set_text(v33, (System_String_o *)servantItemList, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  System_String_array **v72; // x2
  System_String_array **v73; // x3
  System_Boolean_array **v74; // x4
  System_Int32_array **v75; // x5
  System_Int32_array *v76; // x6
  System_Int32_array *v77; // x7
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  int64_t Instance; // x0
  const MethodInfo *v91; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v92; // x23
  System_Action_int__o *v93; // x24
  const MethodInfo *v94; // x3
  int64_t v95; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v97; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v99; // x8
  System_String_o **v100; // x8
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v103; // s0
  UnityEngine_Object_o *v104; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v106; // x22
  Il2CppObject *v107; // x23
  Il2CppObject *v108; // x0
  System_String_o *v109; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v112; // x22
  Il2CppObject *v113; // x23
  Il2CppObject *v114; // x0
  System_String_o *v115; // x23
  int32_t size; // w10
  int32_t v117; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v120; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v122; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v124; // x1
  UISprite_o *v125; // x21
  __int64 v126; // x0
  int32_t v127; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-60h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42E9F66 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_int___ctor__, (_DWORD)eventFortificationEntity, eventId, onClick);
    sub_B5D5C4(&System_Action_int__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&AtlasManager_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMasterData_GiftMaster___, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_EventFortificationWorkManager_OnClickItem__, v29, v30, v31);
    sub_B5D5C4(&int_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v35, v36, v37);
    sub_B5D5C4(&NetworkManager_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v44, v45, v46);
    sub_B5D5C4(&StringLiteral_4619/*"D2"*/, v47, v48, v49);
    sub_B5D5C4(&StringLiteral_22527/*"spot_info_gauge_l"*/, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_22525/*"spot_info_gauge_base"*/, v53, v54, v55);
    sub_B5D5C4(&StringLiteral_19583/*"icon_event_{0}{1}"*/, v56, v57, v58);
    sub_B5D5C4(&StringLiteral_18766/*"event_organizationbg_{0}{1}"*/, v59, v60, v61);
    sub_B5D5C4(&StringLiteral_1/*""*/, v62, v63, v64);
    sub_B5D5C4(&StringLiteral_22529/*"spot_info_window"*/, v65, v66, v67);
    sub_B5D5C4(&StringLiteral_19892/*"img_terminal_itembg"*/, v68, v69, v70);
    byte_42E9F66 = 1;
  }
  entity = 0LL;
  entities = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
    (System_Int32_array **)eventFortificationEntity,
    *(System_String_array ***)&eventId,
    (System_String_array **)onClick,
    (System_Boolean_array **)orgPanel,
    (System_Int32_array **)terminalAtlas,
    (System_Int32_array *)method,
    v7);
  this->fields.onClick = onClick;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.onClick,
    (System_Int32_array **)onClick,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.orgPanel,
    (System_Int32_array **)orgPanel,
    v78,
    v79,
    v80,
    v81,
    v82,
    v83);
  this->fields.terminalAtlas = terminalAtlas;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.terminalAtlas,
    (System_Int32_array **)terminalAtlas,
    v84,
    v85,
    v86,
    v87,
    v88,
    v89);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_117;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v92 = entities;
  v93 = (System_Action_int__o *)sub_B5D694(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v93,
    (Il2CppObject *)this,
    Method_EventFortificationWorkManager_OnClickItem__,
    (const MethodInfo_2589D90 *)Method_System_Action_int___ctor__);
  EventFortificationWorkManager__CreateItem(this, v92, v93, v94);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_117;
  v95 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_118;
  if ( !*(_QWORD *)(Instance + 32) )
    goto LABEL_37;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_37;
  if ( !*(_DWORD *)(v95 + 24) )
    goto LABEL_118;
  v97 = *(int32_t **)(v95 + 32);
  if ( !v97 )
    goto LABEL_117;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_117;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v97[5], v97[6], v97[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v95 + 24) )
    {
      v99 = *(_QWORD *)(v95 + 32);
      if ( !v99 )
        goto LABEL_117;
      if ( *(_DWORD *)(v99 + 20) != 1 )
        goto LABEL_34;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0LL, 0LL) )
      {
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_117;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0LL);
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_117;
        v100 = (System_String_o **)&StringLiteral_19892/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_34:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_117;
        v100 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v100, 0LL);
      goto LABEL_37;
    }
LABEL_118:
    v126 = sub_B5D6C8(Instance);
    sub_B5D668(v126, 0LL);
  }
LABEL_37:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_117;
  Instance = UserEventFortificationMaster__TryGetEntity(
               MasterData_WarQuestSelectionMaster,
               &entity,
               Instance,
               eventId,
               eventFortificationEntity->fields.idx,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_117;
    this->fields.nowPoint = entity->fields.totalFortificationPoint;
    pointSlider = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    Instance = UnityEngine_Object__op_Inequality(pointSlider, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_117;
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_117;
      v103 = (float)entity->fields.totalFortificationPoint
           / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_57;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v104 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v104, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_117;
      v103 = 0.0;
LABEL_57:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v103, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v106 = this->fields.workTypeIcon;
    v127 = eventId;
    v107 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
    v108 = (Il2CppObject *)System_Int32__ToString_39741776(
                             (int)eventFortificationEntity + 52,
                             (System_String_o *)StringLiteral_4619/*"D2"*/,
                             0LL);
    v109 = System_String__Format_44573324((System_String_o *)StringLiteral_19583/*"icon_event_{0}{1}"*/, v107, v108, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, v106, v109, 0LL);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_117;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0LL);
  }
  EventFortificationWorkManager__SetPointText(this, v91);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v112 = this->fields.bgSprite;
    v127 = eventId;
    v113 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
    v114 = (Il2CppObject *)System_Int32__ToString_39741776(
                             (int)eventFortificationEntity + 52,
                             (System_String_o *)StringLiteral_4619/*"D2"*/,
                             0LL);
    v115 = System_String__Format_44573324((System_String_o *)StringLiteral_18766/*"event_organizationbg_{0}{1}"*/, v113, v114, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI_31190412(eventId, v112, v115, 0LL);
    if ( !entities )
      goto LABEL_117;
    size = entities->fields._size;
    if ( size <= 2 )
    {
      Instance = (int64_t)this->fields.bgSprite;
      if ( !Instance )
        goto LABEL_117;
      bgSpriteWidth = this->fields.bgSpriteWidth;
    }
    else
    {
      Instance = (int64_t)this->fields.bgSprite;
      v117 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v117;
      }
      else
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = v117 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_99;
  v120 = this->fields.itemBgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_31190412(eventId, v120, (System_String_o *)StringLiteral_22529/*"spot_info_window"*/, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          0LL) )
    goto LABEL_99;
  Instance = (int64_t)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_117:
    sub_B5D69C(Instance, v91);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_99:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v122 = this->fields.gaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, v122, (System_String_o *)StringLiteral_22527/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v125 = this->fields.gaugeBaseSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_31190412(eventId, v125, (System_String_o *)StringLiteral_22525/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v124);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *workTypeIcon; // x20
  UnityEngine_Object_o *teamNameLabel; // x20
  UnityEngine_Object_o *bgSprite; // x20
  UnityEngine_Object_o *titleRootObj; // x20
  __int64 v9; // x1
  UnityEngine_Component_o *gameObject; // x0
  int m_CachedPtr; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v14; // w21
  float v15; // s8
  unsigned int v16; // s0
  int v17; // w22
  float v18; // s9
  unsigned int v19; // s0
  float v20; // s10
  float v21; // s1
  float v22; // s11
  float v23; // s8
  UnityEngine_Transform_o *transform; // x20
  int v25; // s0
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E9F6C & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9F6C = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0LL, 0LL) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0LL, 0LL) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_42;
          m_CachedPtr = gameObject[6].fields.m_CachedPtr;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_42;
          addWidthForIcon = this->fields.addWidthForIcon;
          v14 = gameObject[6].fields.m_CachedPtr;
          v15 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v16 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_42;
          v17 = gameObject[6].fields.m_CachedPtr;
          v18 = *(float *)&v16;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v19 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v20 = *(float *)&v19;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          *(UnityEngine_Vector3_o *)(&v21 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v22 = v21;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v23 = (float)(v15 * (float)m_CachedPtr) + (float)addWidthForIcon;
          v28.fields.x = -(float)((float)((float)(v20 * (float)v17) * 0.5)
                                - (float)((float)((float)(v20 * (float)v17) - (float)(v23 + (float)(v18 * (float)v14)))
                                        * 0.5));
          v28.fields.z = 0.0;
          v28.fields.y = v22;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL),
                *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL),
                !transform)
            || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v25, 0LL),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0LL)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL)) == 0LL )
          {
LABEL_42:
            sub_B5D69C(gameObject, v9);
          }
          v29.fields.x = v23;
          v29.fields.y = 0.0;
          v29.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v29, 0LL);
        }
      }
    }
  }
}


void __fastcall EventFortificationWorkManager___OnClickItemIcon_b__36_0(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  struct FortificationOrganizationPanelComponent_o *orgPanel; // x8

  orgPanel = this->fields.orgPanel;
  if ( !orgPanel )
    sub_B5D69C(this, method);
  orgPanel->fields.isTouchEnabled = 1;
}


void __fastcall EventFortificationWorkManager___c__DisplayClass29_0___ctor(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EventFortificationWorkManager___c__DisplayClass29_0___CreateItem_b__0(
        EventFortificationWorkManager___c__DisplayClass29_0_o *this,
        EventFortificationDetailEntity_o *ent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventFortificationWorkManager___c__DisplayClass29_0_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct EventFortificationWorkManager_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkItemObj; // x21
  struct EventFortificationWorkManager_o *v17; // x8
  EventFortificationWorkItem_o *v18; // x21
  struct EventFortificationWorkManager_o *v19; // x8
  struct EventFortificationWorkManager_o *v20; // x8
  struct EventFortificationWorkManager_o *v21; // x8

  v5 = this;
  if ( (byte_42E6517 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___,
      (_DWORD)ent,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9, v10, v11);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_B5D5C4(
                                                                      &UnityEngine_Object_TypeInfo,
                                                                      v12,
                                                                      v13,
                                                                      v14);
    byte_42E6517 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  eventFortificationWorkItemObj = (UnityEngine_UI_Dropdown_DropdownItem_o *)_4__this->fields.eventFortificationWorkItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_17;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v17 = v5->fields.__4__this;
  if ( !v17 )
    goto LABEL_17;
  v18 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_17;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v17->fields.orgPanel, 0LL);
  v19 = v5->fields.__4__this;
  if ( !v19 )
    goto LABEL_17;
  if ( !ent )
    goto LABEL_17;
  EventFortificationWorkItem__SetServantInfo(
    v18,
    0LL,
    v19->fields.eventId,
    ent->fields.position,
    v5->fields.onClick,
    0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v18,
                                                                    0LL);
  v20 = v5->fields.__4__this;
  if ( !v20
    || (GameObjectExtensions__SetParent_32436388((UnityEngine_GameObject_o *)this, v20->fields.ItemObjRoot, 0LL),
        (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)v18,
                                                                           0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v21 = v5->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v21->fields.servantItemList) == 0LL )
  {
LABEL_17:
    sub_B5D69C(this, ent);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
}