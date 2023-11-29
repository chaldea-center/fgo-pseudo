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

  if ( (byte_40FB69A & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1100, method);
    sub_B16FFC(&StringLiteral_1095, v9);
    sub_B16FFC(&StringLiteral_1615, v10);
    byte_40FB69A = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_3137300;
  v11 = (System_Int32_array **)StringLiteral_1615;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1615;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v11, v2, v3, v4, v5, v6, v7);
  v12 = (System_Int32_array **)StringLiteral_1100;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1100;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v12, v13, v14, v15, v16, v17, v18);
  v19 = (System_Int32_array **)StringLiteral_1095;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1095;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v19, v20, v21, v22, v23, v24, v25);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
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
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x21
  const MethodInfo *v43; // x1

  if ( (byte_40FB692 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_EventFortificationDetailEntity___ctor__, eventFortificationDetailEntities);
    sub_B16FFC(&System_Action_EventFortificationDetailEntity__TypeInfo, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v11);
    sub_B16FFC(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v12);
    sub_B16FFC(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v13);
    byte_40FB692 = 1;
  }
  v14 = sub_B170CC(
          EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo,
          eventFortificationDetailEntities,
          onClick,
          method,
          v4);
  EventFortificationWorkManager___c__DisplayClass29_0___ctor(
    (EventFortificationWorkManager___c__DisplayClass29_0_o *)v14,
    0LL);
  if ( !v14 )
    goto LABEL_6;
  *(_QWORD *)(v14 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v14 + 24) = onClick;
  sub_B16F98((BattleServantConfConponent_o *)(v14 + 24), (System_Int32_array **)onClick, v21, v22, v23, v24, v25, v26);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo,
                                                                                                  v27,
                                                                                                  v28,
                                                                                                  v29,
                                                                                                  v30);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v31;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.servantItemList,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B170CC(
                                                                               System_Action_EventFortificationDetailEntity__TypeInfo,
                                                                               v38,
                                                                               v39,
                                                                               v40,
                                                                               v41);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)v14,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    (const MethodInfo_24B7310 *)Method_System_Action_EventFortificationDetailEntity___ctor__);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_B170D4();
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v42,
    (const MethodInfo_2F269F0 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v43);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x23
  int size; // w21
  unsigned int v8; // w22
  EventFortificationWorkItem_o *result; // x0

  if ( (byte_40FB694 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, *(_QWORD *)&index);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v5);
    byte_40FB694 = 1;
  }
  servantItemList = this->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_12;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v8 = 0;
    do
    {
      if ( servantItemList->fields._size <= v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      result = servantItemList->fields._items->m_Items[v8];
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( (int)++v8 >= size )
        return 0LL;
      servantItemList = this->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_12:
    sub_B170D4();
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x23
  int size; // w24
  unsigned int v15; // w25
  EventFortificationWorkItem_o *v16; // x23
  System_Action_int__o *v17; // x24
  const MethodInfo *v18; // x5

  if ( (byte_40FB696 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, userServantEntity);
    sub_B16FFC(&System_Action_int__TypeInfo, v9);
    sub_B16FFC(&Method_EventFortificationWorkManager_OnClickItem__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v12);
    byte_40FB696 = 1;
  }
  servantItemList = this->fields.servantItemList;
  if ( !servantItemList )
LABEL_12:
    sub_B170D4();
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( servantItemList->fields._size <= v15 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v16 = servantItemList->fields._items->m_Items[v15];
      if ( !v16 )
        goto LABEL_12;
      if ( v16->fields.position == index )
        break;
      if ( (int)++v15 >= size )
        return;
      servantItemList = this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_12;
    }
    v17 = (System_Action_int__o *)sub_B170CC(
                                    System_Action_int__TypeInfo,
                                    userServantEntity,
                                    *(_QWORD *)&eventId,
                                    *(_QWORD *)&index,
                                    method);
    System_Action_int____ctor(
      v17,
      (Il2CppObject *)this,
      Method_EventFortificationWorkManager_OnClickItem__,
      (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
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
  WebViewManager_o *Instance; // x0
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *v26; // x0
  EventEntity_o *v27; // x20
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v31; // w28
  SetSvtInfo_o *v32; // x24
  UserServantEntity_o *v33; // x22
  WebViewManager_o *v34; // x0
  EventFortificationSvtMaster_o *v35; // x0
  const MethodInfo *v36; // x5
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  UserServantEntity_o *v41; // x22
  __int128 v42; // q1
  UserServantEntity_o *v43; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // kr00_16
  EventFortificationSvtEntity_o *v46; // x8
  UserServantEntity_o *v47; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr10_16
  WebViewManager_o *v49; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v50; // x0
  UserServantEntity_o *v51; // x23
  __int64 v52; // x22
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // kr20_16
  UserServantEntity_o *v55; // x8
  __int64 v56; // x22
  int64_t v57; // x23
  __int128 v58; // q1
  UserServantEntity_o *v59; // x23
  int32_t v60; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // kr30_16
  UserServantEntity_o *v62; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v63; // kr40_16
  UserServantEntity_o *v64; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v67; // x25
  const MethodInfo *v68; // x5
  _BOOL8 v69; // x0
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x3
  __int64 v73; // x4
  const MethodInfo *v74; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *v77; // [xsp+40h] [xbp-80h] BYREF
  UserServantEntity_o *v78; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v79; // [xsp+50h] [xbp-70h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_40FB695 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, method);
    sub_B16FFC(&System_Action_int__TypeInfo, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v13);
    sub_B16FFC(&Method_EventFortificationWorkManager_OnClickItem__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v15);
    sub_B16FFC(&NetworkManager_TypeInfo, v16);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19);
    sub_B16FFC(&UserServantEntity_TypeInfo, v20);
    byte_40FB695 = 1;
  }
  entity = 0LL;
  memset(&v79, 0, sizeof(v79));
  v77 = 0LL;
  v78 = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_92;
  if ( !UserEventFortificationMaster__TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          UserId,
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0LL) )
    return;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Master_WarQuestSelectionMaster
    || (v26 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                Master_WarQuestSelectionMaster,
                this->fields.eventId,
                (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_92:
    sub_B170D4();
  }
  v27 = (EventEntity_o *)v26;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.servantItemList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v79.fields.current = (Il2CppObject *)v76.fields.fakeValue;
  *(_OWORD *)&v79.fields.list = *(_OWORD *)&v76.fields.currentCryptoKey;
  while ( 1 )
  {
    v69 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v79,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v69 )
      break;
    if ( !entity )
      sub_B170D4();
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_B170D4();
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v79.fields.current;
      v31 = 0;
LABEL_20:
      if ( v31 >= max_length )
      {
        sub_B17100(v69, v70, v71);
        sub_B170A0();
      }
      v32 = setSvtInfos->m_Items[v31];
      if ( !v32 )
        sub_B170D4();
      if ( !current )
        sub_B170D4();
      if ( v32->fields.position != current->fields.position )
        goto LABEL_68;
      v33 = (UserServantEntity_o *)sub_B170CC(UserServantEntity_TypeInfo, v70, v71, v72, v73);
      UserServantEntity___ctor(v33, 0LL);
      v78 = v33;
      if ( v32->fields.type )
      {
        v34 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v34 )
          sub_B170D4();
        v35 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v34,
                                                 (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_B170D4();
        if ( !v35 )
          sub_B170D4();
        if ( EventFortificationSvtMaster__TryGetEntity(
               v35,
               &v77,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v32->fields.position,
               v36) )
        {
          v41 = v78;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v75, 0LL, 0LL);
          v76 = v75;
          if ( !v41 )
            sub_B170D4();
          v42 = *(_OWORD *)&v76.fields.fakeValue;
          *(_OWORD *)&v41->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v76.fields.currentCryptoKey;
          *(_OWORD *)&v41->fields.userId.fields.fakeValue = v42;
          v43 = v78;
          svtId = v32->fields.svtId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v43 )
            sub_B170D4();
          v43->fields.svtId = v45;
          v46 = v77;
          if ( !v77 )
            sub_B170D4();
          v47 = v78;
          if ( !v78 )
            sub_B170D4();
          v78->fields.lv = v77->fields.lv;
          v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v46->fields.limitCount, 0LL);
          v37 = *(_QWORD *)&v48.fields.fakeValue;
          v47->fields.limitCount = v48;
          if ( !v78 )
            sub_B170D4();
          v78->fields.exceedCount = 0;
        }
      }
      else
      {
        v49 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v49 )
          sub_B170D4();
        v50 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v49,
                                                                                       (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v50 )
          sub_B170D4();
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v50,
          &v78,
          v32->fields.userSvtId,
          (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v27 || !EventEntity__IsEventPeriod(v27, 0LL, 0LL) )
        {
          v51 = v78;
          if ( v78 )
          {
            v52 = sub_B170CC(UserServantEntity_TypeInfo, v37, v38, v39, v40);
            UserServantEntity___ctor_21432252((UserServantEntity_o *)v52, v51, 0LL);
            v78 = (UserServantEntity_o *)v52;
            if ( !v52 )
              sub_B170D4();
            *(_DWORD *)(v52 + 256) = v32->fields.lv;
            iconLimitCount = v32->fields.iconLimitCount;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v37 = *(_QWORD *)&v54.fields.fakeValue;
            *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)(v52 + 160) = v54;
            v55 = v78;
            if ( !v78 )
              sub_B170D4();
          }
          else
          {
            if ( !v32->fields.svtId )
              goto LABEL_67;
            v56 = sub_B170CC(UserServantEntity_TypeInfo, v37, v38, v39, v40);
            UserServantEntity___ctor((UserServantEntity_o *)v56, 0LL);
            v78 = (UserServantEntity_o *)v56;
            if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            }
            v57 = NetworkManager__get_UserId(0LL);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v75, v57, 0LL);
            v76 = v75;
            if ( !v56 )
              sub_B170D4();
            v58 = *(_OWORD *)&v76.fields.fakeValue;
            *(_OWORD *)(v56 + 48) = *(_OWORD *)&v76.fields.currentCryptoKey;
            *(_OWORD *)(v56 + 64) = v58;
            v59 = v78;
            v60 = v32->fields.svtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v60, 0LL);
            if ( !v59 )
              sub_B170D4();
            v59->fields.svtId = v61;
            v62 = v78;
            if ( !v78 )
              sub_B170D4();
            v78->fields.lv = v32->fields.lv;
            v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v32->fields.iconLimitCount, 0LL);
            v37 = *(_QWORD *)&v63.fields.fakeValue;
            v62->fields.iconLimitCount = v63;
            v55 = v78;
            if ( !v78 )
              sub_B170D4();
          }
          v55->fields.exceedCount = v32->fields.exceedCount;
        }
      }
