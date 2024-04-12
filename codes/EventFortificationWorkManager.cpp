void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_42B1DE3 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1118/*"1B2FA5"*/);
    sub_B52984(&StringLiteral_1113/*"11814B"*/);
    sub_B52984(&StringLiteral_1633/*"A51B1B"*/);
    byte_42B1DE3 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_327DDC0;
  v9 = (System_Int32_array **)StringLiteral_1633/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1633/*"A51B1B"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeMilitsry, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1118/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1118/*"1B2FA5"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeInternal, v10, v11, v12, v13, v14, v15, v16);
  v17 = (System_Int32_array **)StringLiteral_1113/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1113/*"11814B"*/;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.colorCodeFarmming, v17, v18, v19, v20, v21, v22, v23);
  this->fields.colorCodeA = 156;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventFortificationWorkManager__CreateItem(
        EventFortificationWorkManager_o *this,
        System_Collections_Generic_List_EventFortificationDetailEntity__o *eventFortificationDetailEntities,
        System_Action_int__o *onClick,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v22; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v29; // x21
  const MethodInfo *v30; // x1

  if ( (byte_42B1DDB & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_EventFortificationDetailEntity___ctor__);
    sub_B52984(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_B52984(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_B52984(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_B52984(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_42B1DDB = 1;
  }
  v7 = sub_B52A54(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  EventFortificationWorkManager___c__DisplayClass29_0___ctor(
    (EventFortificationWorkManager___c__DisplayClass29_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = onClick;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)onClick, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v22,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v22;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.servantItemList,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v29,
    (Il2CppObject *)v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_EventFortificationDetailEntity___ctor__);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_B52A5C(v8, v9);
  System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex___ForEach(
    (System_Collections_Generic_List_USFGOSetAudioGroupIndexConditional_WeightIndex__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v29,
    (const MethodInfo_2FF231C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v30);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkManager_o *v4; // x20
  struct System_Collections_Generic_List_EventFortificationWorkItem__o *servantItemList; // x23
  int size; // w21
  unsigned int v7; // w22

  v4 = this;
  if ( (byte_42B1DDD & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    this = (EventFortificationWorkManager_o *)sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_42B1DDD = 1;
  }
  servantItemList = v4->fields.servantItemList;
  if ( !servantItemList )
    goto LABEL_12;
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    do
    {
      if ( servantItemList->fields._size <= v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      this = (EventFortificationWorkManager_o *)servantItemList->fields._items->m_Items[v7];
      if ( !this )
        break;
      if ( this->fields.bgSpriteOffSetWidth == index )
        return (EventFortificationWorkItem_o *)this;
      if ( (int)++v7 >= size )
        return 0LL;
      servantItemList = v4->fields.servantItemList;
    }
    while ( servantItemList );
LABEL_12:
    sub_B52A5C(this, *(_QWORD *)&index);
  }
  return 0LL;
}


void __fastcall EventFortificationWorkManager__ModifyItem(
        EventFortificationWorkManager_o *this,
        UserServantEntity_o *userServantEntity,
        int32_t eventId,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x22
  _DWORD *monitor; // x23
  int v10; // w24
  unsigned int v11; // w25
  EventFortificationWorkItem_o *v12; // x23
  System_Action_int__o *v13; // x24
  const MethodInfo *v14; // x5

  v8 = (Il2CppObject *)this;
  if ( (byte_42B1DDF & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    this = (EventFortificationWorkManager_o *)sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_42B1DDF = 1;
  }
  monitor = v8[11].monitor;
  if ( !monitor )
LABEL_12:
    sub_B52A5C(this, userServantEntity);
  v10 = monitor[6];
  if ( v10 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( monitor[6] <= v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v12 = *(EventFortificationWorkItem_o **)(*((_QWORD *)monitor + 2) + 8LL * (int)v11 + 32);
      if ( !v12 )
        goto LABEL_12;
      if ( v12->fields.position == index )
        break;
      if ( (int)++v11 >= v10 )
        return;
      monitor = v8[11].monitor;
      if ( !monitor )
        goto LABEL_12;
    }
    v13 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
    System_Action_int____ctor(
      v13,
      v8,
      Method_EventFortificationWorkManager_OnClickItem__,
      (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
    EventFortificationWorkItem__SetServantInfo(v12, userServantEntity, eventId, index, v13, v14);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v7; // x20
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v11; // w28
  SetSvtInfo_o *v12; // x24
  UserServantEntity_o *v13; // x22
  WebViewManager_o *v14; // x0
  __int64 v15; // x1
  EventFortificationSvtMaster_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x5
  UserServantEntity_o *v19; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v20; // x0
  __int64 v21; // x1
  __int128 v22; // q1
  UserServantEntity_o *v23; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // kr00_16
  EventFortificationSvtEntity_o *v26; // x8
  UserServantEntity_o *v27; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // kr10_16
  WebViewManager_o *v29; // x0
  __int64 v30; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v31; // x0
  __int64 v32; // x1
  UserServantEntity_o *v33; // x23
  UserServantEntity_o *v34; // x22
  __int64 v35; // x0
  __int64 v36; // x1
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // kr20_16
  UserServantEntity_o *v39; // x8
  __int64 v40; // x22
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v42; // x0
  __int64 v43; // x1
  __int128 v44; // q1
  UserServantEntity_o *v45; // x23
  int32_t v46; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // kr30_16
  UserServantEntity_o *v48; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // kr40_16
  UserServantEntity_o *v50; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v53; // x25
  const MethodInfo *v54; // x5
  _BOOL8 v55; // x0
  __int64 v56; // x1
  const MethodInfo *v57; // x1
  __int64 v58; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+20h] [xbp-A0h] BYREF
  EventFortificationSvtEntity_o *v61; // [xsp+40h] [xbp-80h] BYREF
  UserServantEntity_o *v62; // [xsp+48h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+50h] [xbp-70h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_42B1DDE & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_B52984(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B52984(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&UserServantEntity_TypeInfo);
    byte_42B1DDE = 1;
  }
  entity = 0LL;
  memset(&v63, 0, sizeof(v63));
  v61 = 0LL;
  v62 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           Instance,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                      (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_92:
    sub_B52A5C(Instance, v4);
  }
  v7 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v60,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.servantItemList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  v63.fields.current = (Il2CppObject *)v60.fields.fakeValue;
  *(_OWORD *)&v63.fields.list = *(_OWORD *)&v60.fields.currentCryptoKey;
  while ( 1 )
  {
    v55 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v63,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v55 )
      break;
    if ( !entity )
      sub_B52A5C(v55, v56);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_B52A5C(v55, v56);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v63.fields.current;
      v11 = 0;
LABEL_20:
      if ( v11 >= max_length )
      {
        v58 = sub_B52A88(v55);
        sub_B52A28(v58, 0LL);
      }
      v12 = setSvtInfos->m_Items[v11];
      if ( !v12 )
        sub_B52A5C(v55, v56);
      if ( !current )
        sub_B52A5C(v55, v56);
      if ( v12->fields.position != current->fields.position )
        goto LABEL_68;
      v13 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v13, 0LL);
      v62 = v13;
      if ( v12->fields.type )
      {
        v14 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v14 )
          sub_B52A5C(0LL, v15);
        v16 = (EventFortificationSvtMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)v14,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_B52A5C(v16, v17);
        if ( !v16 )
          sub_B52A5C(0LL, v17);
        if ( EventFortificationSvtMaster__TryGetEntity(
               v16,
               &v61,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v12->fields.position,
               v18) )
        {
          v19 = v62;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v20 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v59, 0LL, 0LL);
          v60 = v59;
          if ( !v19 )
            sub_B52A5C(v20, v21);
          v22 = *(_OWORD *)&v60.fields.fakeValue;
          *(_OWORD *)&v19->fields.userId.fields.currentCryptoKey = *(_OWORD *)&v60.fields.currentCryptoKey;
          *(_OWORD *)&v19->fields.userId.fields.fakeValue = v22;
          v23 = v62;
          svtId = v12->fields.svtId;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          }
          v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v23 )
            sub_B52A5C(*(_QWORD *)&v25.fields.currentCryptoKey, *(_QWORD *)&v25.fields.fakeValue);
          v23->fields.svtId = v25;
          v26 = v61;
          if ( !v61 )
            sub_B52A5C(*(_QWORD *)&v25.fields.currentCryptoKey, *(_QWORD *)&v25.fields.fakeValue);
          v27 = v62;
          if ( !v62 )
            sub_B52A5C(*(_QWORD *)&v25.fields.currentCryptoKey, *(_QWORD *)&v25.fields.fakeValue);
          v62->fields.lv = v61->fields.lv;
          v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v26->fields.limitCount, 0LL);
          v27->fields.limitCount = v28;
          if ( !v62 )
            sub_B52A5C(*(_QWORD *)&v28.fields.currentCryptoKey, *(_QWORD *)&v28.fields.fakeValue);
          v62->fields.exceedCount = 0;
        }
      }
      else
      {
        v29 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v29 )
          sub_B52A5C(0LL, v30);
        v31 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                       (DataManager_o *)v29,
                                                                                       (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v31 )
          sub_B52A5C(0LL, v32);
        DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
          v31,
          &v62,
          v12->fields.userSvtId,
          (const MethodInfo_23E255C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v7 || !EventEntity__IsEventPeriod(v7, 0LL, 0LL) )
        {
          v33 = v62;
          if ( v62 )
          {
            v34 = (UserServantEntity_o *)sub_B52A54(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_21495500(v34, v33, 0LL);
            v62 = v34;
            if ( !v34 )
              sub_B52A5C(v35, v36);
            v34->fields.lv = v12->fields.lv;
            iconLimitCount = v12->fields.iconLimitCount;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v34->fields.iconLimitCount = v38;
            v39 = v62;
            if ( !v62 )
              sub_B52A5C(*(_QWORD *)&v38.fields.currentCryptoKey, *(_QWORD *)&v38.fields.fakeValue);
          }
          else
          {
            if ( !v12->fields.svtId )
              goto LABEL_67;
            v40 = sub_B52A54(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v40, 0LL);
            v62 = (UserServantEntity_o *)v40;
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
            v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v59, UserId, 0LL);
            v60 = v59;
            if ( !v40 )
              sub_B52A5C(v42, v43);
            v44 = *(_OWORD *)&v60.fields.fakeValue;
            *(_OWORD *)(v40 + 48) = *(_OWORD *)&v60.fields.currentCryptoKey;
            *(_OWORD *)(v40 + 64) = v44;
            v45 = v62;
            v46 = v12->fields.svtId;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v46, 0LL);
            if ( !v45 )
              sub_B52A5C(*(_QWORD *)&v47.fields.currentCryptoKey, *(_QWORD *)&v47.fields.fakeValue);
            v45->fields.svtId = v47;
            v48 = v62;
            if ( !v62 )
              sub_B52A5C(*(_QWORD *)&v47.fields.currentCryptoKey, *(_QWORD *)&v47.fields.fakeValue);
            v62->fields.lv = v12->fields.lv;
            v49 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v12->fields.iconLimitCount, 0LL);
            v48->fields.iconLimitCount = v49;
            v39 = v62;
            if ( !v62 )
              sub_B52A5C(*(_QWORD *)&v49.fields.currentCryptoKey, *(_QWORD *)&v49.fields.fakeValue);
          }
          v39->fields.exceedCount = v12->fields.exceedCount;
        }
      }
LABEL_67:
      v50 = v62;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v53 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v53,
        (Il2CppObject *)this,
        Method_EventFortificationWorkManager_OnClickItem__,
        (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
      EventFortificationWorkItem__SetServantInfo(current, v50, eventId, position, v53, v54);
LABEL_68:
      max_length = setSvtInfos->max_length;
      if ( (int)++v11 >= max_length )
        continue;
      goto LABEL_20;
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v63,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v57);
}


void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_42B1DDC & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_42B1DDC = 1;
  }
  Item = EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
      onClick,
      (BlankEarth_QAARotateEarthResponse_o *)Item,
      (const MethodInfo_2D61674 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v5; // x1
  struct FortificationOrganizationPanelComponent_o *v6; // x8
  struct ItemIconComponent_o *v7; // x20
  System_Action_o *v8; // x21
  System_Action_o *v9; // x2

  if ( (byte_42B1DE1 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DE1 = 1;
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
      v9 = 0LL;
      goto LABEL_12;
    }
LABEL_13:
    sub_B52A5C(itemIcon, v5);
  }
  v6 = this->fields.orgPanel;
  if ( !v6 )
    goto LABEL_13;
  v6->fields.isTouchEnabled = 0;
  v7 = this->fields.itemIcon;
  v8 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v7 )
    goto LABEL_13;
  itemIcon = v7;
  v9 = v8;
