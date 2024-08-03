void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49F771F & 1) == 0 )
  {
    sub_1B640C8(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_49F771F = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20

  if ( (byte_49F771E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v4);
    byte_49F771E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v5;
  sub_1B6406C(&this->fields.equipList);
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
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v39; // x28
  Il2CppObject *v40; // x24
  __int64 v41; // x1
  __int64 v42; // x2
  ServantBonusFilterEquipComponent___c_c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v46; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  int32_t v52; // w23
  int32_t v53; // w19
  float v54; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v57; // x20
  Il2CppObject *v58; // x22
  float v59; // s9
  const MethodInfo *v60; // x4
  int klass_high; // w8
  Il2CppObject *v62; // x21
  __int64 v63; // x23
  __int64 v64; // x20
  __int64 v65; // x21
  int32_t v66; // w20
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x8
  __int64 v71; // x21
  unsigned __int64 v72; // x29
  ServantSkillEntity_o *v73; // x26
  SkillLvEntity_o *v74; // x20
  __int64 v75; // x25
  __int64 v76; // x28
  int32_t v77; // w25
  __int64 v78; // x1
  __int64 v79; // x2
  EventUpValInfo_o *v80; // x28
  Il2CppObject *v81; // x1
  struct System_Object_array *items; // x8
  _QWORD *v83; // x9
  __int64 size; // x10
  Il2CppClass **v85; // x0
  __int64 v86; // x1
  __int64 v87; // x2
  SkillInfo_o *v88; // x25
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  System_Object_array *v93; // x20
  const MethodInfo *v94; // x5
  __int64 v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  ServantBonusFilterEquipComponent_c *v103; // x0
  ServantBonusFilterSelectMenu_c *inited; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v106; // x0
  System_String_o *v107; // x0
  System_String_o *v108; // x0
  System_String_o *v109; // x0
  System_Collections_Generic_List_object__o *v111; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v112; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v113; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v114; // [xsp+20h] [xbp-C0h]
  ServantBonusFilterEquipComponent_o *v115; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v116; // [xsp+30h] [xbp-B0h]
  int32_t idx; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_object__o *v118; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v119; // [xsp+48h] [xbp-98h]
  int32_t v120; // [xsp+50h] [xbp-90h]
  char v121; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v123; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v125; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v126; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_49F7718 & 1) == 0 )
  {
    sub_1B640C8(&System_Comparison_EventBonusFilterEntity__TypeInfo, eventIdList);
    sub_1B640C8(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B640C8(&EventUpValInfo_TypeInfo, v10);
    sub_1B640C8(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1B640C8(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1B640C8(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1B640C8(&NetworkManager_TypeInfo, v25);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v26);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B640C8(&ServantBonusFilterEquipComponent_TypeInfo, v29);
    sub_1B640C8(&ServantBonusFilterSelectMenu_TypeInfo, v30);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B640C8(&SkillInfo_TypeInfo, v32);
    sub_1B640C8(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v33);
    sub_1B640C8(&ServantBonusFilterEquipComponent___c_TypeInfo, v34);
    sub_1B640C8(&StringLiteral_3288/*"BonusFilterEquipId"*/, v35);
    sub_1B640C8(&StringLiteral_3290/*"BonusFilterGroupId"*/, v36);
    byte_49F7718 = 1;
  }
  v123 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B64314(EventUpValSetupInfo_TypeInfo, eventIdList, method);
  EventUpValSetupInfo___ctor_38592760(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v39 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 0LL);
  v43 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v44 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v43 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v43->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = ServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v46 = (Il2CppObject *)v43->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1B64314(System_Comparison_EventBonusFilterEntity__TypeInfo, v41, v42);
    System_Comparison_object____ctor(
      _9__4_0,
      v46,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1B6406C(&static_fields->__9__4_0);
  }
  if ( !v44 )
    goto LABEL_88;
  System_Collections_Generic_List_object___Sort_55243320(
    v44,
    _9__4_0,
    (const MethodInfo_34AF238 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v119 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_EventUpValInfo__TypeInfo,
                                                        v48,
                                                        v49);
  System_Collections_Generic_List_object____ctor(
    v119,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v118 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_SkillInfo__TypeInfo,
                                                        v50,
                                                        v51);
  System_Collections_Generic_List_object____ctor(
    v118,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v44->fields._size >= 1 )
  {
    v52 = 0;
    v53 = 0;
    v54 = 0.0;
    idx = 0;
    v114 = v3;
    v115 = this;
    v112 = v39;
    v113 = MasterData_object;
    v111 = v44;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v44,
               v53,
               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v57 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v58 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_33381252((UnityEngine_GameObject_o *)v58, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v58, v54, 0LL);
      Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v58 )
        break;
      v59 = **(float **)(Instance + 184);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)v58,
                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v57 )
        break;
      klass_high = HIDWORD(v57[1].klass);
      v62 = (Il2CppObject *)Instance;
      v54 = v54 - v59;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_30501396(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v52,
          v3,
          (int32_t)v57[1].monitor,
          v60);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v99 = *(_QWORD *)(Instance + 16);
        v100 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v99 )
          break;
        v101 = *(int *)(Instance + 24);
        if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v62,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
        }
        else
        {
          v102 = v99 + 8 * v101;
          *(_DWORD *)(Instance + 24) = v101 + 1;
          *(_QWORD *)(v102 + 32) = v62;
          sub_1B6406C(v102 + 32);
        }
        ++v52;
      }
      else if ( klass_high == 1 )
      {
        v120 = v52;
        if ( !MasterData_object )
          break;
        v116 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v57[1].monitor,
                              (const MethodInfo_30D3EA4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v63 = Instance;
        v65 = *(_QWORD *)(Instance + 16);
        v64 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v125.fields.currentCryptoKey = v65;
        *(_QWORD *)&v125.fields.fakeValue = v64;
        v66 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v125, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v39 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v39,
                              v66,
                              Instance,
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v70 = *(_QWORD *)(Instance + 24);
        v71 = Instance;
        if ( (int)v70 < 1 )
          goto LABEL_92;
        v72 = 0LL;
        v121 = 0;
        do
        {
          if ( v72 >= (unsigned int)v70 )
            sub_1B6432C(Instance, v67, v68, v69);
          v73 = *(ServantSkillEntity_o **)(v71 + 32 + 8 * v72);
          if ( v73 )
          {
            if ( !v40 )
              goto LABEL_88;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v40, v73->fields.skillId, 1, 0LL);
            if ( Instance && !v73->fields.condLimitCount )
            {
              v74 = (SkillLvEntity_o *)Instance;
              v76 = *(_QWORD *)(v63 + 16);
              v75 = *(_QWORD *)(v63 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v126.fields.currentCryptoKey = v76;
              *(_QWORD *)&v126.fields.fakeValue = v75;
              v77 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v126, 0LL);
              v80 = (EventUpValInfo_o *)sub_1B64314(EventUpValInfo_TypeInfo, v78, v79);
              EventUpValInfo___ctor(v80, setupInfo, v77, 1, 1, 0, 0LL);
              eventUpVallInfo = v80;
              Instance = SkillLvEntity__getEventUpVal_39537972(v74, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v119;
                if ( !v119 )
                  goto LABEL_88;
                v81 = (Il2CppObject *)eventUpVallInfo;
                items = v119->fields._items;
                v83 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v119->fields._version;
                if ( !items )
                  goto LABEL_88;
                size = v119->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v119,
                    v81,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                }
                else
                {
                  v85 = &items->obj.klass + size;
                  v119->fields._size = size + 1;
                  v85[4] = (Il2CppClass *)v81;
                  sub_1B6406C(v85 + 4);
                }
                v88 = (SkillInfo_o *)sub_1B64314(SkillInfo_TypeInfo, v86, v87);
                SkillInfo___ctor(v88, 0LL);
                if ( !v88 )
                  goto LABEL_88;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v73,
                  &v88->fields.title,
                  &v88->fields.explanation,
                  0LL);
                v88->fields.id = v74->fields.skillId;
                if ( !v118 )
                  goto LABEL_88;
                v89 = v118->fields._items;
                v90 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v118->fields._version;
                if ( !v89 )
                  goto LABEL_88;
                v91 = v118->fields._size;
                if ( (unsigned int)v91 >= v89->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v118,
                    (Il2CppObject *)v88,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
                }
                else
                {
                  v92 = &v89->obj.klass + v91;
                  v118->fields._size = v91 + 1;
                  v92[4] = (Il2CppClass *)v88;
                  Instance = sub_1B6406C(v92 + 4);
                }
                v121 = 1;
              }
            }
          }
          LODWORD(v70) = *(_DWORD *)(v71 + 24);
          ++v72;
        }
        while ( (__int64)v72 < (int)v70 );
        MasterData_object = v113;
        v3 = v114;
        v44 = v111;
        v39 = v112;
        if ( (v121 & 1) != 0 )
        {
          Instance = (__int64)v119;
          if ( !v119 )
            break;
          v93 = System_Collections_Generic_List_object___ToArray(
                  v119,
                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          this = v115;
          Instance = (__int64)v118;
          if ( !v118 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v118,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v116 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v116,
            idx,
            (ServantEntity_o *)v63,
            (EventUpValInfo_array *)v93,
            (SkillInfo_array *)Instance,
            v94);
          Instance = (__int64)v115->fields.equipList;
          if ( !Instance )
            break;
          v95 = *(_QWORD *)(Instance + 16);
          v52 = v120;
          v96 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v95 )
            break;
          v97 = *(int *)(Instance + 24);
          if ( (unsigned int)v97 >= *(_DWORD *)(v95 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v116,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v98 = v95 + 8 * v97;
            *(_DWORD *)(Instance + 24) = v97 + 1;
            *(_QWORD *)(v98 + 32) = v116;
            sub_1B6406C(v98 + 32);
          }
          ++idx;
        }
        else
        {
LABEL_92:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)v58, 0LL);
          this = v115;
          v52 = v120;
          v103 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v103 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v54 = v54 + v103->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v53 >= v44->fields._size )
        goto LABEL_81;
    }
