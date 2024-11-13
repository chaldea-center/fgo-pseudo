void __fastcall EventFortificationWorkManager___ctor(EventFortificationWorkManager_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  int64_t v13; // x1
  int64_t v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7

  if ( (byte_4B1A12F & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1407/*"1B2FA5"*/, method, v2);
    sub_1BCA7E0(&StringLiteral_1402/*"11814B"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1961/*"A51B1B"*/, v11, v12);
    byte_4B1A12F = 1;
  }
  *(_OWORD *)&this->fields.addWidthForIcon = xmmword_BD3050;
  v13 = StringLiteral_1961/*"A51B1B"*/;
  this->fields.colorCodeMilitsry = (struct System_String_o *)StringLiteral_1961/*"A51B1B"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeMilitsry, v13, v2, v3, v4, v5, v6, v7);
  v14 = StringLiteral_1407/*"1B2FA5"*/;
  this->fields.colorCodeInternal = (struct System_String_o *)StringLiteral_1407/*"1B2FA5"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeInternal, v14, v15, v16, v17, v18, v19, v20);
  v21 = StringLiteral_1402/*"11814B"*/;
  this->fields.colorCodeFarmming = (struct System_String_o *)StringLiteral_1402/*"11814B"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.colorCodeFarmming, v21, v22, v23, v24, v25, v26, v27);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x21
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_object__o *v45; // x21
  const MethodInfo *v46; // x1

  if ( (byte_4B1A127 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_EventFortificationDetailEntity__TypeInfo, eventFortificationDetailEntities, onClick);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__, v13, v14);
    sub_1BCA7E0(&EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo, v15, v16);
    byte_4B1A127 = 1;
  }
  v17 = sub_1BCAA2C(
          EventFortificationWorkManager___c__DisplayClass29_0_TypeInfo,
          eventFortificationDetailEntities,
          onClick,
          method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_6;
  *(_QWORD *)(v17 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 16), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 24) = onClick;
  sub_1BCA784((PartyOrganizationUtility_o *)(v17 + 24), (int64_t)onClick, v26, v27, v28, v29, v30, v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventFortificationWorkItem__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventFortificationWorkItem___ctor__);
  this->fields.servantItemList = (struct System_Collections_Generic_List_EventFortificationWorkItem__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.servantItemList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  v45 = (System_Action_object__o *)sub_1BCAA2C(System_Action_EventFortificationDetailEntity__TypeInfo, v42, v43, v44);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)v17,
    Method_EventFortificationWorkManager___c__DisplayClass29_0__CreateItem_b__0__,
    0LL);
  if ( !eventFortificationDetailEntities )
LABEL_6:
    sub_1BCAA3C(v18, v19);
  System_Collections_Generic_List_object___ForEach(
    (System_Collections_Generic_List_object__o *)eventFortificationDetailEntities,
    (System_Action_T__o *)v45,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_EventFortificationDetailEntity__ForEach__);
  EventFortificationWorkManager__ModifyItems(this, v46);
}


// local variable allocation has failed, the output may be wrong!
EventFortificationWorkItem_o *__fastcall EventFortificationWorkManager__GetItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  EventFortificationWorkItem_o *result; // x0
  int m_CancellationTokenSource; // w22
  int32_t v9; // w21

  if ( (byte_4B1A129 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__,
      *(_QWORD *)&index,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v5, v6);
    byte_4B1A129 = 1;
  }
  result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
  if ( !result )
    goto LABEL_10;
  m_CancellationTokenSource = (int)result->fields.m_CancellationTokenSource;
  if ( m_CancellationTokenSource >= 1 )
  {
    v9 = 0;
    do
    {
      result = (EventFortificationWorkItem_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)result,
                                                 v9,
                                                 (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !result )
        break;
      if ( result->fields.position == index )
        return result;
      if ( m_CancellationTokenSource == ++v9 )
        return 0LL;
      result = (EventFortificationWorkItem_o *)this->fields.servantItemList;
    }
    while ( result );
LABEL_10:
    sub_1BCAA3C(result, *(_QWORD *)&index);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int size; // w25
  int32_t v17; // w23
  __int64 v18; // x2
  __int64 v19; // x3
  EventFortificationWorkItem_o *v20; // x24
  System_Action_int__o *v21; // x23
  const MethodInfo *v22; // x5

  if ( (byte_4B1A12B & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, userServantEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&Method_EventFortificationWorkManager_OnClickItem__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Count__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__, v13, v14);
    byte_4B1A12B = 1;
  }
  servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
  if ( !servantItemList )
LABEL_10:
    sub_1BCAA3C(servantItemList, userServantEntity);
  size = servantItemList->fields._size;
  if ( size >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      servantItemList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                       servantItemList,
                                                                       v17,
                                                                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventFortificationWorkItem__get_Item__);
      if ( !servantItemList )
        goto LABEL_10;
      v20 = (EventFortificationWorkItem_o *)servantItemList;
      if ( servantItemList[3].fields._size == index )
        break;
      if ( size == ++v17 )
        return;
      servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
      if ( !servantItemList )
        goto LABEL_10;
    }
    v21 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, userServantEntity, v18, v19);
    System_Action_int____ctor(v21, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
    EventFortificationWorkItem__SetServantInfo(v20, userServantEntity, eventId, index, v21, v22);
  }
}


void __fastcall EventFortificationWorkManager__ModifyItems(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
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
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  DataManager_o *Instance; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  Il2CppObject *MasterData_object; // x20
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  __int64 v43; // x1
  EventEntity_o *v44; // x20
  _BOOL8 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  struct SetSvtInfo_array *setSvtInfos; // x26
  int max_length; // w8
  EventFortificationWorkItem_o *current; // x21
  unsigned int v52; // w28
  SetSvtInfo_o *v53; // x24
  UserServantEntity_o *v54; // x22
  Il2CppObject *v55; // x0
  __int64 v56; // x1
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  Il2CppObject *v62; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v63; // x0
  __int64 v64; // x1
  Il2CppObject v65; // q0
  Il2CppObject *v66; // x23
  int32_t svtId; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v68; // kr00_16
  EventFortificationSvtEntity_o *v69; // x8
  Il2CppObject *v70; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // kr10_16
  Il2CppObject *v72; // x0
  __int64 v73; // x1
  Il2CppObject *v74; // x0
  __int64 v75; // x1
  Il2CppObject *v76; // x23
  UserServantEntity_o *v77; // x22
  __int64 v78; // x0
  __int64 v79; // x1
  int32_t iconLimitCount; // w23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // kr20_16
  Il2CppObject *v82; // x8
  __int64 v83; // x22
  __int64 v84; // x1
  __int64 v85; // x1
  int64_t UserId; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *v87; // x0
  __int64 v88; // x1
  __int128 v89; // q0
  Il2CppObject *v90; // x23
  int32_t v91; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v92; // kr30_16
  Il2CppObject *v93; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v94; // kr40_16
  Il2CppObject *v95; // x22
  int32_t eventId; // w23
  int32_t position; // w24
  System_Action_int__o *v98; // x25
  const MethodInfo *v99; // x5
  const MethodInfo *v100; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v101; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v102; // [xsp+20h] [xbp-B0h] BYREF
  EventFortificationSvtEntity_o *v103; // [xsp+40h] [xbp-90h] BYREF
  Il2CppObject *v104; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+50h] [xbp-80h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B1A12A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationSvtMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v22, v23);
    sub_1BCA7E0(&Method_EventFortificationWorkManager_OnClickItem__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v30, v31);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&UserServantEntity_TypeInfo, v36, v37);
    byte_4B1A12A = 1;
  }
  entity = 0LL;
  memset(&v105, 0, sizeof(v105));
  v103 = 0LL;
  v104 = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_85;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v40);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v43);
  Instance = (DataManager_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventMaster___);
  if ( !Instance
    || (Instance = (DataManager_o *)DataMasterBase_object__object__int___GetEntity(
                                      (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                      this->fields.eventId,
                                      (const MethodInfo_31B2E40 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__),
        !this->fields.servantItemList) )
  {
LABEL_85:
    sub_1BCAA3C(Instance, v39);
  }
  v44 = (EventEntity_o *)Instance;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v102,
    (System_Collections_Generic_List_object__o *)this->fields.servantItemList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
  *(_OWORD *)&v105.fields._list = *(_OWORD *)&v102.fields.currentCryptoKey;
  v105.fields._current = (Il2CppObject *)v102.fields.fakeValue;
  while ( 1 )
  {
    v45 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v105,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__);
    if ( !v45 )
      break;
    if ( !entity )
      sub_1BCAA3C(v45, v46);
    setSvtInfos = entity->fields.setSvtInfos;
    if ( !setSvtInfos )
      sub_1BCAA3C(v45, v46);
    max_length = setSvtInfos->max_length;
    if ( max_length >= 1 )
    {
      current = (EventFortificationWorkItem_o *)v105.fields._current;
      v52 = 0;
LABEL_19:
      if ( v52 >= max_length )
        sub_1BCAA44(v45, v46);
      v53 = setSvtInfos->m_Items[v52];
      if ( !v53 )
        sub_1BCAA3C(v45, v46);
      if ( !current )
        sub_1BCAA3C(v45, v46);
      if ( v53->fields.position != current->fields.position )
        goto LABEL_61;
      v54 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v46, v47, v48);
      UserServantEntity___ctor(v54, 0LL);
      v104 = (Il2CppObject *)v54;
      if ( v53->fields.type )
      {
        v55 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v55 )
          sub_1BCAA3C(0LL, v56);
        v57 = DataManager__GetMasterData_object_(
                (DataManager_o *)v55,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationSvtMaster___);
        if ( !entity )
          sub_1BCAA3C(v57, v58);
        if ( !v57 )
          sub_1BCAA3C(0LL, v58);
        if ( EventFortificationSvtMaster__TryGetEntity(
               (EventFortificationSvtMaster_o *)v57,
               &v103,
               this->fields.eventId,
               entity->fields.fortificationIdx,
               v53->fields.position,
               0LL) )
        {
          v62 = v104;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v59);
          v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v101, 0LL, 0LL);
          v102 = v101;
          if ( !v62 )
            sub_1BCAA3C(v63, v64);
          v65 = *(Il2CppObject *)&v102.fields.fakeValue;
          v62[3] = *(Il2CppObject *)&v102.fields.currentCryptoKey;
          v62[4] = v65;
          v66 = v104;
          svtId = v53->fields.svtId;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v64);
          v68 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(svtId, 0LL);
          if ( !v66 )
            sub_1BCAA3C(*(_QWORD *)&v68.fields.currentCryptoKey, *(_QWORD *)&v68.fields.fakeValue);
          v66[5] = (Il2CppObject)v68;
          v69 = v103;
          if ( !v103 )
            sub_1BCAA3C(*(_QWORD *)&v68.fields.currentCryptoKey, *(_QWORD *)&v68.fields.fakeValue);
          v70 = v104;
          if ( !v104 )
            sub_1BCAA3C(*(_QWORD *)&v68.fields.currentCryptoKey, *(_QWORD *)&v68.fields.fakeValue);
          LODWORD(v104[16].klass) = v103->fields.lv;
          v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v69->fields.limitCount, 0LL);
          v59 = *(_QWORD *)&v71.fields.fakeValue;
          v70[6] = (Il2CppObject)v71;
          if ( !v104 )
            sub_1BCAA3C(*(_QWORD *)&v71.fields.currentCryptoKey, *(_QWORD *)&v71.fields.fakeValue);
          LODWORD(v104[18].monitor) = 0;
        }
      }
      else
      {
        v72 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !v72 )
          sub_1BCAA3C(0LL, v73);
        v74 = DataManager__GetMasterData_object_(
                (DataManager_o *)v72,
                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
        if ( !v74 )
          sub_1BCAA3C(0LL, v75);
        DataMasterBase_object__object__long___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)v74,
          &v104,
          v53->fields.userSvtId,
          (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
        if ( !v44 || !EventEntity__IsEventPeriod(v44, 0LL, 0LL) )
        {
          v76 = v104;
          if ( v104 )
          {
            v77 = (UserServantEntity_o *)sub_1BCAA2C(UserServantEntity_TypeInfo, v59, v60, v61);
            UserServantEntity___ctor_40923816(v77, (UserServantEntity_o *)v76, 0LL);
            v104 = (Il2CppObject *)v77;
            if ( !v77 )
              sub_1BCAA3C(v78, v79);
            v77->fields.lv = v53->fields.lv;
            iconLimitCount = v53->fields.iconLimitCount;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v79);
            v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(iconLimitCount, 0LL);
            v59 = *(_QWORD *)&v81.fields.fakeValue;
            v77->fields.iconLimitCount = v81;
            v82 = v104;
            if ( !v104 )
              sub_1BCAA3C(*(_QWORD *)&v81.fields.currentCryptoKey, *(_QWORD *)&v81.fields.fakeValue);
          }
          else
          {
            if ( !v53->fields.svtId )
              goto LABEL_60;
            v83 = sub_1BCAA2C(UserServantEntity_TypeInfo, v59, v60, v61);
            UserServantEntity___ctor((UserServantEntity_o *)v83, 0LL);
            v104 = (Il2CppObject *)v83;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
            UserId = NetworkManager__get_UserId(0LL);
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v85);
            v87 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit(&v101, UserId, 0LL);
            v102 = v101;
            if ( !v83 )
              sub_1BCAA3C(v87, v88);
            v89 = *(_OWORD *)&v102.fields.fakeValue;
            *(_OWORD *)(v83 + 48) = *(_OWORD *)&v102.fields.currentCryptoKey;
            *(_OWORD *)(v83 + 64) = v89;
            v90 = v104;
            v91 = v53->fields.svtId;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v88);
            v92 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v91, 0LL);
            if ( !v90 )
              sub_1BCAA3C(*(_QWORD *)&v92.fields.currentCryptoKey, *(_QWORD *)&v92.fields.fakeValue);
            v90[5] = (Il2CppObject)v92;
            v93 = v104;
            if ( !v104 )
              sub_1BCAA3C(*(_QWORD *)&v92.fields.currentCryptoKey, *(_QWORD *)&v92.fields.fakeValue);
            LODWORD(v104[16].klass) = v53->fields.lv;
            v94 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit(v53->fields.iconLimitCount, 0LL);
            v59 = *(_QWORD *)&v94.fields.fakeValue;
            v93[10] = (Il2CppObject)v94;
            v82 = v104;
            if ( !v104 )
              sub_1BCAA3C(*(_QWORD *)&v94.fields.currentCryptoKey, *(_QWORD *)&v94.fields.fakeValue);
          }
          LODWORD(v82[18].monitor) = v53->fields.exceedCount;
        }
      }
LABEL_60:
      v95 = v104;
      eventId = this->fields.eventId;
      position = current->fields.position;
      v98 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v59, v60, v61);
      System_Action_int____ctor(v98, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
      EventFortificationWorkItem__SetServantInfo(current, (UserServantEntity_o *)v95, eventId, position, v98, v99);
LABEL_61:
      max_length = setSvtInfos->max_length;
      if ( (int)++v52 >= max_length )
        continue;
      goto LABEL_19;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v105,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
  EventFortificationWorkManager__SetPointText(this, v100);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__OnClickItem(
        EventFortificationWorkManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  Il2CppObject *Item; // x0
  System_Action_T__o *onClick; // x8

  if ( (byte_4B1A128 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_EventFortificationWorkItem___, *(_QWORD *)&index, method);
    byte_4B1A128 = 1;
  }
  Item = (Il2CppObject *)EventFortificationWorkManager__GetItem(this, index, method);
  onClick = (System_Action_T__o *)this->fields.onClick;
  if ( onClick )
    ActionExtensions__Call_object_(
      onClick,
      Item,
      (const MethodInfo_2E65588 *)Method_ActionExtensions_Call_EventFortificationWorkItem___);
}


void __fastcall EventFortificationWorkManager__OnClickItemIcon(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *orgPanel; // x20
  ItemIconComponent_o *itemIcon; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  struct FortificationOrganizationPanelComponent_o *v13; // x8
  struct ItemIconComponent_o *v14; // x20
  System_Action_o *v15; // x21
  System_Action_o *v16; // x2

  if ( (byte_4B1A12D & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1A12D = 1;
  }
  orgPanel = (UnityEngine_Object_o *)this->fields.orgPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  itemIcon = (ItemIconComponent_o *)UnityEngine_Object__op_Inequality(orgPanel, 0LL, 0LL);
  if ( ((unsigned __int8)itemIcon & 1) == 0 )
  {
    itemIcon = this->fields.itemIcon;
    if ( itemIcon )
    {
      v16 = 0LL;
      goto LABEL_11;
    }
LABEL_12:
    sub_1BCAA3C(itemIcon, v10);
  }
  v13 = this->fields.orgPanel;
  if ( !v13 )
    goto LABEL_12;
  v13->fields.isTouchEnabled = 0;
  v14 = this->fields.itemIcon;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EventFortificationWorkManager__OnClickItemIcon_b__36_0__, 0LL);
  if ( !v14 )
    goto LABEL_12;
  itemIcon = v14;
  v16 = v15;
LABEL_11:
  ItemIconComponent__OnClickItem(itemIcon, 0LL, v16, 0LL);
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
  __int64 v2; // x2
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
  UnityEngine_Object_o *pointLabel; // x20
  __int64 v19; // x1
  System_Collections_Generic_List_object__o *servantItemList; // x0
  int v21; // w23
  const MethodInfo *v22; // x1
  struct EventFortificationEntity_o *eventFortificationEntity; // x8
  int maxFortificationPoint; // w22
  UILabel_o *v25; // x20
  System_String_o *v26; // x21
  Il2CppObject *v27; // x19
  Il2CppObject *v28; // x22
  Il2CppObject *v29; // x0
  int v30; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-58h] BYREF
  int v32; // [xsp+28h] [xbp-38h] BYREF
  int32_t nowPoint; // [xsp+2Ch] [xbp-34h] BYREF

  if ( (byte_4B1A12E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__get_Current__, v6, v7);
    sub_1BCA7E0(&int_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&StringLiteral_6584/*"FORTIFICATION_POINT_INFO"*/, v16, v17);
    byte_4B1A12E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  pointLabel = (UnityEngine_Object_o *)this->fields.pointLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(pointLabel, 0LL, 0LL) )
  {
    servantItemList = (System_Collections_Generic_List_object__o *)this->fields.servantItemList;
    if ( !servantItemList )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v31,
      servantItemList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventFortificationWorkItem__GetEnumerator__);
    v21 = 0;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v31,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__MoveNext__) )
    {
      if ( !v31.fields._current )
        sub_1BCAA3C(0LL, v22);
      v21 += EventFortificationWorkItem__get_AddPoint((EventFortificationWorkItem_o *)v31.fields._current, v22);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v31,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventFortificationWorkItem__Dispose__);
    eventFortificationEntity = this->fields.eventFortificationEntity;
    if ( !eventFortificationEntity )
      goto LABEL_18;
    maxFortificationPoint = eventFortificationEntity->fields.maxFortificationPoint;
    v25 = this->fields.pointLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6584/*"FORTIFICATION_POINT_INFO"*/, 0LL);
    nowPoint = this->fields.nowPoint;
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nowPoint);
    v32 = maxFortificationPoint;
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
    v30 = v21;
    v29 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v30);
    servantItemList = (System_Collections_Generic_List_object__o *)System_String__Format_62415660(
                                                                     v26,
                                                                     v27,
                                                                     v28,
                                                                     v29,
                                                                     0LL);
    if ( !v25 )
