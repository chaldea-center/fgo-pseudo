void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5EF40 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_1411/*"1B2FA5"*/);
    sub_1B885B0(&StringLiteral_1406/*"11814B"*/);
    sub_1B885B0(&StringLiteral_1964/*"A51B1B"*/);
    byte_4A5EF40 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_BB4E90;
  v5 = StringLiteral_1964/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1964/*"A51B1B"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeMilitsry, v5, v2, v3);
  v6 = StringLiteral_1411/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1411/*"1B2FA5"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeInternal, v6, v7, v8);
  v9 = StringLiteral_1406/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1406/*"11814B"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeFarmming, v9, v10, v11);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_Action_object__o *v17; // x21
  const MethodInfo *v18; // x1

  if ( (byte_4A5EF38 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_EventFortificationDetailEntity__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
    sub_1B885B0(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__);
    sub_1B885B0(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
    byte_4A5EF38 = 1;
  }
  v7 = sub_1B887FC(EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo);
  EventFortificationWorkManager___c__DisplayClass29_0___ctor(
    (EventFortificationWorkManager___c__DisplayClass29_0_o *)v7,
    0LL);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 24) = onClick;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)onClick, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.servantItemList, (int32_t)v14, v15, v16);
  v17 = (System_Action_object__o *)sub_1B887FC(System_Action_EventFortificationDetailEntity__TypeInfo);
  System_Action_object____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0LL);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1B8880C(v8, v9);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v17,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v18);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v7; // w21

  if ( (byte_4A5EF3A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4A5EF3A = 1;
  }
  result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v7 = 0;
    do
    {
      result = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 v7,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( m_CancellationTokenSource == ++v7 )
        return 0LL;
      result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1B8880C(result, *(_QWORD *)&index);
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
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w25
  int32_t v11; // w23
  EventFortificationWorkItem_o *v12; // x24
  System_Action_int__o *v13; // x23
  const MethodInfo *v14; // x5

  if ( (byte_4A5EF3C & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
    byte_4A5EF3C = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1B8880C(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v11,
                                                                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      v12 = (EventFortificationWorkItem_o *)servantItemList;
      if ( servantItemList[3].fields._size == index )
        break;
      if ( size == ++v11 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    v13 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
    System_Action_int____ctor(v13, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
    EventFortificationWorkItem__SetServantInfo(v12, userServantEntity, eventId, index, v13, v14);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v13; // w28
  SetSvtInfo_o *v14; // x24
  UserServantEntity_o *v15; // x22
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v21; // x0
  __int64 v22; // x1
  Il2CppObject v23; // q0
  Il2CppObject *v24; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // kr00_16
  EventFortificationSvtEntity_o *v27; // x8
  Il2CppObject *v28; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // kr10_16
  Il2CppObject *v30; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  __int64 v33; // x1
  Il2CppObject *v34; // x23
  UserServantEntity_o *v35; // x22
  __int64 v36; // x0
  __int64 v37; // x1
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // kr20_16
  Il2CppObject *v40; // x8
  __int64 v41; // x22
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v43; // x0
  __int64 v44; // x1
  __int128 v45; // q0
  Il2CppObject *v46; // x23
  int32_t v47; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // kr30_16
  Il2CppObject *v49; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // kr40_16
  Il2CppObject *v51; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v54; // x25
  const MethodInfo *v55; // x5
  const MethodInfo *v56; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v59; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v60; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5EF3B & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_EventMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1B885B0(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&UserServantEntity_TypeInfo);
    byte_4A5EF3B = 1;
  }
  entity = 0LL;
  memset(&v61, 0, sizeof(v61));
  v59 = 0LL;
  v60 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  eventFortificationEntity = this->fields.eventFortificationEntity;
  if ( !eventFortificationEntity || !MasterData_object )
    goto LABEL_85;
  if ( !UserEventFortificationMaster__TryGetEntity(
          (UserEventFortificationMaster_o *)MasterData_object,
          &entity,
          (int64_t)Instance,
          this->fields.eventId,
          eventFortificationEntity->fields.idx,
          0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_311D934 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_85:
    sub_1B8880C(Instance, v4);
  }
  v7 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v61.fields._list = *(_OWORD *)&v58.fields.currentCryptoKey;
  v61.fields._current = (Il2CppObject *)v58.fields.fakeValue;
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v61,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v8 )
      break;
    if ( !entity )
      sub_1B8880C(v8, v9);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1B8880C(v8, v9);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v61.fields._current;
      v13 = 0;
LABEL_19:
      if ( v13 >= max_length )
        sub_1B88814(v8, v9);
      v14 = setSvtInfos->m_Items[v13];
      if ( !v14 )
        sub_1B8880C(v8, v9);
      if ( !current )
        sub_1B8880C(v8, v9);
      if ( v14->fields.position != current->fields.position )
        goto LABEL_61;
      v15 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
      UserServantEntity___ctor(v15, 0LL);
      v60 = (Il2CppObject *)v15;
      if ( v14->fields.type )
      {
        v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v16 )
          sub_1B8880C(0LL, v17);
        v18 = DataManager__GetMasterData_object_(
                (DataManager_o *)v16,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1B8880C(v18, v19);
        if ( !v18 )
          sub_1B8880C(0LL, v19);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v18,
               &v59,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v14->fields.position,
               0LL) )
        {
          v20 = v60;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v57, 0LL, 0LL);
          v58 = v57;
          if ( !v20 )
            sub_1B8880C(v21, v22);
          v23 = *(Il2CppObject *)&v58.fields.fakeValue;
          v20[3] = *(Il2CppObject *)&v58.fields.currentCryptoKey;
          v20[4] = v23;
          v24 = v60;
          svtId = v14->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v24 )
            sub_1B8880C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          v24[5] = (Il2CppObject)v26;
          v27 = v59;
          if ( !v59 )
            sub_1B8880C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          v28 = v60;
          if ( !v60 )
            sub_1B8880C(*(_QWORD *)&v26.fields.currentCryptoKey, *(_QWORD *)&v26.fields.fakeValue);
          LODWORD(v60[16].klass) = v59->fields.lv;
          v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v27->fields.limitCount, 0LL);
          v28[6] = (Il2CppObject)v29;
          if ( !v60 )
            sub_1B8880C(*(_QWORD *)&v29.fields.currentCryptoKey, *(_QWORD *)&v29.fields.fakeValue);
          LODWORD(v60[18].monitor) = 0;
        }
      }
      else
      {
        v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v30 )
          sub_1B8880C(0LL, v31);
        v32 = DataManager__GetMasterData_object_(
                (DataManager_o *)v30,
                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v32 )
          sub_1B8880C(0LL, v33);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v32,
          &v60,
          v14->fields.userSvtId,
          (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v7 || !EventEntity__IsEventPeriod(v7, 0LL, 0LL) )
        {
          v34 = v60;
          if ( v60 )
          {
            v35 = (UserServantEntity_o *)sub_1B887FC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor_40192384(v35, (UserServantEntity_o *)v34, 0LL);
            v60 = (Il2CppObject *)v35;
            if ( !v35 )
              sub_1B8880C(v36, v37);
            v35->fields.lv = v14->fields.lv;
            iconLimitCount = v14->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v35->fields.iconLimitCount = v39;
            v40 = v60;
            if ( !v60 )
              sub_1B8880C(*(_QWORD *)&v39.fields.currentCryptoKey, *(_QWORD *)&v39.fields.fakeValue);
          }
          else
          {
            if ( !v14->fields.svtId )
              goto LABEL_60;
            v41 = sub_1B887FC(UserServantEntity_TypeInfo);
            UserServantEntity___ctor((UserServantEntity_o *)v41, 0LL);
            v60 = (Il2CppObject *)v41;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v57, UserId, 0LL);
            v58 = v57;
            if ( !v41 )
              sub_1B8880C(v43, v44);
            v45 = *(_OWORD *)&v58.fields.fakeValue;
            *(_OWORD *)(v41 + 48) = *(_OWORD *)&v58.fields.currentCryptoKey;
            *(_OWORD *)(v41 + 64) = v45;
            v46 = v60;
            v47 = v14->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v48 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v47, 0LL);
            if ( !v46 )
              sub_1B8880C(*(_QWORD *)&v48.fields.currentCryptoKey, *(_QWORD *)&v48.fields.fakeValue);
            v46[5] = (Il2CppObject)v48;
            v49 = v60;
            if ( !v60 )
              sub_1B8880C(*(_QWORD *)&v48.fields.currentCryptoKey, *(_QWORD *)&v48.fields.fakeValue);
            LODWORD(v60[16].klass) = v14->fields.lv;
            v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v14->fields.iconLimitCount, 0LL);
            v49[10] = (Il2CppObject)v50;
            v40 = v60;
            if ( !v60 )
              sub_1B8880C(*(_QWORD *)&v50.fields.currentCryptoKey, *(_QWORD *)&v50.fields.fakeValue);
          }
          LODWORD(v40[18].monitor) = v14->fields.exceedCount;
        }
      }
LABEL_60:
      v51 = v60;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v54 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
      System_Action_int____ctor(v54, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v51, eventId, position, v54, v55);
LABEL_61:
      max_length = setSvtInfos->max_length;
      if ( (int)++v13 >= max_length )
        continue;
      goto LABEL_19;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v61,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v56);
}


void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4A5EF39 & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_EventFortificationWorkItem___);
    byte_4A5EF39 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_2DD5858 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
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

  if ( (byte_4A5EF3E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF3E = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v9 = 0LL;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B8880C(itemIcon, v5);
  }
  v6 = this->fields.orgPanel;
  if ( !v6 )
    goto LABEL_12;
  v6->fields.isTouchEnabled = 0;
  v7 = this->fields.itemIcon;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v7 )
    goto LABEL_12;
  itemIcon = v7;
  v9 = v8;
LABEL_11:
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
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v6; // w23
  const MethodInfo *v7; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v10; // x20
  System_String_o *v11; // x21
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x19
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  Il2CppObject *v19; // x22
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  int v24; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-58h] BYREF
  int v26; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4A5EF3F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_6465/*"FORTIFICATION_POINT_INFO"*/);
    byte_4A5EF3F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      servantItemList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v6 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v25,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v25.fields._current )
        sub_1B8880C(0LL, v7);
      v6 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v25.fields._current, v7);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v10 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6465/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint, v12, v13, v14);
    v26 = maxFortificationPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v16, v17, v18);
    v24 = v6;
    v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v20, v21, v22);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_61721472(
                                                                     v11,
                                                                     v15,
                                                                     v19,
                                                                     v23,
                                                                     0LL);
    if ( !v10 )