LABEL_12:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v9, 0LL);
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
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v4; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *servantItemList; // x0
  int v6; // w23
  const MethodInfo *v7; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  Il2CppObject *v12; // x19
  Il2CppObject *v13; // x22
  Il2CppObject *v14; // x0
  int v15; // [xsp+Ch] [xbp-54h] BYREF
  int v16; // [xsp+10h] [xbp-50h] BYREF
  int32_t nowPoint; // [xsp+14h] [xbp-4Ch] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_42B1DE2 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_6475/*"FORTIFICATION_POINT_INFO"*/);
    byte_42B1DE2 = 1;
  }
  memset(&v18, 0, sizeof(v18));
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
      &v18,
      servantItemList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v6 = 0;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v18.fields.current )
        sub_B52A5C(0LL, v7);
      v6 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v18.fields.current, v7);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_20;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v10 = this->fields.pointLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6475/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v16 = maxFortificationPoint;
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
    v15 = v6;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
    servantItemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)System_String__Format_44569380(v11, v12, v13, v14, 0LL);
    if ( !v10 )
LABEL_20:
      sub_B52A5C(servantItemList, v4);
    UILabel__set_text(v10, (System_String_o *)servantItemList, 0LL);
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
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
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
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int64_t Instance; // x0
  const MethodInfo *v34; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v35; // x23
  System_Action_int__o *v36; // x24
  const MethodInfo *v37; // x3
  int64_t v38; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v40; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v42; // x8
  System_String_o **v43; // x8
  UserEventFortificationMaster_o *MasterData_WarQuestSelectionMaster; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v46; // s0
  UnityEngine_Object_o *v47; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v49; // x22
  Il2CppObject *v50; // x23
  Il2CppObject *v51; // x0
  System_String_o *v52; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v55; // x22
  Il2CppObject *v56; // x23
  Il2CppObject *v57; // x0
  System_String_o *v58; // x23
  int32_t size; // w10
  int32_t v60; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v63; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v65; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v67; // x1
  UISprite_o *v68; // x21
  __int64 v69; // x0
  int32_t v70; // [xsp+Ch] [xbp-64h] BYREF
  UnityEngine_Color_o color; // [xsp+10h] [xbp-60h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+20h] [xbp-50h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_42B1DDA & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_int___ctor__);
    sub_B52984(&System_Action_int__TypeInfo);
    sub_B52984(&AtlasManager_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_B52984(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&StringLiteral_4586/*"D2"*/);
    sub_B52984(&StringLiteral_22412/*"spot_info_gauge_l"*/);
    sub_B52984(&StringLiteral_22410/*"spot_info_gauge_base"*/);
    sub_B52984(&StringLiteral_19485/*"icon_event_{0}{1}"*/);
    sub_B52984(&StringLiteral_18671/*"event_organizationbg_{0}{1}"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_22414/*"spot_info_window"*/);
    sub_B52984(&StringLiteral_19790/*"img_terminal_itembg"*/);
    byte_42B1DDA = 1;
  }
  entity = 0LL;
  entities = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.eventFortificationEntity,
    (System_Int32_array **)eventFortificationEntity,
    *(System_String_array ***)&eventId,
    (System_String_array **)onClick,
    (System_Boolean_array **)orgPanel,
    (System_Int32_array **)terminalAtlas,
    (System_Int32_array *)method,
    v7);
  this->fields.onClick = onClick;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.onClick,
    (System_Int32_array **)onClick,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.orgPanel,
    (System_Int32_array **)orgPanel,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.terminalAtlas = terminalAtlas;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.terminalAtlas,
    (System_Int32_array **)terminalAtlas,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_117;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v35 = entities;
  v36 = (System_Action_int__o *)sub_B52A54(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v36,
    (Il2CppObject *)this,
    Method_EventFortificationWorkManager_OnClickItem__,
    (const MethodInfo_26261F0 *)Method_System_Action_int___ctor__);
  EventFortificationWorkManager__CreateItem(this, v35, v36, v37);
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_117;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_117;
  v38 = Instance;
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
  if ( !*(_DWORD *)(v38 + 24) )
    goto LABEL_118;
  v40 = *(int32_t **)(v38 + 32);
  if ( !v40 )
    goto LABEL_117;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_117;
  ItemIconComponent__SetGift((ItemIconComponent_o *)Instance, v40[5], v40[6], v40[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v38 + 24) )
    {
      v42 = *(_QWORD *)(v38 + 32);
      if ( !v42 )
        goto LABEL_117;
      if ( *(_DWORD *)(v42 + 20) != 1 )
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
        v43 = (System_String_o **)&StringLiteral_19790/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_34:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_117;
        v43 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v43, 0LL);
      goto LABEL_37;
    }