LABEL_18:
      sub_1BCAA3C(servantItemList, v19);
    UILabel__set_text(v25, (System_String_o *)servantItemList, 0LL);
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
  PartyListViewItem_o *v7; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  struct EventFortificationEntity_o **p_eventFortificationEntity; // x25
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t Instance; // x0
  const MethodInfo *v70; // x1
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Collections_Generic_List_EventFortificationDetailEntity__o *v74; // x23
  System_Action_int__o *v75; // x24
  const MethodInfo *v76; // x3
  int64_t v77; // x23
  UnityEngine_Object_o *itemIcon; // x24
  int32_t *v79; // x8
  __int64 v80; // x1
  UnityEngine_Object_o *frameSprite; // x24
  __int64 v82; // x8
  System_String_o **v83; // x8
  __int64 v84; // x1
  Il2CppObject *MasterData_object; // x22
  UnityEngine_Object_o *pointSlider; // x22
  float v87; // s0
  UnityEngine_Object_o *v88; // x22
  UnityEngine_Object_o *workTypeIcon; // x22
  __int64 v90; // x1
  UISprite_o *v91; // x22
  Il2CppObject *v92; // x23
  Il2CppObject *v93; // x0
  __int64 v94; // x1
  System_String_o *v95; // x23
  UnityEngine_Object_o *teamNameLabel; // x22
  __int64 v97; // x1
  UnityEngine_Object_o *bgSprite; // x22
  __int64 v99; // x1
  UISprite_o *v100; // x22
  Il2CppObject *v101; // x23
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  System_String_o *v104; // x23
  int32_t size; // w10
  int32_t v106; // w8
  int32_t bgSpriteWidth; // w1
  UnityEngine_Object_o *itemBgSprite; // x22
  UISprite_o *v109; // x22
  UnityEngine_Object_o *gaugeSprite; // x21
  __int64 v111; // x1
  UISprite_o *v112; // x21
  UnityEngine_Object_o *gaugeBaseSprite; // x21
  const MethodInfo *v114; // x1
  UISprite_o *v115; // x21
  int32_t v116; // [xsp+4h] [xbp-6Ch] BYREF
  UnityEngine_Color_o color; // [xsp+8h] [xbp-68h] BYREF
  UserEventFortificationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF
  System_Collections_Generic_List_EventFortificationDetailEntity__o *entities; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_4B1A126 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, eventFortificationEntity, *(_QWORD *)&eventId);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventFortificationDetailMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v18, v19);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEventFortificationMaster___, v20, v21);
    sub_1BCA7E0(&Method_EventFortificationWorkManager_OnClickItem__, v22, v23);
    sub_1BCA7E0(&int_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationDetailEntity__get_Count__, v26, v27);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v32, v33);
    sub_1BCA7E0(&StringLiteral_5060/*"D2"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_23683/*"spot_info_gauge_l"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_23681/*"spot_info_gauge_base"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_20362/*"icon_event_{0}{1}"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_19403/*"event_organizationbg_{0}{1}"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_23685/*"spot_info_window"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_20699/*"img_terminal_itembg"*/, v48, v49);
    byte_4B1A126 = 1;
  }
  entities = 0LL;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  this->fields.eventFortificationEntity = eventFortificationEntity;
  p_eventFortificationEntity = &this->fields.eventFortificationEntity;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventFortificationEntity,
    (int64_t)eventFortificationEntity,
    *(int64_t *)&eventId,
    (int32_t)onClick,
    (System_String_o *)orgPanel,
    (BattleSetupInfo_o *)terminalAtlas,
    (FollowerInfo_o *)method,
    v7);
  this->fields.onClick = onClick;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onClick, (int64_t)onClick, v51, v52, v53, v54, v55, v56);
  this->fields.eventId = eventId;
  this->fields.orgPanel = orgPanel;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.orgPanel, (int64_t)orgPanel, v57, v58, v59, v60, v61, v62);
  this->fields.terminalAtlas = terminalAtlas;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.terminalAtlas,
    (int64_t)terminalAtlas,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventFortificationDetailMaster___);
  if ( !eventFortificationEntity || !*p_eventFortificationEntity || !Instance )
    goto LABEL_100;
  if ( !EventFortificationDetailMaster__TryGetEntityList(
          (EventFortificationDetailMaster_o *)Instance,
          &entities,
          eventFortificationEntity->fields.eventId,
          (*p_eventFortificationEntity)->fields.idx,
          0LL) )
    return;
  v74 = entities;
  v75 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v71, v72, v73);
  System_Action_int____ctor(v75, (Il2CppObject *)this, Method_EventFortificationWorkManager_OnClickItem__, 0LL);
  EventFortificationWorkManager__CreateItem(this, v74, v75, v76);
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
  if ( !Instance )
    goto LABEL_100;
  Instance = (int64_t)GiftMaster__GetGiftListById(
                        (GiftMaster_o *)Instance,
                        eventFortificationEntity->fields.giftId,
                        0LL);
  if ( !Instance )
    goto LABEL_100;
  v77 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_101;
  if ( !*(_QWORD *)(Instance + 32) )
    goto LABEL_34;
  itemIcon = (UnityEngine_Object_o *)this->fields.itemIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
  Instance = UnityEngine_Object__op_Inequality(itemIcon, 0LL, 0LL);
  if ( (Instance & 1) == 0 )
    goto LABEL_34;
  if ( !*(_DWORD *)(v77 + 24) )
    goto LABEL_101;
  v79 = *(int32_t **)(v77 + 32);
  if ( !v79 )
    goto LABEL_100;
  Instance = (int64_t)this->fields.itemIcon;
  if ( !Instance )
    goto LABEL_100;
  ItemIconComponent__SetGift_38855180((ItemIconComponent_o *)Instance, v79[5], v79[6], v79[7], 0, 0LL);
  frameSprite = (UnityEngine_Object_o *)this->fields.frameSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  Instance = UnityEngine_Object__op_Inequality(frameSprite, 0LL, 0LL);
  if ( (Instance & 1) != 0 )
  {
    if ( *(_DWORD *)(v77 + 24) )
    {
      v82 = *(_QWORD *)(v77 + 32);
      if ( !v82 )
        goto LABEL_100;
      if ( *(_DWORD *)(v82 + 20) != 1 )
        goto LABEL_31;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)terminalAtlas, 0LL, 0LL) )
      {
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        UISprite__set_atlas((UISprite_o *)Instance, terminalAtlas, 0LL);
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        v83 = (System_String_o **)&StringLiteral_20699/*"img_terminal_itembg"*/;
      }
      else
      {
LABEL_31:
        Instance = (int64_t)this->fields.frameSprite;
        if ( !Instance )
          goto LABEL_100;
        v83 = (System_String_o **)&StringLiteral_1/*""*/;
      }
      UISprite__set_spriteName((UISprite_o *)Instance, *v83, 0LL);
      goto LABEL_34;
    }
