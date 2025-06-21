void __fastcall GrandServantListItemDraw___ctor(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4B173BC & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget___ctor__, method);
    sub_1BCAFF8(&System_Collections_Generic_List_UIWidget__TypeInfo, v3);
    byte_4B173BC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_UIWidget__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_UIWidget___ctor__);
  this->fields.switchSkillUIList = (struct System_Collections_Generic_List_UIWidget__o *)v4;
  sub_1BCAF9C(&this->fields.switchSkillUIList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListItemDraw__Clear(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  SwitchUIWidgetComponent_o *switchSkillInfo; // x0
  struct System_Collections_Generic_List_UIWidget__o *switchSkillUIList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4B173B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Clear__, method);
    byte_4B173B7 = 1;
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
    sub_1BCB254(switchSkillInfo, method);
  }
  (*(void (__fastcall **)(SwitchUIWidgetComponent_o *, void *, float))&switchSkillInfo->klass[1]._1.byval_arg.bits)(
    switchSkillInfo,
    switchSkillInfo->klass[1]._1.this_arg.data,
    0.0);
}


void __fastcall GrandServantListItemDraw__Initialize(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  GrandServantListItemDraw_o *v4; // x19
  __int64 v5; // x20
  int max_length; // w9

  equipDraws = this->fields.equipDraws;
  if ( !equipDraws )
LABEL_7:
    sub_1BCB254(this, method);
  v4 = this;
  v5 = 0LL;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v5 >= max_length )
      break;
    if ( (unsigned int)v5 >= max_length )
      sub_1BCB25C(this, method, v2);
    this = (GrandServantListItemDraw_o *)equipDraws->m_Items[v5];
    if ( this )
    {
      GrandServantListItemEquipDraw__Initialize((GrandServantListItemEquipDraw_o *)this, v5, v2);
      equipDraws = v4->fields.equipDraws;
      ++v5;
      if ( equipDraws )
        continue;
    }
    goto LABEL_7;
  }
}


void __fastcall GrandServantListItemDraw__Release(GrandServantListItemDraw_o *this, const MethodInfo *method)
{
  UINarrowFigureTexture_o *servantNarrowTexture; // x0

  servantNarrowTexture = this->fields.servantNarrowTexture;
  if ( !servantNarrowTexture )
    sub_1BCB254(0LL, method);
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
  if ( (byte_4B173B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Array_FindAll_long___, userServantEntity);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_EventMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMasterData_ServantMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_EventServantPointRankMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_UserEventServantPointMaster___, v10);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_long__int___, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v14);
    sub_1BCAFF8(&EventMargeItemUpValInfo_TypeInfo, v15);
    sub_1BCAFF8(&EventPersonalMargeUpValInfo_TypeInfo, v16);
    sub_1BCAFF8(&EventUpValSetupInfo_TypeInfo, v17);
    sub_1BCAFF8(&System_Func_long__int__TypeInfo, v18);
    sub_1BCAFF8(&long___TypeInfo, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Add__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__, v21);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__, v22);
    sub_1BCAFF8(&System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo, v23);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v25);
    sub_1BCAFF8(&System_Predicate_long__TypeInfo, v26);
    sub_1BCAFF8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27);
    sub_1BCAFF8(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__, v28);
    sub_1BCAFF8(
      &Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6,
      v29);
    sub_1BCAFF8(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_0__, v30);
    sub_1BCAFF8(&Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_1__, v31);
    sub_1BCAFF8(&GrandServantListItemDraw___c_TypeInfo, v32);
    byte_4B173B9 = 1;
  }
  entity = 0LL;
  eventUpVallInfo = 0LL;
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  v92 = this;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_EventMaster___);
  if ( !Instance )
    goto LABEL_80;
  EventValUpEventIdHash = EventMaster__GetEventValUpEventIdHash((EventMaster_o *)Instance, 0, 0LL, 0LL);
  v36 = System_Linq_Enumerable__ToArray_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)EventValUpEventIdHash,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  v37 = (EventUpValSetupInfo_o *)sub_1BCB244(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40911156(v37, v36, 0, 0, 0, 0LL);
  v38 = (System_Array_o *)sub_1BCB0A0(long___TypeInfo, 3LL);
  v101.fields.value = Field__PrivateImplementationDetails__44A5F7891570E5631E8C91C85186E6633F4AB5364F644040B2A00126A07985B6;
  equipIds = (System_Int64_array *)v38;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63149500(v38, v101, 0LL);
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
        Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v102, 0LL);
        if ( (Instance & 0x80000000) == 0 )
        {
          v45 = *(_OWORD *)&v42->fields.id.fields.fakeValue;
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&v42->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v98.fields.fakeValue = v45;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v97 = v98;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v97, 0LL);
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
    sub_1BCB25C(Instance, v34, v39);
  }
