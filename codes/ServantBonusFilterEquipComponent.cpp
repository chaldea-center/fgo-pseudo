void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B11959 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBonusFilterEquipComponent_TypeInfo, v1, v2);
    byte_4B11959 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20

  if ( (byte_4B11958 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v5, v6);
    byte_4B11958 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v7;
  sub_1BCA784(&this->fields.equipList, v7);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Int32_array *v4; // x25
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
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 Instance; // x0
  Il2CppObject *v71; // x1
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v73; // x28
  Il2CppObject *v74; // x24
  __int64 v75; // x2
  __int64 v76; // x3
  ServantBonusFilterEquipComponent___c_c *v77; // x8
  System_Collections_Generic_List_object__o *v78; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v80; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  int32_t v88; // w23
  int32_t v89; // w19
  float v90; // s8
  Il2CppObject *Item; // x0
  __int64 v92; // x1
  Il2CppObject *prefab; // x21
  Il2CppObject *v94; // x20
  Il2CppObject *v95; // x22
  float v96; // s9
  const MethodInfo *v97; // x4
  int klass_high; // w8
  Il2CppObject *v99; // x21
  __int64 v100; // x23
  __int64 v101; // x20
  __int64 v102; // x21
  __int64 v103; // x1
  int32_t v104; // w20
  __int64 v105; // x8
  __int64 v106; // x21
  unsigned __int64 v107; // x29
  ServantSkillEntity_o *v108; // x26
  SkillLvEntity_o *v109; // x20
  __int64 v110; // x25
  __int64 v111; // x28
  int32_t v112; // w25
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x3
  EventUpValInfo_o *v116; // x28
  struct System_Object_array *items; // x8
  _QWORD *v118; // x9
  __int64 size; // x10
  Il2CppClass **v120; // x0
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  SkillInfo_o *v124; // x25
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  System_Object_array *v129; // x20
  const MethodInfo *v130; // x5
  __int64 v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x8
  __int64 v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x8
  ServantBonusFilterEquipComponent_c *v139; // x0
  ServantBonusFilterSelectMenu_c *v140; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v142; // x0
  System_String_o *v143; // x0
  System_String_o *v144; // x0
  System_String_o *v145; // x0
  System_Collections_Generic_List_object__o *v147; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v148; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v149; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v150; // [xsp+20h] [xbp-C0h]
  ServantBonusFilterEquipComponent_o *v151; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v152; // [xsp+30h] [xbp-B0h]
  int32_t idx; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_object__o *v154; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v155; // [xsp+48h] [xbp-98h]
  int32_t v156; // [xsp+50h] [xbp-90h]
  char v157; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v159; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v161; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v162; // 0:x0.16

  v4 = eventIdList;
  if ( (byte_4B11952 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Comparison_EventBonusFilterEntity__TypeInfo, eventIdList, method);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantSkillMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_SkillLvMaster___, v12, v13);
    sub_1BCA7E0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v14, v15);
    sub_1BCA7E0(&EventUpValInfo_TypeInfo, v16, v17);
    sub_1BCA7E0(&EventUpValSetupInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v24, v25);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo__Add__, v26, v27);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v28, v29);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v30, v31);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v32, v33);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v34, v35);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v36, v37);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v38, v39);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v40, v41);
    sub_1BCA7E0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v42, v43);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillInfo__TypeInfo, v44, v45);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v46, v47);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v48, v49);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v50, v51);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v52, v53);
    sub_1BCA7E0(&ServantBonusFilterEquipComponent_TypeInfo, v54, v55);
    sub_1BCA7E0(&ServantBonusFilterSelectMenu_TypeInfo, v56, v57);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v58, v59);
    sub_1BCA7E0(&SkillInfo_TypeInfo, v60, v61);
    sub_1BCA7E0(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v62, v63);
    sub_1BCA7E0(&ServantBonusFilterEquipComponent___c_TypeInfo, v64, v65);
    sub_1BCA7E0(&StringLiteral_3334/*"BonusFilterEquipId"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_3336/*"BonusFilterGroupId"*/, v68, v69);
    byte_4B11952 = 1;
  }
  v159 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BCAA2C(EventUpValSetupInfo_TypeInfo, eventIdList, method, v3);
  EventUpValSetupInfo___ctor_39629568(setupInfo, v4, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v73 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v74 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v4, 1, 0LL);
  v77 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v78 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo, v71);
    v77 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v77->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77, v71);
      v77 = ServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v80 = (Il2CppObject *)v77->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1BCAA2C(System_Comparison_EventBonusFilterEntity__TypeInfo, v71, v75, v76);
    System_Comparison_object____ctor(
      _9__4_0,
      v80,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1BCA784(&static_fields->__9__4_0, _9__4_0);
  }
  if ( !v78 )
    goto LABEL_88;
  System_Collections_Generic_List_object___Sort_56244000(
    v78,
    _9__4_0,
    (const MethodInfo_35A3720 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v155 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                        v82,
                                                        v83,
                                                        v84);
  System_Collections_Generic_List_object____ctor(
    v155,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v154 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                        v85,
                                                        v86,
                                                        v87);
  System_Collections_Generic_List_object____ctor(
    v154,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v78->fields._size >= 1 )
  {
    v88 = 0;
    v89 = 0;
    v90 = 0.0;
    idx = 0;
    v150 = v4;
    v151 = this;
    v148 = v73;
    v149 = MasterData_object;
    v147 = v78;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v78,
               v89,
               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v94 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v92);
      v95 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_34336992((UnityEngine_GameObject_o *)v95, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v95, v90, 0LL);
      Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v71);
        Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v95 )
        break;
      v96 = **(float **)(Instance + 184);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)v95,
                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v94 )
        break;
      klass_high = HIDWORD(v94[1].klass);
      v99 = (Il2CppObject *)Instance;
      v90 = v90 - v96;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_31919168(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v88,
          v4,
          (int32_t)v94[1].monitor,
          v97);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v135 = *(_QWORD *)(Instance + 16);
        v136 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v135 )
          break;
        v137 = *(int *)(Instance + 24);
        if ( (unsigned int)v137 >= *(_DWORD *)(v135 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v99,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
        }
        else
        {
          v138 = v135 + 8 * v137;
          *(_DWORD *)(Instance + 24) = v137 + 1;
          *(_QWORD *)(v138 + 32) = v99;
          sub_1BCA784(v138 + 32, v99);
        }
        ++v88;
      }
      else if ( klass_high == 1 )
      {
        v156 = v88;
        if ( !MasterData_object )
          break;
        v152 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v94[1].monitor,
                              (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v100 = Instance;
        v102 = *(_QWORD *)(Instance + 16);
        v101 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
        *(_QWORD *)&v161.fields.currentCryptoKey = v102;
        *(_QWORD *)&v161.fields.fakeValue = v101;
        v104 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v161, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v103);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v73 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v73,
                              v104,
                              Instance,
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v105 = *(_QWORD *)(Instance + 24);
        v106 = Instance;
        if ( (int)v105 < 1 )
          goto LABEL_92;
        v107 = 0LL;
        v157 = 0;
        do
        {
          if ( v107 >= (unsigned int)v105 )
            sub_1BCAA44(Instance, v71);
          v108 = *(ServantSkillEntity_o **)(v106 + 32 + 8 * v107);
          if ( v108 )
          {
            if ( !v74 )
              goto LABEL_88;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v74, v108->fields.skillId, 1, 0LL);
            if ( Instance && !v108->fields.condLimitCount )
            {
              v109 = (SkillLvEntity_o *)Instance;
              v111 = *(_QWORD *)(v100 + 16);
              v110 = *(_QWORD *)(v100 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v71);
              *(_QWORD *)&v162.fields.currentCryptoKey = v111;
              *(_QWORD *)&v162.fields.fakeValue = v110;
              v112 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v162, 0LL);
              v116 = (EventUpValInfo_o *)sub_1BCAA2C(EventUpValInfo_TypeInfo, v113, v114, v115);
              EventUpValInfo___ctor(v116, setupInfo, v112, 1, 1, 0, 0LL);
              eventUpVallInfo = v116;
              Instance = SkillLvEntity__getEventUpVal_40683416(v109, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v155;
                if ( !v155 )
                  goto LABEL_88;
                v71 = (Il2CppObject *)eventUpVallInfo;
                items = v155->fields._items;
                v118 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v155->fields._version;
                if ( !items )
                  goto LABEL_88;
                size = v155->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v155,
                    v71,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
                }
                else
                {
                  v120 = &items->obj.klass + size;
                  v155->fields._size = size + 1;
                  v120[4] = (Il2CppClass *)v71;
                  sub_1BCA784(v120 + 4, v71);
                }
                v124 = (SkillInfo_o *)sub_1BCAA2C(SkillInfo_TypeInfo, v121, v122, v123);
                SkillInfo___ctor(v124, 0LL);
                if ( !v124 )
                  goto LABEL_88;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v108,
                  &v124->fields.title,
                  &v124->fields.explanation,
                  0LL);
                v124->fields.id = v109->fields.skillId;
                if ( !v154 )
                  goto LABEL_88;
                v125 = v154->fields._items;
                v126 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v154->fields._version;
                if ( !v125 )
                  goto LABEL_88;
                v127 = v154->fields._size;
                if ( (unsigned int)v127 >= v125->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v154,
                    (Il2CppObject *)v124,
                    *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
                }
                else
                {
                  v128 = &v125->obj.klass + v127;
                  v154->fields._size = v127 + 1;
                  v128[4] = (Il2CppClass *)v124;
                  Instance = sub_1BCA784(v128 + 4, v124);
                }
                v157 = 1;
              }
            }
          }
          LODWORD(v105) = *(_DWORD *)(v106 + 24);
          ++v107;
        }
        while ( (__int64)v107 < (int)v105 );
        MasterData_object = v149;
        v4 = v150;
        v78 = v147;
        v73 = v148;
        if ( (v157 & 1) != 0 )
        {
          Instance = (__int64)v155;
          if ( !v155 )
            break;
          v129 = System_Collections_Generic_List_object___ToArray(
                   v155,
                   (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          this = v151;
          Instance = (__int64)v154;
          if ( !v154 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v154,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v152 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v152,
            idx,
            (ServantEntity_o *)v100,
            (EventUpValInfo_array *)v129,
            (SkillInfo_array *)Instance,
            v130);
          Instance = (__int64)v151->fields.equipList;
          if ( !Instance )
            break;
          v131 = *(_QWORD *)(Instance + 16);
          v88 = v156;
          v132 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v131 )
            break;
          v133 = *(int *)(Instance + 24);
          if ( (unsigned int)v133 >= *(_DWORD *)(v131 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v152,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = v131 + 8 * v133;
            *(_DWORD *)(Instance + 24) = v133 + 1;
            *(_QWORD *)(v134 + 32) = v152;
            sub_1BCA784(v134 + 32, v152);
          }
          ++idx;
        }
        else
        {
LABEL_92:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v71);
          UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)v95, 0LL);
          this = v151;
          v88 = v156;
          v139 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v71);
            v139 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v90 = v90 + v139->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v89 >= v78->fields._size )
        goto LABEL_81;
    }
