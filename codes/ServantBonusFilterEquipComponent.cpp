void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_4A56310 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_4A56310 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4A5630F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_4A5630F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_1B88554(&this->fields.equipList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v8; // x28
  Il2CppObject *v9; // x24
  ServantBonusFilterEquipComponent___c_c *v10; // x8
  System_Collections_Generic_List_object__o *v11; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v13; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v15; // w23
  int32_t v16; // w19
  float v17; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v20; // x20
  Il2CppObject *v21; // x22
  float v22; // s9
  const MethodInfo *v23; // x4
  int klass_high; // w8
  Il2CppObject *v25; // x21
  __int64 v26; // x23
  __int64 v27; // x20
  __int64 v28; // x21
  int32_t v29; // w20
  __int64 v30; // x8
  __int64 v31; // x21
  unsigned __int64 v32; // x29
  ServantSkillEntity_o *v33; // x26
  SkillLvEntity_o *v34; // x20
  __int64 v35; // x25
  __int64 v36; // x28
  int32_t v37; // w25
  EventUpValInfo_o *v38; // x28
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
  ServantBonusFilterSelectMenu_c *inited; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  System_String_o *v63; // x0
  System_String_o *v64; // x0
  System_Collections_Generic_List_object__o *v66; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v67; // [xsp+10h] [xbp-D0h]
  Il2CppObject *v68; // [xsp+18h] [xbp-C8h]
  System_Int32_array *v69; // [xsp+20h] [xbp-C0h]
  ServantBonusFilterEquipComponent_o *v70; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v71; // [xsp+30h] [xbp-B0h]
  int32_t idx; // [xsp+3Ch] [xbp-A4h]
  System_Collections_Generic_List_object__o *v73; // [xsp+40h] [xbp-A0h]
  System_Collections_Generic_List_object__o *v74; // [xsp+48h] [xbp-98h]
  int32_t v75; // [xsp+50h] [xbp-90h]
  char v76; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v78; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v81; // 0:x0.16

  if ( (byte_4A56309 & 1) == 0 )
  {
    sub_1B885B0(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&EventUpValInfo_TypeInfo);
    sub_1B885B0(&EventUpValSetupInfo_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_1B885B0(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillInfo_TypeInfo);
    sub_1B885B0(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_1B885B0(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3309/*"BonusFilterEquipId"*/);
    sub_1B885B0(&StringLiteral_3311/*"BonusFilterGroupId"*/);
    byte_4A56309 = 1;
  }
  v78 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B887FC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_38910068(setupInfo, eventIdList, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_88;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 0LL);
  v10 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v11 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    Instance = j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
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
    _9__4_0 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v13,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1B88554(&static_fields->__9__4_0, _9__4_0);
  }
  if ( !v11 )
    goto LABEL_88;
  System_Collections_Generic_List_object___Sort_55571192(
    v11,
    _9__4_0,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v74 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v74,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v73 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v73,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v11->fields._size >= 1 )
  {
    v15 = 0;
    v16 = 0;
    v17 = 0.0;
    idx = 0;
    v69 = eventIdList;
    v70 = this;
    v67 = v8;
    v68 = MasterData_object;
    v66 = v11;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v16,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v20 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_33730068((UnityEngine_GameObject_o *)v21, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v21, v17, 0LL);
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
                            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v20 )
        break;
      klass_high = HIDWORD(v20[1].klass);
      v25 = (Il2CppObject *)Instance;
      v17 = v17 - v22;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_30660584(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v15,
          eventIdList,
          (int32_t)v20[1].monitor,
          v23);
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
            v25,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
        }
        else
        {
          v57 = v54 + 8 * v56;
          *(_DWORD *)(Instance + 24) = v56 + 1;
          *(_QWORD *)(v57 + 32) = v25;
          sub_1B88554(v57 + 32, v25);
        }
        ++v15;
      }
      else if ( klass_high == 1 )
      {
        v75 = v15;
        if ( !MasterData_object )
          break;
        v71 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v20[1].monitor,
                              (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v26 = Instance;
        v28 = *(_QWORD *)(Instance + 16);
        v27 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v80.fields.currentCryptoKey = v28;
        *(_QWORD *)&v80.fields.fakeValue = v27;
        v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v80, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Instance = NetworkManager__get_UserId(0LL);
        if ( !v8 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v8,
                              v29,
                              Instance,
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v30 = *(_QWORD *)(Instance + 24);
        v31 = Instance;
        if ( (int)v30 < 1 )
          goto LABEL_92;
        v32 = 0LL;
        v76 = 0;
        do
        {
          if ( v32 >= (unsigned int)v30 )
            sub_1B88814(Instance, v6);
          v33 = *(ServantSkillEntity_o **)(v31 + 32 + 8 * v32);
          if ( v33 )
          {
            if ( !v9 )
              goto LABEL_88;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v33->fields.skillId, 1, 0LL);
            if ( Instance && !v33->fields.condLimitCount )
            {
              v34 = (SkillLvEntity_o *)Instance;
              v36 = *(_QWORD *)(v26 + 16);
              v35 = *(_QWORD *)(v26 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v81.fields.currentCryptoKey = v36;
              *(_QWORD *)&v81.fields.fakeValue = v35;
              v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v81, 0LL);
              v38 = (EventUpValInfo_o *)sub_1B887FC(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v38, setupInfo, v37, 1, 1, 0, 0LL);
              eventUpVallInfo = v38;
              Instance = SkillLvEntity__getEventUpVal_39954432(v34, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v74;
                if ( !v74 )
                  goto LABEL_88;
                v6 = (Il2CppObject *)eventUpVallInfo;
                items = v74->fields._items;
                v40 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v74->fields._version;
                if ( !items )
                  goto LABEL_88;
                size = v74->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v74,
                    v6,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
                }
                else
                {
                  v42 = &items->obj.klass + size;
                  v74->fields._size = size + 1;
                  v42[4] = (Il2CppClass *)v6;
                  sub_1B88554(v42 + 4, v6);
                }
                v43 = (SkillInfo_o *)sub_1B887FC(SkillInfo_TypeInfo);
                SkillInfo___ctor(v43, 0LL);
                if ( !v43 )
                  goto LABEL_88;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v33,
                  &v43->fields.title,
                  &v43->fields.explanation,
                  0LL);
                v43->fields.id = v34->fields.skillId;
                if ( !v73 )
                  goto LABEL_88;
                v44 = v73->fields._items;
                v45 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v73->fields._version;
                if ( !v44 )
                  goto LABEL_88;
                v46 = v73->fields._size;
                if ( (unsigned int)v46 >= v44->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v73,
                    (Il2CppObject *)v43,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
                }
                else
                {
                  v47 = &v44->obj.klass + v46;
                  v73->fields._size = v46 + 1;
                  v47[4] = (Il2CppClass *)v43;
                  Instance = sub_1B88554(v47 + 4, v43);
                }
                v76 = 1;
              }
            }
          }
          LODWORD(v30) = *(_DWORD *)(v31 + 24);
          ++v32;
        }
        while ( (__int64)v32 < (int)v30 );
        MasterData_object = v68;
        eventIdList = v69;
        v11 = v66;
        v8 = v67;
        if ( (v76 & 1) != 0 )
        {
          Instance = (__int64)v74;
          if ( !v74 )
            break;
          v48 = System_Collections_Generic_List_object___ToArray(
                  v74,
                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          this = v70;
          Instance = (__int64)v73;
          if ( !v73 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v73,
                                (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          if ( !v71 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v71,
            idx,
            (ServantEntity_o *)v26,
            (EventUpValInfo_array *)v48,
            (SkillInfo_array *)Instance,
            v49);
          Instance = (__int64)v70->fields.equipList;
          if ( !Instance )
            break;
          v50 = *(_QWORD *)(Instance + 16);
          v15 = v75;
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
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = v50 + 8 * v52;
            *(_DWORD *)(Instance + 24) = v52 + 1;
            *(_QWORD *)(v53 + 32) = v71;
            sub_1B88554(v53 + 32, v71);
          }
          ++idx;
        }
        else
        {
LABEL_92:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)v21, 0LL);
          this = v70;
          v15 = v75;
          v58 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v58 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v17 = v17 + v58->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v16 >= v11->fields._size )
        goto LABEL_81;
    }