LABEL_19:
  if ( !v5 )
    goto LABEL_80;
  UserServantEntity__getEventUpVal_42308972(v5, &eventUpVallInfo, v37, equipIds, 0LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_EventServantPointRankMaster___);
  v94 = (UserEventServantPointMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_UserEventServantPointMaster___);
  v47 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_EventMargeItemUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo___ctor__);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38F8AD8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_80;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_301AAA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  v50 = *(_QWORD *)&v5->fields.svtId.fields.currentCryptoKey;
  v49 = *(_QWORD *)&v5->fields.svtId.fields.fakeValue;
  v51 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v103.fields.currentCryptoKey = v50;
  *(_QWORD *)&v103.fields.fakeValue = v49;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v103, 0LL);
  if ( !v51 )
    goto LABEL_80;
  Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                        v51,
                        Instance,
                        (const MethodInfo_32C7E00 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v59 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48128700(&v96, 0LL);
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
        v66 = (EventMargeItemUpValInfo_o *)sub_1BCB244(EventMargeItemUpValInfo_TypeInfo);
        EventMargeItemUpValInfo___ctor_40891336(v66, v57, 0LL);
        if ( !v66 )
          goto LABEL_80;
        EventMargeItemUpValInfo__SetServantPointInfo(v66, BuddyPoint, v65, 0, 0LL);
        if ( !v47 )
          goto LABEL_80;
        System_Collections_Generic_List_object___Insert(
          v47,
          0,
          (Il2CppObject *)v66,
          (const MethodInfo_36BA980 *)Method_System_Collections_Generic_List_EventMargeItemUpValInfo__Insert__);
        v5 = v62;
        v54 = v93;
      }
      v67 = (EventPersonalMargeUpValInfo_o *)sub_1BCB244(EventPersonalMargeUpValInfo_TypeInfo);
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
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v74 = &items->obj.klass + size;
          v47->fields._size = size + 1;
          v74[4] = (Il2CppClass *)v34;
          Instance = sub_1BCAF9C(v74 + 4);
        }
      }
      v68 = *(_DWORD *)(v69 + 24);
      if ( (int)++v70 >= v68 )
        goto LABEL_61;
    }
    goto LABEL_81;
  }
