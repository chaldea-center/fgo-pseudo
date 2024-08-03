void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  int32_t v8; // w1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A00154 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1412/*"1B2FA5"*/, method);
    sub_1B640C8(&StringLiteral_1407/*"11814B"*/, v5);
    sub_1B640C8(&StringLiteral_1966/*"A51B1B"*/, v6);
    byte_4A00154 = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_BA36A0;
  v7 = StringLiteral_1966/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1966/*"A51B1B"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeMilitsry, v7, v2, v3);
  v8 = StringLiteral_1412/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1412/*"1B2FA5"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeInternal, v8, v9, v10);
  v11 = StringLiteral_1407/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1407/*"11814B"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.colorCodeFarmming, v11, v12, v13);
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
  __int64 v12; // x22
  __int64 v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  __int64 v19; // x2
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x1
  __int64 v24; // x2
  System_Action_object__o *v25; // x21
  const MethodInfo *v26; // x1

  if ( (byte_4A0014C & 1) == 0 )
  {
    sub_1B640C8(&System_Action_EventFortificationDetailEntity__TypeInfo, eventFortificationDetailEntities);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v8);
    sub_1B640C8(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v9);
    sub_1B640C8(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v10);
    sub_1B640C8(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v11);
    byte_4A0014C = 1;
  }
  v12 = sub_1B64314(
          EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo,
          eventFortificationDetailEntities,
          onClick);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_6;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v12 + 24) = onClick;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v12 + 24), (int32_t)onClick, v16, v17);
  v20 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo,
                                                       v18,
                                                       v19);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v20;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.servantItemList, (int32_t)v20, v21, v22);
  v25 = (System_Action_object__o *)sub_1B64314(System_Action_EventFortificationDetailEntity__TypeInfo, v23, v24);
  System_Action_object____ctor(
    v25,
    (Il2CppObject *)v12,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0LL);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1B64324(v13);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v25,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v26);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v8; // w21

  if ( (byte_4A0014E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, *(_QWORD *)&index);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v5);
    byte_4A0014E = 1;
  }
  result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v8 = 0;
    do
    {
      result = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 v8,
                                                 (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( m_CancellationTokenSource == ++v8 )
        return 0LL;
      result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1B64324(result);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w25
  int32_t v14; // w23
  __int64 v15; // x1
  __int64 v16; // x2
  EventFortificationWorkItem_o *v17; // x24
  System_Action_int__o *v18; // x23
  const MethodInfo *v19; // x5

  if ( (byte_4A00150 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, userServantEntity);
    sub_1B640C8(&Method_EventFortificationWorkManager_OnClickItem__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v11);
    byte_4A00150 = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1B64324(servantItemList);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v14,
                                                                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      v17 = (EventFortificationWorkItem_o *)servantItemList;
      if ( servantItemList[3].fields._size == index )
        break;
      if ( size == ++v14 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    v18 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v15, v16);
    System_Action_int____ctor(v18, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
    EventFortificationWorkItem__SetServantInfo(v17, userServantEntity, eventId, index, v18, v19);
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
  DataManager_o *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  EventEntity_o *v23; // x20
  _BOOL8 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v30; // w28
  SetSvtInfo_o *v31; // x24
  UserServantEntity_o *v32; // x22
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  Il2CppObject *v37; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v38; // x0
  Il2CppObject v39; // q0
  Il2CppObject *v40; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v42; // kr00_16
  EventFortificationSvtEntity_o *v43; // x8
  Il2CppObject *v44; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // kr10_16
  Il2CppObject *v46; // x0
  Il2CppObject *v47; // x0
  Il2CppObject *v48; // x23
  UserServantEntity_o *v49; // x22
  __int64 v50; // x0
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // kr20_16
  Il2CppObject *v53; // x8
  __int64 v54; // x22
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v56; // x0
  __int128 v57; // q0
  Il2CppObject *v58; // x23
  int32_t v59; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // kr30_16
  Il2CppObject *v61; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v62; // kr40_16
  Il2CppObject *v63; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v66; // x25
  const MethodInfo *v67; // x5
  const MethodInfo *v68; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v71; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v72; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A0014F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_EventMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v8);
    sub_1B640C8(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v12);
    sub_1B640C8(&Method_EventFortificationWorkManager_OnClickItem__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v14);
    sub_1B640C8(&NetworkManager_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&UserServantEntity_TypeInfo, v19);
    byte_4A0014F = 1;
  }
  entity = 0LL;
  memset(&v73, 0, sizeof(v73));
  v71 = 0LL;
  v72 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_30D3EA4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_85:
    sub_1B64324(Instance);
  }
  v23 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v70,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v73.fields._list = *(_OWORD *)&v70.fields.currentCryptoKey;
  v73.fields._current = (Il2CppObject *)v70.fields.fakeValue;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v24 )
      break;
    if ( !entity )
      sub_1B64324(v24);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1B64324(v24);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v73.fields._current;
      v30 = 0;
LABEL_19:
      if ( v30 >= max_length )
        sub_1B6432C(v24, v25);
      v31 = setSvtInfos->m_Items[v30];
      if ( !v31 )
        sub_1B64324(v24);
      if ( !current )
        sub_1B64324(v24);
      if ( v31->fields.position != current->fields.position )
        goto LABEL_61;
      v32 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v25, v26);
      UserServantEntity___ctor(v32, 0LL);
      v72 = (Il2CppObject *)v32;
      if ( v31->fields.type )
      {
        v33 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v33 )
          sub_1B64324(0LL);
        v34 = DataManager__GetMasterData_object_(
                (DataManager_o *)v33,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1B64324(v34);
        if ( !v34 )
          sub_1B64324(0LL);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v34,
               &v71,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v31->fields.position,
               0LL) )
        {
          v37 = v72;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, 0LL, 0LL);
          v70 = v69;
          if ( !v37 )
            sub_1B64324(v38);
          v39 = *(Il2CppObject *)&v70.fields.fakeValue;
          v37[3] = *(Il2CppObject *)&v70.fields.currentCryptoKey;
          v37[4] = v39;
          v40 = v72;
          svtId = v31->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
          v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v40 )
            sub_1B64324(*(_QWORD *)&v42.fields.currentCryptoKey);
          v40[5] = (Il2CppObject)v42;
          v43 = v71;
          if ( !v71 )
            sub_1B64324(*(_QWORD *)&v42.fields.currentCryptoKey);
          v44 = v72;
          if ( !v72 )
            sub_1B64324(*(_QWORD *)&v42.fields.currentCryptoKey);
          LODWORD(v72[16].klass) = v71->fields.lv;
          v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v43->fields.limitCount, 0LL);
          v35 = *(_QWORD *)&v45.fields.fakeValue;
          v44[6] = (Il2CppObject)v45;
          if ( !v72 )
            sub_1B64324(*(_QWORD *)&v45.fields.currentCryptoKey);
          LODWORD(v72[18].monitor) = 0;
        }
      }
      else
      {
        v46 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v46 )
          sub_1B64324(0LL);
        v47 = DataManager__GetMasterData_object_(
                (DataManager_o *)v46,
                (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v47 )
          sub_1B64324(0LL);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v47,
          &v72,
          v31->fields.userSvtId,
          (const MethodInfo_30D40A4 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v23 || !EventEntity__IsEventPeriod(v23, 0LL, 0LL) )
        {
          v48 = v72;
          if ( v72 )
          {
            v49 = (UserServantEntity_o *)sub_1B64314(UserServantEntity_TypeInfo, v35, v36);
            UserServantEntity___ctor_39858792(v49, (UserServantEntity_o *)v48, 0LL);
            v72 = (Il2CppObject *)v49;
            if ( !v49 )
              sub_1B64324(v50);
            v49->fields.lv = v31->fields.lv;
            iconLimitCount = v31->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v52 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v35 = *(_QWORD *)&v52.fields.fakeValue;
            v49->fields.iconLimitCount = v52;
            v53 = v72;
            if ( !v72 )
              sub_1B64324(*(_QWORD *)&v52.fields.currentCryptoKey);
          }
          else
          {
            if ( !v31->fields.svtId )
              goto LABEL_60;
            v54 = sub_1B64314(UserServantEntity_TypeInfo, v35, v36);
            UserServantEntity___ctor((UserServantEntity_o *)v54, 0LL);
            v72 = (Il2CppObject *)v54;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            v56 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v69, UserId, 0LL);
            v70 = v69;
            if ( !v54 )
              sub_1B64324(v56);
            v57 = *(_OWORD *)&v70.fields.fakeValue;
            *(_OWORD *)(v54 + 48) = *(_OWORD *)&v70.fields.currentCryptoKey;
            *(_OWORD *)(v54 + 64) = v57;
            v58 = v72;
            v59 = v31->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            v60 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v59, 0LL);
            if ( !v58 )
              sub_1B64324(*(_QWORD *)&v60.fields.currentCryptoKey);
            v58[5] = (Il2CppObject)v60;
            v61 = v72;
            if ( !v72 )
              sub_1B64324(*(_QWORD *)&v60.fields.currentCryptoKey);
            LODWORD(v72[16].klass) = v31->fields.lv;
            v62 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v31->fields.iconLimitCount, 0LL);
            v35 = *(_QWORD *)&v62.fields.fakeValue;
            v61[10] = (Il2CppObject)v62;
            v53 = v72;
            if ( !v72 )
              sub_1B64324(*(_QWORD *)&v62.fields.currentCryptoKey);
          }
          LODWORD(v53[18].monitor) = v31->fields.exceedCount;
        }
      }
LABEL_60:
      v63 = v72;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v66 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v35, v36);
      System_Action_int____ctor(v66, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v63, eventId, position, v66, v67);
LABEL_61:
      max_length = setSvtInfos->max_length;
      if ( (int)++v30 >= max_length )
        continue;
      goto LABEL_19;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v68);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4A0014D & 1) == 0 )
  {
    sub_1B640C8(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index);
    byte_4A0014D = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_2D90A78 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
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

  if ( (byte_4A00152 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A00152 = 1;
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
      v12 = 0LL;
      goto LABEL_11;
    }
LABEL_12:
    sub_1B64324(itemIcon);
  }
  v9 = this->fields.orgPanel;
  if ( !v9 )
    goto LABEL_12;
  v9->fields.isTouchEnabled = 0;
  v10 = this->fields.itemIcon;
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v10 )
    goto LABEL_12;
  itemIcon = v10;
  v12 = v11;
LABEL_11:
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
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v12; // w23
  const MethodInfo *v13; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v16; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x19
  Il2CppObject *v19; // x22
  Il2CppObject *v20; // x0
  int v21; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF
  int v23; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4A00153 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v4);
    sub_1B640C8(&int_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_6437/*"FORTIFICATION_POINT_INFO"*/, v9);
    byte_4A00153 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      servantItemList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v12 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v22.fields._current )
        sub_1B64324(0LL);
      v12 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v22.fields._current, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v16 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v17 = LocalizationManager__Get((System_String_o *)StringLiteral_6437/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v23 = maxFortificationPoint;
    v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
    v21 = v12;
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_61389836(
                                                                     v17,
                                                                     v18,
                                                                     v19,
                                                                     v20,
                                                                     0LL);
    if ( !v16 )
LABEL_18:
      sub_1B64324(servantItemList);
    UILabel__set_text(v16, (System_String_o *)servantItemList, 0LL);
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
  __int64 v30; // x1
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int64_t Instance; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v41; // x23
  System_Action_int__o *v42; // x24
  const MethodInfo *v43; // x3
  __int64 v44; // x1
  int64_t v45; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v47; // x8
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v49; // x8
  System_String_o **v50; // x8
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v53; // s0
  UnityEngine_Object_o *v54; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  UISprite_o *v56; // x22
  Il2CppObject *v57; // x23
  Il2CppObject *v58; // x0
  System_String_o *v59; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  const MethodInfo *v61; // x1
  UnityEngine_Object_o *bgSprite; // x22
  UISprite_o *v63; // x22
  Il2CppObject *v64; // x23
  Il2CppObject *v65; // x0
  System_String_o *v66; // x23
  int32_t size; // w10
  int32_t v68; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v71; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  UISprite_o *v73; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v75; // x1
  UISprite_o *v76; // x21
  int32_t v77; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4A0014B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, eventFortificationEntity);
    sub_1B640C8(&AtlasManager_TypeInfo, v13);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v14);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v15);
    sub_1B640C8(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v16);
    sub_1B640C8(&Method_EventFortificationWorkManager_OnClickItem__, v17);
    sub_1B640C8(&int_TypeInfo, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v19);
    sub_1B640C8(&NetworkManager_TypeInfo, v20);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v21);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v22);
    sub_1B640C8(&StringLiteral_4964/*"D2"*/, v23);
    sub_1B640C8(&StringLiteral_23337/*"spot_info_gauge_l"*/, v24);
    sub_1B640C8(&StringLiteral_23335/*"spot_info_gauge_base"*/, v25);
    sub_1B640C8(&StringLiteral_20069/*"icon_event_{0}{1}"*/, v26);
    sub_1B640C8(&StringLiteral_19126/*"event_organizationbg_{0}{1}"*/, v27);
    sub_1B640C8(&StringLiteral_1/*""*/, v28);
    sub_1B640C8(&StringLiteral_23339/*"spot_info_window"*/, v29);
    sub_1B640C8(&StringLiteral_20399/*"img_terminal_itembg"*/, v30);
    byte_4A0014B = 1;
  }
  entities = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.eventFortificationEntity,
    (int32_t)eventFortificationEntity,
    eventId,
    (int32_t)onClick);
  this->fields.onClick = onClick;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.onClick, (int32_t)onClick, v32, v33);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.orgPanel, (int32_t)orgPanel, v34, v35);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.terminalAtlas, (int32_t)terminalAtlas, v36, v37);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_100;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v41 = entities;
  v42 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v39, v40);
  System_Action_int____ctor(v42, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
  EventFortificationWorkManager__CreateItem(this, v41, v42, v43);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_100;
  v45 = Instance;
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
  if ( !*(_DWORD *)(v45 + 24) )
    goto LABEL_101;
  v47 = *(int32_t **)(v45 + 32);
  if ( !v47 )
    goto LABEL_100;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_100;
  ItemIconComponent__SetGift_37829292((ItemIconComponent_o *)Instance, v47[5], v47[6], v47[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v45 + 24) )
    {
      v49 = *(_QWORD *)(v45 + 32);
      if ( !v49 )
        goto LABEL_100;
      if ( *(_DWORD *)(v49 + 20) != 1 )
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
        v50 = (System_String_o **)&StringLiteral_20399/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        v50 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v50, 0LL);
      goto LABEL_34;
    }
