void ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C3D895 & 1) == 0 )
  {
    sub_1C37058(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4C3D895 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void ServantBonusFilterEquipComponent___ctor(ServantBonusFilterEquipComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C3D894 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_4C3D894 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_1C36FFC(&this->fields.equipList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v7; // x28
  Il2CppObject *v8; // x24
  ServantBonusFilterEquipComponent___c_c *v9; // x8
  System_Collections_Generic_List_object__o *v10; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v12; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v14; // w27
  int32_t v15; // w19
  float v16; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v19; // x20
  Il2CppObject *v20; // x23
  float v21; // s9
  const MethodInfo *v22; // x5
  int klass_high; // w8
  Il2CppObject *v24; // x21
  __int64 v25; // x27
  __int64 v26; // x20
  __int64 v27; // x21
  int32_t v28; // w20
  __int64 v29; // x8
  __int64 v30; // x21
  unsigned __int64 v31; // x29
  ServantSkillEntity_o *v32; // x26
  SkillLvEntity_o *v33; // x20
  __int64 v34; // x25
  __int64 v35; // x28
  int32_t v36; // w25
  EventUpValInfo_o *v37; // x28
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  SkillInfo_o *v43; // x25
  struct System_Object_array *v44; // x8
  _QWORD *v45; // x9
  __int64 v46; // x10
  Il2CppClass **v47; // x0
  System_Object_array *v48; // x20
  const MethodInfo *v49; // x5
  __int64 v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  __int64 v53; // x8
  __int64 v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x8
  ServantBonusFilterEquipComponent_c *v58; // x0
  ServantBonusFilterSelectMenu_c *v59; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_Collections_Generic_List_object__o *v66; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v67; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v68; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v69; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v70; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v71; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v72; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v73; // [xsp+40h] [xbp-A0h]
  int32_t v74; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v76; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v78; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4C3D88E & 1) == 0 )
  {
    sub_1C37058(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&EventUpValInfo_TypeInfo);
    sub_1C37058(&EventUpValSetupInfo_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1C37058(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SkillInfo_TypeInfo);
    sub_1C37058(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_1C37058(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_3194/*"BonusFilterEquipId"*/);
    sub_1C37058(&StringLiteral_3196/*"BonusFilterGroupId"*/);
    byte_4C3D88E = 1;
  }
  v78 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C372A4(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41737996(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v7 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 1, 0);
  v9 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v10 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
    v9 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  _9__4_0 = (System_Comparison_T__o *)v9->static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = ServantBonusFilterEquipComponent___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_1C372A4(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v12, Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, 0);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1C36FFC(&static_fields->__9__4_0, _9__4_0);
  }
  v69 = this;
  if ( !v10 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_58346216(
    v10,
    _9__4_0,
    (const MethodInfo_37A4AE8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v73 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v72 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v10->fields._size >= 1 )
  {
    v14 = 0;
    v15 = 0;
    v16 = 0.0;
    idx = 0;
    v67 = v7;
    v68 = eventIdList;
    v70 = MasterData_object;
    v66 = v10;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v10,
               v15,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v19 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v20 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_36138184((UnityEngine_GameObject_o *)v20, this->fields.parent, 0);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v20, v16, 0);
      Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v20 )
        break;
      v21 = **(float **)(Instance + 184);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)v20,
                            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v19 )
        break;
      klass_high = HIDWORD(v19[1].klass);
      v24 = (Il2CppObject *)Instance;
      v16 = v16 - v21;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_32413916(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v14,
          eventIdList,
          (int32_t)v19[1].monitor,
          idx,
          v22);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v54 = *(_QWORD *)(Instance + 16);
        v55 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v54 )
          break;
        v56 = *(int *)(Instance + 24);
        if ( (unsigned int)v56 >= *(_DWORD *)(v54 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v24,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = v54 + 8 * v56;
          *(_DWORD *)(Instance + 24) = v56 + 1;
          *(_QWORD *)(v57 + 32) = v24;
          sub_1C36FFC(v57 + 32, v24);
        }
        ++v14;
      }
      else if ( klass_high == 1 )
      {
        v74 = v14;
        if ( !MasterData_object )
          break;
        v71 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v19[1].monitor,
                              (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v25 = Instance;
        v27 = *(_QWORD *)(Instance + 16);
        v26 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v27;
        *(_QWORD *)&v80.fields.fakeValue = v26;
        v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v80, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C3CD62 )
        {
          sub_1C37058(&NetworkManager_TypeInfo);
          byte_4C3CD62 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v7 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v7,
                              v28,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              1,
                              1,
                              -1,
                              -1,
                              -1,
                              0);
        if ( !Instance )
          break;
        v29 = *(_QWORD *)(Instance + 24);
        v30 = Instance;
        if ( (int)v29 < 1 )
          goto LABEL_96;
        v31 = 0;
        v76 = 0;
        do
        {
          if ( v31 >= (unsigned int)v29 )
            sub_1C372BC(Instance);
          v32 = *(ServantSkillEntity_o **)(v30 + 32 + 8 * v31);
          if ( v32 )
          {
            if ( !v8 )
              goto LABEL_92;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v8, v32->fields.skillId, 1, 0);
            if ( Instance && !v32->fields.condLimitCount )
            {
              v33 = (SkillLvEntity_o *)Instance;
              v35 = *(_QWORD *)(v25 + 16);
              v34 = *(_QWORD *)(v25 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v35;
              *(_QWORD *)&v81.fields.fakeValue = v34;
              v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v81, 0);
              v37 = (EventUpValInfo_o *)sub_1C372A4(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v37, setupInfo, v36, 1, 1, 0, 0);
              eventUpVallInfo = v37;
              Instance = SkillLvEntity__getEventUpVal_42900292(v33, &eventUpVallInfo, 1, 1, 0, 1, 0, 0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v73;
                if ( !v73 )
                  goto LABEL_92;
                v38 = (Il2CppObject *)eventUpVallInfo;
                items = v73->fields._items;
                v40 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v73->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v73->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v73,
                    v38,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v42 = &items->obj.klass + size;
                  v73->fields._size = size + 1;
                  v42[4] = (Il2CppClass *)v38;
                  sub_1C36FFC(v42 + 4, v38);
                }
                v43 = (SkillInfo_o *)sub_1C372A4(SkillInfo_TypeInfo);
                SkillInfo___ctor(v43, 0);
                if ( !v43 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v32,
                  &v43->fields.title,
                  &v43->fields.explanation,
                  0);
                v43->fields.id = v33->fields.skillId;
                if ( !v72 )
                  goto LABEL_92;
                v44 = v72->fields._items;
                v45 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v72->fields._version;
                if ( !v44 )
                  goto LABEL_92;
                v46 = v72->fields._size;
                if ( (unsigned int)v46 >= LODWORD(v44->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v72,
                    (Il2CppObject *)v43,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v47 = &v44->obj.klass + v46;
                  v72->fields._size = v46 + 1;
                  v47[4] = (Il2CppClass *)v43;
                  Instance = sub_1C36FFC(v47 + 4, v43);
                }
                v76 = 1;
              }
            }
          }
          LODWORD(v29) = *(_DWORD *)(v30 + 24);
          ++v31;
        }
        while ( (__int64)v31 < (int)v29 );
        eventIdList = v68;
        this = v69;
        v10 = v66;
        v7 = v67;
        if ( (v76 & 1) != 0 )
        {
          Instance = (__int64)v73;
          if ( !v73 )
            break;
          v48 = System_Collections_Generic_List_object___ToArray(
                  v73,
                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = (__int64)v72;
          if ( !v72 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v72,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v70;
          if ( !v71 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v71,
            idx,
            (ServantEntity_o *)v25,
            (EventUpValInfo_array *)v48,
            (SkillInfo_array *)Instance,
            v49);
          Instance = (__int64)v69->fields.equipList;
          if ( !Instance )
            break;
          v50 = *(_QWORD *)(Instance + 16);
          v14 = v74;
          v51 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v50 )
            break;
          v52 = *(int *)(Instance + 24);
          if ( (unsigned int)v52 >= *(_DWORD *)(v50 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v71,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = v50 + 8 * v52;
            *(_DWORD *)(Instance + 24) = v52 + 1;
            *(_QWORD *)(v53 + 32) = v71;
            sub_1C36FFC(v53 + 32, v71);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v20, 0);
          MasterData_object = v70;
          v14 = v74;
          v58 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v58 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v16 = v16 + v58->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v15 >= v10->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_1C372B4(Instance);
  }
  v14 = 0;
  idx = 0;
LABEL_85:
  v59 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v59);
  HIDWORD(v78) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v61 = System_Int32__ToString((int32_t)&v78 + 4, 0);
      v62 = System_String__Concat_63561656((System_String_o *)StringLiteral_3194/*"BonusFilterEquipId"*/, v61, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0);
      ++HIDWORD(v78);
    }
    while ( SHIDWORD(v78) < MaxIndividualFilter );
  }
  LODWORD(v78) = v14;
  if ( v14 < MaxIndividualFilter )
  {
    do
    {
      v63 = System_Int32__ToString((int32_t)&v78, 0);
      v64 = System_String__Concat_63561656((System_String_o *)StringLiteral_3196/*"BonusFilterGroupId"*/, v63, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0);
      LODWORD(v78) = v78 + 1;
    }
    while ( (int)v78 < MaxIndividualFilter );
  }
  return idx + v14;
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

  if ( (byte_4C3D892 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C3D892 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C372B4(0);
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
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5 && v6 == 4;
}


void ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D891 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C3D891 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v6; // w19
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D890 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C3D890 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1C372B4(0);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v6,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D88F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C3D88F = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3D893 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C3D893 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C372B4(0);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C3D896 & 1) == 0 )
  {
    sub_1C37058(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4C3D896 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C36FFC(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields, v1);
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
    sub_1C372B4(this);
  return b->fields.priority - a->fields.priority;
}