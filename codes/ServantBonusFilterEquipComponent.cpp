void ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  if ( (byte_5932F9D & 1) == 0 )
  {
    sub_21FFC50(&ServantBonusFilterEquipComponent_TypeInfo);
    byte_5932F9D = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void ServantBonusFilterEquipComponent___ctor(ServantBonusFilterEquipComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5932F9C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
    byte_5932F9C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.equipList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantBonusFilterEquipComponent__CreateList(
        ServantBonusFilterEquipComponent_o *this,
        System_Int32_array *eventIdList,
        const MethodInfo *method)
{
  void *Instance; // x0
  Il2CppObject *v6; // x1
  Il2CppObject *MasterData_object; // x27
  Il2CppObject *v8; // x28
  Il2CppObject *v9; // x24
  __int64 v10; // x2
  ServantBonusFilterEquipComponent___c_c *v11; // x8
  System_Collections_Generic_List_object__o *v12; // x29
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x9
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v15; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x2
  float v24; // s8
  int32_t v25; // w26
  int32_t v26; // w19
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *Item; // x20
  Il2CppObject *prefab; // x21
  Il2CppObject *v31; // x23
  __int64 v32; // x2
  float v33; // s9
  const MethodInfo *v34; // x5
  int klass_high; // w8
  Il2CppObject *v36; // x21
  __int64 v37; // x2
  ServantEntity_o *v38; // x26
  __int64 v39; // x20
  __int64 v40; // x21
  __int64 v41; // x2
  int32_t v42; // w20
  System_String_o *v43; // x2
  __int64 v44; // x8
  _QWORD *v45; // x21
  unsigned __int64 v46; // x29
  ServantSkillEntity_o *v47; // x27
  SkillLvEntity_o *v48; // x20
  __int64 v49; // x25
  __int64 v50; // x28
  int32_t v51; // w25
  EventUpValInfo_o *v52; // x28
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  SkillInfo_o *v62; // x25
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  struct System_Object_array *v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  Il2CppClass **v72; // x0
  System_Object_array *v73; // x20
  const MethodInfo *v74; // x5
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  __int64 v84; // x8
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  __int64 v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x8
  ServantBonusFilterEquipComponent_c *v95; // x0
  ServantBonusFilterSelectMenu_c *v96; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  System_String_o *v100; // x0
  System_String_o *v101; // x0
  System_Collections_Generic_List_object__o *v103; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v104; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v105; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v106; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v107; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v108; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v109; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v110; // [xsp+40h] [xbp-A0h]
  int32_t v111; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v113; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v115; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v117; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v118; // 0:x0.16

  if ( (byte_5932F96 & 1) == 0 )
  {
    sub_21FFC50(&System_Comparison_EventBonusFilterEntity__TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_EventBonusFilterMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantSkillMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_21FFC50(&EventUpValInfo_TypeInfo);
    sub_21FFC50(&EventUpValSetupInfo_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SkillInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_EventUpValInfo__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_SkillInfo__TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&ServantBonusFilterEquipComponent_TypeInfo);
    sub_21FFC50(&ServantBonusFilterSelectMenu_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&SkillInfo_TypeInfo);
    sub_21FFC50(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__);
    sub_21FFC50(&ServantBonusFilterEquipComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_3318/*"BonusFilterEquipId"*/);
    sub_21FFC50(&StringLiteral_3320/*"BonusFilterGroupId"*/);
    byte_5932F96 = 1;
  }
  v115 = 0;
  eventUpVallInfo = 0;
  setupInfo = (EventUpValSetupInfo_o *)sub_21FFEBC(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_48687632(setupInfo, eventIdList, 0, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v8 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v9 = DataManager__GetMasterData_object_(
         (DataManager_o *)Instance,
         (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, eventIdList, 1, 1, 0);
  v11 = ServantBonusFilterEquipComponent___c_TypeInfo;
  v12 = (System_Collections_Generic_List_object__o *)Instance;
  if ( !*(&ServantBonusFilterEquipComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent___c_TypeInfo, v6, v10);
    v11 = ServantBonusFilterEquipComponent___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__4_0 = (System_Comparison_T__o *)static_fields->__9__4_0;
  if ( !_9__4_0 )
  {
    if ( !*(&v11->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v11, v6, v10);
      static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__4_0 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(_9__4_0, v15, Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, 0);
    v16 = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    v16->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__4_0, (int32_t)_9__4_0, v17, v18, v19, v20, v21, v22);
  }
  v106 = this;
  if ( !v12 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_71636404(
    v12,
    _9__4_0,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v110 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v109 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v109,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v12->fields._size >= 1 )
  {
    v24 = 0.0;
    v25 = 0;
    v26 = 0;
    idx = 0;
    v104 = v8;
    v105 = eventIdList;
    v107 = MasterData_object;
    v103 = v12;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v12,
               v26,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
      v31 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_42881912((UnityEngine_GameObject_o *)v31, this->fields.parent, 0);
      GameObjectExtensions__SetLocalPositionY((UnityEngine_GameObject_o *)v31, v24, 0);
      Instance = ServantBonusFilterEquipComponent_TypeInfo;
      if ( !*(&ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v6, v32);
        Instance = ServantBonusFilterEquipComponent_TypeInfo;
      }
      if ( !v31 )
        break;
      v33 = **((float **)Instance + 23);
      Instance = UnityEngine_GameObject__GetComponent_object_(
                   (UnityEngine_GameObject_o *)v31,
                   (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !Item )
        break;
      v24 = v24 - v33;
      klass_high = HIDWORD(Item[1].klass);
      v36 = (Il2CppObject *)Instance;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_39410684(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v25,
          eventIdList,
          (int32_t)Item[1].monitor,
          idx,
          v34);
        Instance = this->fields.equipList;
        if ( !Instance )
          break;
        v91 = *((_QWORD *)Instance + 2);
        v92 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*((_DWORD *)Instance + 7);
        if ( !v91 )
          break;
        v93 = *((int *)Instance + 6);
        if ( (unsigned int)v93 >= *(_DWORD *)(v91 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v36,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
        }
        else
        {
          v94 = v91 + 8 * v93;
          *((_DWORD *)Instance + 6) = v93 + 1;
          *(_QWORD *)(v94 + 32) = v36;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v94 + 32), (int32_t)v36, v85, v86, v87, v88, v89, v90);
        }
        ++v25;
      }
      else if ( klass_high == 1 )
      {
        v111 = v25;
        if ( !MasterData_object )
          break;
        v108 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = DataMasterBase_object__object__int___GetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                     (int32_t)Item[1].monitor,
                     (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v38 = (ServantEntity_o *)Instance;
        v39 = *((_QWORD *)Instance + 2);
        v40 = *((_QWORD *)Instance + 3);
        if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v37);
        *(_QWORD *)&v117.fields.currentCryptoKey = v39;
        *(_QWORD *)&v117.fields.fakeValue = v40;
        v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v117, 0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v41);
        if ( !byte_5931D52 )
        {
          sub_21FFC50(&NetworkManager_TypeInfo);
          byte_5931D52 = 1;
        }
        Instance = NetworkManager_TypeInfo;
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6, v41);
          Instance = NetworkManager_TypeInfo;
        }
        if ( !v8 )
          break;
        Instance = ServantSkillMaster__getUseEntityList(
                     (ServantSkillMaster_o *)v8,
                     v42,
                     *(_QWORD *)(*((_QWORD *)Instance + 23) + 64LL),
                     1,
                     1,
                     -1,
                     -1,
                     -1,
                     0);
        if ( !Instance )
          break;
        v44 = *((_QWORD *)Instance + 3);
        v45 = Instance;
        if ( (int)v44 < 1 )
          goto LABEL_96;
        v46 = 0;
        v113 = 0;
        do
        {
          if ( v46 >= (unsigned int)v44 )
            sub_21FFED4(Instance);
          v47 = (ServantSkillEntity_o *)v45[v46 + 4];
          if ( v47 )
          {
            if ( !v9 )
              goto LABEL_92;
            Instance = SkillLvMaster__GetEntity((SkillLvMaster_o *)v9, v47->fields.skillId, 1, 0);
            if ( Instance && !v47->fields.condLimitCount )
            {
              v48 = (SkillLvEntity_o *)Instance;
              v49 = *(_QWORD *)&v38->fields.id.fields.currentCryptoKey;
              v50 = *(_QWORD *)&v38->fields.id.fields.fakeValue;
              if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v6, v43);
              *(_QWORD *)&v118.fields.currentCryptoKey = v49;
              *(_QWORD *)&v118.fields.fakeValue = v50;
              v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v118, 0);
              v52 = (EventUpValInfo_o *)sub_21FFEBC(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v52, setupInfo, v51, 1, 1, 0, 0);
              eventUpVallInfo = v52;
              Instance = (void *)SkillLvEntity__getEventUpVal_49857460(v48, &eventUpVallInfo, 1, 1, 0, 1, 0, -1, 0);
              if ( ((unsigned __int8)Instance & 1) != 0 )
              {
                Instance = v110;
                if ( !v110 )
                  goto LABEL_92;
                items = v110->fields._items;
                v6 = (Il2CppObject *)eventUpVallInfo;
                v59 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v110->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v110->fields._size;
                if ( (unsigned int)size >= LODWORD(items->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v110,
                    v6,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
                }
                else
                {
                  v61 = &items->obj.klass + size;
                  v110->fields._size = size + 1;
                  v61[4] = (Il2CppClass *)v6;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v61 + 4), (int32_t)v6, v43, v53, v54, v55, v56, v57);
                }
                v62 = (SkillInfo_o *)sub_21FFEBC(SkillInfo_TypeInfo);
                SkillInfo___ctor(v62, 0);
                if ( !v62 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v47,
                  &v62->fields.title,
                  &v62->fields.explanation,
                  0);
                v62->fields.id = v48->fields.skillId;
                if ( !v109 )
                  goto LABEL_92;
                v69 = v109->fields._items;
                v70 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v109->fields._version;
                if ( !v69 )
                  goto LABEL_92;
                v71 = v109->fields._size;
                if ( (unsigned int)v71 >= LODWORD(v69->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v109,
                    (Il2CppObject *)v62,
                    *(const MethodInfo_444FB2C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
                }
                else
                {
                  v72 = &v69->obj.klass + v71;
                  v109->fields._size = v71 + 1;
                  v72[4] = (Il2CppClass *)v62;
                  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 4), (int32_t)v62, v63, v64, v65, v66, v67, v68);
                }
                v113 = 1;
              }
            }
          }
          LODWORD(v44) = *((_DWORD *)v45 + 6);
          ++v46;
        }
        while ( (__int64)v46 < (int)v44 );
        eventIdList = v105;
        this = v106;
        v12 = v103;
        v8 = v104;
        if ( (v113 & 1) != 0 )
        {
          Instance = v110;
          if ( !v110 )
            break;
          v73 = System_Collections_Generic_List_object___ToArray(
                  v110,
                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = v109;
          if ( !v109 )
            break;
          Instance = System_Collections_Generic_List_object___ToArray(
                       v109,
                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v107;
          if ( !v108 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v108,
            idx,
            v38,
            (EventUpValInfo_array *)v73,
            (SkillInfo_array *)Instance,
            v74);
          Instance = v106->fields.equipList;
          if ( !Instance )
            break;
          v81 = *((_QWORD *)Instance + 2);
          v25 = v111;
          v82 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*((_DWORD *)Instance + 7);
          if ( !v81 )
            break;
          v83 = *((int *)Instance + 6);
          if ( (unsigned int)v83 >= *(_DWORD *)(v81 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v108,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
          }
          else
          {
            v84 = v81 + 8 * v83;
            *((_DWORD *)Instance + 6) = v83 + 1;
            *(_QWORD *)(v84 + 32) = v108;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 32), (int32_t)v108, v75, v76, v77, v78, v79, v80);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v43);
          UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)v31, 0);
          MasterData_object = v107;
          v25 = v111;
          v95 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !*(&ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo, v6, v23);
            v95 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v24 = v24 + v95->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v26 >= v12->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_21FFECC(Instance, v6);
  }
  v25 = 0;
  idx = 0;
LABEL_85:
  v96 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !*(&ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo, v6, v23);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v96);
  HIDWORD(v115) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v98 = System_Int32__ToString((int32_t)&v115 + 4, 0);
      v99 = System_String__Concat_75438412((System_String_o *)StringLiteral_3318/*"BonusFilterEquipId"*/, v98, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v99, 0);
      ++HIDWORD(v115);
    }
    while ( SHIDWORD(v115) < MaxIndividualFilter );
  }
  LODWORD(v115) = v25;
  if ( v25 < MaxIndividualFilter )
  {
    do
    {
      v100 = System_Int32__ToString((int32_t)&v115, 0);
      v101 = System_String__Concat_75438412((System_String_o *)StringLiteral_3320/*"BonusFilterGroupId"*/, v100, 0);
      UnityEngine_PlayerPrefs__DeleteKey(v101, 0);
      LODWORD(v115) = v115 + 1;
    }
    while ( (int)v115 < MaxIndividualFilter );
  }
  return idx + v25;
}