LABEL_18:
      sub_1B8880C(servantItemList, v4);
    UILabel__set_text(v10, (System_String_o *)servantItemList, 0LL);
  }
}


void __fastcall EventFortificationWorkManager__SetServantFortificationWork(
        EventFortificationWorkManager_o *this,
        EventFortificationEntity_o *eventFortificationEntity,
        int32_t eventId,
        System_Action_EventFortificationWorkItem__o *onClick,
        FortificationOrganizationPanelComponent_o *orgPanel,
        UIAtlas_o *terminalAtlas,
        const MethodInfo *method)
{
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t Instance; // x0
  const MethodInfo *v21; // x1
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v22; // x23
  System_Action_int__o *v23; // x24
  const MethodInfo *v24; // x3
  int64_t v25; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v27; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v29; // x8
  System_String_o **v30; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v33; // s0
  UnityEngine_Object_o *v34; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UISprite_o *v39; // x22
  Il2CppObject *v40; // x23
  Il2CppObject *v41; // x0
  System_String_o *v42; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  UISprite_o *v48; // x22
  Il2CppObject *v49; // x23
  Il2CppObject *v50; // x0
  System_String_o *v51; // x23
  int32_t size; // w10
  int32_t v53; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v56; // x22
  const MethodInfo *v57; // x6
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v59; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v61; // x1
  UISprite_o *v62; // x21
  int32_t v63; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A5EF37 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_int__TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___);
    sub_1B885B0(&Method_EventFortificationWorkManager_OnClickItem__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_4987/*"D2"*/);
    sub_1B885B0(&StringLiteral_23435/*"spot_info_gauge_l"*/);
    sub_1B885B0(&StringLiteral_23433/*"spot_info_gauge_base"*/);
    sub_1B885B0(&StringLiteral_20149/*"icon_event_{0}{1}"*/);
    sub_1B885B0(&StringLiteral_19202/*"event_organizationbg_{0}{1}"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_23437/*"spot_info_window"*/);
    sub_1B885B0(&StringLiteral_20480/*"img_terminal_itembg"*/);
    byte_4A5EF37 = 1;
  }
  entities = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationEntity,
    (int32_t)eventFortificationEntity,
    eventId,
    (int32_t)onClick);
  this->fields.onClick = onClick;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onClick, (int32_t)onClick, v14, v15);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.orgPanel, (int32_t)orgPanel, v16, v17);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.terminalAtlas, (int32_t)terminalAtlas, v18, v19);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_100;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v22 = entities;
  v23 = (System_Action_int__o *)sub_1B887FC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v23, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
  EventFortificationWorkManager__CreateItem(this, v22, v23, v24);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_100;
  v25 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_101;
  if ( !*(_QWORD *)(Instance + 32) )
    goto LABEL_34;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v25 + 24) )
    goto LABEL_101;
  v27 = *(int32_t **)(v25 + 32);
  if ( !v27 )
    goto LABEL_100;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_100;
  ItemIconComponent__SetGift_38144896((ItemIconComponent_o *)Instance, v27[5], v27[6], v27[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v25 + 24) )
    {
      v29 = *(_QWORD *)(v25 + 32);
      if ( !v29 )
        goto LABEL_100;
      if ( *(_DWORD *)(v29 + 20) != 1 )
        goto LABEL_31;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0LL, 0LL) )
      {
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0LL);
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        v30 = (System_String_o **)&StringLiteral_20480/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        v30 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v30, 0LL);
      goto LABEL_34;
    }
