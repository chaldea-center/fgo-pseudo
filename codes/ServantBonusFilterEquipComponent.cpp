void ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4D2B8B0 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4D2B8B0 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void ServantBonusFilterEquipComponent___ctor(ServantBonusFilterEquipComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2B8AF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_4D2B8AF = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.equipList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v8; // x28
  Il2CppObject *v9; // x24
  ServantBonusFilterEquipComponent___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v13; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  int32_t v21; // w27
  int32_t v22; // w19
  float v23; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v26; // x20
  Il2CppObject *v27; // x23
  float v28; // s9
  const MethodInfo *v29; // x5
  int klass_high; // w8
  Il2CppObject *v31; // x21
  ServantEntity_o *v32; // x27
  __int64 v33; // x20
  __int64 v34; // x21
  int32_t v35; // w20
  __int64 v36; // x8
  _QWORD *v37; // x21
  unsigned __int64 v38; // x29
  ServantSkillEntity_o *v39; // x26
  SkillLvEntity_o *v40; // x20
  __int64 v41; // x25
  __int64 v42; // x28
  int32_t v43; // w25
  EventUpValInfo_o *v44; // x28
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x0
  SkillInfo_o *v55; // x25
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  System_Object_array *v66; // x20
  const MethodInfo *v67; // x5
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  __int64 v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  __int64 v77; // x8
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  ServantBonusFilterEquipComponent_c *v88; // x0
  ServantBonusFilterSelectMenu_c *v89; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v91; // x0
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x0
  System_Collections_Generic_List_object__o *v96; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v97; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v98; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v99; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v100; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v101; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v102; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v103; // [xsp+40h] [xbp-A0h]
  int32_t v104; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v106; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v108; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v110; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v111; // 0:x0.16

  if ( (byte_4D2B8A9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C93AD4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C93AD4(&EventUpValInfo_TypeInfo);
    sub_1C93AD4(&EventUpValSetupInfo_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1C93AD4(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&SkillInfo_TypeInfo);
    sub_1C93AD4(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_1C93AD4(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_3209/*"BonusFilterEquipId"*/);
    sub_1C93AD4(&StringLiteral_3211/*"BonusFilterGroupId"*/);
    byte_4D2B8A9 = 1;
  }
  v108 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C93D20(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_42466312(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 1, 0);
  v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v10->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C93D20(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v13, Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, 0);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v15, v16, v17, v18, v19, v20);
  }
  v99 = this;
  if ( !v11 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_59225184(
    v11,
    _9__4_0,
    (const MethodInfo_387B460 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v103 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v103,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v102 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v102,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v11->fields._size >= 1 )
  {
    v21 = 0;
    v22 = 0;
    v23 = 0.0;
    idx = 0;
    v97 = v8;
    v98 = eventIdList;
    v100 = MasterData_object;
    v96 = v11;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v22,
               (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v26 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v27 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_3230E6C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_36750960((UnityEngine_GameObject_o *)v27, this->fields.parent, 0);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v27, v23, 0);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v27 )
        break;
      v28 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)v27,
                   (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v26 )
        break;
      klass_high = HIDWORD(v26[1].klass);
      v31 = (Il2CppObject *)Instance;
      v23 = v23 - v28;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_33707136(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v21,
          eventIdList,
          (int32_t)v26[1].monitor,
          idx,
          v29);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        v84 = *((_QWORD *)Instance + 2);
        v85 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v84 )
          break;
        v86 = *((int *)Instance + 6);
        if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v31,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
        }
        else
        {
          v87 = v84 + 8 * v86;
          *((_DWORD *)Instance + 6) = v86 + 1;
          *(_QWORD *)(v87 + 32) = v31;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v87 + 32), (int32_t)v31, v78, v79, v80, v81, v82, v83);
        }
        ++v21;
      }
      else if ( klass_high == 1 )
      {
        v104 = v21;
        if ( !MasterData_object )
          break;
        v101 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)v26[1].monitor,
                     (const MethodInfo_3463274 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v32 = (ServantEntity_o *)Instance;
        v34 = *((_QWORD *)Instance + 2);
        v33 = *((_QWORD *)Instance + 3);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v110.fields.currentCryptoKey = v34;
        *(_QWORD *)&v110.fields.fakeValue = v33;
        v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v110, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4D2A55B )
        {
          sub_1C93AD4(&NetworkManager_TypeInfo);
          byte_4D2A55B = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v8 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(
                     (ServantSkillMaster_o *)v8,
                     v35,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     1,
                     1,
                     -1,
                     -1,
                     -1,
                     0);
        if ( !Instance )
          break;
        v36 = *((_QWORD *)Instance + 3);
        v37 = Instance;
        if ( (int)v36 < 1 )
          goto LABEL_96;
        v38 = 0;
        v106 = 0;
        do
        {
          if ( v38 >= (unsigned int)v36 )
            sub_1C93D34(Instance);
          v39 = (ServantSkillEntity_o *)v37[v38 + 4];
          if ( v39 )
          {
            if ( !v9 )
              goto LABEL_92;
            Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v39->fields.skillId, 1, 0);
            if ( Instance && !v39->fields.condLimitCount )
            {
              v40 = (SkillLvEntity_o *)Instance;
              v42 = *(_QWORD *)&v32->fields.id.fields.currentCryptoKey;
              v41 = *(_QWORD *)&v32->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v111.fields.currentCryptoKey = v42;
              *(_QWORD *)&v111.fields.fakeValue = v41;
              v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49654028(v111, 0);
              v44 = (EventUpValInfo_o *)sub_1C93D20(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v44, setupInfo, v43, 1, 1, 0, 0);
              eventUpVallInfo = v44;
              Instance = (void *)SkillLvEntity__getEventUpVal_43603724(v40, &eventUpVallInfo, 1, 1, 0, 1, 0, -1, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v103;
                if ( !v103 )
                  goto LABEL_92;
                v6 = (Il2CppObject *)eventUpVallInfo;
                items = v103->fields._items;
                v52 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v103->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v103->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v103,
                    v6,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
                }
                else
                {
                  v54 = &items->obj.klass + size;
                  v103->fields._size = size + 1;
                  v54[4] = (Il2CppClass *)v6;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v54 + 4), (int32_t)v6, v45, v46, v47, v48, v49, v50);
                }
                v55 = (SkillInfo_o *)sub_1C93D20(SkillInfo_TypeInfo);
                SkillInfo___ctor(v55, 0);
                if ( !v55 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v39,
                  &v55->fields.title,
                  &v55->fields.explanation,
                  0);
                v55->fields.id = v40->fields.skillId;
                if ( !v102 )
                  goto LABEL_92;
                v62 = v102->fields._items;
                v63 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v102->fields._version;
                if ( !v62 )
                  goto LABEL_92;
                v64 = v102->fields._size;
                if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v102,
                    (Il2CppObject *)v55,
                    *(const MethodInfo_387999C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
                }
                else
                {
                  v65 = &v62->obj.klass + v64;
                  v102->fields._size = v64 + 1;
                  v65[4] = (Il2CppClass *)v55;
                  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)v55, v56, v57, v58, v59, v60, v61);
                }
                v106 = 1;
              }
            }
          }
          LODWORD(v36) = *((_DWORD *)v37 + 6);
          ++v38;
        }
        while ( (__int64)v38 < (int)v36 );
        eventIdList = v98;
        this = v99;
        v11 = v96;
        v8 = v97;
        if ( (v106 & 1) != 0 )
        {
          Instance = v103;
          if ( !v103 )
            break;
          v66 = System_Collections_Generic_List_object___ToArray(
                  v103,
                  (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = v102;
          if ( !v102 )
            break;
          Instance = System_Collections_Generic_List_object___ToArray(
                       v102,
                       (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v100;
          if ( !v101 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v101,
            idx,
            v32,
            (EventUpValInfo_array *)v66,
            (SkillInfo_array *)Instance,
            v67);
          Instance = v99->fields.equipList;
          if ( !Instance )
            break;
          v74 = *((_QWORD *)Instance + 2);
          v21 = v104;
          v75 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v74 )
            break;
          v76 = *((int *)Instance + 6);
          if ( (unsigned int)v76 >= *(_DWORD *)(v74 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v101,
              *(const MethodInfo_387999C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
          }
          else
          {
            v77 = v74 + 8 * v76;
            *((_DWORD *)Instance + 6) = v76 + 1;
            *(_QWORD *)(v77 + 32) = v101;
            sub_1C93A78((GrandQuestFolderBoardItem_o *)(v77 + 32), (int32_t)v101, v68, v69, v70, v71, v72, v73);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_72119908((UnityEngine_Object_o *)v27, 0);
          MasterData_object = v100;
          v21 = v104;
          v88 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v88 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v23 = v23 + v88->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v22 >= v11->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_1C93D2C(Instance, v6);
  }
  v21 = 0;
  idx = 0;
LABEL_85:
  v89 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v89);
  HIDWORD(v108) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v91 = System_Int32__ToString((int32_t)&v108 + 4, 0);
      v92 = System_String__Concat_64425724((System_String_o *)StringLiteral_3209/*"BonusFilterEquipId"*/, v91, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v92, 0);
      ++HIDWORD(v108);
    }
    while ( SHIDWORD(v108) < MaxIndividualFilter );
  }
  LODWORD(v108) = v21;
  if ( v21 < MaxIndividualFilter )
  {
    do
    {
      v93 = System_Int32__ToString((int32_t)&v108, 0);
      v94 = System_String__Concat_64425724((System_String_o *)StringLiteral_3211/*"BonusFilterGroupId"*/, v93, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v94, 0);
      LODWORD(v108) = v108 + 1;
    }
    while ( (int)v108 < MaxIndividualFilter );
  }
  return idx + v21;
}


bool ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  bool v5; // w19
  int v6; // w21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8AD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4D2B8AD = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C93D2C(0, v4);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
           v4) )
    {
      v6 = 4;
      goto LABEL_10;
    }
  }
  v6 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5 && v6 == 4;
}


void ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4D2B8AC = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4D2B8AB = 1;
  }
  memset(&v9, 0, sizeof(v9));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C93D2C(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C93D2C(0, v7);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v9.fields._current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8AA & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4D2B8AA = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2B8AE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4D2B8AE = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C93D2C(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C93D2C(0, v4);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2B8B1 & 1) == 0 )
  {
    sub_1C93AD4(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4D2B8B1 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ServantBonusFilterEquipComponent___c___ctor(
        ServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ServantBonusFilterEquipComponent___c___CreateList_b__4_0(
        ServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1C93D2C(this, a);
  return b->fields.priority - a->fields.priority;
}