LABEL_62:
  Instance = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_38F8EF8 *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
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
  v79 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v104, 0LL);
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
    _9__21_0 = (System_Predicate_long__o *)sub_1BCB244(System_Predicate_long__TypeInfo);
    System_Predicate_long____ctor(_9__21_0, v83, Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_0__, 0LL);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__21_0 = _9__21_0;
    sub_1BCAF9C(&static_fields->__9__21_0);
  }
  All_long = System_Array__FindAll_long_(
               equipIds,
               (System_Predicate_T__o *)_9__21_0,
               (const MethodInfo_31173F0 *)Method_System_Array_FindAll_long___);
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
    _9__21_1 = (System_Func_long__int__o *)sub_1BCB244(System_Func_long__int__TypeInfo);
    System_Func_long__int____ctor(_9__21_1, v89, Method_GrandServantListItemDraw___c__SetUpEventUp_b__21_1__, 0LL);
    v90 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v90->__9__21_1 = _9__21_1;
    sub_1BCAF9C(&v90->__9__21_1);
  }
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_long__int_(
                                                               v87,
                                                               (System_Func_TSource__TResult__o *)_9__21_1,
                                                               (const MethodInfo_304D7BC *)Method_System_Linq_Enumerable_Select_long__int___);
  Instance = (__int64)System_Linq_Enumerable__ToArray_int_(
                        v91,
                        (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !v92->fields.eventUpValIcon )
LABEL_80:
    sub_1BCB254(Instance, v34);
  EventUpValIconComponent__Set_40070448(v92->fields.eventUpValIcon, v78, (System_Int32_array *)Instance, v79, v80, 0LL);
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
  __int64 v21; // x23
  __int64 v22; // x24
  __int64 v23; // x25
  int32_t FrameType; // w26
  const MethodInfo *SvtClassId; // x0
  int32_t v26; // w27
  GrandServantAssetSetting_o *Instance; // x0
  const MethodInfo *v28; // x4
  GrandServantAssetSetting_o *v29; // x0
  const MethodInfo *v30; // x4
  int32_t CardImageLimitCount; // w28
  Il2CppObject *Master_object; // x29
  int32_t ServantImageLimitSealAfter; // w0
  UINarrowFigureTexture_o *servantNarrowTexture; // x29
  int32_t v35; // w28
  UILabel_o *levelLabel; // x26
  int v37; // w24
  int32_t AtkBoostValue; // w26
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  GrandServantListItemDraw___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x27
  System_Func_object__int__o *_9__20_0; // x28
  Il2CppObject *v43; // x29
  struct GrandServantListItemDraw___c_StaticFields *static_fields; // x0
  int32_t v45; // w0
  const MethodInfo *v46; // x3
  int v47; // w29
  int32_t HpBoostValue; // w25
  System_Collections_Generic_IEnumerable_T__o *v49; // x26
  GrandServantListItemDraw___c_c *v50; // x8
  System_Func_object__int__o *_9__20_1; // x27
  Il2CppObject *v52; // x28
  struct GrandServantListItemDraw___c_StaticFields *v53; // x0
  int32_t v54; // w0
  const MethodInfo *v55; // x3
  SkillListTreasureDeviceComponent_o *skillListTreasureDevice; // x25
  SkillInfo_array *v57; // x26
  __int64 v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  __int64 v61; // x8
  AppendSkillListComponent_o *appendSkillList; // x25
  SkillInfo_array *v63; // x26
  __int64 v64; // x24
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  SwitchUIWidgetComponent_o *switchSkillInfo; // x25
  ServantCommandCardListComponent_o *svtCommandCardList; // x25
  int32_t v71; // w23
  __int64 v72; // x2
  const MethodInfo *v73; // x4
  struct GrandServantListItemEquipDraw_array *equipDraws; // x8
  il2cpp_array_size_t v75; // w23
  il2cpp_array_size_t max_length; // w9
  il2cpp_array_size_t v77; // w10
  const MethodInfo *v78; // x3
  __int64 value_8; // [xsp+8h] [xbp-88h]
  SkillInfo_array *v80; // [xsp+10h] [xbp-80h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+18h] [xbp-78h] BYREF
  SkillInfo_array *skillInfoList; // [xsp+20h] [xbp-70h] BYREF
  int32_t lv; // [xsp+2Ch] [xbp-64h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v84; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v85; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v86; // 0:x0.16

  if ( (byte_4B173B8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_UserServantEntity___, slotData);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v5);
    sub_1BCAFF8(&DataManager_TypeInfo, v6);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Sum_UserServantEntity___, v7);
    sub_1BCAFF8(&System_Func_UserServantEntity__int__TypeInfo, v8);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__Add__, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_UIWidget__ToArray__, v10);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v11);
    sub_1BCAFF8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1BCAFF8(&Method_GrandServantListItemDraw___c__Setup_b__20_0__, v13);
    sub_1BCAFF8(&Method_GrandServantListItemDraw___c__Setup_b__20_1__, v14);
    sub_1BCAFF8(&GrandServantListItemDraw___c_TypeInfo, v15);
    sub_1BCAFF8(&UserServantEntity___TypeInfo, v16);
    byte_4B173B8 = 1;
  }
  tdInfo = 0LL;
  skillInfoList = 0LL;
  v80 = 0LL;
  GrandServantListItemDraw__Clear(this, (const MethodInfo *)slotData);
  if ( !slotData )
    goto LABEL_73;
  UserServantEntity_k__BackingField = slotData->fields._UserServantEntity_k__BackingField;
  EquipUserServantEntities_k__BackingField = slotData->fields._EquipUserServantEntities_k__BackingField;
  if ( !EquipUserServantEntities_k__BackingField )
  {
    OverwriteStatus = sub_1BCB0A0(UserServantEntity___TypeInfo, 0LL);
    EquipUserServantEntities_k__BackingField = (struct UserServantEntity_array *)OverwriteStatus;
  }
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_73;
  v21 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v22 = *(_QWORD *)&UserServantEntity_k__BackingField->fields.svtId.fields.fakeValue;
  OverwriteStatus = (__int64)UserServantEntity__GetOverwriteStatus(UserServantEntity_k__BackingField, 0LL, 0LL);
  lv = UserServantEntity_k__BackingField->fields.lv;
  if ( !OverwriteStatus )
    goto LABEL_73;
  v23 = OverwriteStatus;
  FrameType = UserServantEntity__GetFrameType(UserServantEntity_k__BackingField, *(_DWORD *)(OverwriteStatus + 40), 0LL);
  SvtClassId = (const MethodInfo *)UserServantEntity__getSvtClassId(UserServantEntity_k__BackingField, 0, 0, 0LL);
  v26 = (int)SvtClassId;
  Instance = GrandServantAssetSetting__GetInstance(SvtClassId);
  if ( Instance )
    GrandServantAssetSetting__SetGrandServantListBackgroundSprite(
      Instance,
      this->fields.backgroundSprite,
      FrameType,
      v26,
      v28);
  value_8 = v22;
  v29 = GrandServantAssetSetting__GetInstance((const MethodInfo *)Instance);
  if ( v29 )
    GrandServantAssetSetting__SetGrandServantListFrameSprite(v29, this->fields.frameSprite, FrameType, v26, v30);
  CardImageLimitCount = UserServantEntity__getCardImageLimitCount(UserServantEntity_k__BackingField, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v84.fields.currentCryptoKey = v21;
  *(_QWORD *)&v84.fields.fakeValue = v22;
  OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v84, 0LL);
  if ( !Master_object )
    goto LABEL_73;
  ServantImageLimitSealAfter = ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 OverwriteStatus,
                                 CardImageLimitCount,
                                 0LL);
  servantNarrowTexture = this->fields.servantNarrowTexture;
  v35 = ServantImageLimitSealAfter;
  *(_QWORD *)&v85.fields.currentCryptoKey = v21;
  *(_QWORD *)&v85.fields.fakeValue = v22;
  OverwriteStatus = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v85, 0LL);
  if ( !servantNarrowTexture )
    goto LABEL_73;
  UINarrowFigureTexture__SetCharacter(servantNarrowTexture, OverwriteStatus, v35, 0LL, 0LL);
  OverwriteStatus = (__int64)this->fields.servantClassIcon;
  if ( !OverwriteStatus )
    goto LABEL_73;
  ServantClassIconComponent__SetImage((ServantClassIconComponent_o *)OverwriteStatus, v26, FrameType, 0, 1, 0, 0LL);
  OverwriteStatus = (__int64)this->fields.servantClassIcon;
  if ( !OverwriteStatus )
    goto LABEL_73;
  ServantClassIconComponent__ReSizeClassIcon((ServantClassIconComponent_o *)OverwriteStatus, 0, 0LL);
  levelLabel = this->fields.levelLabel;
  OverwriteStatus = (__int64)System_Int32__ToString((int32_t)&lv, 0LL);
  if ( !levelLabel )
    goto LABEL_73;
  UILabel__set_text(levelLabel, (System_String_o *)OverwriteStatus, 0LL);
  v37 = *(_DWORD *)(v23 + 20);
  AtkBoostValue = UserServantEntity__get_AtkBoostValue(UserServantEntity_k__BackingField, 0LL);
  v39 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v40 = GrandServantListItemDraw___c_TypeInfo;
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v39;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v40 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__20_0 = (System_Func_object__int__o *)v40->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = GrandServantListItemDraw___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__20_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_0, v43, Method_GrandServantListItemDraw___c__Setup_b__20_0__, 0LL);
    static_fields = GrandServantListItemDraw___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Func_UserServantEntity__int__o *)_9__20_0;
    sub_1BCAF9C(&static_fields->__9__20_0);
  }
  v45 = System_Linq_Enumerable__Sum_object_(
          v41,
          (System_Func_TSource__int__o *)_9__20_0,
          (const MethodInfo_3055D78 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupAtk(this, v45 + v37, AtkBoostValue > 0, v46);
  v47 = *(_DWORD *)(v23 + 16);
  HpBoostValue = UserServantEntity__get_HpBoostValue(UserServantEntity_k__BackingField, 0LL);
  v49 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)EquipUserServantEntities_k__BackingField,
          (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_UserServantEntity___);
  v50 = GrandServantListItemDraw___c_TypeInfo;
  if ( !GrandServantListItemDraw___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(GrandServantListItemDraw___c_TypeInfo);
    v50 = GrandServantListItemDraw___c_TypeInfo;
  }
  _9__20_1 = (System_Func_object__int__o *)v50->static_fields->__9__20_1;
  if ( !_9__20_1 )
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = GrandServantListItemDraw___c_TypeInfo;
    }
    v52 = (Il2CppObject *)v50->static_fields->__9;
    _9__20_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_UserServantEntity__int__TypeInfo);
    System_Func_object__int____ctor(_9__20_1, v52, Method_GrandServantListItemDraw___c__Setup_b__20_1__, 0LL);
    v53 = GrandServantListItemDraw___c_TypeInfo->static_fields;
    v53->__9__20_1 = (struct System_Func_UserServantEntity__int__o *)_9__20_1;
    sub_1BCAF9C(&v53->__9__20_1);
  }
  v54 = System_Linq_Enumerable__Sum_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v49,
          (System_Func_TSource__int__o *)_9__20_1,
          (const MethodInfo_3055D78 *)Method_System_Linq_Enumerable_Sum_UserServantEntity___);
  GrandServantListItemDraw__SetupHp(this, v54 + v47, HpBoostValue > 0, v55);
  UserServantEntity__getSkillInfo(UserServantEntity_k__BackingField, &skillInfoList, -1, -1, 1, 0, -1, 0LL);
  UserServantEntity__getTreasureDeviceInfo(UserServantEntity_k__BackingField, &tdInfo, -1, -1, 0, 0LL);
  skillListTreasureDevice = this->fields.skillListTreasureDevice;
  v57 = skillInfoList;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  OverwriteStatus = (__int64)LocalizationManager__GetLevelList_40457824(v57, 0LL);
  if ( !tdInfo )
    goto LABEL_73;
  if ( !skillListTreasureDevice )
    goto LABEL_73;
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
    goto LABEL_73;
  skillInfoUiWidget = (Il2CppObject *)this->fields.skillInfoUiWidget;
  v58 = *(_QWORD *)(OverwriteStatus + 16);
  v59 = Method_System_Collections_Generic_List_UIWidget__Add__;
  ++*(_DWORD *)(OverwriteStatus + 28);
  if ( !v58 )
    goto LABEL_73;
  v60 = *(int *)(OverwriteStatus + 24);
  if ( (unsigned int)v60 >= *(_DWORD *)(v58 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)OverwriteStatus,
      skillInfoUiWidget,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = v58 + 8 * v60;
    *(_DWORD *)(OverwriteStatus + 24) = v60 + 1;
    *(_QWORD *)(v61 + 32) = skillInfoUiWidget;
    sub_1BCAF9C(v61 + 32);
  }
  UserServantEntity__GetAppendPassiveSkillInfo_42335728(UserServantEntity_k__BackingField, &v80, 0LL);
  if ( v80 && *(_QWORD *)&v80->max_length )
  {
    OverwriteStatus = (__int64)this->fields.appendSkillList;
    if ( !OverwriteStatus )
      goto LABEL_73;
    OverwriteStatus = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)OverwriteStatus, 0LL);
    if ( !OverwriteStatus )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OverwriteStatus, 1, 0LL);
    appendSkillList = this->fields.appendSkillList;
    v63 = v80;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    OverwriteStatus = (__int64)LocalizationManager__GetLevelList_40457824(v63, 0LL);
    v64 = value_8;
    if ( !appendSkillList )
      goto LABEL_73;
    AppendSkillListComponent__Set(appendSkillList, (System_String_o *)OverwriteStatus, 0LL);
    OverwriteStatus = (__int64)this->fields.switchSkillUIList;
    if ( !OverwriteStatus )
      goto LABEL_73;
    skillInfoUiWidget = (Il2CppObject *)this->fields.appendSkillInfoUiWidget;
    v65 = *(_QWORD *)(OverwriteStatus + 16);
    v66 = Method_System_Collections_Generic_List_UIWidget__Add__;
    ++*(_DWORD *)(OverwriteStatus + 28);
    if ( !v65 )
      goto LABEL_73;
    v67 = *(int *)(OverwriteStatus + 24);
    if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)OverwriteStatus,
        skillInfoUiWidget,
        *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
    }
    else
    {
      v68 = v65 + 8 * v67;
      *(_DWORD *)(OverwriteStatus + 24) = v67 + 1;
      *(_QWORD *)(v68 + 32) = skillInfoUiWidget;
      sub_1BCAF9C(v68 + 32);
    }
  }
  else
  {
    OverwriteStatus = (__int64)this->fields.appendSkillList;
    if ( !OverwriteStatus )
      goto LABEL_73;
    OverwriteStatus = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)OverwriteStatus, 0LL);
    v64 = value_8;
    if ( !OverwriteStatus )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)OverwriteStatus, 0, 0LL);
  }
  OverwriteStatus = (__int64)this->fields.switchSkillUIList;
  if ( !OverwriteStatus )
    goto LABEL_73;
  switchSkillInfo = this->fields.switchSkillInfo;
  OverwriteStatus = (__int64)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)OverwriteStatus,
                               (const MethodInfo_36BB728 *)Method_System_Collections_Generic_List_UIWidget__ToArray__);
  if ( !switchSkillInfo )
    goto LABEL_73;
  SwitchUIWidgetComponent__Set(switchSkillInfo, (UIWidget_array *)OverwriteStatus, 0, 0LL);
  svtCommandCardList = this->fields.svtCommandCardList;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v86.fields.currentCryptoKey = v21;
  *(_QWORD *)&v86.fields.fakeValue = v64;
  v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48125176(v86, 0LL);
  OverwriteStatus = (__int64)UserServantEntity__getCommandCodeIdList(UserServantEntity_k__BackingField, 0LL);
  if ( !svtCommandCardList )
    goto LABEL_73;
  ServantCommandCardListComponent__Set_40179572(
    svtCommandCardList,
    v71,
    (System_Int32_array *)OverwriteStatus,
    2,
    0,
    0LL);
  equipDraws = this->fields.equipDraws;
  if ( !equipDraws )
    goto LABEL_73;
  v75 = 0;
  while ( 1 )
  {
    max_length = equipDraws->max_length;
    if ( (int)v75 >= (int)max_length )
      break;
    if ( v75 >= max_length )
      goto LABEL_76;
    if ( EquipUserServantEntities_k__BackingField )
    {
      v77 = EquipUserServantEntities_k__BackingField->max_length;
      OverwriteStatus = (__int64)equipDraws->m_Items[v75];
      if ( (int)v75 >= (int)v77 )
      {
        skillInfoUiWidget = 0LL;
      }
      else
      {
        if ( v75 >= v77 )
LABEL_76:
          sub_1BCB25C(OverwriteStatus, skillInfoUiWidget, v72);
        skillInfoUiWidget = (Il2CppObject *)EquipUserServantEntities_k__BackingField->m_Items[v75];
      }
      if ( OverwriteStatus )
      {
        GrandServantListItemEquipDraw__Setup(
          (GrandServantListItemEquipDraw_o *)OverwriteStatus,
          (UserServantEntity_o *)skillInfoUiWidget,
          v75 == 1,
          slotData->fields._EquipFriendShipSkillChange_k__BackingField > 0,
          v73);
        equipDraws = this->fields.equipDraws;
        ++v75;
        if ( equipDraws )
          continue;
      }
    }
    goto LABEL_73;
  }
  OverwriteStatus = (__int64)this->fields.pushIcon;
  if ( !OverwriteStatus )