LABEL_67:
      v64 = v78;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v67 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v37, v38, v39, v40);
      System_Action_int____ctor(
        v67,
        (Il2CppObject *)this,
        Method_EventFortificationWorkManager_OnClickItem__,
        (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
      EventFortificationWorkItem__SetServantInfo(current, v64, eventId, position, v67, v68);
LABEL_68:
      max_length = setSvtInfos->max_length;
      if ( (int)++v31 >= max_length )
        continue;
      goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v79,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_40FB693 & 1) == 0 )
  {
    sub_B16FFC(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index);
    byte_40FB693 = 1;
  }
  Item = EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      onClick,
      (BlankEarth_QAARotateEarthResponse_o *)Item,
      (const MethodInfo_2D39F2C *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Object_o *orgPanel; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  struct FortificationOrganizationPanelComponent_o *v10; // x8
  struct ItemIconComponent_o *v11; // x20
  System_Action_o *v12; // x21
  ItemIconComponent_o *itemIcon; // x0
  System_Action_o *v14; // x2

  if ( (byte_40FB698 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    byte_40FB698 = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL) )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v14 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_B170D4();
  }
  v10 = this->fields.orgPanel;
  if ( !v10 )
    goto LABEL_13;
  v10->fields.isTouchEnabled = 0;
  v11 = this->fields.itemIcon;
  v12 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v11 )
    goto LABEL_13;
  itemIcon = v11;
  v14 = v12;