LABEL_101:
    sub_1B6432C(Instance, v44);
  }
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
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
      v53 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_51;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v54 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v54, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_100;
      v53 = 0.0;
LABEL_51:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v53, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v56 = this->fields.workTypeIcon;
    v77 = eventId;
    v57 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
    v58 = (Il2CppObject *)System_Int32__ToString_62180668(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4964/*"D2"*/,
                            0LL);
    v59 = System_String__Format_61389768((System_String_o *)StringLiteral_20069/*"icon_event_{0}{1}"*/, v57, v58, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(eventId, v56, v59, 0LL);
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
  EventFortificationWorkManager__SetPointText(this, v61);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v63 = this->fields.bgSprite;
    v77 = eventId;
    v64 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v77);
    v65 = (Il2CppObject *)System_Int32__ToString_62180668(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_4964/*"D2"*/,
                            0LL);
    v66 = System_String__Format_61389768((System_String_o *)StringLiteral_19126/*"event_organizationbg_{0}{1}"*/, v64, v65, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Instance = AtlasManager__SetEventUI_37544692(eventId, v63, v66, 0LL);
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
      v68 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v68;
      }
      else
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = v68 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_86;
  v71 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI_37544692(eventId, v71, (System_String_o *)StringLiteral_23339/*"spot_info_window"*/, 0LL);
  if ( !EventFortificationDataLogic__TryGetColorByWorkType(
          &color,
          this->fields.colorCodeMilitsry,
          this->fields.colorCodeInternal,
          this->fields.colorCodeFarmming,
          this->fields.colorCodeA,
          eventFortificationEntity->fields.workType,
          0LL) )
    goto LABEL_86;
  Instance = (int64_t)this->fields.itemBgSprite;
  if ( !Instance )