LABEL_88:
    sub_1BCAA3C(Instance, v71);
  }
  v88 = 0;
  idx = 0;
LABEL_81:
  v140 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v71);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v140);
  HIDWORD(v159) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v142 = System_Int32__ToString((int32_t)&v159 + 4, 0LL);
      v143 = System_String__Concat_62401220((System_String_o *)StringLiteral_3334/*"BonusFilterEquipId"*/, v142, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v143, 0LL);
      ++HIDWORD(v159);
    }
    while ( SHIDWORD(v159) < MaxIndividualFilter );
  }
  LODWORD(v159) = v88;
  if ( v88 < MaxIndividualFilter )
  {
    do
    {
      v144 = System_Int32__ToString((int32_t)&v159, 0LL);
      v145 = System_String__Concat_62401220((System_String_o *)StringLiteral_3336/*"BonusFilterGroupId"*/, v144, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v145, 0LL);
      LODWORD(v159) = v159 + 1;
    }
    while ( (int)v159 < MaxIndividualFilter );
  }
  return idx + v88;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v11; // x1
  bool v12; // w19
  int v13; // w21
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11956 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v8, v9);
    byte_4B11956 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v12 )
      break;
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v11);
    if ( ServantBonusFilterEquipListViewObject__IsSetFilter(
           (ServantBonusFilterEquipListViewObject_o *)v15.fields._current,
           v11) )
    {
      v13 = 4;
      goto LABEL_10;
    }
  }
  v13 = 5;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v12 && v13 == 4;
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11955 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v8, v9);
    byte_4B11955 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v12; // w19
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11954 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable,
      method);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5,
      v6);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v7,
      v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v9, v10);
    byte_4B11954 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BCAA3C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v12 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v15,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v15.fields._current )
      sub_1BCAA3C(0LL, v13);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v15.fields._current,
      v12,
      v14);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11953 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v8, v9);
    byte_4B11953 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B11957 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v8, v9);
    byte_4B11957 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BCAA3C(0LL, v11);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B1195A & 1) == 0 )
  {
    sub_1BCA7E0(&ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
    byte_4B1195A = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v4;
  sub_1BCA784(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields, v4);
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
    sub_1BCAA3C(this, a);
  return b->fields.priority - a->fields.priority;
}