LABEL_88:
    sub_1B8880C(Instance, v6);
  }
  v15 = 0;
  idx = 0;
LABEL_81:
  inited = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    inited = (ServantBonusFilterSelectMenu_c *)j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)inited);
  HIDWORD(v78) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v61 = System_Int32__ToString((int32_t)&v78 + 4, 0LL);
      v62 = System_String__Concat_61707032((System_String_o *)StringLiteral_3309/*"BonusFilterEquipId"*/, v61, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v62, 0LL);
      ++HIDWORD(v78);
    }
    while ( SHIDWORD(v78) < MaxIndividualFilter );
  }
  LODWORD(v78) = v15;
  if ( v15 < MaxIndividualFilter )
  {
    do
    {
      v63 = System_Int32__ToString((int32_t)&v78, 0LL);
      v64 = System_String__Concat_61707032((System_String_o *)StringLiteral_3311/*"BonusFilterGroupId"*/, v63, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v64, 0LL);
      LODWORD(v78) = v78 + 1;
    }
    while ( (int)v78 < MaxIndividualFilter );
  }
  return idx + v15;
}


bool __fastcall ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  bool v5; // w19
  int v6; // w21
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5630D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4A5630D = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v8,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v8.fields._current )
      sub_1B8880C(0LL, v4);
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
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5 && v6 == 4;
}


void __fastcall ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5630C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4A5630C = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  bool v6; // w19
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5630B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4A5630B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B8880C(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v6 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v9,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v9.fields._current )
      sub_1B8880C(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v9.fields._current,
      v6,
      v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5630A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4A5630A = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5630E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_4A5630E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_1B8880C(0LL, v4);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19

  if ( (byte_4A56311 & 1) == 0 )
  {
    sub_1B885B0(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_4A56311 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_1B88554(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields, v1);
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
    sub_1B8880C(this, a);
  return b->fields.priority - a->fields.priority;
}