LABEL_101:
    sub_1BCAA44(Instance, v70);
  }
LABEL_34:
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_100;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEventFortificationMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v84);
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
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    Instance = UnityEngine_Object__op_Inequality(pointSlider, 0LL, 0LL);
    if ( (Instance & 1) != 0 )
    {
      if ( !entity )
        goto LABEL_100;
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_100;
      v87 = (float)entity->fields.totalFortificationPoint
          / (float)eventFortificationEntity->fields.maxFortificationPoint;
      goto LABEL_51;
    }
  }
  else
  {
    this->fields.nowPoint = 0;
    v88 = (UnityEngine_Object_o *)this->fields.pointSlider;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    if ( UnityEngine_Object__op_Inequality(v88, 0LL, 0LL) )
    {
      Instance = (int64_t)this->fields.pointSlider;
      if ( !Instance )
        goto LABEL_100;
      v87 = 0.0;
LABEL_51:
      UIProgressBar__set_value((UIProgressBar_o *)Instance, v87, 0LL);
    }
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
  if ( UnityEngine_Object__op_Inequality(workTypeIcon, 0LL, 0LL) )
  {
    v91 = this->fields.workTypeIcon;
    v116 = eventId;
    v92 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
    v93 = (Il2CppObject *)System_Int32__ToString_63206828(
                            (int)eventFortificationEntity + 52,
                            (System_String_o *)StringLiteral_5060/*"D2"*/,
                            0LL);
    v95 = System_String__Format_62415592((System_String_o *)StringLiteral_20362/*"icon_event_{0}{1}"*/, v92, v93, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v94);
    AtlasManager__SetEventUI_38574572(eventId, v91, v95, 0LL);
  }
  teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90);
  if ( UnityEngine_Object__op_Inequality(teamNameLabel, 0LL, 0LL) )
  {
    Instance = (int64_t)this->fields.teamNameLabel;
    if ( !Instance )
      goto LABEL_100;
    UILabel__set_text((UILabel_o *)Instance, eventFortificationEntity->fields.name, 0LL);
  }
  EventFortificationWorkManager__SetPointText(this, v70);
  bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v97);
  if ( UnityEngine_Object__op_Inequality(bgSprite, 0LL, 0LL) )
  {
    v100 = this->fields.bgSprite;
    v116 = eventId;
    v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v116);
    v102 = (Il2CppObject *)System_Int32__ToString_63206828(
                             (int)eventFortificationEntity + 52,
                             (System_String_o *)StringLiteral_5060/*"D2"*/,
                             0LL);
    v104 = System_String__Format_62415592((System_String_o *)StringLiteral_19403/*"event_organizationbg_{0}{1}"*/, v101, v102, 0LL);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v103);
    Instance = AtlasManager__SetEventUI_38574572(eventId, v100, v104, 0LL);
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
      v106 = this->fields.bgSpriteWidth;
      if ( size == 3 )
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = this->fields.bgSpriteOffSetWidth + v106;
      }
      else
      {
        if ( !Instance )
          goto LABEL_100;
        bgSpriteWidth = v106 + this->fields.bgSpriteOffSetWidth2 * (size - 2);
      }
    }
    UIWidget__set_width((UIWidget_o *)Instance, bgSpriteWidth, 0LL);
  }
  itemBgSprite = (UnityEngine_Object_o *)this->fields.itemBgSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v99);
  if ( !UnityEngine_Object__op_Inequality(itemBgSprite, 0LL, 0LL) )
    goto LABEL_86;
  v109 = this->fields.itemBgSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v70);
  AtlasManager__SetEventUI_38574572(eventId, v109, (System_String_o *)StringLiteral_23685/*"spot_info_window"*/, 0LL);
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
    sub_1BCAA3C(Instance, v70);
  UIWidget__set_color((UIWidget_o *)Instance, color, 0LL);
