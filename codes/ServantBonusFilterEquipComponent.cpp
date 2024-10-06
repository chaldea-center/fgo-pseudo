void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6AFF0 & 1) == 0 )
  {
    sub_1B90010(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_4A6AFF0 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4A6AFEF & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_1B90010(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v3);
    byte_4A6AFEF = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v4;
  sub_1B8FFB4(&this->fields.equipList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  System_Int32_array *v3; // x25
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 Instance; // x0
  Il2CppObject *v38; // x1
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v40; // x28
  Il2CppObject *v41; // x24
  ServantBonusFilterEquipComponent___c_c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v45; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v47; // w23
  int32_t v48; // w19
  float v49; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v52; // x20
  Il2CppObject *v53; // x22
  float v54; // s9
  const MethodInfo *v55; // x4
  int klass_high; // w8
  Il2CppObject *v57; // x21
  __int64 v58; // x23
  __int64 v59; // x20
  __int64 v60; // x21
  int32_t v61; // w20
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x8
  __int64 v65; // x21
  unsigned __int64 v66; // x29
  ServantSkillEntity_o *v67; // x26
  SkillLvEntity_o *v68; // x20
  __int64 v69; // x25
  __int64 v70; // x28
  int32_t v71; // w25
  EventUpValInfo_o *v72; // x28
  struct System_Object_array *items; // x8
  _QWORD *v74; // x9
  __int64 size; // x10
  Il2CppClass **v76; // x0
  SkillInfo_o *v77; // x25
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_Object_array *v82; // x20
  const MethodInfo *v83; // x5
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  ServantBonusFilterEquipComponent_c *v92; // x0
  ServantBonusFilterSelectMenu_c *inited; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_String_o *v98; // x0
  System_Collections_Generic_List_object__o *v100; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v101; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v102; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v103; // [xsp+20h] [xbp-C0h]
  ServantBonusFilterEquipComponent_o *v104; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v105; // [xsp+30h] [xbp-B0h]
  int32_t idx; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_object__o *v107; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v108; // [xsp+48h] [xbp-98h]
  int32_t v109; // [xsp+50h] [xbp-90h]
  char v110; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v112; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4A6AFE9 & 1) == 0 )
  {
    sub_1B90010(&System_Comparison_EventBonusFilterEntity__TypeInfo, eventIdList);
    sub_1B90010(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B90010(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1B90010(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B90010(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B90010(&EventUpValInfo_TypeInfo, v10);
    sub_1B90010(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B90010(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v12);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1B90010(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1B90010(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1B90010(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1B90010(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1B90010(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1B90010(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1B90010(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1B90010(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1B90010(&NetworkManager_TypeInfo, v25);
    sub_1B90010(&Method_UnityEngine_Object_Instantiate_GameObject___, v26);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v27);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B90010(&ServantBonusFilterEquipComponent_TypeInfo, v29);
    sub_1B90010(&ServantBonusFilterSelectMenu_TypeInfo, v30);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B90010(&SkillInfo_TypeInfo, v32);
    sub_1B90010(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v33);
    sub_1B90010(&ServantBonusFilterEquipComponent___c_TypeInfo, v34);
    sub_1B90010(&StringLiteral_3310/*"BonusFilterEquipId"*/, v35);
    sub_1B90010(&StringLiteral_3312/*"BonusFilterGroupId"*/, v36);
    byte_4A6AFE9 = 1;
  }
  v112 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B9025C(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38963848(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v42 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v42 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v42->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v42 = ServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v45 = (Il2CppObject *)v42->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1B9025C(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v45,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1B8FFB4(&static_fields->__9__4_0);
  }
  if ( !v43 )
    goto LABEL_88;
  System_Collections_Generic_List_object___Sort_55649412(
    v43,
    _9__4_0,
    (const MethodInfo_3512484 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v108 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v107 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v107,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v43->fields._size >= 1 )
  {
    v47 = 0;
    v48 = 0;
    v49 = 0.0;
    idx = 0;
    v103 = v3;
    v104 = this;
    v101 = v40;
    v102 = MasterData_object;
    v100 = v43;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v43,
               v48,
               (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v52 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v53 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_2F121DC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_33776688((UnityEngine_GameObject_o *)v53, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v53, v49, 0LL);
      Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v53 )
        break;
      v54 = **(float **)(Instance + 184);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)v53,
                            (const MethodInfo_2EDD768 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v52 )
        break;
      klass_high = HIDWORD(v52[1].klass);
      v57 = (Il2CppObject *)Instance;
      v49 = v49 - v54;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_30691940(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v47,
          v3,
          (int32_t)v52[1].monitor,
          v55);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v88 = *(_QWORD *)(Instance + 16);
        v89 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v88 )
          break;
        v90 = *(int *)(Instance + 24);
        if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v57,
            *(const MethodInfo_35109C0 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
        }
        else
        {
          v91 = v88 + 8 * v90;
          *(_DWORD *)(Instance + 24) = v90 + 1;
          *(_QWORD *)(v91 + 32) = v57;
          sub_1B8FFB4(v91 + 32);
        }
        ++v47;
      }
      else if ( klass_high == 1 )
      {
        v109 = v47;
        if ( !MasterData_object )
          break;
        v105 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v52[1].monitor,
                              (const MethodInfo_312C5A8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v58 = Instance;
        v60 = *(_QWORD *)(Instance + 16);
        v59 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v114.fields.currentCryptoKey = v60;
        *(_QWORD *)&v114.fields.fakeValue = v59;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v114, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v40 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v40,
                              v61,
                              Instance,
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v64 = *(_QWORD *)(Instance + 24);
        v65 = Instance;
        if ( (int)v64 < 1 )
          goto LABEL_92;
        v66 = 0LL;
        v110 = 0;
        do
        {
          if ( v66 >= (unsigned int)v64 )
            sub_1B90274(Instance, v38, v62, v63);
          v67 = *(ServantSkillEntity_o **)(v65 + 32 + 8 * v66);
          if ( v67 )
          {
            if ( !v41 )
              goto LABEL_88;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v41, v67->fields.skillId, 1, 0LL);
            if ( Instance && !v67->fields.condLimitCount )
            {
              v68 = (SkillLvEntity_o *)Instance;
              v70 = *(_QWORD *)(v58 + 16);
              v69 = *(_QWORD *)(v58 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v115.fields.currentCryptoKey = v70;
              *(_QWORD *)&v115.fields.fakeValue = v69;
              v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v115, 0LL);
              v72 = (EventUpValInfo_o *)sub_1B9025C(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v72, setupInfo, v71, 1, 1, 0, 0LL);
              eventUpVallInfo = v72;
              Instance = SkillLvEntity__getEventUpVal_40007916(v68, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v108;
                if ( !v108 )
                  goto LABEL_88;
                v38 = (Il2CppObject *)eventUpVallInfo;
                items = v108->fields._items;
                v74 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v108->fields._version;
                if ( !items )
                  goto LABEL_88;
                size = v108->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v108,
                    v38,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
                }
                else
                {
                  v76 = &items->obj.klass + size;
                  v108->fields._size = size + 1;
                  v76[4] = (Il2CppClass *)v38;
                  sub_1B8FFB4(v76 + 4);
                }
                v77 = (SkillInfo_o *)sub_1B9025C(SkillInfo_TypeInfo);
                SkillInfo___ctor(v77, 0LL);
                if ( !v77 )
                  goto LABEL_88;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v67,
                  &v77->fields.title,
                  &v77->fields.explanation,
                  0LL);
                v77->fields.id = v68->fields.skillId;
                if ( !v107 )
                  goto LABEL_88;
                v78 = v107->fields._items;
                v79 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v107->fields._version;
                if ( !v78 )
                  goto LABEL_88;
                v80 = v107->fields._size;
                if ( (unsigned int)v80 >= v78->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v107,
                    (Il2CppObject *)v77,
                    *(const MethodInfo_35109C0 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &v78->obj.klass + v80;
                  v107->fields._size = v80 + 1;
                  v81[4] = (Il2CppClass *)v77;
                  Instance = sub_1B8FFB4(v81 + 4);
                }
                v110 = 1;
              }
            }
          }
          LODWORD(v64) = *(_DWORD *)(v65 + 24);
          ++v66;
        }
        while ( (__int64)v66 < (int)v64 );
        MasterData_object = v102;
        v3 = v103;
        v43 = v100;
        v40 = v101;
        if ( (v110 & 1) != 0 )
        {
          Instance = (__int64)v108;
          if ( !v108 )
            break;
          v82 = System_Collections_Generic_List_object___ToArray(
                  v108,
                  (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          this = v104;
          Instance = (__int64)v107;
          if ( !v107 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v107,
                                (const MethodInfo_3512518 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v105 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v105,
            idx,
            (ServantEntity_o *)v58,
            (EventUpValInfo_array *)v82,
            (SkillInfo_array *)Instance,
            v83);
          Instance = (__int64)v104->fields.equipList;
          if ( !Instance )
            break;
          v84 = *(_QWORD *)(Instance + 16);
          v47 = v109;
          v85 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v84 )
            break;
          v86 = *(int *)(Instance + 24);
          if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v105,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v87 = v84 + 8 * v86;
            *(_DWORD *)(Instance + 24) = v86 + 1;
            *(_QWORD *)(v87 + 32) = v105;
            sub_1B8FFB4(v87 + 32);
          }
          ++idx;
        }
        else
        {
LABEL_92:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)v53, 0LL);
          this = v104;
          v47 = v109;
          v92 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v92 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v49 = v49 + v92->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v48 >= v43->fields._size )
        goto LABEL_81;
    }
LABEL_88:
    sub_1B9026C(Instance, v38);
  }
  v47 = 0;
  idx = 0;
LABEL_81:
  inited = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    inited = (ServantBonusFilterSelectMenu_c *)j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)inited);
  HIDWORD(v112) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v95 = System_Int32__ToString((int32_t)&v112 + 4, 0LL);
      v96 = System_String__Concat_61787092((System_String_o *)StringLiteral_3310/*"BonusFilterEquipId"*/, v95, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v96, 0LL);
      ++HIDWORD(v112);
    }
    while ( SHIDWORD(v112) < MaxIndividualFilter );
  }
  LODWORD(v112) = v47;
  if ( v47 < MaxIndividualFilter )
  {
    do
    {
      v97 = System_Int32__ToString((int32_t)&v112, 0LL);
      v98 = System_String__Concat_61787092((System_String_o *)StringLiteral_3312/*"BonusFilterGroupId"*/, v97, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v98, 0LL);
      LODWORD(v112) = v112 + 1;
    }
    while ( (int)v112 < MaxIndividualFilter );
  }
  return idx + v47;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  bool v8; // w19
  int v9; // w21
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6AFED & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A6AFED = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B9026C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B9026C(0LL, v7);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v11.fields._current,
           v7) )
    {
      v9 = 4;
      goto LABEL_10;
    }
  }
  v9 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v8 && v9 == 4;
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6AFEC & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A6AFEC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B9026C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B9026C(0LL, v7);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v9; // w19
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6AFEB & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_4A6AFEB = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B9026C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B9026C(0LL, v10);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v9,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6AFEA & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A6AFEA = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B9026C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B9026C(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A6AFEE & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B90010(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A6AFEE = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B9026C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35114B8 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_328A150 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B9026C(0LL, v7);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_328A14C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4A6AFF1 & 1) == 0 )
  {
    sub_1B90010(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_4A6AFF1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v2;
  sub_1B8FFB4(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
}


void __fastcall ServantBonusFilterEquipComponent___c___ctor(
        ServantBonusFilterEquipComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent___c___CreateList_b__4_0(
        ServantBonusFilterEquipComponent___c_o *this,
        EventBonusFilterEntity_o *a,
        EventBonusFilterEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_1B9026C(this, a);
  return b->fields.priority - a->fields.priority;
}