LABEL_101:
    sub_1B88814(Instance, v21);
  }
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_100;
  Instance = UserEventFortificationMaster__TryGetEntity(
               (UserEventFortificationMaster_o *)MasterData_object,
               &entity,
               Instance,
               eventId,
               eventFortificationEntity->fields.idx,
               0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_100;
    this->fields.nowPoint = entity->fields.totalFortificationPoint;
    pointSlider = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__op_Inequality(pointSlider, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_100;
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_100;
      v33 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_51;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v34 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_100;
      v33 = 0.0;
LABEL_51:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v33, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v39 = this->fields.workTypeIcon;
    v63 = eventId;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v36, v37, v38);
    v41 = (Il2CppObject *)System_Int32__ToString_62512312(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4987/*"D2"*/,
                            0LL);
    v42 = System_String__Format_61721404((System_String_o *)StringLiteral_20149/*"icon_event_{0}{1}"*/, v40, v41, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, v39, v42, 0LL);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_100;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0LL);
  }
  EventFortificationWorkManager__SetPointText(this, v21);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v48 = this->fields.bgSprite;
    v63 = eventId;
    v49 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v63, v45, v46, v47);
    v50 = (Il2CppObject *)System_Int32__ToString_62512312(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4987/*"D2"*/,
                            0LL);
    v51 = System_String__Format_61721404((System_String_o *)StringLiteral_19202/*"event_organizationbg_{0}{1}"*/, v49, v50, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI_37859364(eventId, v48, v51, 0LL);
    if ( !entities )
      goto LABEL_100;
    size = entities->fields._size;
    if ( size <= 2 )
    {
      Instance = (int64_t)this->fields.bgSprite;
      if ( !Instance )
        goto LABEL_100;
      bgSpriteWidth = this->fields.bgSpriteWidth;
    }
    else
    {
      Instance = (int64_t)this->fields.bgSprite;
      v53 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v53;
      }
      else
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = v53 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_86;
  v56 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37859364(eventId, v56, (System_String_o *)StringLiteral_23437/*"spot_info_window"*/, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          v57) )
    goto LABEL_86;
  Instance = (int64_t)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_100:
    sub_1B8880C(Instance, v21);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_86:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v59 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, v59, (System_String_o *)StringLiteral_23435/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v62 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37859364(eventId, v62, (System_String_o *)StringLiteral_23433/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v61);
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
  int klass; // w20
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
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EF3D & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF3D = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0LL, 0LL) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0LL, 0LL) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0LL, 0LL) )
        {
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          klass = (int)gameObject[7].klass;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_40;
          addWidthForIcon = this->fields.addWidthForIcon;
          v12 = (int)gameObject[7].klass;
          v13 = *(float *)&localScale;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          v14 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v15 = (int)gameObject[7].klass;
          v16 = *(float *)&v14;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          v17 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v18 = *(float *)&v17;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          *(UnityEngine_Vector3_o *)(&v19 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v20 = v19;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          if ( !gameObject )
            goto LABEL_40;
          v21 = (float)(v13 * (float)klass) + (float)addWidthForIcon;
          v23.fields.x = -(float)((float)((float)(v18 * (float)v15) * 0.5)
                                - (float)((float)((float)(v18 * (float)v15) - (float)(v21 + (float)(v16 * (float)v12)))
                                        * 0.5));
          v23.fields.z = 0.0;
          v23.fields.y = v20;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0LL);
          gameObject = (UnityEngine_Component_o *)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                    (UnityEngine_GameObject_o *)gameObject,
                                                    0LL);
          v22 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4A55CE1 )
          {
            gameObject = (UnityEngine_Component_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          if ( !v22
            || (UnityEngine_Transform__set_localPosition(
                  v22,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL),
                (gameObject = (UnityEngine_Component_o *)this->fields.teamNameLabel) == 0LL)
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
            || (gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                          (UnityEngine_GameObject_o *)gameObject,
                                                          0LL)) == 0LL )
          {
LABEL_40:
            sub_1B8880C(gameObject, v7);
          }
          v24.fields.x = v21;
          v24.fields.y = 0.0;
          v24.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v24, 0LL);
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
    sub_1B8880C(this, method);
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
  Il2CppObject *eventFortificationWorkItemObj; // x20
  struct EventFortificationWorkManager_o *v7; // x8
  EventFortificationWorkItem_o *v8; // x20
  struct EventFortificationWorkManager_o *v9; // x8
  struct EventFortificationWorkManager_o *v10; // x8
  int32_t v11; // w2
  int32_t v12; // w3
  struct EventFortificationWorkManager_o *v13; // x8
  struct EventFortificationWorkManager_o *v14; // x8
  _QWORD *v15; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v17; // x8

  v4 = this;
  if ( (byte_4A5EF41 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5EF41 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v7 = v4->fields.__4__this;
  if ( !v7 )
    goto LABEL_19;
  v8 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_19;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v7->fields.orgPanel, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_19;
  if ( !ent )
    goto LABEL_19;
  EventFortificationWorkItem__SetServantInfo(v8, 0LL, v9->fields.eventId, ent->fields.position, v4->fields.onClick, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v8,
                                                                    0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_19;
  GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)this, v10->fields.ItemObjRoot, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v8,
                                                                    0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v13 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v13->fields.servantItemList) == 0LL
    || (v14 = this->fields.__4__this,
        v15 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v14) )
  {
LABEL_19:
    sub_1B8880C(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v17[4] = (EventFortificationWorkManager_c *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v8, v11, v12);
  }
}