bool ServantBonusFilterEquipComponent__IsSetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  bool v5; // w19
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932F9A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_5932F9A = 1;
  }
  equipList = this->fields.equipList;
  memset(&v7, 0, sizeof(v7));
  if ( !equipList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v7,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  do
  {
    v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v7,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v5 )
      break;
    if ( !v7.fields._current )
      sub_21FFECC(0, v4);
  }
  while ( !ServantBonusFilterEquipListViewObject__IsSetFilter(
             (ServantBonusFilterEquipListViewObject_o *)v7.fields._current,
             v4) );
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v7,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
  return v5;
}


void ServantBonusFilterEquipComponent__ResetIndividualFilter(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932F99 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_5932F99 = 1;
  }
  equipList = this->fields.equipList;
  memset(&v5, 0, sizeof(v5));
  if ( !equipList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_21FFECC(0, v4);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void ServantBonusFilterEquipComponent__SetButtonEnable(
        ServantBonusFilterEquipComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5932F98 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_5932F98 = 1;
  }
  equipList = this->fields.equipList;
  memset(&v8, 0, sizeof(v8));
  if ( !equipList )
    sub_21FFECC(0, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_21FFECC(0, v6);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      isEnable,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__SetInitButtonSelect(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932F97 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_5932F97 = 1;
  }
  equipList = this->fields.equipList;
  memset(&v5, 0, sizeof(v5));
  if ( !equipList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_21FFECC(0, v4);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent__UpdateFilterSave(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *equipList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5932F9B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
    byte_5932F9B = 1;
  }
  equipList = this->fields.equipList;
  memset(&v5, 0, sizeof(v5));
  if ( !equipList )
    sub_21FFECC(0, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v5,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v5,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v5.fields._current )
      sub_21FFECC(0, v4);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v5.fields._current,
      v4);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v5,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5932F9E & 1) == 0 )
  {
    sub_21FFC50(&ServantBonusFilterEquipComponent___c_TypeInfo);
    byte_5932F9E = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ServantBonusFilterEquipComponent___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, a);
  return b->fields.priority - a->fields.priority;
}