LABEL_118:
    v69 = sub_B52A88(Instance);
    sub_B52A28(v69, 0LL);
  }
LABEL_37:
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_117;
  MasterData_WarQuestSelectionMaster = (UserEventFortificationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                           (DataManager_o *)Instance,
                                                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
      v46 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_57;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v47 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v47, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_117;
      v46 = 0.0;
LABEL_57:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v46, 0LL);
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
    v49 = this->fields.workTypeIcon;
    v70 = eventId;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    v51 = (Il2CppObject *)System_Int32__ToString_39387012(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4586/*"D2"*/,
                            0LL);
    v52 = System_String__Format_44563852((System_String_o *)StringLiteral_19485/*"icon_event_{0}{1}"*/, v50, v51, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28377220(eventId, v49, v52, 0LL);
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
  EventFortificationWorkManager__SetPointText(this, v34);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v55 = this->fields.bgSprite;
    v70 = eventId;
    v56 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    v57 = (Il2CppObject *)System_Int32__ToString_39387012(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4586/*"D2"*/,
                            0LL);
    v58 = System_String__Format_44563852((System_String_o *)StringLiteral_18671/*"event_organizationbg_{0}{1}"*/, v56, v57, 0LL);
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    Instance = AtlasManager__SetEventUI_28377220(eventId, v55, v58, 0LL);
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
      v60 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v60;
      }
      else
      {
        if ( !Instance )
          goto LABEL_117;
        bgSpriteWidth = v60 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
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
  v63 = this->fields.itemBgSprite;
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_28377220(eventId, v63, (System_String_o *)StringLiteral_22414/*"spot_info_window"*/, 0LL);
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
    sub_B52A5C(Instance, v34);
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
    v65 = this->fields.gaugeSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28377220(eventId, v65, (System_String_o *)StringLiteral_22412/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v68 = this->fields.gaugeBaseSprite;
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__SetEventUI_28377220(eventId, v68, (System_String_o *)StringLiteral_22410/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v67);
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
  __int64 v7; // x1
  UnityEngine_Component_o *gameObject; // x0
  int m_CachedPtr; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v12; // w21
  float v13; // s8
  unsigned int v14; // s0
  int v15; // w22
  float v16; // s9
  unsigned int v17; // s0
  float v18; // s10
  float v19; // s1
  float v20; // s11
  float v21; // s8
  UnityEngine_Transform_o *transform; // x20
  int v23; // s0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B1DE0 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B1DE0 = 1;
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
          v12 = gameObject[6].fields.m_CachedPtr;
          v13 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v14 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_42;
          v15 = gameObject[6].fields.m_CachedPtr;
          v16 = *(float *)&v14;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_42;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_42;
          v17 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v18 = *(float *)&v17;
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
          *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_42;
          v20 = v19;
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
          v21 = (float)(v13 * (float)m_CachedPtr) + (float)addWidthForIcon;
          v26.fields.x = -(float)((float)((float)(v18 * (float)v15) * 0.5)
                                - (float)((float)((float)(v18 * (float)v15) - (float)(v21 + (float)(v16 * (float)v12)))
                                        * 0.5));
          v26.fields.z = 0.0;
          v26.fields.y = v20;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v26, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL),
                *(UnityEngine_Vector3_o *)&v23 = UnityEngine_Vector3__get_zero(0LL),
                !transform)
            || (UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)&v23, 0LL),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0LL)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL)) == 0LL )
          {
LABEL_42:
            sub_B52A5C(gameObject, v7);
          }
          v27.fields.x = v21;
          v27.fields.y = 0.0;
          v27.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v27, 0LL);
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
    sub_B52A5C(this, method);
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
  struct EventFortificationWorkManager_o *_4__this; // x8
  UnityEngine_UI_Dropdown_DropdownItem_o *eventFortificationWorkItemObj; // x21
  struct EventFortificationWorkManager_o *v7; // x8
  EventFortificationWorkItem_o *v8; // x21
  struct EventFortificationWorkManager_o *v9; // x8
  struct EventFortificationWorkManager_o *v10; // x8
  struct EventFortificationWorkManager_o *v11; // x8

  v4 = this;
  if ( (byte_42AD8D9 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_B52984(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD8D9 = 1;
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
                                                                    (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_17;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_17;
  v8 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_17;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v7->fields.orgPanel, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_17;
  if ( !ent )
    goto LABEL_17;
  EventFortificationWorkItem__SetServantInfo(v8, 0LL, v9->fields.eventId, ent->fields.position, v4->fields.onClick, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v8,
                                                                    0LL);
  v10 = v4->fields.__4__this;
  if ( !v10
    || (GameObjectExtensions__SetParent_32090952((UnityEngine_GameObject_o *)this, v10->fields.ItemObjRoot, 0LL),
        (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                           (UnityEngine_Component_o *)v8,
                                                                           0LL)) == 0LL)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v11 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v11->fields.servantItemList) == 0LL )
  {
LABEL_17:
    sub_B52A5C(this, ent);
  }
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)this,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
}