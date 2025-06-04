void __fastcall GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4AFCEDF & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_4AFCEDF = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1BC2FAC(&this->fields.switchSkillUIList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4AFCEDA & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Clear__, method);
    byte_4AFCEDA = 1;
  }
  switchSkillInfo = this->fields.switchSkillInfo;
  if ( !switchSkillInfo )
    goto LABEL_10;
  SwitchUIWidgetComponent__Clear(switchSkillInfo, 0LL);
  switchSkillUIList = this->fields.switchSkillUIList;
  if ( !switchSkillUIList )
    goto LABEL_10;
  size = switchSkillUIList->fields._size;
  v6 = switchSkillUIList->fields._version + 1;
  switchSkillUIList->fields._size = 0;
  switchSkillUIList->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)switchSkillUIList->fields._items, 0, size, 0LL);
  switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.skillInfoUiWidget;
  if ( !switchSkillInfo
    || ((*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
          switchSkillInfo,
          switchSkillInfo->klass[1]._1.this_arg.data,
          0.0),
        (switchSkillInfo = (SwitchUIWidgetComponent_o *)this->fields.appendSkillInfoUiWidget) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(switchSkillInfo, method);
  }
  (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
    switchSkillInfo,
    switchSkillInfo->klass[1]._1.this_arg.data,
    0.0);
}


void __fastcall GrandServantListItemDraw__Initialize(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UISprite_o *backgroundSprite; // x20
  GrandServantListItemEquipDraw_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  __int64 v10; // x20
  int max_length; // w9

  if ( (byte_4AFCED9 & 1) == 0 )
  {
    sub_1BC3008(&AtlasManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_19426/*"formation_grand_framebg_1"*/, v3);
    sub_1BC3008(&StringLiteral_19425/*"formation_grand_frame_1"*/, v4);
    byte_4AFCED9 = 1;
  }
  backgroundSprite = this->fields.backgroundSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetGrandServantListImage(backgroundSprite, (System_String_o *)StringLiteral_19426/*"formation_grand_framebg_1"*/, 0LL);
  v6 = (GrandServantListItemEquipDraw_o *)AtlasManager__SetGrandServantListImage(
                                            this->fields.frameSprite,
                                            (System_String_o *)StringLiteral_19425/*"formation_grand_frame_1"*/,
                                            0LL);
  equipDraws = this->fields.equipDraws;
  if ( !equipDraws )
LABEL_11:
    sub_1BC3264(v6, v7);
  v10 = 0LL;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v10 >= max_length )
      break;
    if ( (unsigned int)v10 >= max_length )
      sub_1BC326C(v6, v7, v8);
    v6 = equipDraws->m_Items[v10];
    if ( v6 )
    {
      GrandServantListItemEquipDraw__Initialize(v6, v10, v8);
      equipDraws = this->fields.equipDraws;
      ++v10;
      if ( equipDraws )
        continue;
    }
    goto LABEL_11;
  }
}


void __fastcall GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_1BC3264(0LL, method);
  UINarrowFigureTexture__ReleaseCharacter(servantNarrowTexture, 0LL);
}