LABEL_12:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v14, 0LL);
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
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x0
  int v12; // w23
  const MethodInfo *v13; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x19
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x0
  int v22; // [xsp+Ch] [xbp-54h] BYREF
  int v23; // [xsp+10h] [xbp-50h] BYREF
  int32_t nowPoint; // [xsp+14h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_40FB699 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v4);
    sub_B16FFC(&int_TypeInfo, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v6);
    sub_B16FFC(&LocalizationManager_TypeInfo, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_6414, v9);
    byte_40FB699 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_20;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v25,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)servantItemList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v12 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v25,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v25.fields.current )
        sub_B170D4();
      v12 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v25.fields.current, v13);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v25,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
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
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6414, 0LL);
    nowPoint = this->fields.nowPoint;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v23 = maxFortificationPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v22 = v12;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
    v21 = System_String__Format_43744796(v17, v18, v19, v20, 0LL);
    if ( !v16 )
LABEL_20:
      sub_B170D4();
    UILabel__set_text(v16, v21, 0LL);
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
  WebViewManager_o *Instance; // x0
  EventFortificationDetailMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v58; // x23
  System_Action_int__o *v59; // x24
  const MethodInfo *v60; // x3
  WebViewManager_o *v61; // x0
  GiftMaster_o *v62; // x0
  GiftEntity_array *GiftListById; // x0
  __int64 v64; // x1
  __int64 v65; // x2
  GiftEntity_array *v66; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v68; // x8
  ItemIconComponent_o *v69; // x0
  UnityEngine_Object_o *frameSprite; // x24
  GiftEntity_o *v71; // x8
  UISprite_o *v72; // x0
  UISprite_o *v73; // x0
  System_String_o **v74; // x8
  WebViewManager_o *v75; // x0
  UserEventFortificationMaster_o *v76; // x22
  int64_t UserId; // x0
  UnityEngine_Object_o *pointSlider; // x22
  UIProgressBar_o *v79; // x0
  float v80; // s0
  UnityEngine_Object_o *v81; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v83; // x22
  Il2CppObject *v84; // x23
  Il2CppObject *v85; // x0
  System_String_o *v86; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  const MethodInfo *v88; // x1
  UILabel_o *v89; // x0
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v91; // x22
  Il2CppObject *v92; // x23
  Il2CppObject *v93; // x0
  System_String_o *v94; // x23
  int32_t size; // w10
  UIWidget_o *v96; // x0
  int32_t v97; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v100; // x22
  UIWidget_o *v101; // x0
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v103; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v105; // x1
  UISprite_o *v106; // x21
  int32_t v107; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-60h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_40FB691 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_int___ctor__, eventFortificationEntity);
    sub_B16FFC(&System_Action_int__TypeInfo, v14);
    sub_B16FFC(&AtlasManager_TypeInfo, v15);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMasterData_GiftMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v18);
    sub_B16FFC(&Method_EventFortificationWorkManager_OnClickItem__, v19);
    sub_B16FFC(&int_TypeInfo, v20);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v21);
    sub_B16FFC(&NetworkManager_TypeInfo, v22);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B16FFC(&StringLiteral_4532, v25);
    sub_B16FFC(&StringLiteral_22133, v26);
    sub_B16FFC(&StringLiteral_22131, v27);
    sub_B16FFC(&StringLiteral_19265, v28);
    sub_B16FFC(&StringLiteral_18467, v29);
    sub_B16FFC(&StringLiteral_1, v30);
    sub_B16FFC(&StringLiteral_22135, v31);
    sub_B16FFC(&StringLiteral_19569, v32);
    byte_40FB691 = 1;
  }
  entity = 0LL;
  entities = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
    (System_Int32_array **)eventFortificationEntity,
    *(System_String_array ***)&eventId,
    (System_String_array **)onClick,
    (System_Boolean_array **)orgPanel,
    (System_Int32_array **)terminalAtlas,
    (System_Int32_array *)method,
    v7);
  this->fields.onClick = onClick;
  sub_B16F98(
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.orgPanel,
    (System_Int32_array **)orgPanel,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields.terminalAtlas = terminalAtlas;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.terminalAtlas,
    (System_Int32_array **)terminalAtlas,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = (EventFortificationDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                             (DataManager_o *)Instance,
                                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !MasterData_WarQuestSelectionMaster )
    goto LABEL_117;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          MasterData_WarQuestSelectionMaster,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v58 = entities;
  v59 = (System_Action_int__o *)sub_B170CC(System_Action_int__TypeInfo, v54, v55, v56, v57);
  System_Action_int____ctor(
    v59,
    (Il2CppObject *)this,
    Method_EventFortificationWorkManager_OnClickItem__,
    (const MethodInfo_24B5D80 *)Method_System_Action_int___ctor__);
  EventFortificationWorkManager__CreateItem(this, v58, v59, v60);
  v61 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v61 )
    goto LABEL_117;
  v62 = (GiftMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)v61,
                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !v62 )
    goto LABEL_117;
  GiftListById = GiftMaster__GetGiftListById(v62, eventFortificationEntity->fields.giftId, 0LL);
  if ( !GiftListById )
    goto LABEL_117;
  v66 = GiftListById;
  if ( !GiftListById->max_length )
    goto LABEL_118;
  if ( !GiftListById->m_Items[0] )
    goto LABEL_37;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  GiftListById = (GiftEntity_array *)UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
  if ( ((unsigned __int8)GiftListById & 1) == 0 )
    goto LABEL_37;
  if ( !v66->max_length )
    goto LABEL_118;
  v68 = (int32_t *)v66->m_Items[0];
  if ( !v68 )
    goto LABEL_117;
  v69 = this->fields.itemIcon;
  if ( !v69 )
    goto LABEL_117;
  ItemIconComponent__SetGift(v69, v68[5], v68[6], v68[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  GiftListById = (GiftEntity_array *)UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)GiftListById & 1) != 0 )
  {
    if ( v66->max_length )
    {
      v71 = v66->m_Items[0];
      if ( !v71 )
        goto LABEL_117;
      if ( v71->fields.type != 1 )
        goto LABEL_34;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0LL, 0LL) )
      {
        v72 = this->fields.frameSprite;
        if ( !v72 )
          goto LABEL_117;
        UISprite__set_atlas(v72, terminalAtlas, 0LL);
        v73 = this->fields.frameSprite;
        if ( !v73 )
          goto LABEL_117;
        v74 = (System_String_o **)&StringLiteral_19569;
      }
      else
      {
LABEL_34:
        v73 = this->fields.frameSprite;
        if ( !v73 )
          goto LABEL_117;
        v74 = (System_String_o **)&StringLiteral_1;
      }
      UISprite__set_spriteName(v73, *v74, 0LL);
      goto LABEL_37;
    }
