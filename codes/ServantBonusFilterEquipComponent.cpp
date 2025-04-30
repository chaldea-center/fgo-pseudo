void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A49789 & 1) == 0 )
  {
    sub_1B863B8(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_4A49789 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A49788 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v3);
    byte_4A49788 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.equipList, (int32_t)v4, v5, v6);
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
  void *Instance; // x0
  Il2CppObject *v38; // x1
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v40; // x28
  Il2CppObject *v41; // x24
  ServantBonusFilterEquipComponent___c_c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v45; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w27
  int32_t v50; // w19
  float v51; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v54; // x20
  Il2CppObject *v55; // x23
  float v56; // s9
  const MethodInfo *v57; // x5
  int klass_high; // w8
  Il2CppObject *v59; // x21
  ServantEntity_o *v60; // x27
  __int64 v61; // x20
  __int64 v62; // x21
  int32_t v63; // w20
  __int64 v64; // x8
  _QWORD *v65; // x21
  unsigned __int64 v66; // x29
  ServantSkillEntity_o *v67; // x26
  SkillLvEntity_o *v68; // x20
  __int64 v69; // x25
  __int64 v70; // x28
  int32_t v71; // w25
  EventUpValInfo_o *v72; // x28
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct System_Object_array *items; // x8
  _QWORD *v76; // x9
  __int64 size; // x10
  Il2CppClass **v78; // x0
  SkillInfo_o *v79; // x25
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  System_Object_array *v86; // x20
  const MethodInfo *v87; // x5
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  __int64 v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  __int64 v93; // x8
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  __int64 v96; // x8
  _QWORD *v97; // x9
  __int64 v98; // x10
  __int64 v99; // x8
  ServantBonusFilterEquipComponent_c *v100; // x0
  ServantBonusFilterSelectMenu_c *v101; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v103; // x0
  System_String_o *v104; // x0
  System_String_o *v105; // x0
  System_String_o *v106; // x0
  System_Collections_Generic_List_object__o *v108; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v109; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v110; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v111; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v112; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v113; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v114; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v115; // [xsp+40h] [xbp-A0h]
  int32_t v116; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v118; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v120; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v122; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v123; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4A49782 & 1) == 0 )
  {
    sub_1B863B8(&System_Comparison_EventBonusFilterEntity__TypeInfo, eventIdList);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1B863B8(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1B863B8(&EventUpValInfo_TypeInfo, v10);
    sub_1B863B8(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1B863B8(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1B863B8(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1B863B8(&NetworkManager_TypeInfo, v25);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v26);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v27);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1B863B8(&ServantBonusFilterEquipComponent_TypeInfo, v29);
    sub_1B863B8(&ServantBonusFilterSelectMenu_TypeInfo, v30);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1B863B8(&SkillInfo_TypeInfo, v32);
    sub_1B863B8(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v33);
    sub_1B863B8(&ServantBonusFilterEquipComponent___c_TypeInfo, v34);
    sub_1B863B8(&StringLiteral_3219/*"BonusFilterEquipId"*/, v35);
    sub_1B863B8(&StringLiteral_3221/*"BonusFilterGroupId"*/, v36);
    byte_4A49782 = 1;
  }
  v120 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1B86604(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_39889424(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 1, 0LL);
  v42 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v43 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo);
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
    _9__4_0 = (System_Comparison_T__o *)sub_1B86604(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v45,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__4_0, (int32_t)_9__4_0, v47, v48);
  }
  v111 = this;
  if ( !v43 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_56615964(
    v43,
    _9__4_0,
    (const MethodInfo_35FE41C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v115 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v115,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v114 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v114,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v43->fields._size >= 1 )
  {
    v49 = 0;
    v50 = 0;
    v51 = 0.0;
    idx = 0;
    v109 = v40;
    v110 = v3;
    v112 = MasterData_object;
    v108 = v43;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v43,
               v50,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v54 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v55 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_34388184((UnityEngine_GameObject_o *)v55, this->fields.parent, 0LL);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v55, v51, 0LL);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v55 )
        break;
      v56 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)v55,
                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v54 )
        break;
      klass_high = HIDWORD(v54[1].klass);
      v59 = (Il2CppObject *)Instance;
      v51 = v51 - v56;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_31659244(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v49,
          v3,
          (int32_t)v54[1].monitor,
          idx,
          v57);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        v96 = *((_QWORD *)Instance + 2);
        v97 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v96 )
          break;
        v98 = *((int *)Instance + 6);
        if ( (unsigned int)v98 >= *(_DWORD *)(v96 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v59,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v99 = v96 + 8 * v98;
          *((_DWORD *)Instance + 6) = v98 + 1;
          *(_QWORD *)(v99 + 32) = v59;
          sub_1B8635C((CGThumbnailListItem_o *)(v99 + 32), (int32_t)v59, v94, v95);
        }
        ++v49;
      }
      else if ( klass_high == 1 )
      {
        v116 = v49;
        if ( !MasterData_object )
          break;
        v113 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)v54[1].monitor,
                     (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v60 = (ServantEntity_o *)Instance;
        v62 = *((_QWORD *)Instance + 2);
        v61 = *((_QWORD *)Instance + 3);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v122.fields.currentCryptoKey = v62;
        *(_QWORD *)&v122.fields.fakeValue = v61;
        v63 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v122, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4A48C25 )
        {
          sub_1B863B8(&NetworkManager_TypeInfo, v38);
          byte_4A48C25 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v40 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(
                     (ServantSkillMaster_o *)v40,
                     v63,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     1,
                     1,
                     -1,
                     -1,
                     -1LL,
                     0LL);
        if ( !Instance )
          break;
        v64 = *((_QWORD *)Instance + 3);
        v65 = Instance;
        if ( (int)v64 < 1 )
          goto LABEL_96;
        v66 = 0LL;
        v118 = 0;
        do
        {
          if ( v66 >= (unsigned int)v64 )
            sub_1B8661C(Instance, v38);
          v67 = (ServantSkillEntity_o *)v65[v66 + 4];
          if ( v67 )
          {
            if ( !v41 )
              goto LABEL_92;
            Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)v41, v67->fields.skillId, 1, 0LL);
            if ( Instance && !v67->fields.condLimitCount )
            {
              v68 = (SkillLvEntity_o *)Instance;
              v70 = *(_QWORD *)&v60->fields.id.fields.currentCryptoKey;
              v69 = *(_QWORD *)&v60->fields.id.fields.fakeValue;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v123.fields.currentCryptoKey = v70;
              *(_QWORD *)&v123.fields.fakeValue = v69;
              v71 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v123, 0LL);
              v72 = (EventUpValInfo_o *)sub_1B86604(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v72, setupInfo, v71, 1, 1, 0, 0LL);
              eventUpVallInfo = v72;
              Instance = (void *)SkillLvEntity__getEventUpVal_40978532(v68, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v115;
                if ( !v115 )
                  goto LABEL_92;
                v38 = (Il2CppObject *)eventUpVallInfo;
                items = v115->fields._items;
                v76 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v115->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v115->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v115,
                    v38,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
                }
                else
                {
                  v78 = &items->obj.klass + size;
                  v115->fields._size = size + 1;
                  v78[4] = (Il2CppClass *)v38;
                  sub_1B8635C((CGThumbnailListItem_o *)(v78 + 4), (int32_t)v38, v73, v74);
                }
                v79 = (SkillInfo_o *)sub_1B86604(SkillInfo_TypeInfo);
                SkillInfo___ctor(v79, 0LL);
                if ( !v79 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v67,
                  &v79->fields.title,
                  &v79->fields.explanation,
                  0LL);
                v79->fields.id = v68->fields.skillId;
                if ( !v114 )
                  goto LABEL_92;
                v82 = v114->fields._items;
                v83 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v114->fields._version;
                if ( !v82 )
                  goto LABEL_92;
                v84 = v114->fields._size;
                if ( (unsigned int)v84 >= v82->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v114,
                    (Il2CppObject *)v79,
                    *(const MethodInfo_35FC958 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
                }
                else
                {
                  v85 = &v82->obj.klass + v84;
                  v114->fields._size = v84 + 1;
                  v85[4] = (Il2CppClass *)v79;
                  sub_1B8635C((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v79, v80, v81);
                }
                v118 = 1;
              }
            }
          }
          LODWORD(v64) = *((_DWORD *)v65 + 6);
          ++v66;
        }
        while ( (__int64)v66 < (int)v64 );
        v3 = v110;
        this = v111;
        v43 = v108;
        v40 = v109;
        if ( (v118 & 1) != 0 )
        {
          Instance = v115;
          if ( !v115 )
            break;
          v86 = System_Collections_Generic_List_object___ToArray(
                  v115,
                  (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = v114;
          if ( !v114 )
            break;
          Instance = System_Collections_Generic_List_object___ToArray(
                       v114,
                       (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v112;
          if ( !v113 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v113,
            idx,
            v60,
            (EventUpValInfo_array *)v86,
            (SkillInfo_array *)Instance,
            v87);
          Instance = v111->fields.equipList;
          if ( !Instance )
            break;
          v90 = *((_QWORD *)Instance + 2);
          v49 = v116;
          v91 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v90 )
            break;
          v92 = *((int *)Instance + 6);
          if ( (unsigned int)v92 >= *(_DWORD *)(v90 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v113,
              *(const MethodInfo_35FC958 **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
          }
          else
          {
            v93 = v90 + 8 * v92;
            *((_DWORD *)Instance + 6) = v92 + 1;
            *(_QWORD *)(v93 + 32) = v113;
            sub_1B8635C((CGThumbnailListItem_o *)(v93 + 32), (int32_t)v113, v88, v89);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)v55, 0LL);
          MasterData_object = v112;
          v49 = v116;
          v100 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v100 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v51 = v51 + v100->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v50 >= v43->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_1B86614(Instance, v38);
  }
  v49 = 0;
  idx = 0;
LABEL_85:
  v101 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v101);
  HIDWORD(v120) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v103 = System_Int32__ToString((int32_t)&v120 + 4, 0LL);
      v104 = System_String__Concat_61645176((System_String_o *)StringLiteral_3219/*"BonusFilterEquipId"*/, v103, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v104, 0LL);
      ++HIDWORD(v120);
    }
    while ( SHIDWORD(v120) < MaxIndividualFilter );
  }
  LODWORD(v120) = v49;
  if ( v49 < MaxIndividualFilter )
  {
    do
    {
      v105 = System_Int32__ToString((int32_t)&v120, 0LL);
      v106 = System_String__Concat_61645176((System_String_o *)StringLiteral_3221/*"BonusFilterGroupId"*/, v105, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v106, 0LL);
      LODWORD(v120) = v120 + 1;
    }
    while ( (int)v120 < MaxIndividualFilter );
  }
  return idx + v49;
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

  if ( (byte_4A49786 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A49786 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1B86614(0LL, v7);
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
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4A49785 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A49785 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B86614(0LL, v7);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4A49784 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_4A49784 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B86614(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1B86614(0LL, v10);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v9,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4A49783 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A49783 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B86614(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4A49787 & 1) == 0 )
  {
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1B863B8(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4A49787 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1B86614(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1B86614(0LL, v7);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4978A & 1) == 0 )
  {
    sub_1B863B8(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_4A4978A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)ServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B86614(this, a);
  return b->fields.priority - a->fields.priority;
}