void __fastcall GrandServantListItemDraw__SetUpEventUp(
        GrandServantListItemDraw_o *this,
        UserServantEntity_o *userServantEntity,
        UserServantEntity_array *equipUserServantEntities,
        const MethodInfo *method)
{
  UserServantEntity_o *v5; // x29
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
  __int64 Instance; // x0
  __int64 v34; // x1
  System_Collections_Generic_HashSet_int__o *EventValUpEventIdHash; // x0
  System_Int32_array *v36; // x21
  EventUpValSetupInfo_o *v37; // x26
  System_Array_o *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x8
  unsigned __int64 v41; // x19
  UserServantEntity_o *v42; // x27
  __int64 v43; // x23
  __int64 v44; // x24
  __int128 v45; // q0
  Il2CppObject *Master_object; // x23
  System_Collections_Generic_List_object__o *v47; // x22
  Il2CppObject *MasterData_object; // x0
  __int64 v49; // x27
  __int64 v50; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v51; // x25
  struct System_Int32_array *eventIdList; // x19
  __int64 v53; // x8
  ServantEntity_o *v54; // x25
  unsigned __int64 v55; // x21
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o *p_userId; // x24
  int32_t v57; // w26
  __int128 v58; // q0
  int64_t v59; // x27
  int32_t SvtId; // w4
  int32_t BuddyPoint; // w27
  UserServantEntity_o *v62; // x25
  int32_t v63; // w0
  EventServantPointRankEntity_o *EnableEntity; // x0
  int32_t v65; // w29
  EventMargeItemUpValInfo_o *v66; // x28
  EventPersonalMargeUpValInfo_o *v67; // x27
  int v68; // w8
  __int64 v69; // x26
  unsigned int v70; // w27
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x0
  EventMargeItemUpValInfo_array *AddUpValInfos; // x0
  __int64 v76; // x23
  __int64 v77; // x24
  EventMargeItemUpValInfo_array *v78; // x22
  int32_t v79; // w23
  int32_t v80; // w20
  GrandServantListItemDraw___c_c *v81; // x0
  System_Predicate_long__o *_9__21_0; // x24
  Il2CppObject *v83; // x25
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  System_Int64_array *All_long; // x0
  GrandServantListItemDraw___c_c *v86; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v87; // x21
  System_Func_long__int__o *_9__21_1; // x24
  Il2CppObject *v89; // x25
  struct GrandServantListItemDraw___c_StaticFields *v90; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  GrandServantListItemDraw_o *v92; // [xsp+0h] [xbp-F0h]
  ServantEntity_o *v93; // [xsp+8h] [xbp-E8h]
  UserEventServantPointMaster_o *v94; // [xsp+10h] [xbp-E0h]
  System_Int64_array *equipIds; // [xsp+18h] [xbp-D8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+20h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+40h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+60h] [xbp-90h]
  UserEventServantPointEntity_o *entity; // [xsp+80h] [xbp-70h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+88h] [xbp-68h] BYREF
  System_RuntimeFieldHandle_o v101; // 0:w1.4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v102; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v103; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v104; // 0:x0.16

  v5 = userServantEntity;
  if ( (byte_4AFCEDC & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_FindAll_long___, userServantEntity);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v10);
    sub_1BC3008(&DataManager_TypeInfo, v11);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_long__int___, v13);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_1BC3008(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1BC3008(&EventPersonalMargeUpValInfo_TypeInfo, v16);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v17);
    sub_1BC3008(&System_Func_long__int__TypeInfo, v18);
    sub_1BC3008(&long___TypeInfo, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v22);
    sub_1BC3008(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v23);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_1BC3008(&System_Predicate_long__TypeInfo, v26);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BC3008(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_1BC3008(
      &Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6,
      v29);
    sub_1BC3008(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_0__, v30);
    sub_1BC3008(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_1__, v31);
    sub_1BC3008(&GrandServantListItemDraw___c_TypeInfo, v32);
    byte_4AFCEDC = 1;
  }
  entity = 0LL;
  eventUpVallInfo = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v92 = this;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_80;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40756148(v37, v36, 0, 0, 0, 0LL);
  v38 = (System_Array_o *)sub_1BC30B0(long___TypeInfo, 3LL);
  v101.fields.value = Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6;
  equipIds = (System_Int64_array *)v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63047724(v38, v101, 0LL);
  if ( !equipUserServantEntities )
    goto LABEL_80;
  v40 = *(_QWORD *)&equipUserServantEntities->max_length;
  if ( (int)v40 >= 1 )
  {
    v41 = 0LL;
    while ( v41 < (unsigned int)v40 )
    {
      v42 = equipUserServantEntities->m_Items[v41];
      if ( v42 )
      {
        v44 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
        v43 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v102.fields.currentCryptoKey = v44;
        *(_QWORD *)&v102.fields.fakeValue = v43;
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v102, 0LL);
        if ( (Instance & 0x80000000) == 0 )
        {
          v45 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v98.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v97 = v98;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v97, 0LL);
          if ( !equipIds )
            goto LABEL_80;
          if ( v41 >= equipIds->max_length )
            break;
          equipIds->m_Items[v41] = Instance;
        }
      }
      LODWORD(v40) = equipUserServantEntities->max_length;
      if ( (__int64)++v41 >= (int)v40 )
        goto LABEL_19;
    }