LABEL_88:
    sub_1B64324(Instance);
  }
  v52 = 0;
  idx = 0;
LABEL_81:
  inited = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    inited = (ServantBonusFilterSelectMenu_c *)j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)inited);
  HIDWORD(v123) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v106 = System_Int32__ToString((int32_t)&v123 + 4, 0LL);
      v107 = System_String__Concat_61375396((System_String_o *)StringLiteral_3288/*"BonusFilterEquipId"*/, v106, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v107, 0LL);
      ++HIDWORD(v123);
    }
    while ( SHIDWORD(v123) < MaxIndividualFilter );
  }
  LODWORD(v123) = v52;
  if ( v52 < MaxIndividualFilter )
  {
    do
    {
      v108 = System_Int32__ToString((int32_t)&v123, 0LL);
      v109 = System_String__Concat_61375396((System_String_o *)StringLiteral_3290/*"BonusFilterGroupId"*/, v108, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v109, 0LL);
      LODWORD(v123) = v123 + 1;
    }
    while ( (int)v123 < MaxIndividualFilter );
  }
  return idx + v52;
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

  if ( (byte_49F771C & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_49F771C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B64324(0LL);
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
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_49F771B & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_49F771B = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F771A & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_49F771A = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v11,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v11.fields._current )
      sub_1B64324(0LL);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v11.fields._current,
      v9,
      v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_49F7719 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_49F7719 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_49F771D & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_49F771D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B64324(0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B64324(0LL);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19

  if ( (byte_49F7720 & 1) == 0 )
  {
    sub_1B640C8(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_49F7720 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ServantBonusFilterEquipComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v3;
  sub_1B6406C(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
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
    sub_1B64324(this);
  return b->fields.priority - a->fields.priority;
}