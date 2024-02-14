void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  System_Int32_array **v11; // x1
  System_Int32_array **v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_42161C6 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_1109/*"1B2FA5"*/, method);
    sub_B0D8A4(&StringLiteral_1104/*"11814B"*/, v9);
    sub_B0D8A4(&StringLiteral_1621/*"A51B1B"*/, v10);
    byte_42161C6 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_32055B0;
  v11 = (System_Int32_array **)StringLiteral_1621/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1621/*"A51B1B"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1109/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1109/*"1B2FA5"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1104/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1104/*"11814B"*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x22
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x1
  __int64 v37; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v38; // x21
  const MethodInfo *v39; // x1

  if ( (byte_42161BE & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_EventFortificationDetailEntity___ctor__, eventFortificationDetailEntities);
    sub_B0D8A4(&System_Action_EventFortificationDetailEntity__TypeInfo, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v10);
    sub_B0D8A4(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v11);
    sub_B0D8A4(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v12);
    byte_42161BE = 1;
  }
  v13 = sub_B0D974(
          EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo,
          eventFortificationDetailEntities,
          onClick);
  EventFortificationWorkManager___c__DisplayClass29_0___ctor(
    (EventFortificationWorkManager___c__DisplayClass29_0_o *)v13,
    0LL);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v13 + 24) = onClick;
  sub_B0D840((BattleServantConfConponent_o *)(v13 + 24), (System_Int32_array **)onClick, v21, v22, v23, v24, v25, v26);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo,
                                                                                                  v27,
                                                                                                  v28);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v29;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.servantItemList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  v38 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_EventFortificationDetailEntity__TypeInfo,
                                                                               v36,
                                                                               v37);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v38,
    (Il2CppObject *)v13,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_EventFortificationDetailEntity___ctor__);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_B0D97C(v14);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v38,
    (const MethodInfo_2FC6400 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v39);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkManager_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x23
  int size; // w21
  unsigned int v8; // w22

  v4 = this;
  if ( (byte_42161C0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, *(_QWORD *)&index);
    this = (EventFortificationWorkManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__,
                                                v5);
    byte_42161C0 = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_12;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      if ( servantItemList->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      this = (EventFortificationWorkManager_o *)servantItemList->fields._items->m_Items[v8];
      if ( !this )
        break;
      if ( this->fields.bgSpriteOffSetWidth == index )
        return (EventFortificationWorkItem_o *)this;
      if ( (int)++v8 >= size )
        return 0LL;
      servantItemList = v4->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_12:
    sub_B0D97C(this);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  _DWORD *monitor; // x23
  int v14; // w24
  unsigned int v15; // w25
  EventFortificationWorkItem_o *v16; // x23
  System_Action_int__o *v17; // x24
  const MethodInfo *v18; // x5

  v8 = (Il2CppObject *)this;
  if ( (byte_42161C2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, userServantEntity);
    sub_B0D8A4(&System_Action_int__TypeInfo, v9);
    sub_B0D8A4(&Method_EventFortificationWorkManager_OnClickItem__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v11);
    this = (EventFortificationWorkManager_o *)sub_B0D8A4(
                                                &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__,
                                                v12);
    byte_42161C2 = 1;
  }
  monitor = v8[11].monitor;
  if ( !monitor )
LABEL_12:
    sub_B0D97C(this);
  v14 = monitor[6];
  if ( v14 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( monitor[6] <= v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v16 = *(EventFortificationWorkItem_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v15 + 32);
      if ( !v16 )
        goto LABEL_12;
      if ( v16->fields.position == index )
        break;
      if ( (int)++v15 >= v14 )
        return;
      monitor = v8[11].monitor;
      if ( !monitor )
        goto LABEL_12;
    }
    v17 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, userServantEntity, *(_QWORD *)&eventId);
    System_Action_int____ctor(
      v17,
      v8,
      Method_EventFortificationWorkManager_OnClickItem__,
      (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
    EventFortificationWorkItem__SetServantInfo(v16, userServantEntity, eventId, index, v17, v18);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
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
  DataManager_o *Instance; // x0
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v24; // x20
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v28; // w28
  SetSvtInfo_o *v29; // x24
  UserServantEntity_o *v30; // x22
  WebViewManager_o *v31; // x0
  EventFortificationSvtMaster_o *v32; // x0
  const MethodInfo *v33; // x5
  __int64 v34; // x1
  __int64 v35; // x2
  UserServantEntity_o *v36; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v37; // x0
  __int128 v38; // q1
  UserServantEntity_o *v39; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // kr00_16
  EventFortificationSvtEntity_o *v42; // x8
  UserServantEntity_o *v43; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v44; // kr10_16
  WebViewManager_o *v45; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v46; // x0
  UserServantEntity_o *v47; // x23
  UserServantEntity_o *v48; // x22
  __int64 v49; // x0
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // kr20_16
  UserServantEntity_o *v52; // x8
  __int64 v53; // x22
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v55; // x0
  __int128 v56; // q1
  UserServantEntity_o *v57; // x23
  int32_t v58; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // kr30_16
  UserServantEntity_o *v60; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // kr40_16
  UserServantEntity_o *v62; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v65; // x25
  const MethodInfo *v66; // x5
  _BOOL8 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  const MethodInfo *v70; // x1
  __int64 v71; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *v74; // [xsp+40h] [xbp-80h] BYREF
  UserServantEntity_o *v75; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+50h] [xbp-70h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42161C1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, method);
    sub_B0D8A4(&System_Action_int__TypeInfo, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v13);
    sub_B0D8A4(&Method_EventFortificationWorkManager_OnClickItem__, v14);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v15);
    sub_B0D8A4(&NetworkManager_TypeInfo, v16);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B0D8A4(&UserServantEntity_TypeInfo, v20);
    byte_42161C1 = 1;
  }
  entity = 0LL;
  memset(&v76, 0, sizeof(v76));
  v74 = 0LL;
  v75 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           Instance,
                                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_92:
    sub_B0D97C(Instance);
  }
  v24 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v73,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.servantItemList,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v76.fields.current = (Il2CppObject *)v73.fields.fakeValue;
  *(_OWORD *)&v76.fields.list = *(_OWORD *)&v73.fields.currentCryptoKey;
  while ( 1 )
  {
    v67 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v67 )
      break;
    if ( !entity )
      sub_B0D97C(v67);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_B0D97C(v67);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v76.fields.current;
      v28 = 0;
LABEL_20:
      if ( v28 >= max_length )
      {
        v71 = sub_B0D9A8(v67);
        sub_B0D948(v71, 0LL);
      }
      v29 = setSvtInfos->m_Items[v28];
      if ( !v29 )
        sub_B0D97C(v67);
      if ( !current )
        sub_B0D97C(v67);
      if ( v29->fields.position != current->fields.position )
        goto LABEL_68;
      v30 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v68, v69);
      UserServantEntity___ctor(v30, 0LL);
      v75 = v30;
      if ( v29->fields.type )
      {
        v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v31 )
          sub_B0D97C(0LL);
        v32 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v31,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_B0D97C(v32);
        if ( !v32 )
          sub_B0D97C(0LL);
        if ( EventFortificationSvtMaster__TryGetEntity(
               v32,
               &v74,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v29->fields.position,
               v33) )
        {
          v36 = v75;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v72, 0LL, 0LL);
          v73 = v72;
          if ( !v36 )
            sub_B0D97C(v37);
          v38 = *(_OWORD *)&v73.fields.fakeValue;
          *(_OWORD *)&v36->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v73.fields.currentCryptoKey;
          *(_OWORD *)&v36->fields.userId.fields.fakeValue = v38;
          v39 = v75;
          svtId = v29->fields.svtId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v39 )
            sub_B0D97C(*(_QWORD *)&v41.fields.currentCryptoKey);
          v39->fields.svtId = v41;
          v42 = v74;
          if ( !v74 )
            sub_B0D97C(*(_QWORD *)&v41.fields.currentCryptoKey);
          v43 = v75;
          if ( !v75 )
            sub_B0D97C(*(_QWORD *)&v41.fields.currentCryptoKey);
          v75->fields.lv = v74->fields.lv;
          v44 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v42->fields.limitCount, 0LL);
          v34 = *(_QWORD *)&v44.fields.fakeValue;
          v43->fields.limitCount = v44;
          if ( !v75 )
            sub_B0D97C(*(_QWORD *)&v44.fields.currentCryptoKey);
          v75->fields.exceedCount = 0;
        }
      }
      else
      {
        v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v45 )
          sub_B0D97C(0LL);
        v46 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v45,
                                                                                       (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v46 )
          sub_B0D97C(0LL);
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v46,
          &v75,
          v29->fields.userSvtId,
          (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v24 || !EventEntity__IsEventPeriod(v24, 0LL, 0LL) )
        {
          v47 = v75;
          if ( v75 )
          {
            v48 = (UserServantEntity_o *)sub_B0D974(UserServantEntity_TypeInfo, v34, v35);
            UserServantEntity___ctor_21250620(v48, v47, 0LL);
            v75 = v48;
            if ( !v48 )
              sub_B0D97C(v49);
            v48->fields.lv = v29->fields.lv;
            iconLimitCount = v29->fields.iconLimitCount;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v34 = *(_QWORD *)&v51.fields.fakeValue;
            v48->fields.iconLimitCount = v51;
            v52 = v75;
            if ( !v75 )
              sub_B0D97C(*(_QWORD *)&v51.fields.currentCryptoKey);
          }
          else
          {
            if ( !v29->fields.svtId )
              goto LABEL_67;
            v53 = sub_B0D974(UserServantEntity_TypeInfo, v34, v35);
            UserServantEntity___ctor((UserServantEntity_o *)v53, 0LL);
            v75 = (UserServantEntity_o *)v53;
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
            v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v72, UserId, 0LL);
            v73 = v72;
            if ( !v53 )
              sub_B0D97C(v55);
            v56 = *(_OWORD *)&v73.fields.fakeValue;
            *(_OWORD *)(v53 + 48) = *(_OWORD *)&v73.fields.currentCryptoKey;
            *(_OWORD *)(v53 + 64) = v56;
            v57 = v75;
            v58 = v29->fields.svtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v58, 0LL);
            if ( !v57 )
              sub_B0D97C(*(_QWORD *)&v59.fields.currentCryptoKey);
            v57->fields.svtId = v59;
            v60 = v75;
            if ( !v75 )
              sub_B0D97C(*(_QWORD *)&v59.fields.currentCryptoKey);
            v75->fields.lv = v29->fields.lv;
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v29->fields.iconLimitCount, 0LL);
            v34 = *(_QWORD *)&v61.fields.fakeValue;
            v60->fields.iconLimitCount = v61;
            v52 = v75;
            if ( !v75 )
              sub_B0D97C(*(_QWORD *)&v61.fields.currentCryptoKey);
          }
          v52->fields.exceedCount = v29->fields.exceedCount;
        }
      }
LABEL_67:
      v62 = v75;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v65 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v34, v35);
      System_Action_int____ctor(
        v65,
        (Il2CppObject *)this,
        Method_EventFortificationWorkManager_OnClickItem__,
        (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
      EventFortificationWorkItem__SetServantInfo(current, v62, eventId, position, v65, v66);
LABEL_68:
      max_length = setSvtInfos->max_length;
      if ( (int)++v28 >= max_length )
        continue;
      goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v70);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_42161BF & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index);
    byte_42161BF = 1;
  }
  Item = EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      onClick,
      (BlankEarth_QAARotateEarthResponse_o *)Item,
      (const MethodInfo_2D96698 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  struct FortificationOrganizationPanelComponent_o *v9; // x8
  struct ItemIconComponent_o *v10; // x20
  System_Action_o *v11; // x21
  System_Action_o *v12; // x2

  if ( (byte_42161C4 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_42161C4 = 1;
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
      v12 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_B0D97C(itemIcon);
  }
  v9 = this->fields.orgPanel;
  if ( !v9 )
    goto LABEL_13;
  v9->fields.isTouchEnabled = 0;
  v10 = this->fields.itemIcon;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v10 )
    goto LABEL_13;
  itemIcon = v10;
  v12 = v11;
LABEL_12:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v12, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *pointLabel; // x20
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *servantItemList; // x0
  int v12; // w23
  const MethodInfo *v13; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x19
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int v21; // [xsp+Ch] [xbp-54h] BYREF
  int v22; // [xsp+10h] [xbp-50h] BYREF
  int32_t nowPoint; // [xsp+14h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42161C5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v4);
    sub_B0D8A4(&int_TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v6);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_6449/*"FORTIFICATION_POINT_INFO"*/, v9);
    byte_42161C5 = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
      &v24,
      servantItemList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v12 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v24,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v24.fields.current )
        sub_B0D97C(0LL);
      v12 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v24.fields.current, v13);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v24,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_20;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v16 = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6449/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v22 = maxFortificationPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v21 = v12;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    servantItemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__Format_43850968(v17, v18, v19, v20, 0LL);
    if ( !v16 )