LABEL_81:
    sub_1BC326C(Instance, v34, v39);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_80;
  UserServantEntity__getEventUpVal_42146552(v5, &eventUpVallInfo, v37, equipIds, 0LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v94 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  v50 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v50;
  *(_QWORD *)&v103.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v103, 0LL);
  if ( !v51 )
    goto LABEL_80;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v51,
                        Instance,
                        (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( !v37 )
    goto LABEL_80;
  eventIdList = v37->fields.eventIdList;
  if ( !eventIdList )
    goto LABEL_80;
  v53 = *(_QWORD *)&eventIdList->max_length;
  if ( (int)v53 >= 1 )
  {
    v54 = (ServantEntity_o *)Instance;
    v55 = 0LL;
    p_userId = &v5->fields.userId;
    v93 = (ServantEntity_o *)Instance;
    while ( 1 )
    {
      if ( v55 >= (unsigned int)v53 )
        goto LABEL_81;
      if ( !Master_object )
        goto LABEL_80;
      v57 = eventIdList->m_Items[v55 + 1];
      if ( EventServantPointRankMaster__IsEnableEvent((EventServantPointRankMaster_o *)Master_object, v57, 0LL) )
      {
        v58 = *(_OWORD *)&p_userId->fields.fakeValue;
        *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&p_userId->fields.currentCryptoKey;
        *(_OWORD *)&v98.fields.fakeValue = v58;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        v96 = v98;
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48027584(&v96, 0LL);
        SvtId = UserServantEntity__getSvtId(v5, 0LL);
        Instance = (__int64)v94;
        if ( !v94 )
          goto LABEL_80;
        if ( UserEventServantPointMaster__TryGetEntity(v94, &entity, v59, v57, SvtId, 0LL) )
        {
          Instance = (__int64)entity;
          if ( !entity )
            goto LABEL_80;
          BuddyPoint = UserEventServantPointEntity__GetBuddyPoint(entity, 0LL);
        }
        else
        {
          BuddyPoint = 0;
        }
        v62 = v5;
        v63 = UserServantEntity__getSvtId(v5, 0LL);
        EnableEntity = EventServantPointRankMaster__GetEnableEntity(
                         (EventServantPointRankMaster_o *)Master_object,
                         v57,
                         BuddyPoint,
                         v63,
                         0LL);
        v65 = EnableEntity ? EnableEntity->fields.svtPointRank : 0;
        v66 = (EventMargeItemUpValInfo_o *)sub_1BC3254(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_40736328(v66, v57, 0LL);
        if ( !v66 )
          goto LABEL_80;
        EventMargeItemUpValInfo__SetServantPointInfo(v66, BuddyPoint, v65, 0, 0LL);
        if ( !v47 )
          goto LABEL_80;
        System_Collections_Generic_List_object___Insert(
          v47,
          0,
          (Il2CppObject *)v66,
          (const MethodInfo_36A1BF0 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        v5 = v62;
        v54 = v93;
      }
      v67 = (EventPersonalMargeUpValInfo_o *)sub_1BC3254(EventPersonalMargeUpValInfo_TypeInfo);
      EventPersonalMargeUpValInfo___ctor(v67, v57, v54, 0LL);
      Instance = (__int64)eventUpVallInfo;
      if ( !eventUpVallInfo )
        goto LABEL_80;
      Instance = (__int64)EventUpValInfo__GetDropItemList(eventUpVallInfo, 0, 0LL);
      if ( !v67 )
        goto LABEL_80;
      EventPersonalMargeUpValInfo__Add(v67, (EventDropItemUpValInfo_array *)Instance, 0LL);
      Instance = EventPersonalMargeUpValInfo__IsEmpty(v67, 0LL);
      if ( (Instance & 1) == 0 )
      {
        Instance = (__int64)EventPersonalMargeUpValInfo__GetList(v67, 0LL);
        if ( !Instance )
          goto LABEL_80;
        v68 = *(_DWORD *)(Instance + 24);
        v69 = Instance;
        if ( v68 >= 1 )
          break;
      }
LABEL_61:
      LODWORD(v53) = eventIdList->max_length;
      if ( (__int64)++v55 >= (int)v53 )
        goto LABEL_62;
    }
    v70 = 0;
    while ( v70 < v68 )
    {
      v34 = *(_QWORD *)(v69 + 8LL * (int)v70 + 32);
      if ( !v34 )
        goto LABEL_80;
      if ( *(_DWORD *)(v34 + 60) != 111 )
      {
        if ( !v47 )
          goto LABEL_80;
        items = v47->fields._items;
        v72 = Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__;
        ++v47->fields._version;
        if ( !items )
          goto LABEL_80;
        size = v47->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v47,
            (Il2CppObject *)v34,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v47->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v34;
          Instance = sub_1BC2FAC(v74 + 4);
        }
      }
      v68 = *(_DWORD *)(v69 + 24);
      if ( (int)++v70 >= v68 )
        goto LABEL_61;
    }
    goto LABEL_81;
  }
LABEL_62:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38E0168 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  AddUpValInfos = PartyOrganizationUtility__GetAddUpValInfos(
                    (PartyOrganizationUtility_o *)Instance,
                    (System_Collections_Generic_IEnumerable_EventMargeItemUpValInfo__o *)v47,
                    0LL);
  v77 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
  v76 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
  v78 = AddUpValInfos;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v104.fields.currentCryptoKey = v77;
  *(_QWORD *)&v104.fields.fakeValue = v76;
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v104, 0LL);
  Instance = (__int64)UserServantEntity__GetOverwriteStatus(v5, 0LL, 0LL);
  if ( !Instance )
    goto LABEL_80;
  v80 = *(_DWORD *)(Instance + 24);
  v81 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v81 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__21_0 = v81->static_fields->__9__21_0;
  if ( !_9__21_0 )
  {
    if ( !v81->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v81);
      v81 = GrandServantListItemDraw___c_TypeInfo;
    }
    v83 = (Il2CppObject *)v81->static_fields->__9;
    _9__21_0 = (System_Predicate_long__o *)sub_1BC3254(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__21_0, v83, Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_0__, 0LL);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = _9__21_0;
    sub_1BC2FAC(&static_fields->__9__21_0);
  }
  All_long = System_Array__FindAll_long_(
               equipIds,
               (System_Predicate_T__o *)_9__21_0,
               (const MethodInfo_30FE660 *)Method_System_Array_FindAll_long___);
  v86 = GrandServantListItemDraw___c_TypeInfo;
  v87 = (System_Collections_Generic_IEnumerable_TSource__o *)All_long;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v86 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__21_1 = v86->static_fields->__9__21_1;
  if ( !_9__21_1 )
  {
    if ( !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86);
      v86 = GrandServantListItemDraw___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v86->static_fields->__9;
    _9__21_1 = (System_Func_long__int__o *)sub_1BC3254(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__21_1, v89, Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_1__, 0LL);
    v90 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v90->__9__21_1 = _9__21_1;
    sub_1BC2FAC(&v90->__9__21_1);
  }
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v87,
                                                               (System_Func_TSource__TResult__o *)_9__21_1,
                                                               (const MethodInfo_3034B10 *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                        v91,
                        (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v92->fields.eventUpValIcon )
LABEL_80:
    sub_1BC3264(Instance, v34);
  EventUpValIconComponent__Set_39914336(v92->fields.eventUpValIcon, v78, (System_Int32_array *)Instance, v79, v80, 0LL);
}


void __fastcall GrandServantListItemDraw__Setup(
        GrandServantListItemDraw_o *this,
        GrandServantListSlotData_o *slotData,
        const MethodInfo *method)
{
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
  __int64 OverwriteStatus; // x0
  Il2CppObject *skillInfoUiWidget; // x1
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x21
  struct UserServantEntity_array *EquipUserServantEntities_k__BackingField; // x22
  __int64 v21; // x28
  __int64 v22; // x29
  _DWORD *v23; // x25
  int32_t CardImageLimitCount; // w26
  Il2CppObject *Master_object; // x27
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x27
  int32_t v28; // w26
  int32_t FrameType; // w0
  ServantClassIconComponent_o *servantClassIcon; // x27
  int32_t v31; // w26
  UILabel_o *levelLabel; // x26
  int v33; // w24
  int32_t AtkBoostValue; // w26
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  GrandServantListItemDraw___c_c *v36; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x27
  System_Func_object__int__o *_9__20_0; // x28
  Il2CppObject *v39; // x29
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v41; // w0
  const MethodInfo *v42; // x3
  int v43; // w29
  int32_t HpBoostValue; // w25
  System_Collections_Generic_IEnumerable_T__o *v45; // x26
  GrandServantListItemDraw___c_c *v46; // x8
  System_Func_object__int__o *_9__20_1; // x27
  Il2CppObject *v48; // x28
  struct GrandServantListItemDraw___c_StaticFields *v49; // x0
  int32_t v50; // w0
  const MethodInfo *v51; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x25
  SkillInfo_array *v53; // x26
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  AppendSkillListComponent_o *appendSkillList; // x25
  SkillInfo_array *v59; // x26
  __int64 v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x25
  ServantCommandCardListComponent_o *svtCommandCardList; // x25
  int32_t v66; // w23
  __int64 v67; // x2
  const MethodInfo *v68; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  il2cpp_array_size_t v70; // w23
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v72; // w10
  const MethodInfo *v73; // x3
  __int64 v74; // [xsp+0h] [xbp-90h]
  __int64 v75; // [xsp+8h] [xbp-88h]
  SkillInfo_array *v76; // [xsp+10h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4AFCEDB & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_ExcludeNull_UserServantEntity___, slotData);
    sub_1BC3008(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BC3008(&DataManager_TypeInfo, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v7);
    sub_1BC3008(&System_Func_UserServantEntity__int__TypeInfo, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__Add__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BC3008(&Method_GrandServantListItemDraw___c__Setup_b__20_0__, v13);
    sub_1BC3008(&Method_GrandServantListItemDraw___c__Setup_b__20_1__, v14);
    sub_1BC3008(&GrandServantListItemDraw___c_TypeInfo, v15);
    sub_1BC3008(&UserServantEntity___TypeInfo, v16);
    byte_4AFCEDB = 1;
  }
  tdInfo = 0LL;
  skillInfoList = 0LL;
  v76 = 0LL;
  GrandServantListItemDraw__Clear(this, (const MethodInfo *)slotData);
  if ( !slotData )
    goto LABEL_69;
  UserServantEntity_k__BackingField = slotData->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = slotData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    OverwriteStatus = sub_1BC30B0(UserServantEntity___TypeInfo, 0LL);
    EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)OverwriteStatus;
  }
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_69;
  v21 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  OverwriteStatus = (__int64)UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0LL, 0LL);
  lv = UserServantEntity_k__BackingField->fields.lv;
  if ( !OverwriteStatus )
    goto LABEL_69;
  v23 = (_DWORD *)OverwriteStatus;
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(UserServantEntity_k__BackingField, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v80.fields.currentCryptoKey = v21;
  *(_QWORD *)&v80.fields.fakeValue = v22;
  OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v80, 0LL);
  if ( !Master_object )
    goto LABEL_69;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 OverwriteStatus,
                                 CardImageLimitCount,
                                 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  v28 = ServantImageLimitSealAfter;
  *(_QWORD *)&v81.fields.currentCryptoKey = v21;
  *(_QWORD *)&v81.fields.fakeValue = v22;
  OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v81, 0LL);
  if ( !servantNarrowTexture )
    goto LABEL_69;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, OverwriteStatus, v28, 0LL, 0LL);
  FrameType = UserServantEntity__GetFrameType(UserServantEntity_k__BackingField, v23[10], 0LL);
  servantClassIcon = this->fields.servantClassIcon;
  v31 = FrameType;
  OverwriteStatus = UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0LL);
  if ( !servantClassIcon )
    goto LABEL_69;
  ServantClassIconComponent__SetImage(servantClassIcon, OverwriteStatus, v31, 0, 1, 0, 0LL);
  OverwriteStatus = (__int64)this->fields.servantClassIcon;
  if ( !OverwriteStatus )
    goto LABEL_69;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)OverwriteStatus, 0, 0LL);
  levelLabel = this->fields.levelLabel;
  OverwriteStatus = (__int64)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !levelLabel )
    goto LABEL_69;
  UILabel__set_text(levelLabel, (System_String_o *)OverwriteStatus, 0LL);
  v33 = v23[5];
  AtkBoostValue = UserServantEntity__get_AtkBoostValue(UserServantEntity_k__BackingField, 0LL);
  v35 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v36 = GrandServantListItemDraw___c_TypeInfo;
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)v35;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v36 = GrandServantListItemDraw___c_TypeInfo;
  }
  v74 = v22;
  v75 = v21;
  _9__20_0 = (System_Func_object__int__o *)v36->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = GrandServantListItemDraw___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v36->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1BC3254(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v39, Method_GrandServantListItemDraw___c__Setup_b__20_0__, 0LL);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_UserServantEntity__int__o *)_9__20_0;
    sub_1BC2FAC(&static_fields->__9__20_0);
  }
  v41 = System_Linq_Enumerable__Sum_object_(
          v37,
          (System_Func_TSource__int__o *)_9__20_0,
          (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(this, v41 + v33, AtkBoostValue > 0, v42);
  v43 = v23[4];
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0LL);
  v45 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_2FEBC30 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v46 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v46 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v46->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = GrandServantListItemDraw___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v46->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1BC3254(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v48, Method_GrandServantListItemDraw___c__Setup_b__20_1__, 0LL);
    v49 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v49->__9__20_1 = (struct System_Func_UserServantEntity__int__o *)_9__20_1;
    sub_1BC2FAC(&v49->__9__20_1);
  }
  v50 = System_Linq_Enumerable__Sum_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v45,
          (System_Func_TSource__int__o *)_9__20_1,
          (const MethodInfo_303D0CC *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(this, v50 + v43, HpBoostValue > 0, v51);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0LL);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v53 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OverwriteStatus = (__int64)LocalizationManager__GetLevelList_40303600(v53, 0LL);
  if ( !tdInfo )
    goto LABEL_69;
  if ( !skillListTreasureDevice )
    goto LABEL_69;
  SkillListTreasureDeviceComponent__Set(
    skillListTreasureDevice,
    (System_String_o *)OverwriteStatus,
    tdInfo->fields.lv,
    tdInfo->fields.strengthStatus,
    tdInfo->fields.treasureDeviceNum,
    0,
    0LL);
  OverwriteStatus = (__int64)this->fields.switchSkillUIList;
  if ( !OverwriteStatus )
    goto LABEL_69;
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  v54 = *(_QWORD *)(OverwriteStatus + 16);
  v55 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(OverwriteStatus + 28);
  if ( !v54 )
    goto LABEL_69;
  v56 = *(int *)(OverwriteStatus + 24);
  if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)OverwriteStatus,
      skillInfoUiWidget,
      *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
  }
  else
  {
    v57 = v54 + 8 * v56;
    *(_DWORD *)(OverwriteStatus + 24) = v56 + 1;
    *(_QWORD *)(v57 + 32) = skillInfoUiWidget;
    sub_1BC2FAC(v57 + 32);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_42173308(UserServantEntity_k__BackingField, &v76, 0LL);
  if ( v76 && *(_QWORD *)&v76->max_length )
  {
    OverwriteStatus = (__int64)this->fields.appendSkillList;
    if ( !OverwriteStatus )
      goto LABEL_69;
    OverwriteStatus = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)OverwriteStatus, 0LL);
    if ( !OverwriteStatus )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OverwriteStatus, 1, 0LL);
    appendSkillList = this->fields.appendSkillList;
    v59 = v76;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OverwriteStatus = (__int64)LocalizationManager__GetLevelList_40303600(v59, 0LL);
    if ( !appendSkillList )
      goto LABEL_69;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)OverwriteStatus, 0LL);
    OverwriteStatus = (__int64)this->fields.switchSkillUIList;
    if ( !OverwriteStatus )
      goto LABEL_69;
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v60 = *(_QWORD *)(OverwriteStatus + 16);
    v61 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(OverwriteStatus + 28);
    if ( !v60 )
      goto LABEL_69;
    v62 = *(int *)(OverwriteStatus + 24);
    if ( (unsigned int)v62 >= *(_DWORD *)(v60 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)OverwriteStatus,
        skillInfoUiWidget,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
    }
    else
    {
      v63 = v60 + 8 * v62;
      *(_DWORD *)(OverwriteStatus + 24) = v62 + 1;
      *(_QWORD *)(v63 + 32) = skillInfoUiWidget;
      sub_1BC2FAC(v63 + 32);
    }
  }
  else
  {
    OverwriteStatus = (__int64)this->fields.appendSkillList;
    if ( !OverwriteStatus )
      goto LABEL_69;
    OverwriteStatus = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)OverwriteStatus, 0LL);
    if ( !OverwriteStatus )
      goto LABEL_69;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OverwriteStatus, 0, 0LL);
  }
  OverwriteStatus = (__int64)this->fields.switchSkillUIList;
  if ( !OverwriteStatus )
    goto LABEL_69;
  switchSkillInfo = this->fields.switchSkillInfo;
  OverwriteStatus = (__int64)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)OverwriteStatus,
                               (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_69;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)OverwriteStatus, 0, 0LL);
  svtCommandCardList = this->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v82.fields.currentCryptoKey = v75;
  *(_QWORD *)&v82.fields.fakeValue = v74;
  v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v82, 0LL);
  OverwriteStatus = (__int64)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0LL);
  if ( !svtCommandCardList )
    goto LABEL_69;
  ServantCommandCardListComponent__Set_40024916(
    svtCommandCardList,
    v66,
    (System_Int32_array *)OverwriteStatus,
    2,
    0,
    0LL);
  equipDraws = this->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_69;
  v70 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v70 >= (int)max_length )
      break;
    if ( v70 >= max_length )
      goto LABEL_72;
    if ( EquipUserServantEntities_k__BackingField )
    {
      v72 = EquipUserServantEntities_k__BackingField->max_length;
      OverwriteStatus = (__int64)equipDraws->m_Items[v70];
      if ( (int)v70 >= (int)v72 )
      {
        skillInfoUiWidget = 0LL;
      }
      else
      {
        if ( v70 >= v72 )
LABEL_72:
          sub_1BC326C(OverwriteStatus, skillInfoUiWidget, v67);
        skillInfoUiWidget = (Il2CppObject *)EquipUserServantEntities_k__BackingField->m_Items[v70];
      }
      if ( OverwriteStatus )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)OverwriteStatus,
          (UserServantEntity_o *)skillInfoUiWidget,
          v70 == 1,
          slotData->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v68);
        equipDraws = this->fields.equipDraws;
        ++v70;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_69;
  }
  OverwriteStatus = (__int64)this->fields.pushIcon;
  if ( !OverwriteStatus )