LABEL_118:
    sub_B17100(GiftListById, v64, v65);
    sub_B170A0();
  }
LABEL_37:
  v75 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v75 )
    goto LABEL_117;
  v76 = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)v75,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v76 )
    goto LABEL_117;
  if ( UserEventFortificationMaster__TryGetEntity(
         v76,
         &entity,
         UserId,
         eventId,
         eventFortificationEntity->fields.idx,
         0LL) )
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
    if ( UnityEngine_Object__op_Inequality(pointSlider, 0LL, 0LL) )
    {
      if ( !entity )
        goto LABEL_117;
      v79 = (UIProgressBar_o *)this->fields.pointSlider;
      if ( !v79 )
        goto LABEL_117;
      v80 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_57;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v81 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v81, 0LL, 0LL) )
    {
      v79 = (UIProgressBar_o *)this->fields.pointSlider;
      if ( !v79 )
        goto LABEL_117;
      v80 = 0.0;
LABEL_57:
      UIProgressBar__set_value(v79, v80, 0LL);
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
    v83 = this->fields.workTypeIcon;
    v107 = eventId;
    v84 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
    v85 = (Il2CppObject *)System_Int32__ToString_38275808(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4532,
                            0LL);
    v86 = System_String__Format_43739268((System_String_o *)StringLiteral_19265, v84, v85, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v83, v86, 0LL);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0LL, 0LL) )
  {
    v89 = this->fields.teamNameLabel;
    if ( !v89 )
      goto LABEL_117;
    UILabel__set_text(v89, eventFortificationEntity->fields.name, 0LL);
  }
  EventFortificationWorkManager__SetPointText(this, v88);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v91 = this->fields.bgSprite;
    v107 = eventId;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v107);
    v93 = (Il2CppObject *)System_Int32__ToString_38275808(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4532,
                            0LL);
    v94 = System_String__Format_43739268((System_String_o *)StringLiteral_18467, v92, v93, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v91, v94, 0LL);
    if ( !entities )
      goto LABEL_117;
    size = entities->fields._size;
    if ( size <= 2 )
    {
      v96 = (UIWidget_o *)this->fields.bgSprite;
      if ( !v96 )
        goto LABEL_117;
      bgSpriteWidth = this->fields.bgSpriteWidth;
    }
    else
    {
      v96 = (UIWidget_o *)this->fields.bgSprite;
      v97 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !v96 )
          goto LABEL_117;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v97;
      }
      else
      {
        if ( !v96 )
          goto LABEL_117;
        bgSpriteWidth = v97 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width(v96, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_99;
  v100 = this->fields.itemBgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28584872(eventId, v100, (System_String_o *)StringLiteral_22135, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          0LL) )
    goto LABEL_99;
  v101 = (UIWidget_o *)this->fields.itemBgSprite;
  if ( !v101 )
LABEL_117:
    sub_B170D4();
  UIWidget__set_color(v101, color, 0LL);
LABEL_99:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v103 = this->fields.gaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v103, (System_String_o *)StringLiteral_22133, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v106 = this->fields.gaugeBaseSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28584872(eventId, v106, (System_String_o *)StringLiteral_22131, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v105);
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
  UnityEngine_Component_o *v7; // x0
  int m_CachedPtr; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x0
  unsigned int localScale; // s0
  UnityEngine_Component_o *v12; // x0
  int32_t addWidthForIcon; // s12
  int v14; // w21
  float v15; // s8
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_Transform_o *v17; // x0
  unsigned int v18; // s0
  UnityEngine_Component_o *v19; // x0
  int v20; // w22
  float v21; // s9
  UnityEngine_GameObject_o *v22; // x0
  UnityEngine_Transform_o *v23; // x0
  unsigned int v24; // s0
  UnityEngine_GameObject_o *v25; // x0
  float v26; // s10
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_Transform_o *v28; // x0
  float v29; // s1
  UnityEngine_GameObject_o *v30; // x0
  float v31; // s11
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  float v34; // s8
  UnityEngine_Component_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x20
  int v38; // s0
  UnityEngine_Component_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FB697 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FB697 = 1;
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
          v7 = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !v7 )
            goto LABEL_42;
          m_CachedPtr = v7[6].fields.m_CachedPtr;
          gameObject = UnityEngine_Component__get_gameObject(v7, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
          if ( !transform )
            goto LABEL_42;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale(transform, 0LL);
          v12 = (UnityEngine_Component_o *)this->fields.teamNameLabel;
          if ( !v12 )
            goto LABEL_42;
          addWidthForIcon = this->fields.addWidthForIcon;
          v14 = v12[6].fields.m_CachedPtr;
          v15 = *(float *)&localScale;
          v16 = UnityEngine_Component__get_gameObject(v12, 0LL);
          if ( !v16 )
            goto LABEL_42;
          v17 = UnityEngine_GameObject__get_transform(v16, 0LL);
          if ( !v17 )
            goto LABEL_42;
          v18 = (unsigned int)UnityEngine_Transform__get_localScale(v17, 0LL);
          v19 = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !v19 )
            goto LABEL_42;
          v20 = v19[6].fields.m_CachedPtr;
          v21 = *(float *)&v18;
          v22 = UnityEngine_Component__get_gameObject(v19, 0LL);
          if ( !v22 )
            goto LABEL_42;
          v23 = UnityEngine_GameObject__get_transform(v22, 0LL);
          if ( !v23 )
            goto LABEL_42;
          v24 = (unsigned int)UnityEngine_Transform__get_localScale(v23, 0LL);
          v25 = this->fields.titleRootObj;
          if ( !v25 )
            goto LABEL_42;
          v26 = *(float *)&v24;
          v27 = UnityEngine_GameObject__get_gameObject(v25, 0LL);
          if ( !v27 )
            goto LABEL_42;
          v28 = UnityEngine_GameObject__get_transform(v27, 0LL);
          if ( !v28 )
            goto LABEL_42;
          *(UnityEngine_Vector3_o *)(&v29 - 1) = UnityEngine_Transform__get_localPosition(v28, 0LL);
          v30 = this->fields.titleRootObj;
          if ( !v30 )
            goto LABEL_42;
          v31 = v29;
          v32 = UnityEngine_GameObject__get_gameObject(v30, 0LL);
          if ( !v32 )
            goto LABEL_42;
          v33 = UnityEngine_GameObject__get_transform(v32, 0LL);
          if ( !v33 )
            goto LABEL_42;
          v34 = (float)(v15 * (float)m_CachedPtr) + (float)addWidthForIcon;
          v44.fields.x = -(float)((float)((float)(v26 * (float)v20) * 0.5)
                                - (float)((float)((float)(v26 * (float)v20) - (float)(v34 + (float)(v21 * (float)v14)))
                                        * 0.5));
          v44.fields.z = 0.0;
          v44.fields.y = v31;
          UnityEngine_Transform__set_localPosition(v33, v44, 0LL);
          v35 = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !v35
            || (v36 = UnityEngine_Component__get_gameObject(v35, 0LL)) == 0LL
            || (v37 = UnityEngine_GameObject__get_transform(v36, 0LL),
                *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL),
                !v37)
            || (UnityEngine_Transform__set_localPosition(v37, *(UnityEngine_Vector3_o *)&v38, 0LL),
                (v41 = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0LL)
            || (v42 = UnityEngine_Component__get_gameObject(v41, 0LL)) == 0LL
            || (v43 = UnityEngine_GameObject__get_transform(v42, 0LL)) == 0LL )
          {
LABEL_42:
            sub_B170D4();
          }
          v45.fields.x = v34;
          v45.fields.y = 0.0;
          v45.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition(v43, v45, 0LL);
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
    sub_B170D4();
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct EventFortificationWorkManager_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkItemObj; // x21
  UnityEngine_GameObject_o *v10; // x0
  EventFortificationWorkItem_o *Component_srcLineSprite; // x0
  struct EventFortificationWorkManager_o *v12; // x8
  EventFortificationWorkItem_o *v13; // x21
  struct EventFortificationWorkManager_o *v14; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct EventFortificationWorkManager_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  struct EventFortificationWorkManager_o *v18; // x8
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *servantItemList; // x0

  if ( (byte_40F6FB1 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent);
    sub_B16FFC(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F6FB1 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  eventFortificationWorkItemObj = (UnityEngine_UI_Dropdown_DropdownItem_o *)_4__this->fields.eventFortificationWorkItemObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v10 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                      eventFortificationWorkItemObj,
                                      (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v10 )
    goto LABEL_17;
  Component_srcLineSprite = (EventFortificationWorkItem_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              v10,
                                                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v12 = this->fields.__4__this;
  if ( !v12 )
    goto LABEL_17;
  v13 = Component_srcLineSprite;
  if ( !Component_srcLineSprite )
    goto LABEL_17;
  EventFortificationWorkItem__Init(Component_srcLineSprite, ent, v12->fields.orgPanel, 0LL);
  v14 = this->fields.__4__this;
  if ( !v14 )
    goto LABEL_17;
  if ( !ent )
    goto LABEL_17;
  EventFortificationWorkItem__SetServantInfo(
    v13,
    0LL,
    v14->fields.eventId,
    ent->fields.position,
    this->fields.onClick,
    0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
  v16 = this->fields.__4__this;
  if ( !v16
    || (GameObjectExtensions__SetParent_27425860(gameObject, v16->fields.ItemObjRoot, 0LL),
        (v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive(v17, 1, 0LL), (v18 = this->fields.__4__this) == 0LL)
    || (servantItemList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v18->fields.servantItemList) == 0LL )
  {
LABEL_17:
    sub_B170D4();
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    servantItemList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v13,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
}