LABEL_20:
      sub_B0D97C(servantItemList);
    UILabel__set_text(v16, (System_String_o *)servantItemList, 0LL);
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
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int64_t Instance; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v55; // x23
  System_Action_int__o *v56; // x24
  const MethodInfo *v57; // x3
  int64_t v58; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v60; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v62; // x8
  System_String_o **v63; // x8
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v66; // s0
  UnityEngine_Object_o *v67; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v69; // x22
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x0
  System_String_o *v72; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  const MethodInfo *v74; // x1
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v76; // x22
  Il2CppObject *v77; // x23
  Il2CppObject *v78; // x0
  System_String_o *v79; // x23
  int32_t size; // w10
  int32_t v81; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v84; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v86; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v88; // x1
  UISprite_o *v89; // x21
  __int64 v90; // x0
  int32_t v91; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-60h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42161BD & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_int___ctor__, eventFortificationEntity);
    sub_B0D8A4(&System_Action_int__TypeInfo, v14);
    sub_B0D8A4(&AtlasManager_TypeInfo, v15);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMasterData_GiftMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v18);
    sub_B0D8A4(&Method_EventFortificationWorkManager_OnClickItem__, v19);
    sub_B0D8A4(&int_TypeInfo, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v21);
    sub_B0D8A4(&NetworkManager_TypeInfo, v22);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&StringLiteral_4562/*"D2"*/, v25);
    sub_B0D8A4(&StringLiteral_22300/*"spot_info_gauge_l"*/, v26);
    sub_B0D8A4(&StringLiteral_22298/*"spot_info_gauge_base"*/, v27);
    sub_B0D8A4(&StringLiteral_19400/*"icon_event_{0}{1}"*/, v28);
    sub_B0D8A4(&StringLiteral_18594/*"event_organizationbg_{0}{1}"*/, v29);
    sub_B0D8A4(&StringLiteral_1/*""*/, v30);
    sub_B0D8A4(&StringLiteral_22302/*"spot_info_window"*/, v31);
    sub_B0D8A4(&StringLiteral_19705/*"img_terminal_itembg"*/, v32);
    byte_42161BD = 1;
  }
  entity = 0LL;
  entities = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
    (System_Int32_array **)eventFortificationEntity,
    *(System_String_array ***)&eventId,
    (System_String_array **)onClick,
    (System_Boolean_array **)orgPanel,
    (System_Int32_array **)terminalAtlas,
    (System_Int32_array *)method,
    v7);
  this->fields.onClick = onClick;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.onClick,
    (System_Int32_array **)onClick,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.orgPanel,
    (System_Int32_array **)orgPanel,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.terminalAtlas = terminalAtlas;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.terminalAtlas,
    (System_Int32_array **)terminalAtlas,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_117;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v55 = entities;
  v56 = (System_Action_int__o *)sub_B0D974(System_Action_int__TypeInfo, v53, v54);
  System_Action_int____ctor(
    v56,
    (Il2CppObject *)this,
    Method_EventFortificationWorkManager_OnClickItem__,
    (const MethodInfo_246D4AC *)Method_System_Action_int___ctor__);
  EventFortificationWorkManager__CreateItem(this, v55, v56, v57);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_117;
  v58 = Instance;
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
  if ( !*(_DWORD *)(v58 + 24) )
    goto LABEL_118;
  v60 = *(int32_t **)(v58 + 32);
  if ( !v60 )
    goto LABEL_117;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_117;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v60[5], v60[6], v60[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v58 + 24) )
    {
      v62 = *(_QWORD *)(v58 + 32);
      if ( !v62 )
        goto LABEL_117;
      if ( *(_DWORD *)(v62 + 20) != 1 )
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
        v63 = (System_String_o **)&StringLiteral_19705/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_34:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_117;
        v63 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v63, 0LL);
      goto LABEL_37;
    }