LABEL_73:
    sub_1BCB254(OverwriteStatus, skillInfoUiWidget);
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)OverwriteStatus,
    slotData->fields._IsPushServant_k__BackingField,
    0LL);
  GrandServantListItemDraw__SetUpEventUp(
    this,
    UserServantEntity_k__BackingField,
    EquipUserServantEntities_k__BackingField,
    v78);
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
  if ( (byte_4B173BA & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_395/*"#,0"*/, *(_QWORD *)&atk);
    byte_4B173BA = 1;
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
        attackLabel = (UIWidget_o *)System_Int32__ToString_63959136(
                                      (int32_t)&v12,
                                      (System_String_o *)StringLiteral_395/*"#,0"*/,
                                      0LL),
        !v11) )
  {
    sub_1BCB254(attackLabel, *(_QWORD *)&atk);
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
  if ( (byte_4B173BB & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_395/*"#,0"*/, *(_QWORD *)&hp);
    byte_4B173BB = 1;
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
        hpLabel = (UIWidget_o *)System_Int32__ToString_63959136(
                                  (int32_t)&v12,
                                  (System_String_o *)StringLiteral_395/*"#,0"*/,
                                  0LL),
        !v11) )
  {
    sub_1BCB254(hpLabel, *(_QWORD *)&hp);
  }
  UILabel__set_text(v11, (System_String_o *)hpLabel, 0LL);
}


void __fastcall GrandServantListItemDraw___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4B173BD & 1) == 0 )
  {
    sub_1BCAFF8(&GrandServantListItemDraw___c_TypeInfo, v1);
    byte_4B173BD = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(GrandServantListItemDraw___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  GrandServantListItemDraw___c_TypeInfo->static_fields->__9 = (struct GrandServantListItemDraw___c_o *)v2;
  sub_1BCAF9C(GrandServantListItemDraw___c_TypeInfo->static_fields);
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
    sub_1BCB254(this, 0LL);
  return e->fields.atk;
}


int32_t __fastcall GrandServantListItemDraw___c___Setup_b__20_1(
        GrandServantListItemDraw___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_1BCB254(this, 0LL);
  return e->fields.hp;
}