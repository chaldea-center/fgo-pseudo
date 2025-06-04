void __fastcall ServantBonusFilterEquipComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4AFCD34 & 1) == 0 )
  {
    sub_1BC3008(&ServantBonusFilterEquipComponent_TypeInfo, v1);
    byte_4AFCD34 = 1;
  }
  LODWORD(ServantBonusFilterEquipComponent_TypeInfo->static_fields->POS_Y_INTERVAL) = (struct ServantBonusFilterEquipComponent_StaticFields)1122762752;
}


void __fastcall ServantBonusFilterEquipComponent___ctor(
        ServantBonusFilterEquipComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20

  if ( (byte_4AFCD33 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__, method);
    sub_1BC3008(&System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo, v3);
    byte_4AFCD33 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject___ctor__);
  this->fields.equipList = (struct System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__o *)v4;
  sub_1BC2FAC(&this->fields.equipList);
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
  Il2CppObject *MasterData_object; // x26
  Il2CppObject *v40; // x28
  Il2CppObject *v41; // x24
  ServantBonusFilterEquipComponent___c_c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x29
  System_Comparison_T__o *_9__4_0; // x19
  Il2CppObject *v45; // x20
  struct ServantBonusFilterEquipComponent___c_StaticFields *static_fields; // x0
  int32_t v47; // w27
  int32_t v48; // w19
  float v49; // s8
  Il2CppObject *Item; // x0
  Il2CppObject *prefab; // x21
  Il2CppObject *v52; // x20
  Il2CppObject *v53; // x23
  float v54; // s9
  const MethodInfo *v55; // x5
  int klass_high; // w8
  Il2CppObject *v57; // x21
  __int64 v58; // x27
  __int64 v59; // x20
  __int64 v60; // x21
  int32_t v61; // w20
  __int64 v62; // x2
  __int64 v63; // x8
  __int64 v64; // x21
  unsigned __int64 v65; // x29
  ServantSkillEntity_o *v66; // x26
  SkillLvEntity_o *v67; // x20
  __int64 v68; // x25
  __int64 v69; // x28
  int32_t v70; // w25
  EventUpValInfo_o *v71; // x28
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  SkillInfo_o *v76; // x25
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  System_Object_array *v81; // x20
  const MethodInfo *v82; // x5
  __int64 v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  __int64 v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  __int64 v90; // x8
  ServantBonusFilterEquipComponent_c *v91; // x0
  ServantBonusFilterSelectMenu_c *v92; // x0
  int32_t MaxIndividualFilter; // w19
  System_String_o *v94; // x0
  System_String_o *v95; // x0
  System_String_o *v96; // x0
  System_String_o *v97; // x0
  System_Collections_Generic_List_object__o *v99; // [xsp+8h] [xbp-D8h]
  Il2CppObject *v100; // [xsp+10h] [xbp-D0h]
  System_Int32_array *v101; // [xsp+18h] [xbp-C8h]
  ServantBonusFilterEquipComponent_o *v102; // [xsp+20h] [xbp-C0h]
  Il2CppObject *v103; // [xsp+28h] [xbp-B8h]
  ServantBonusFilterEquipListViewObject_o *v104; // [xsp+30h] [xbp-B0h]
  System_Collections_Generic_List_object__o *v105; // [xsp+38h] [xbp-A8h]
  System_Collections_Generic_List_object__o *v106; // [xsp+40h] [xbp-A0h]
  int32_t v107; // [xsp+4Ch] [xbp-94h]
  int32_t idx; // [xsp+50h] [xbp-90h]
  char v109; // [xsp+54h] [xbp-8Ch]
  EventUpValSetupInfo_o *setupInfo; // [xsp+58h] [xbp-88h]
  __int64 v111; // [xsp+60h] [xbp-80h] BYREF
  EventUpValInfo_o *eventUpVallInfo; // [xsp+68h] [xbp-78h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v114; // 0:x0.16

  v3 = eventIdList;
  if ( (byte_4AFCD2D & 1) == 0 )
  {
    sub_1BC3008(&System_Comparison_EventBonusFilterEntity__TypeInfo, eventIdList);
    sub_1BC3008(&Method_DataManager_GetMasterData_EventBonusFilterMaster___, v5);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_ServantSkillMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_SkillLvMaster___, v8);
    sub_1BC3008(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v9);
    sub_1BC3008(&EventUpValInfo_TypeInfo, v10);
    sub_1BC3008(&EventUpValSetupInfo_TypeInfo, v11);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventUpValInfo__Add__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_SkillInfo__Add__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_SkillInfo__ToArray__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventUpValInfo__ToArray__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventUpValInfo___ctor__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_SkillInfo___ctor__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Count__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__, v22);
    sub_1BC3008(&System_Collections_Generic_List_EventUpValInfo__TypeInfo, v23);
    sub_1BC3008(&System_Collections_Generic_List_SkillInfo__TypeInfo, v24);
    sub_1BC3008(&NetworkManager_TypeInfo, v25);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GameObject___, v26);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v27);
    sub_1BC3008(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28);
    sub_1BC3008(&ServantBonusFilterEquipComponent_TypeInfo, v29);
    sub_1BC3008(&ServantBonusFilterSelectMenu_TypeInfo, v30);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_1BC3008(&SkillInfo_TypeInfo, v32);
    sub_1BC3008(&Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__, v33);
    sub_1BC3008(&ServantBonusFilterEquipComponent___c_TypeInfo, v34);
    sub_1BC3008(&StringLiteral_3169/*"BonusFilterEquipId"*/, v35);
    sub_1BC3008(&StringLiteral_3171/*"BonusFilterGroupId"*/, v36);
    byte_4AFCD2D = 1;
  }
  v111 = 0LL;
  eventUpVallInfo = 0LL;
  setupInfo = (EventUpValSetupInfo_o *)sub_1BC3254(EventUpValSetupInfo_TypeInfo);
  EventUpValSetupInfo___ctor_40756148(setupInfo, v3, 0, 0, 0, 0LL);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v40 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_ServantSkillMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  v41 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_EventBonusFilterMaster___);
  if ( !Instance )
    goto LABEL_92;
  Instance = (__int64)EventBonusFilterMaster__GetFilterList((EventBonusFilterMaster_o *)Instance, v3, 1, 1, 0LL);
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
    _9__4_0 = (System_Comparison_T__o *)sub_1BC3254(System_Comparison_EventBonusFilterEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__4_0,
      v45,
      Method_ServantBonusFilterEquipComponent___c__CreateList_b__4_0__,
      0LL);
    static_fields = ServantBonusFilterEquipComponent___c_TypeInfo->static_fields;
    static_fields->__9__4_0 = (struct System_Comparison_EventBonusFilterEntity__o *)_9__4_0;
    Instance = sub_1BC2FAC(&static_fields->__9__4_0);
  }
  v102 = this;
  if ( !v43 )
    goto LABEL_92;
  System_Collections_Generic_List_object___Sort_57288964(
    v43,
    _9__4_0,
    (const MethodInfo_36A2904 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__Sort__);
  v106 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_EventUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v106,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_EventUpValInfo___ctor__);
  v105 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_SkillInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v105,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_SkillInfo___ctor__);
  if ( v43->fields._size >= 1 )
  {
    v47 = 0;
    v48 = 0;
    v49 = 0.0;
    idx = 0;
    v100 = v40;
    v101 = v3;
    v103 = MasterData_object;
    v99 = v43;
    while ( 1 )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v43,
               v48,
               (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_EventBonusFilterEntity__get_Item__);
      prefab = (Il2CppObject *)this->fields.prefab;
      v52 = Item;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v53 = UnityEngine_Object__Instantiate_object_(
              prefab,
              (const MethodInfo_308AE24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SafeSetParent_35217712((UnityEngine_GameObject_o *)v53, this->fields.parent, 0LL);
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
                            (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_ServantBonusFilterEquipListViewObject___);
      if ( !v52 )
        break;
      klass_high = HIDWORD(v52[1].klass);
      v57 = (Il2CppObject *)Instance;
      v49 = v49 - v54;
      if ( klass_high == 2 )
      {
        if ( !Instance )
          break;
        ServantBonusFilterEquipListViewObject__SetItem_31928068(
          (ServantBonusFilterEquipListViewObject_o *)Instance,
          v47,
          v3,
          (int32_t)v52[1].monitor,
          idx,
          v55);
        Instance = (__int64)this->fields.equipList;
        if ( !Instance )
          break;
        v87 = *(_QWORD *)(Instance + 16);
        v88 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
        ++*(_DWORD *)(Instance + 28);
        if ( !v87 )
          break;
        v89 = *(int *)(Instance + 24);
        if ( (unsigned int)v89 >= *(_DWORD *)(v87 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)Instance,
            v57,
            *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = v87 + 8 * v89;
          *(_DWORD *)(Instance + 24) = v89 + 1;
          *(_QWORD *)(v90 + 32) = v57;
          sub_1BC2FAC(v90 + 32);
        }
        ++v47;
      }
      else if ( klass_high == 1 )
      {
        v107 = v47;
        if ( !MasterData_object )
          break;
        v104 = (ServantBonusFilterEquipListViewObject_o *)Instance;
        Instance = (__int64)DataMasterBase_object__object__int___GetEntity(
                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                              (int32_t)v52[1].monitor,
                              (const MethodInfo_32AF070 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          break;
        v58 = Instance;
        v60 = *(_QWORD *)(Instance + 16);
        v59 = *(_QWORD *)(Instance + 24);
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v113.fields.currentCryptoKey = v60;
        *(_QWORD *)&v113.fields.fakeValue = v59;
        v61 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v113, 0LL);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        if ( !byte_4AFC1F1 )
        {
          sub_1BC3008(&NetworkManager_TypeInfo, v38);
          byte_4AFC1F1 = 1;
        }
        Instance = (__int64)NetworkManager_TypeInfo;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Instance = (__int64)NetworkManager_TypeInfo;
        }
        if ( !v40 )
          break;
        Instance = (__int64)ServantSkillMaster__getUseEntityList(
                              (ServantSkillMaster_o *)v40,
                              v61,
                              *(_QWORD *)(*(_QWORD *)(Instance + 184) + 64LL),
                              1,
                              1,
                              -1,
                              -1,
                              -1LL,
                              0LL);
        if ( !Instance )
          break;
        v63 = *(_QWORD *)(Instance + 24);
        v64 = Instance;
        if ( (int)v63 < 1 )
          goto LABEL_96;
        v65 = 0LL;
        v109 = 0;
        do
        {
          if ( v65 >= (unsigned int)v63 )
            sub_1BC326C(Instance, v38, v62);
          v66 = *(ServantSkillEntity_o **)(v64 + 32 + 8 * v65);
          if ( v66 )
          {
            if ( !v41 )
              goto LABEL_92;
            Instance = (__int64)SkillLvMaster__GetEntity((SkillLvMaster_o *)v41, v66->fields.skillId, 1, 0LL);
            if ( Instance && !v66->fields.condLimitCount )
            {
              v67 = (SkillLvEntity_o *)Instance;
              v69 = *(_QWORD *)(v58 + 16);
              v68 = *(_QWORD *)(v58 + 24);
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
              *(_QWORD *)&v114.fields.currentCryptoKey = v69;
              *(_QWORD *)&v114.fields.fakeValue = v68;
              v70 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48024060(v114, 0LL);
              v71 = (EventUpValInfo_o *)sub_1BC3254(EventUpValInfo_TypeInfo);
              EventUpValInfo___ctor(v71, setupInfo, v70, 1, 1, 0, 0LL);
              eventUpVallInfo = v71;
              Instance = SkillLvEntity__getEventUpVal_41879020(v67, &eventUpVallInfo, 1, 1, 0, 1, 0LL, 0LL);
              if ( (Instance & 1) != 0 )
              {
                Instance = (__int64)v106;
                if ( !v106 )
                  goto LABEL_92;
                v38 = (Il2CppObject *)eventUpVallInfo;
                items = v106->fields._items;
                v73 = Method_System_Collections_Generic_List_EventUpValInfo__Add__;
                ++v106->fields._version;
                if ( !items )
                  goto LABEL_92;
                size = v106->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v106,
                    v38,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                }
                else
                {
                  v75 = &items->obj.klass + size;
                  v106->fields._size = size + 1;
                  v75[4] = (Il2CppClass *)v38;
                  sub_1BC2FAC(v75 + 4);
                }
                v76 = (SkillInfo_o *)sub_1BC3254(SkillInfo_TypeInfo);
                SkillInfo___ctor(v76, 0LL);
                if ( !v76 )
                  goto LABEL_92;
                ServantSkillEntity__getAcquisitionMethodExplanation(
                  v66,
                  &v76->fields.title,
                  &v76->fields.explanation,
                  0LL);
                v76->fields.id = v67->fields.skillId;
                if ( !v105 )
                  goto LABEL_92;
                v77 = v105->fields._items;
                v78 = Method_System_Collections_Generic_List_SkillInfo__Add__;
                ++v105->fields._version;
                if ( !v77 )
                  goto LABEL_92;
                v79 = v105->fields._size;
                if ( (unsigned int)v79 >= v77->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v105,
                    (Il2CppObject *)v76,
                    *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v80 = &v77->obj.klass + v79;
                  v105->fields._size = v79 + 1;
                  v80[4] = (Il2CppClass *)v76;
                  Instance = sub_1BC2FAC(v80 + 4);
                }
                v109 = 1;
              }
            }
          }
          LODWORD(v63) = *(_DWORD *)(v64 + 24);
          ++v65;
        }
        while ( (__int64)v65 < (int)v63 );
        v3 = v101;
        this = v102;
        v43 = v99;
        v40 = v100;
        if ( (v109 & 1) != 0 )
        {
          Instance = (__int64)v106;
          if ( !v106 )
            break;
          v81 = System_Collections_Generic_List_object___ToArray(
                  v106,
                  (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_EventUpValInfo__ToArray__);
          Instance = (__int64)v105;
          if ( !v105 )
            break;
          Instance = (__int64)System_Collections_Generic_List_object___ToArray(
                                v105,
                                (const MethodInfo_36A2998 *)Method_System_Collections_Generic_List_SkillInfo__ToArray__);
          MasterData_object = v103;
          if ( !v104 )
            break;
          ServantBonusFilterEquipListViewObject__SetItem(
            v104,
            idx,
            (ServantEntity_o *)v58,
            (EventUpValInfo_array *)v81,
            (SkillInfo_array *)Instance,
            v82);
          Instance = (__int64)v102->fields.equipList;
          if ( !Instance )
            break;
          v83 = *(_QWORD *)(Instance + 16);
          v47 = v107;
          v84 = Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__Add__;
          ++*(_DWORD *)(Instance + 28);
          if ( !v83 )
            break;
          v85 = *(int *)(Instance + 24);
          if ( (unsigned int)v85 >= *(_DWORD *)(v83 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)Instance,
              (Il2CppObject *)v104,
              *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = v83 + 8 * v85;
            *(_DWORD *)(Instance + 24) = v85 + 1;
            *(_QWORD *)(v86 + 32) = v104;
            sub_1BC2FAC(v86 + 32);
          }
          ++idx;
        }
        else
        {
LABEL_96:
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70034300((UnityEngine_Object_o *)v53, 0LL);
          MasterData_object = v103;
          v47 = v107;
          v91 = ServantBonusFilterEquipComponent_TypeInfo;
          if ( !ServantBonusFilterEquipComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantBonusFilterEquipComponent_TypeInfo);
            v91 = ServantBonusFilterEquipComponent_TypeInfo;
          }
          v49 = v49 + v91->static_fields->POS_Y_INTERVAL;
        }
      }
      if ( ++v48 >= v43->fields._size )
        goto LABEL_85;
    }
LABEL_92:
    sub_1BC3264(Instance, v38);
  }
  v47 = 0;
  idx = 0;