LABEL_86:
  gaugeSprite = (UnityEngine_Object_o *)this->fields.gaugeSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
  if ( UnityEngine_Object__op_Inequality(gaugeSprite, 0LL, 0LL) )
  {
    v112 = this->fields.gaugeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v111);
    AtlasManager__SetEventUI_38574572(eventId, v112, (System_String_o *)StringLiteral_23683/*"spot_info_gauge_l"*/, 0LL);
  }
  gaugeBaseSprite = (UnityEngine_Object_o *)this->fields.gaugeBaseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v111);
  if ( UnityEngine_Object__op_Inequality(gaugeBaseSprite, 0LL, 0LL) )
  {
    v115 = this->fields.gaugeBaseSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v114);
    AtlasManager__SetEventUI_38574572(eventId, v115, (System_String_o *)StringLiteral_23681/*"spot_info_gauge_base"*/, 0LL);
  }
  EventFortificationWorkManager__WidthAdjustmentOfTitle(this, v114);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventFortificationWorkManager__WidthAdjustmentOfTitle(
        EventFortificationWorkManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *workTypeIcon; // x20
  __int64 v5; // x1
  UnityEngine_Object_o *teamNameLabel; // x20
  __int64 v7; // x1
  UnityEngine_Object_o *bgSprite; // x20
  __int64 v9; // x1
  UnityEngine_Object_o *titleRootObj; // x20
  __int64 v11; // x1
  __int64 gameObject; // x0
  int v13; // w20
  unsigned int localScale; // s0
  int32_t addWidthForIcon; // s12
  int v16; // w21
  float v17; // s8
  unsigned int v18; // s0
  int v19; // w22
  float v20; // s9
  unsigned int v21; // s0
  float v22; // s10
  float v23; // s1
  float v24; // s11
  float v25; // s8
  __int64 v26; // x2
  UnityEngine_Transform_o *v27; // x20
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A12C & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1A12C = 1;
  }
  workTypeIcon = (UnityEngine_Object_o *)this->fields.workTypeIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(workTypeIcon, 0LL, 0LL) )
  {
    teamNameLabel = (UnityEngine_Object_o *)this->fields.teamNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    if ( !UnityEngine_Object__op_Equality(teamNameLabel, 0LL, 0LL) )
    {
      bgSprite = (UnityEngine_Object_o *)this->fields.bgSprite;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      if ( !UnityEngine_Object__op_Equality(bgSprite, 0LL, 0LL) )
      {
        titleRootObj = (UnityEngine_Object_o *)this->fields.titleRootObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
        if ( !UnityEngine_Object__op_Equality(titleRootObj, 0LL, 0LL) )
        {
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          v13 = *(_DWORD *)(gameObject + 168);
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
          v16 = *(_DWORD *)(gameObject + 168);
          v17 = *(float *)&localScale;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v18 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.bgSprite;
          if ( !gameObject )
            goto LABEL_40;
          v19 = *(_DWORD *)(gameObject + 168);
          v20 = *(float *)&v18;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v21 = (unsigned int)UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)gameObject, 0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v22 = *(float *)&v21;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          *(UnityEngine_Vector3_o *)(&v23 - 1) = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)gameObject,
                                                   0LL);
          gameObject = (__int64)this->fields.titleRootObj;
          if ( !gameObject )
            goto LABEL_40;
          v24 = v23;
          gameObject = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          v25 = (float)(v17 * (float)v13) + (float)addWidthForIcon;
          v28.fields.x = -(float)((float)((float)(v22 * (float)v19) * 0.5)
                                - (float)((float)((float)(v22 * (float)v19) - (float)(v25 + (float)(v20 * (float)v16)))
                                        * 0.5));
          v28.fields.z = 0.0;
          v28.fields.y = v24;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gameObject, v28, 0LL);
          gameObject = (__int64)this->fields.workTypeIcon;
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( !gameObject )
            goto LABEL_40;
          gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
          v27 = (UnityEngine_Transform_o *)gameObject;
          if ( !byte_4B109C1 )
          {
            gameObject = sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v11, v26);
            byte_4B109C1 = 1;
          }
          if ( !v27
            || (UnityEngine_Transform__set_localPosition(
                  v27,
                  UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
                  0LL),
                (gameObject = (__int64)this->fields.teamNameLabel) == 0)
            || (gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0
            || (gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL)) == 0 )
          {
LABEL_40:
            sub_1BCAA3C(gameObject, v11);
          }
          v29.fields.x = v25;
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
    sub_1BCAA3C(this, method);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct EventFortificationWorkManager_o *_4__this; // x8
  Il2CppObject *eventFortificationWorkItemObj; // x20
  const MethodInfo *v13; // x3
  struct EventFortificationWorkManager_o *v14; // x8
  EventFortificationWorkItem_o *v15; // x20
  const MethodInfo *v16; // x5
  struct EventFortificationWorkManager_o *v17; // x8
  struct EventFortificationWorkManager_o *v18; // x8
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct EventFortificationWorkManager_o *v25; // x8
  struct EventFortificationWorkManager_o *v26; // x8
  _QWORD *v27; // x9
  __int64 onClick_low; // x10
  EventFortificationWorkManager_c **v29; // x8

  v4 = this;
  if ( (byte_4B1A130 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___, ent, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__, v5, v6);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v7, v8);
    this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    byte_4B1A130 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_19;
  eventFortificationWorkItemObj = (Il2CppObject *)_4__this->fields.eventFortificationWorkItemObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, ent);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Object__Instantiate_object_(
                                                                    eventFortificationWorkItemObj,
                                                                    (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !this )
    goto LABEL_19;
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventFortificationWorkItem___);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_19;
  v15 = (EventFortificationWorkItem_o *)this;
  if ( !this )
    goto LABEL_19;
  EventFortificationWorkItem__Init((EventFortificationWorkItem_o *)this, ent, v14->fields.orgPanel, v13);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_19;
  if ( !ent )
    goto LABEL_19;
  EventFortificationWorkItem__SetServantInfo(
    v15,
    0LL,
    v17->fields.eventId,
    ent->fields.position,
    v4->fields.onClick,
    v16);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v15,
                                                                    0LL);
  v18 = v4->fields.__4__this;
  if ( !v18 )
    goto LABEL_19;
  GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)this, v18->fields.ItemObjRoot, 0LL);
  this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)v15,
                                                                    0LL);
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL), (v25 = v4->fields.__4__this) == 0LL)
    || (this = (EventFortificationWorkManager___c__DisplayClass29_0_o *)v25->fields.servantItemList) == 0LL
    || (v26 = this->fields.__4__this,
        v27 = Method_System_Collections_Generic_List_EventFortificationWorkItem__Add__,
        ++HIDWORD(this->fields.onClick),
        !v26) )
  {
LABEL_19:
    sub_1BCAA3C(this, ent);
  }
  onClick_low = SLODWORD(this->fields.onClick);
  if ( (unsigned int)onClick_low >= LODWORD(v26->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)v15,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &v26->klass + onClick_low;
    LODWORD(this->fields.onClick) = onClick_low + 1;
    v29[4] = (EventFortificationWorkManager_c *)v15;
    sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), (int64_t)v15, v19, v20, v21, v22, v23, v24);
  }
}