LABEL_100:
    sub_1B64324(Instance);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_86:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v73 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(eventId, v73, (System_String_o *)StringLiteral_23337/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v76 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventUI_37544692(eventId, v76, (System_String_o *)StringLiteral_23335/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v75);
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
  __int64 gameObject; // x0
  int v8; // w20
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
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A00151 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_4A00151 = 1;
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
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          v8 = *(_DWORD *)(gameObject + 168);
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          localScale = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.teamNameLabel;
          if ( !gameObject )
            goto LABEL_40;
          addWidthForIcon = this->fields.addWidthForIcon;
          v11 = *(_DWORD *)(gameObject + 168);
          v12 = *(float *)&localScale;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v13 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v14 = *(_DWORD *)(gameObject + 168);
          v15 = *(float *)&v13;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v16 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v17 = *(float *)&v16;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          *(UnityEngine_Vector3_o *)(&v18 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v19 = v18;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v20 = (float)(v12 * (float)v8) + (float)addWidthForIcon;
          v23.fields.x = -(float)((float)((float)(v17 * (float)v14) * 0.5)
                                - (float)((float)((float)(v17 * (float)v14) - (float)(v20 + (float)(v15 * (float)v11)))
                                        * 0.5));
          v23.fields.z = 0.0;
          v23.fields.y = v19;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v23, 0LL);
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v22 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_49F7111 )
          {
            gameObject = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v21);
            byte_49F7111 = 1;
          }
          if ( !v22
            || (UnityEngine_Transform__set_localPosition(
                  v22,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL),
                (gameObject = (__int64)this->fields.teamNameLabel) == 0)
            || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0
            || (gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL)) == 0 )
          {
LABEL_40:
            sub_1B64324(gameObject);
          }
          v24.fields.x = v20;
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
    sub_1B64324(this);
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
  Il2CppObject *eventFortificationWorkItemObj; // x20
  const MethodInfo *v10; // x3
  struct EventFortificationWorkManager_o *v11; // x8
  EventFortificationWorkItem_o *v12; // x20
  const MethodInfo *v13; // x5
  struct EventFortificationWorkManager_o *v14; // x8
  struct EventFortificationWorkManager_o *v15; // x8
  int32_t v16; // w2
  int32_t v17; // w3
  struct EventFortificationWorkManager_o *v18; // x8
  struct EventFortificationWorkManager_o *v19; // x8
  _QWORD *v20; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v22; // x8

  v4 = this;
  if ( (byte_4A00155 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A00155 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_19;
  v12 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_19;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v11->fields.orgPanel, v10);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_19;
  if ( !ent )
    goto LABEL_19;
  EventFortificationWorkItem__SetServantInfo(
    v12,
    0LL,
    v14->fields.eventId,
    ent->fields.position,
    v4->fields.onClick,
    v13);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v12,
                                                                    0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_19;
  GameObjectExtensions__SetParent_33381176((UnityEngine_GameObject_o *)this, v15->fields.ItemObjRoot, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v12,
                                                                    0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v18 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v18->fields.servantItemList) == 0LL
    || (v19 = this->fields.__4__this,
        v20 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v19) )
  {
LABEL_19:
    sub_1B64324(this);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v19->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v12,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v22[4] = (EventFortificationWorkManager_c *)v12;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v12, v16, v17);
  }
}