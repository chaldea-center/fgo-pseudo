void ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C21D4C & 1) == 0 )
  {
    sub_1C2D490(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4C21D4C = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void ServantBonusFilterEquipComponent___ctor(ServantBonusFilterEquipComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C21D4B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_4C21D4B = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_1C2D434(&this->fields.equipList);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v8; // x28
  Il2CppObject *v9; // x24
  ServantBonusFilterEquipComponent___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v13; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w27
  int32_t v16; // w19
  float v17; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x23
  float v22; // s9
  const MethodInfo *v23; // x5
  int klass_high; // w8
  Il2CppObject *v25; // x21
  __int64 v26; // x27
  __int64 v27; // x20
  __int64 v28; // x21
  int32_t v29; // w20
  __int64 v30; // x2
  __int64 v31; // x8
  __int64 v32; // x21
  unsigned __int64 v33; // x29
  ServantSkillEntity_o *v34; // x26
  SkillLvEntity_o *v35; // x20
  __int64 v36; // x25
  __int64 v37; // x28
  int32_t v38; // w25
  EventUpValInfo_o *v39; // x28
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  Il2CppClass **v43; // x0
  SkillInfo_o *v44; // x25
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass **v48; // x0
  System_Object_array *v49; // x20
  const MethodInfo *v50; // x5
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  __int64 v54; // x8
  __int64 v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  __int64 v58; // x8
  ServantBonusFilterEquipComponent_c *v59; // x0
  ServantBonusFilterSelectMenu_c *v60; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_String_o *v65; // x0
  System_Collections_Generic_List_object__o *v67; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v68; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v69; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v70; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v71; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v72; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v73; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v74; // [xsp+40h] [xbp-A0h]
  int32_t v75; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v77; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v79; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v82; // 0:x0.16

  if ( (byte_4C21D45 & 1) == 0 )
  {
    sub_1C2D490(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1C2D490(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1C2D490(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C2D490(&EventUpValInfo_TypeInfo);
    sub_1C2D490(&EventUpValSetupInfo_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C2D490(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1C2D490(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&SkillInfo_TypeInfo);
    sub_1C2D490(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_1C2D490(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_1C2D490(&StringLiteral_3191/*"BonusFilterEquipId"*/);
    sub_1C2D490(&StringLiteral_3193/*"BonusFilterGroupId"*/);
    byte_4C21D45 = 1;
  }
  v79 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_1C2D6DC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_41515380(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 1, 0);
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
    _9__4_0 = (System_Comparison_T__o *)sub_1C2D6DC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v13, Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, 0);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1C2D434(&static_fields->__9__4_0);
  }
  v70 = this;
  if ( !v11 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_58242632(
    v11,
    _9__4_0,
    (const MethodInfo_378B648 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v74 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v73 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v11->fields._size >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0.0;
    idx = 0;
    v68 = v8;
    v69 = eventIdList;
    v71 = MasterData_object;
    v67 = v11;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v16,
               (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v20 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_35924288((UnityEngine_GameObject_o *)v21, this->fields.parent, 0);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v21, v17, 0);
      Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = (__int64)ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v21 )
        break;
      v22 = **(float **)(Instance + 184);
      Instance = (__int64)UnityEngine_GameObject__GetComponent_object_(
                            (UnityEngine_GameObject_o *)v21,
                            (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v20 )
        break;
      klass_high = HIDWORD(v20[1].klass);
      v25 = (Il2CppObject *)Instance;
      v17 = v17 - v22;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_32368432(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v15,
          eventIdList,
          (int32_t)v20[1].monitor,
          idx,
          v23);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v55 = *(_QWORD *)(Instance + 16);
        v56 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v55 )
          break;
        v57 = *(int *)(Instance + 24);
        if ( (unsigned int)v57 >= *(_DWORD *)(v55 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v25,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
        }
        else
        {
          v58 = v55 + 8 * v57;
          *(_DWORD *)(Instance + 24) = v57 + 1;
          *(_QWORD *)(v58 + 32) = v25;
          sub_1C2D434(v58 + 32);
        }
        ++v15;
      }
      else if ( klass_high == 1 )
      {
        v75 = v15;
        if ( !MasterData_object )
          break;
        v72 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v20[1].monitor,
                              (const MethodInfo_3387D98 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v26 = Instance;
        v28 = *(_QWORD *)(Instance + 16);
        v27 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v81.fields.currentCryptoKey = v28;
        *(_QWORD *)&v81.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v81, 0);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4C211E1 )
        {
          sub_1C2D490(&NetworkManager_TypeInfo);
          byte_4C211E1 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v8 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v8,
                              v29,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              1,
                              1,
                              -1,
                              -1,
                              -1,
                              0);
        if ( !Instance )
          break;
        v31 = *(_QWORD *)(Instance + 24);
        v32 = Instance;
        if ( (int)v31 < 1 )
          goto LABEL_96;
        v33 = 0;
        v77 = 0;
        do
        {
          if ( v33 >= (unsigned int)v31 )
            sub_1C2D6F4(Instance, v6, v30);
          v34 = *(ServantSkillEntity_o **)(v32 + 32 + 8 * v33);
          if ( v34 )
          {
            if ( !v9 )
              goto LABEL_92;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v34->fields.skillId, 1, 0);
            if ( Instance && !v34->fields.condLimitCount )
            {
              v35 = (SkillLvEntity_o *)Instance;
              v37 = *(_QWORD *)(v26 + 16);
              v36 = *(_QWORD *)(v26 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v82.fields.currentCryptoKey = v37;
              *(_QWORD *)&v82.fields.fakeValue = v36;
              v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48827868(v82, 0);
              v39 = (EventUpValInfo_o *)sub_1C2D6DC(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v39, setupInfo, v38, 1, 1, 0, 0);
              eventUpVallInfo = v39;
              Instance = SkillLvEntity__getEventUpVal_42665704(v35, &eventUpVallInfo, 1, 1, 0, 1, 0, 0);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v74;
                if ( !v74 )
                  goto LABEL_92;
                v6 = (Il2CppObject *)eventUpVallInfo;
                items = v74->fields._items;
                v41 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v74->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v74->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v74,
                    v6,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
                }
                else
                {
                  v43 = &items->obj.klass + size;
                  v74->fields._size = size + 1;
                  v43[4] = (Il2CppClass *)v6;
                  sub_1C2D434(v43 + 4);
                }
                v44 = (SkillInfo_o *)sub_1C2D6DC(SkillInfo_TypeInfo);
                SkillInfo___ctor(v44, 0);
                if ( !v44 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v34,
                  &v44->fields.title,
                  &v44->fields.explanation,
                  0);
                v44->fields.id = v35->fields.skillId;
                if ( !v73 )
                  goto LABEL_92;
                v45 = v73->fields._items;
                v46 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v73->fields._version;
                if ( !v45 )
                  goto LABEL_92;
                v47 = v73->fields._size;
                if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v73,
                    (Il2CppObject *)v44,
                    *(const MethodInfo_3789B84 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
                }
                else
                {
                  v48 = &v45->obj.klass + v47;
                  v73->fields._size = v47 + 1;
                  v48[4] = (Il2CppClass *)v44;
                  Instance = sub_1C2D434(v48 + 4);
                }
                v77 = 1;
              }
            }
          }
          LODWORD(v31) = *(_DWORD *)(v32 + 24);
          ++v33;
        }
        while ( (__int64)v33 < (int)v31 );
        eventIdList = v69;
        this = v70;
        v11 = v67;
        v8 = v68;
        if ( (v77 & 1) != 0 )
        {
          Instance = (__int64)v74;
          if ( !v74 )
            break;
          v49 = System_Collections_Generic_List_object___ToArray(
                  v74,
                  (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = (__int64)v73;
          if ( !v73 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v73,
                                (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v71;
          if ( !v72 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v72,
            idx,
            (ServantEntity_o *)v26,
            (EventUpValInfo_array *)v49,
            (SkillInfo_array *)Instance,
            v50);
          Instance = (__int64)v70->fields.equipList;
          if ( !Instance )
            break;
          v51 = *(_QWORD *)(Instance + 16);
          v15 = v75;
          v52 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v51 )
            break;
          v53 = *(int *)(Instance + 24);
          if ( (unsigned int)v53 >= *(_DWORD *)(v51 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v72,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
          }
          else
          {
            v54 = v51 + 8 * v53;
            *(_DWORD *)(Instance + 24) = v53 + 1;
            *(_QWORD *)(v54 + 32) = v72;
            sub_1C2D434(v54 + 32);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_71163704((UnityEngine_Object_o *)v21, 0);
          MasterData_object = v71;
          v15 = v75;
          v59 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v59 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v17 = v17 + v59->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v16 >= v11->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_1C2D6EC(Instance, v6);
  }
  v15 = 0;
  idx = 0;
LABEL_85:
  v60 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v60);
  HIDWORD(v79) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v62 = System_Int32__ToString((int32_t)&v79 + 4, 0);
      v63 = System_String__Concat_63457864((System_String_o *)StringLiteral_3191/*"BonusFilterEquipId"*/, v62, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v63, 0);
      ++HIDWORD(v79);
    }
    while ( SHIDWORD(v79) < MaxIndividualFilter );
  }
  LODWORD(v79) = v15;
  if ( v15 < MaxIndividualFilter )
  {
    do
    {
      v64 = System_Int32__ToString((int32_t)&v79, 0);
      v65 = System_String__Concat_63457864((System_String_o *)StringLiteral_3193/*"BonusFilterGroupId"*/, v64, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v65, 0);
      LODWORD(v79) = v79 + 1;
    }
    while ( (int)v79 < MaxIndividualFilter );
  }
  return idx + v15;
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

  if ( (byte_4C21D49 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C21D49 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1C2D6EC(0, v4);
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
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5 && v6 == 4;
}


void ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21D48 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C21D48 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C2D6EC(0, v4);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4C21D47 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C21D47 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C2D6EC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1C2D6EC(0, v7);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v9.fields._current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21D46 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C21D46 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C2D6EC(0, v4);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C21D4A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4C21D4A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1C2D6EC(0, v4);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4C21D4D & 1) == 0 )
  {
    sub_1C2D490(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4C21D4D = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_1C2D434(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
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
    sub_1C2D6EC(this, a);
  return b->fields.priority - a->fields.priority;
}