LABEL_118:
    v90 = sub_B0D9A8(Instance);
    sub_B0D948(v90, 0LL);
  }
LABEL_37:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
      v66 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_57;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v67 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v67, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_117;
      v66 = 0.0;
LABEL_57:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v66, 0LL);
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
    v69 = this->fields.workTypeIcon;
    v91 = eventId;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
    v71 = (Il2CppObject *)System_Int32__ToString_38473032(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4562/*"D2"*/,
                            0LL);
    v72 = System_String__Format_43845440((System_String_o *)StringLiteral_19400/*"icon_event_{0}{1}"*/, v70, v71, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(eventId, v69, v72, 0LL);
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
  EventFortificationWorkManager__SetPointText(this, v74);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v76 = this->fields.bgSprite;
    v91 = eventId;
    v77 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v91);
    v78 = (Il2CppObject *)System_Int32__ToString_38473032(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4562/*"D2"*/,
                            0LL);
    v79 = System_String__Format_43845440((System_String_o *)StringLiteral_18594/*"event_organizationbg_{0}{1}"*/, v77, v78, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI_27921852(eventId, v76, v79, 0LL);
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
      v81 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v81;
      }
      else
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = v81 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
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
  v84 = this->fields.itemBgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_27921852(eventId, v84, (System_String_o *)StringLiteral_22302/*"spot_info_window"*/, 0LL);
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
    sub_B0D97C(Instance);
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
    v86 = this->fields.gaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(eventId, v86, (System_String_o *)StringLiteral_22300/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v89 = this->fields.gaugeBaseSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_27921852(eventId, v89, (System_String_o *)StringLiteral_22298/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v88);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *workTypeIcon; // x20
  UnityEngine_Object_o *teamNameLabel; // x20
  UnityEngine_Object_o *bgSprite; // x20
  UnityEngine_Object_o *titleRootObj; // x20
  UnityEngine_Component_o *gameObject; // x0
  int m_CachedPtr; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v11; // w21
  float v12; // s8
  unsigned int v13; // s0
  int v14; // w22
  float v15; // s9
  unsigned int v16; // s0
  float v17; // s10
  float v18; // s1
  float v19; // s11
  float v20; // s8
  UnityEngine_Transform_o *transform; // x20
  int v22; // s0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42161C3 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_42161C3 = 1;
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
          v11 = gameObject[6].fields.m_CachedPtr;
          v12 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v13 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_42;
          v14 = gameObject[6].fields.m_CachedPtr;
          v15 = *(float *)&v13;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v16 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v17 = *(float *)&v16;
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
          *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v19 = v18;
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
          v20 = (float)(v12 * (float)m_CachedPtr) + (float)addWidthForIcon;
          v25.fields.x = -(float)((float)((float)(v17 * (float)v14) * 0.5)
                                - (float)((float)((float)(v17 * (float)v14) - (float)(v20 + (float)(v15 * (float)v11)))
                                        * 0.5));
          v25.fields.z = 0.0;
          v25.fields.y = v19;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v25, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL),
                *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Vector3__get_zero(0LL),
                !transform)
            || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v22, 0LL),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0LL)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL)) == 0LL )
          {
LABEL_42:
            sub_B0D97C(gameObject);
          }
          v26.fields.x = v20;
          v26.fields.y = 0.0;
          v26.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v26, 0LL);
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
    sub_B0D97C(this);
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
  EventFortificationWorkManager___c__DisplayClass29_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventFortificationWorkManager_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkItemObj; // x21
  struct EventFortificationWorkManager_o *v10; // x8
  EventFortificationWorkItem_o *v11; // x21
  struct EventFortificationWorkManager_o *v12; // x8
  struct EventFortificationWorkManager_o *v13; // x8
  struct EventFortificationWorkManager_o *v14; // x8

  v4 = this;
  if ( (byte_4211B43 & 1) == 0 )
  {
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent);
    sub_B0D8A4(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4211B43 = 1;
  }
  _4__this = v4->fields.__4__this;
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
                                                                    (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_17;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  v11 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_17;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v10->fields.orgPanel, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_17;
  if ( !ent )
    goto LABEL_17;
  EventFortificationWorkItem__SetServantInfo(
    v11,
    0LL,
    v12->fields.eventId,
    ent->fields.position,
    v4->fields.onClick,
    0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v11,
                                                                    0LL);
  v13 = v4->fields.__4__this;
  if ( !v13
    || (GameObjectExtensions__SetParent_31184580((UnityEngine_GameObject_o *)this, v13->fields.ItemObjRoot, 0LL),
        (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)v11,
                                                                           0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v14 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v14->fields.servantItemList) == 0LL )
  {
LABEL_17:
    sub_B0D97C(this);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
}