LABEL_85:
  v92 = ServantBonusFilterSelectMenu_TypeInfo;
  if ( !ServantBonusFilterSelectMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ServantBonusFilterSelectMenu_TypeInfo);
  MaxIndividualFilter = ServantBonusFilterSelectMenu__GetMaxIndividualFilter((const MethodInfo *)v92);
  HIDWORD(v111) = idx;
  if ( idx < MaxIndividualFilter )
  {
    do
    {
      v94 = System_Int32__ToString((int32_t)&v111 + 4, 0LL);
      v95 = System_String__Concat_62348648((System_String_o *)StringLiteral_3169/*"BonusFilterEquipId"*/, v94, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v95, 0LL);
      ++HIDWORD(v111);
    }
    while ( SHIDWORD(v111) < MaxIndividualFilter );
  }
  LODWORD(v111) = v47;
  if ( v47 < MaxIndividualFilter )
  {
    do
    {
      v96 = System_Int32__ToString((int32_t)&v111, 0LL);
      v97 = System_String__Concat_62348648((System_String_o *)StringLiteral_3171/*"BonusFilterGroupId"*/, v96, 0LL);
      UnityEngine_PlayerPrefs__DeleteKey(v97, 0LL);
      LODWORD(v111) = v111 + 1;
    }
    while ( (int)v111 < MaxIndividualFilter );
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

  if ( (byte_4AFCD31 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4AFCD31 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( 1 )
  {
    v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__);
    if ( !v8 )
      break;
    if ( !v11.fields._current )
      sub_1BC3264(0LL, v7);
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
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4AFCD30 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4AFCD30 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BC3264(0LL, v7);
    ServantBonusFilterEquipListViewObject__ResetDisplayButton(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4AFCD2F & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      isEnable);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v5);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v6);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v7);
    byte_4AFCD2F = 1;
  }
  memset(&v12, 0, sizeof(v12));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BC3264(0LL, isEnable);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  v9 = isEnable;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1BC3264(0LL, v10);
    ServantBonusFilterEquipListViewObject__SetButtonEnable(
      (ServantBonusFilterEquipListViewObject_o *)v12.fields._current,
      v9,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4AFCD2E & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4AFCD2E = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BC3264(0LL, v7);
    ServantBonusFilterEquipListViewObject__SetInitButtonSelect(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
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

  if ( (byte_4AFCD32 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__,
      method);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__,
      v3);
    sub_1BC3008(
      &Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__get_Current__,
      v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__, v5);
    byte_4AFCD32 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  equipList = this->fields.equipList;
  if ( !equipList )
    sub_1BC3264(0LL, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v8,
    (System_Collections_Generic_List_object__o *)equipList,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ServantBonusFilterEquipListViewObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v8,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__MoveNext__) )
  {
    if ( !v8.fields._current )
      sub_1BC3264(0LL, v7);
    ServantBonusFilterEquipListViewObject__UpdateFilterSave(
      (ServantBonusFilterEquipListViewObject_o *)v8.fields._current,
      v7);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v8,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ServantBonusFilterEquipListViewObject__Dispose__);
}


void __fastcall ServantBonusFilterEquipComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19

  if ( (byte_4AFCD35 & 1) == 0 )
  {
    sub_1BC3008(&ServantBonusFilterEquipComponent___c_TypeInfo, v1);
    byte_4AFCD35 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(ServantBonusFilterEquipComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantBonusFilterEquipComponent___c_TypeInfo->static_fields->__9 = (struct ServantBonusFilterEquipComponent___c_o *)v2;
  sub_1BC2FAC(ServantBonusFilterEquipComponent___c_TypeInfo->static_fields);
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
    sub_1BC3264(this, a);
  return b->fields.priority - a->fields.priority;
}