LABEL_69:
    sub_1BC3264(OverwriteStatus, skillInfoUiWidget);
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)OverwriteStatus,
    slotData->fields._IsPushServant_k__BackingField,
    0LL);
  GrandServantListItemDraw__SetUpEventUp(
    this,
    UserServantEntity_k__BackingField,
    EquipUserServantEntities_k__BackingField,
    v73);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListItemDraw__SetupAtk(
        GrandServantListItemDraw_o *this,
        int32_t atk,
        bool isAtkBoost,
        const MethodInfo *method)
{
  float v6; // s1
  UIWidget_o *attackLabel; // x0
  float v8; // s2
  float v9; // s0
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = atk;
  if ( (byte_4AFCEDD & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, *(_QWORD *)&atk);
    byte_4AFCEDD = 1;
  }
  v6 = 0.92157;
  attackLabel = (UIWidget_o *)this->fields.attackLabel;
  if ( isAtkBoost )
    v8 = 0.015686;
  else
    v8 = 1.0;
  if ( !isAtkBoost )
    v6 = 1.0;
  if ( !attackLabel
    || (v9 = 1.0,
        v10 = 1.0,
        UIWidget__set_color(attackLabel, *(UnityEngine_Color_o *)(&v6 - 1), 0LL),
        v11 = this->fields.attackLabel,
        attackLabel = (UIWidget_o *)System_Int32__ToString_63857360(
                                      (int32_t)&v12,
                                      (System_String_o *)StringLiteral_395/*"#,0"*/,
                                      0LL),
        !v11) )
  {
    sub_1BC3264(attackLabel, *(_QWORD *)&atk);
  }
  UILabel__set_text(v11, (System_String_o *)attackLabel, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListItemDraw__SetupHp(
        GrandServantListItemDraw_o *this,
        int32_t hp,
        bool isHpBoost,
        const MethodInfo *method)
{
  float v6; // s1
  UIWidget_o *hpLabel; // x0
  float v8; // s2
  float v9; // s0
  float v10; // s3
  UILabel_o *v11; // x19
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  v12 = hp;
  if ( (byte_4AFCEDE & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_395/*"#,0"*/, *(_QWORD *)&hp);
    byte_4AFCEDE = 1;
  }
  v6 = 0.92157;
  hpLabel = (UIWidget_o *)this->fields.hpLabel;
  if ( isHpBoost )
    v8 = 0.015686;
  else
    v8 = 1.0;
  if ( !isHpBoost )
    v6 = 1.0;
  if ( !hpLabel
    || (v9 = 1.0,
        v10 = 1.0,
        UIWidget__set_color(hpLabel, *(UnityEngine_Color_o *)(&v6 - 1), 0LL),
        v11 = this->fields.hpLabel,
        hpLabel = (UIWidget_o *)System_Int32__ToString_63857360(
                                  (int32_t)&v12,
                                  (System_String_o *)StringLiteral_395/*"#,0"*/,
                                  0LL),
        !v11) )
  {
    sub_1BC3264(hpLabel, *(_QWORD *)&hp);
  }
  UILabel__set_text(v11, (System_String_o *)hpLabel, 0LL);
}


void __fastcall GrandServantListItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCEE0 & 1) == 0 )
  {
    sub_1BC3008(&GrandServantListItemDraw___c_TypeInfo, v1);
    byte_4AFCEE0 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v2;
  sub_1BC2FAC(GrandServantListItemDraw___c_TypeInfo->static_fields);
}


void __fastcall GrandServantListItemDraw___c___ctor(GrandServantListItemDraw___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall GrandServantListItemDraw___c___SetUpEventUp_b__21_0(
        GrandServantListItemDraw___c_o *this,
        int64_t e,
        const MethodInfo *method)
{
  return e >= 0;
}


int32_t __fastcall GrandServantListItemDraw___c___SetUpEventUp_b__21_1(
        GrandServantListItemDraw___c_o *this,
        int64_t e,
        const MethodInfo *method)
{
  return e;
}


int32_t __fastcall GrandServantListItemDraw___c___Setup_b__20_0(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.atk;
}


int32_t __fastcall GrandServantListItemDraw___c___Setup_b__20_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BC3264(this, 0LL);
  return e->fields.hp;
}