void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleServantConfConponent_StaticFields *static_fields; // x8

  if ( (byte_4A22AAD & 1) == 0 )
  {
    sub_1B715CC(&BattleServantConfConponent_TypeInfo, v1);
    byte_4A22AAD = 1;
  }
  static_fields = BattleServantConfConponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BAB340;
  static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A22AAC & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method);
    sub_1B715CC(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v3);
    byte_4A22AAC = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v4;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (int32_t)v4,
    v5,
    v6);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *equipObj; // x20
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v18; // s8
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x9
  BattleServantConfConponent_c *v23; // x8
  int32_t implementedInterfaces_high; // w25
  Il2CppClass *v25; // x9
  BattleServantConfConponent_c *v26; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  System_Int32_array *v29; // x20
  BattleServantConfConponent___c_c *v30; // x0
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v32; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x1
  unsigned __int64 v37; // x9
  unsigned __int64 v38; // x8
  int v39; // w12
  UnityEngine_Object_o *npSpeedChange; // x20
  struct BattleServantNPSpeedChangeComponent_o *v41; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A22A97 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_FindIndex_int___, method);
    sub_1B715CC(&BattleServantConfConponent_TypeInfo, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v7);
    sub_1B715CC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&System_Predicate_int__TypeInfo, v10);
    sub_1B715CC(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, v11);
    sub_1B715CC(&BattleServantConfConponent___c_TypeInfo, v12);
    byte_4A22A97 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v15 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v15, 0LL);
    GameObjectExtensions__SetLocalPositionY(v15, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v18 = 0.0;
    v46 = v45;
    while ( 1 )
    {
      v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v19 )
        break;
      current = v46.fields._current;
      if ( !v46.fields._current )
        sub_1B71828(v19, v20);
      klass = v46.fields._current[3].klass;
      if ( !klass )
        sub_1B71828(v19, v20);
      v23 = BattleServantConfConponent_TypeInfo;
      implementedInterfaces_high = HIDWORD(klass->_1.implementedInterfaces);
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v23 = BattleServantConfConponent_TypeInfo;
      }
      if ( implementedInterfaces_high > v23->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23);
        v25 = current[3].klass;
        if ( !v25 )
          sub_1B71828(v19, v20);
        v23 = BattleServantConfConponent_TypeInfo;
        v18 = v18
            + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
                    - HIDWORD(v25->_1.implementedInterfaces));
      }
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = BattleServantConfConponent_TypeInfo;
      }
      v18 = v18 - (float)v23->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v26 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v26 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v18 + (float)v26->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v2 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v2 + (float)this->fields.adjustHeight,
      0LL);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    CommandCodeIds = (unsigned __int64)BattleServantData__GetCommandCodeIds(
                                         (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                                         0LL);
    if ( CommandCodeIds )
    {
      v29 = (System_Int32_array *)CommandCodeIds;
      v30 = BattleServantConfConponent___c_TypeInfo;
      if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v30 = BattleServantConfConponent___c_TypeInfo;
      }
      _9__79_0 = v30->static_fields->__9__79_0;
      if ( !_9__79_0 )
      {
        if ( !v30->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v30);
          v30 = BattleServantConfConponent___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v30->static_fields->__9;
        _9__79_0 = (System_Predicate_int__o *)sub_1B71818(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(_9__79_0, v32, Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, 0LL);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__79_0 = _9__79_0;
        sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v34, v35);
      }
      if ( System_Array__FindIndex_int_(
             v29,
             (System_Predicate_T__o *)_9__79_0,
             (const MethodInfo_2F5464C *)Method_System_Array_FindIndex_int___) == -1
        || (int)*(_QWORD *)&v29->max_length < 1 )
      {
        LODWORD(CommandCodeIds) = 0;
      }
      else
      {
        v37 = (unsigned int)*(_QWORD *)&v29->max_length;
        v38 = 0LL;
        CommandCodeIds = 0LL;
        do
        {
          if ( v38 >= v37 )
            sub_1B71830(CommandCodeIds, v36);
          v39 = v29->m_Items[++v38];
          if ( v39 <= 0 )
            CommandCodeIds = (unsigned int)CommandCodeIds;
          else
            CommandCodeIds = (unsigned int)(CommandCodeIds + 1);
        }
        while ( (__int64)v38 < (int)v37 );
      }
    }
    *(float *)&v2 = *(float *)&v2 - BattleServantNPSpeedChangeComponent__CalcCommandCodeOffset(CommandCodeIds, 0LL);
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = *(float *)&v2 + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      0LL);
    v41 = this->fields.npSpeedChange;
    if ( !v41 )
      goto LABEL_73;
    *(float *)&v2 = *(float *)&v2 - (float)v41->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v2 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v2 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0LL);
    *(float *)&v2 = *(float *)&v2 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, Il2CppMethodPointer, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method)(
                                                                                                 equipPossessionSkillInfoComponentList,
                                                                                                 equipPossessionSkillInfoComponentList->klass->vtable._5_set_Item.methodPtr,
                                                                                                 v2,
                                                                                                 (float)this->fields.adjustHeight),
          !this->fields.classBoardSkillObj) )
    {
LABEL_73:
      sub_1B71828(equipPossessionSkillInfoComponentList, v14);
    }
  }
}


void __fastcall BattleServantConfConponent__Close(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B71828(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 1, 0LL);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0LL);
}


void __fastcall BattleServantConfConponent__CompOpen(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B71828(0LL, method);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69243124((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0LL);
}


void __fastcall BattleServantConfConponent__GetAppendSkillInfo(
        BattleServantConfConponent_o *this,
        System_Int32_array **idList,
        System_String_array **titleList,
        System_String_array **explanationList,
        System_Boolean_array **releaseStateList,
        System_Int32_array **lvList,
        System_Int32_array *releaseSkillIds,
        System_Int32_array *releaseSkillLvs,
        const MethodInfo *method)
{
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
  __int64 max_length; // x1
  System_Int32_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_array *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Boolean_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v41; // x1
  __int64 v42; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v43; // x19
  unsigned __int64 v44; // x27
  int32_t *v45; // x26
  __int64 v46; // x23
  System_Int32_array *v47; // x8
  System_Boolean_array *v48; // x9
  int32_t v49; // w8
  System_Int32_array *v50; // x9
  int32_t v51; // w2
  int32_t v52; // w3
  System_Boolean_array *v53; // x8
  System_String_array *v54; // x29
  SkillEntity_o *v55; // x28
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_array *v58; // x25
  int32_t v59; // w2
  int32_t v60; // w3
  ServantStatusBattleListViewItem_o *v61; // x28
  Il2CppClass **v62; // x8
  int32_t v63; // w1
  System_String_array *v64; // x28
  System_String_o *v65; // x1
  System_String_array *v66; // x8
  Il2CppClass **v67; // x28
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_array *v70; // x25
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_array *v73; // x8
  System_String_array *v74; // x25
  System_String_o **v75; // x28
  System_String_o *v76; // x0
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_array *v79; // x8
  Il2CppClass **v80; // x25
  System_String_o *v81; // x29
  System_String_o *v82; // x0
  System_String_o *v83; // x0
  System_Int32_array *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_array *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_array *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_Boolean_array *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Int32_array *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_Int32_array **v99; // [xsp+8h] [xbp-88h]
  System_String_array **v100; // [xsp+10h] [xbp-80h]
  int32_t *v101; // [xsp+18h] [xbp-78h]

  if ( (byte_4A22A9B & 1) == 0 )
  {
    sub_1B715CC(&bool___TypeInfo, idList);
    sub_1B715CC(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1B715CC(&DataManager_TypeInfo, v15);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1B715CC(&int___TypeInfo, v17);
    sub_1B715CC(&LocalizationManager_TypeInfo, v18);
    sub_1B715CC(&string___TypeInfo, v19);
    sub_1B715CC(&StringLiteral_43/*"\n"*/, v20);
    sub_1B715CC(&StringLiteral_3783/*"COND_TYPE_TITLE"*/, v21);
    sub_1B715CC(&StringLiteral_3771/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v22);
    sub_1B715CC(&StringLiteral_1/*""*/, v23);
    byte_4A22A9B = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v25 = (System_Int32_array *)sub_1B71674(int___TypeInfo, max_length);
    *idList = v25;
    sub_1B71570((ServantStatusBattleListViewItem_o *)idList, (int32_t)v25, v26, v27);
    v28 = (System_String_array *)sub_1B71674(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v28;
    sub_1B71570((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v28, v29, v30);
    v31 = (System_String_array *)sub_1B71674(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v31;
    sub_1B71570((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v31, v32, v33);
    v34 = (System_Boolean_array *)sub_1B71674(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v34;
    sub_1B71570((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v34, v35, v36);
    v37 = (System_Int32_array *)sub_1B71674(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v37;
    sub_1B71570((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v37, v38, v39);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillMaster___);
    v42 = *(_QWORD *)&releaseSkillIds->max_length;
    if ( (int)v42 >= 1 )
    {
      v43 = Master_object;
      v44 = 0LL;
      v101 = &releaseSkillLvs->m_Items[1];
      v45 = &releaseSkillIds->m_Items[1];
      v46 = 32LL;
      v99 = lvList;
      v100 = titleList;
      while ( v44 < (unsigned int)v42 )
      {
        v47 = *idList;
        if ( !*idList )
          goto LABEL_62;
        if ( v44 >= v47->max_length )
          break;
        v47->m_Items[v44 + 1] = v45[v44];
        if ( v44 >= releaseSkillLvs->max_length )
          break;
        v48 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_62;
        if ( v44 >= v48->max_length )
          break;
        v49 = v101[v44];
        v48->m_Items[v44 + 4] = v49 > 0;
        v50 = *lvList;
        if ( !*lvList )
          goto LABEL_62;
        if ( v44 >= v50->max_length )
          break;
        v50->m_Items[v44 + 1] = v49;
        if ( !v43 )
          goto LABEL_62;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v43,
                                                                        v45[v44],
                                                                        (const MethodInfo_30F8760 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v53 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_62;
          if ( v44 >= v53->max_length )
            break;
          v54 = *titleList;
          v55 = (SkillEntity_o *)Master_object;
          if ( v53->m_Items[v44 + 4] )
          {
            if ( v44 >= releaseSkillLvs->max_length )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            v101[v44],
                                                                            0LL);
            if ( !v54 )
              goto LABEL_62;
            if ( v44 >= v54->max_length )
              break;
            v54->m_Items[v44] = (System_String_o *)Master_object;
            sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v54 + v46), (int32_t)Master_object, v56, v57);
            if ( v44 >= releaseSkillLvs->max_length )
              break;
            v58 = *explanationList;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                            v55,
                                                                            v101[v44],
                                                                            0LL);
            titleList = v100;
            if ( !v58 )
              goto LABEL_62;
            if ( v44 >= v58->max_length )
              break;
            v61 = (ServantStatusBattleListViewItem_o *)((char *)v58 + v46);
            v62 = &v58->obj.klass + v44;
            lvList = v99;
            v63 = (int)Master_object;
            v62[4] = (Il2CppClass *)Master_object;
          }
          else
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            1,
                                                                            0LL);
            if ( !v54 )
              goto LABEL_62;
            if ( v44 >= v54->max_length )
              break;
            v54->m_Items[v44] = (System_String_o *)Master_object;
            sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v54 + v46), (int32_t)Master_object, v68, v69);
            v70 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3783/*"COND_TYPE_TITLE"*/,
                                                                            0LL);
            if ( !v70 )
              goto LABEL_62;
            if ( v44 >= v70->max_length )
              break;
            v70->m_Items[v44] = (System_String_o *)Master_object;
            sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v70 + v46), (int32_t)Master_object, v71, v72);
            v73 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1B71828(Master_object, v41);
            if ( v44 >= v73->max_length )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                            v73->m_Items[v44],
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0LL);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v74 = *explanationList;
              if ( !*explanationList )
                goto LABEL_62;
              if ( v44 >= v74->max_length )
                break;
              v75 = (System_String_o **)(&v74->obj.klass + v44);
              v76 = System_String__Concat_61505504(v75[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              v75[4] = v76;
              sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v74 + v46), (int32_t)v76, v77, v78);
            }
            v79 = *explanationList;
            if ( !*explanationList )
              goto LABEL_62;
            if ( v44 >= v79->max_length )
              break;
            v80 = &v79->obj.klass + v44;
            v61 = (ServantStatusBattleListViewItem_o *)(v80 + 4);
            v81 = (System_String_o *)v80[4];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3771/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v83 = System_String__Concat_61505504(v81, v82, 0LL);
            v80[4] = (Il2CppClass *)v83;
            lvList = v99;
            titleList = v100;
            v63 = (int)v83;
          }
        }
        else
        {
          v64 = *titleList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4A1B3BE )
          {
            sub_1B715CC(&LocalizationManager_TypeInfo, v41);
            byte_4A1B3BE = 1;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          }
          if ( !v64 )
            goto LABEL_62;
          if ( v44 >= v64->max_length )
            break;
          v65 = *(System_String_o **)&Master_object[2].fields._lookup->fields._count;
          v64->m_Items[v44] = v65;
          sub_1B71570((ServantStatusBattleListViewItem_o *)((char *)v64 + v46), (int32_t)v65, v51, v52);
          v66 = *explanationList;
          if ( !*explanationList )
            goto LABEL_62;
          if ( v44 >= v66->max_length )
            break;
          v67 = &v66->obj.klass + v44;
          v63 = (int)StringLiteral_1/*""*/;
          v67[4] = (Il2CppClass *)StringLiteral_1/*""*/;
          v61 = (ServantStatusBattleListViewItem_o *)(v67 + 4);
        }
        sub_1B71570(v61, v63, v59, v60);
        LODWORD(v42) = releaseSkillIds->max_length;
        ++v44;
        v46 += 8LL;
        if ( (__int64)v44 >= (int)v42 )
          return;
      }
      sub_1B71830(Master_object, v41);
    }
  }
  else
  {
    v84 = (System_Int32_array *)sub_1B71674(int___TypeInfo, 0LL);
    *idList = v84;
    sub_1B71570((ServantStatusBattleListViewItem_o *)idList, (int32_t)v84, v85, v86);
    v87 = (System_String_array *)sub_1B71674(string___TypeInfo, 0LL);
    *titleList = v87;
    sub_1B71570((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v87, v88, v89);
    v90 = (System_String_array *)sub_1B71674(string___TypeInfo, 0LL);
    *explanationList = v90;
    sub_1B71570((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v90, v91, v92);
    v93 = (System_Boolean_array *)sub_1B71674(bool___TypeInfo, 0LL);
    *releaseStateList = v93;
    sub_1B71570((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v93, v94, v95);
    v96 = (System_Int32_array *)sub_1B71674(int___TypeInfo, 0LL);
    *lvList = v96;
    sub_1B71570((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v96, v97, v98);
  }
}


void __fastcall BattleServantConfConponent__GetAttributeValue(
        BattleServantConfConponent_o *this,
        int32_t *policy,
        int32_t *personality,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BattleServantData_o *bsvtData; // x0
  int32_t v14; // w0
  int32_t deckIndex; // w0
  struct BattleServantData_o *v16; // x8
  ServantLimitMaster_o *v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  const MethodInfo *v20; // x2
  struct BattleServantData_o *v21; // x8
  __int64 v22; // x23
  __int64 v23; // x24
  BattleServantData_o *v24; // x8
  int32_t v25; // w21
  int32_t v26; // w3
  ServantLimitMaster_o *v27; // x0
  int32_t v28; // w2
  struct BattleServantData_o *v29; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v31; // x8
  struct ServantLimitAddEntity_o *v32; // x8
  struct BattleServantData_o *v33; // x8
  __int64 v34; // x21
  __int64 v35; // x23
  ServantLimitEntity_o *v36; // x8
  int32_t v37; // w9
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4A22AAB & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, policy);
    sub_1B715CC(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, v7);
    sub_1B715CC(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B715CC(&DataManager_TypeInfo, v9);
    sub_1B715CC(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__,
      v10);
    sub_1B715CC(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__, v11);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_4A22AAB = 1;
  }
  entity = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  v14 = BattleServantData__GetChangePolicy(bsvtData, 0LL);
  *policy = v14;
  if ( (v14 & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_30F8760 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    *policy = bsvtData->fields.deckIndex;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  deckIndex = BattleServantData__GetChangePersonality(bsvtData, 0LL);
  *personality = deckIndex;
  if ( (deckIndex & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_30F8760 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v16 = this->fields.bsvtData;
  if ( !v16 )
    goto LABEL_53;
  v17 = (ServantLimitMaster_o *)bsvtData;
  v19 = *(_QWORD *)&v16->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v18 = *(_QWORD *)&v16->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = v19;
  *(_QWORD *)&v39.fields.fakeValue = v18;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v39, 0LL);
  if ( (int)bsvtData < 11 )
  {
    v21 = this->fields.bsvtData;
    if ( v21 )
    {
      v23 = *(_QWORD *)&v21->fields.svtId.fields.currentCryptoKey;
      v22 = *(_QWORD *)&v21->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v40.fields.currentCryptoKey = v23;
      *(_QWORD *)&v40.fields.fakeValue = v22;
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v40, 0LL);
      v24 = this->fields.bsvtData;
      if ( v24 )
      {
        v25 = (int)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v24, 1, 0LL);
        if ( v17 )
        {
          v26 = (int)bsvtData;
          v27 = v17;
          v28 = v25;
          goto LABEL_44;
        }
      }
    }
    goto LABEL_53;
  }
  if ( (*policy & 0x80000000) != 0 )
  {
    v29 = this->fields.bsvtData;
    if ( !v29 )
      goto LABEL_53;
    svtlimitaddent = v29->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPolicy(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                                        v20);
    *policy = (int)bsvtData;
  }
  if ( (*personality & 0x80000000) != 0 )
  {
    v31 = this->fields.bsvtData;
    if ( !v31 )
      goto LABEL_53;
    v32 = v31->fields.svtlimitaddent;
    if ( !v32 )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)v32->fields.individuality,
                                        v20);
    *personality = (int)bsvtData;
  }
  v33 = this->fields.bsvtData;
  if ( !v33 )
    goto LABEL_53;
  v35 = *(_QWORD *)&v33->fields.svtId.fields.currentCryptoKey;
  v34 = *(_QWORD *)&v33->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v41.fields.currentCryptoKey = v35;
  *(_QWORD *)&v41.fields.fakeValue = v34;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v41, 0LL);
  if ( !v17 )
LABEL_53:
    sub_1B71828(bsvtData, policy);
  v28 = (int)bsvtData;
  v27 = v17;
  v26 = 0;
LABEL_44:
  ServantLimitMaster__TryGetEntity(v27, &entity, v28, v26, 0LL);
  v36 = entity;
  v37 = *policy;
  if ( entity )
  {
    if ( (v37 & 0x80000000) != 0 )
      *policy = entity->fields.policy;
    if ( (*personality & 0x80000000) != 0 )
      *personality = v36->fields.personality;
  }
  else
  {
    if ( (v37 & 0x80000000) != 0 )
      *policy = 0;
    if ( (*personality & 0x80000000) != 0 )
      *personality = 0;
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8

  if ( (byte_4A22AA8 & 1) == 0 )
  {
    sub_1B715CC(&LocalizationManager_TypeInfo, *(_QWORD *)&hideStatus);
    sub_1B715CC(&StringLiteral_11502/*"SERVANT_ATTRIBUTE_HIDE"*/, v6);
    sub_1B715CC(&StringLiteral_11503/*"SERVANT_ATTRIBUTE_NONE"*/, v7);
    byte_4A22AA8 = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11503/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11502/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  return defaultStr;
}


int32_t __fastcall BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  System_Collections_Generic_List_int__o *v15; // x19
  System_Int32_array *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w21
  __int64 v33; // x0
  __int64 v34; // x1
  double v35; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4A22AAA & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, individualityArray);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&System_IDisposable_TypeInfo, v5);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&System_Math_TypeInfo, v14);
    byte_4A22AAA = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v19 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BC35AC(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B71828(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_15;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_15:
      v27 = sub_1BC35AC(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_22;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_22:
      v31 = sub_1BC35AC(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = log10((double)v32);
    if ( (unsigned int)(v32 - 300) <= 0x63
      && v35 != INFINITY
      && (int)v35 == 2
      && (unsigned int)(v32 - 303) <= 6
      && v32 != 307 )
    {
      if ( !v15 )
        sub_1B71828(v33, v34);
      items = v15->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B71828(v33, v34);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          v32,
          *(const MethodInfo_34B323C **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = v32;
      }
    }
  }
  v39 = *(_QWORD *)v23;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_40;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_40:
    v42 = sub_1BC35AC(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v23, *(_QWORD *)(v42 + 8));
  if ( !v15 )
    goto LABEL_51;
  if ( v15->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v16,
               0LL);
LABEL_51:
    sub_1B71828(v16, v17);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  System_Collections_Generic_List_int__o *v15; // x19
  System_Int32_array *v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  int32_t v32; // w21
  __int64 v33; // x0
  __int64 v34; // x1
  double v35; // d0
  unsigned int v36; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v38; // x9
  __int64 size; // x10
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4A22AA9 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, individualityArray);
    sub_1B715CC(&DataManager_TypeInfo, v4);
    sub_1B715CC(&System_IDisposable_TypeInfo, v5);
    sub_1B715CC(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1B715CC(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1B715CC(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&System_Math_TypeInfo, v14);
    byte_4A22AA9 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_34B29E8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v19 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BC35AC(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B71828(0LL, v22);
  while ( 1 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_15;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_15:
      v27 = sub_1BC35AC(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
      break;
    v28 = *(_QWORD *)v23;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v30 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_22;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_22:
      v31 = sub_1BC35AC(v23, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v23, *(_QWORD *)(v31 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v35 = log10((double)v32);
    v36 = v32 - 300;
    if ( (unsigned int)(v32 - 300) <= 0x63 && v35 != INFINITY && (int)v35 == 2 && v36 <= 7 && ((1 << v36) & 0x87) != 0 )
    {
      if ( !v15 )
        sub_1B71828(v33, v34);
      items = v15->fields._items;
      v38 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B71828(v33, v34);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          v32,
          *(const MethodInfo_34B323C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = v32;
      }
    }
  }
  v40 = *(_QWORD *)v23;
  v41 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v42 - 1) != System_IDisposable_TypeInfo )
    {
      --v41;
      v42 += 4;
      if ( !v41 )
        goto LABEL_40;
    }
    v43 = v40 + 16LL * *v42 + 312;
  }
  else
  {
LABEL_40:
    v43 = sub_1BC35AC(v23, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v23, *(_QWORD *)(v43 + 8));
  if ( !v15 )
    goto LABEL_51;
  if ( v15->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_34B4CF4 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v16, 0LL);
LABEL_51:
    sub_1B71828(v16, v17);
  }
  return -1;
}


int32_t __fastcall BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
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
  __int64 v18; // x20
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  __int64 v21; // x1
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v23; // x21
  __int64 v24; // x22
  __int64 v25; // x23
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v26; // x21
  BattleServantConfConponent___c_c *v27; // x8
  System_Func_object__int__o *_9__81_0; // x22
  Il2CppObject *v29; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_IEnumerable_T__o *v33; // x22
  System_Collections_Generic_HashSet_int__o *v34; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  System_Predicate_int__o *v37; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4A22A99 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, skillIdList);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___, v6);
    sub_1B715CC(&System_Func_ServantPassiveSkillEntity__int__TypeInfo, v7);
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int___ctor___75778160, v8);
    sub_1B715CC(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__FindIndex__, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B715CC(&System_Predicate_int__TypeInfo, v13);
    sub_1B715CC(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__, v14);
    sub_1B715CC(&Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__, v15);
    sub_1B715CC(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, v16);
    sub_1B715CC(&BattleServantConfConponent___c_TypeInfo, v17);
    byte_4A22A99 = 1;
  }
  v18 = sub_1B71818(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
  BattleServantConfConponent___c__DisplayClass81_0___ctor(
    (BattleServantConfConponent___c__DisplayClass81_0_o *)v18,
    0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v23 = (ServantPassiveSkillMaster_o *)Master_object;
  v25 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v24 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = v25;
  *(_QWORD *)&v38.fields.fakeValue = v24;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v38, 0LL);
  if ( !v23 )
    goto LABEL_22;
  v26 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v23, (int32_t)Master_object, 0LL);
  v27 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v27 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__81_0 = (System_Func_object__int__o *)v27->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = BattleServantConfConponent___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__81_0 = (System_Func_object__int__o *)sub_1B71818(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__81_0,
      v29,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v31, v32);
  }
  v33 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_2E8B610 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v34 = (System_Collections_Generic_HashSet_int__o *)sub_1B71818(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_54037248(
    v34,
    v33,
    (const MethodInfo_3388B00 *)Method_System_Collections_Generic_HashSet_int___ctor___75778160);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = v34,
        sub_1B71570((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v34, v35, v36),
        v37 = (System_Predicate_int__o *)sub_1B71818(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v37,
          (Il2CppObject *)v18,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0LL),
        !skillIdList) )
  {
LABEL_22:
    sub_1B71828(Master_object, v21);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v37,
             (const MethodInfo_34B3A70 *)Method_System_Collections_Generic_List_int__FindIndex__);
  if ( (result & 0x80000000) != 0 )
    return skillIdList->fields._size;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v11; // x1
  UnityEngine_Transform_o *transform; // x20
  int v13; // s1
  int v14; // s0
  int v15; // s2
  UnityEngine_Object_o *commandCard; // x20
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20

  if ( (byte_4A22A94 & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_Collider___, data);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    sub_1B715CC(&StringLiteral_2877/*"BATTLE_HASNOT_TD"*/, v9);
    byte_4A22A94 = 1;
  }
  this->fields.data = data;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_30;
  *(UnityEngine_Vector3_o *)(&v13 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_30;
  v14 = 0;
  v15 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v13 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_30;
    if ( !this->fields.commandCard )
      goto LABEL_30;
    BattleCommandComponent__setDepth(this->fields.commandCard, LODWORD(gameObject[7].monitor) + 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_30;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0LL,
                                               0LL);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_30;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0LL);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark((BattleCommandComponent_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard) == 0LL) )
    {
LABEL_30:
      sub_1B71828(gameObject, v11);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2877/*"BATTLE_HASNOT_TD"*/, 0LL);
  if ( !havenotTdLabel )
    goto LABEL_30;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0LL);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v11);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
LABEL_29:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0LL);
}


bool __fastcall BattleServantConfConponent__IsHideAttribute(
        BattleServantConfConponent_o *this,
        bool isSvtTypeSpecific,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleServantData_o *bsvtData; // x0
  int v7; // w24
  int v8; // w22
  int32_t HideStateSubAttribute; // w21
  char v10; // w8
  System_String_o *v11; // x26
  System_String_o *v12; // x25
  System_String_o *OverwriteSubAttribute; // x23
  const MethodInfo *v14; // x3
  bool IsNullOrEmpty; // w24
  bool v16; // w22
  bool v17; // w0
  int32_t Attri; // w8
  int32_t personality[2]; // [xsp+8h] [xbp-48h] BYREF

  *(_QWORD *)personality = 0LL;
  if ( ConstantMaster__IsNotDisplayBattleAttribute(0LL) )
    goto LABEL_8;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_30;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePolicy(bsvtData, 0LL);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v7 = (int)bsvtData;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v8 = (int)bsvtData;
  HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
  if ( v7 != 3 || v8 != 3 || HideStateSubAttribute != 3 )
  {
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePolicy(bsvtData, 0LL);
      if ( this->fields.bsvtData )
      {
        v11 = (System_String_o *)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePersonality(this->fields.bsvtData, 0LL);
        if ( this->fields.bsvtData )
        {
          v12 = (System_String_o *)bsvtData;
          OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute(this->fields.bsvtData, 0LL);
          BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v14);
          if ( v7 == 3 )
          {
            IsNullOrEmpty = 1;
          }
          else
          {
            IsNullOrEmpty = 0;
            if ( !personality[1] && !isSvtTypeSpecific )
              IsNullOrEmpty = System_String__IsNullOrEmpty(v11, 0LL);
          }
          if ( v8 == 3 )
          {
            v16 = 1;
          }
          else
          {
            v16 = 0;
            if ( !personality[0] && !isSvtTypeSpecific )
              v16 = System_String__IsNullOrEmpty(v12, 0LL);
          }
          if ( HideStateSubAttribute == 3 )
          {
            v17 = 1;
LABEL_28:
            v10 = IsNullOrEmpty && v16 && v17;
            return v10 & 1;
          }
          bsvtData = this->fields.bsvtData;
          if ( bsvtData )
          {
            Attri = BattleServantData__getAttri(bsvtData, 0LL);
            v17 = 0;
            if ( !Attri && !isSvtTypeSpecific )
              v17 = System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_30:
    sub_1B71828(bsvtData, v5);
  }
LABEL_8:
  v10 = 1;
  return v10 & 1;
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A22AA1 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_3230/*"BattleServantDetailTab"*/, method);
    byte_4A22AA1 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3230/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_69215560((System_String_o *)StringLiteral_3230/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_69215560((System_String_o *)StringLiteral_3230/*"BattleServantDetailTab"*/, 0LL) != 1;
}


void __fastcall BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v9; // x25
  unsigned __int64 max_length; // x9
  unsigned __int64 v11; // x26
  UnityEngine_Object_o *v12; // x20
  struct BattleCommandComponent_array *v13; // x8
  struct BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x8
  __int64 v15; // x1
  UnityEngine_Object_o *gameObject; // x20
  int32_t v17; // w3
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A22A9E & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v3);
    sub_1B715CC(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v4);
    sub_1B715CC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v5);
    sub_1B715CC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v6);
    this = (BattleServantConfConponent_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, v7);
    byte_4A22A9E = 1;
  }
  memset(&v21, 0, sizeof(v21));
  CommandCardList = v2->fields.CommandCardList;
  if ( !CommandCardList )
    goto LABEL_15;
  v9 = 4LL;
  while ( 1 )
  {
    max_length = CommandCardList->max_length;
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length )
      break;
    if ( v11 >= max_length )
      goto LABEL_29;
    v12 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v9);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v13 = v2->fields.CommandCardList;
      if ( !v13 )
        goto LABEL_15;
      if ( v11 >= v13->max_length )
LABEL_29:
        sub_1B71830(this, method);
      this = (BattleServantConfConponent_o *)*((_QWORD *)&v13->obj.klass + v9);
      if ( !this )
        goto LABEL_15;
      BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)this, 0LL);
    }
    CommandCardList = v2->fields.CommandCardList;
    ++v9;
    if ( !CommandCardList )
      goto LABEL_15;
  }
  callback_close = v2->fields.callback_close;
  if ( callback_close )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback_close->fields.m_target)(
      callback_close->fields.original_method_info,
      *(_QWORD *)&callback_close->fields.extra_arg);
  this = (BattleServantConfConponent_o *)v2->fields.equipPossessionSkillInfoComponentList;
  if ( !this )
    goto LABEL_15;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34D0D58 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_324F8B8 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v21.fields._current )
      sub_1B71828(0LL, v15);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v21.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69257852(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_324F8B4 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  equipPossessionSkillInfoComponentList = v2->fields.equipPossessionSkillInfoComponentList;
  if ( !equipPossessionSkillInfoComponentList )
LABEL_15:
    sub_1B71828(this, method);
  size = equipPossessionSkillInfoComponentList->fields._size;
  v20 = equipPossessionSkillInfoComponentList->fields._version + 1;
  equipPossessionSkillInfoComponentList->fields._size = 0;
  equipPossessionSkillInfoComponentList->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0LL);
  v2->fields.bsvtData = 0LL;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&v2->fields.bsvtData, 0, size, v17);
}


void __fastcall BattleServantConfConponent__OnClickServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  v2 = this;
  if ( (byte_4A22AA2 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleServantConfConponent_OnClickServantAbility__, method);
    sub_1B715CC(&StringLiteral_17445/*"btn_bg_on_1"*/, v3);
    sub_1B715CC(&StringLiteral_17440/*"btn_bg_off_1"*/, v4);
    sub_1B715CC(&StringLiteral_17565/*"btn_txt_servant_states_off"*/, v5);
    sub_1B715CC(&StringLiteral_3230/*"BattleServantDetailTab"*/, v6);
    this = (BattleServantConfConponent_o *)sub_1B715CC(&StringLiteral_17563/*"btn_txt_servant_property_on"*/, v7);
    byte_4A22AA2 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v9 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B715E4(Method_BattleServantConfConponent_OnClickServantAbility__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B715B0(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17445/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17563/*"btn_txt_servant_property_on"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17440/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_20:
    sub_1B71828(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17565/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3230/*"BattleServantDetailTab"*/, 0, 0LL);
}


void __fastcall BattleServantConfConponent__OnClickServantState(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  v2 = this;
  if ( (byte_4A22AA3 & 1) == 0 )
  {
    sub_1B715CC(&Method_BattleServantConfConponent_OnClickServantState__, method);
    sub_1B715CC(&StringLiteral_17445/*"btn_bg_on_1"*/, v3);
    sub_1B715CC(&StringLiteral_17566/*"btn_txt_servant_states_on"*/, v4);
    sub_1B715CC(&StringLiteral_17562/*"btn_txt_servant_property_off"*/, v5);
    sub_1B715CC(&StringLiteral_17440/*"btn_bg_off_1"*/, v6);
    this = (BattleServantConfConponent_o *)sub_1B715CC(&StringLiteral_3230/*"BattleServantDetailTab"*/, v7);
    byte_4A22AA3 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v9 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B715E4(Method_BattleServantConfConponent_OnClickServantState__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B715B0(v9, v9[4]);
      OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17440/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17562/*"btn_txt_servant_property_off"*/, 0LL);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0LL),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0LL)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0LL)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17445/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_1B71828(BattleServantAbilityObj, method);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17566/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3230/*"BattleServantDetailTab"*/, 1, 0LL);
}


void __fastcall BattleServantConfConponent__Open(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v6; // x1

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1B71828(0LL, call);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_4A22A9F & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22A9F = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleServantStateObj, 0LL, 0LL) )
    {
      buffListView = this->fields.BattleServantAbilityObj;
      if ( buffListView )
      {
        UnityEngine_GameObject__SetActive(buffListView, 1, 0LL);
        buffListView = this->fields.BattleServantStateObj;
        if ( buffListView )
        {
          UnityEngine_GameObject__SetActive(buffListView, 1, 0LL);
          buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
          if ( buffListView )
          {
            BattleViewBufflistComponent__setShow((BattleViewBufflistComponent_o *)buffListView, 0LL);
            AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0LL);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0LL, 0LL) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0LL);
            }
            buffListView = this->fields.BattleServantAbilityObj;
            if ( buffListView )
            {
              UnityEngine_GameObject__SetActive(buffListView, 0, 0LL);
              buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
              if ( buffListView )
              {
                BattleViewBufflistComponent__setHide((BattleViewBufflistComponent_o *)buffListView, 0, 0LL);
                buffListView = this->fields.BattleServantStateObj;
                if ( buffListView )
                {
                  UnityEngine_GameObject__SetActive(buffListView, 0, 0LL);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1B71828(buffListView, v5);
    }
  }
}


void __fastcall BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  UnityEngine_Object_o *AppendSkillObj; // x21
  const MethodInfo *v15; // x1
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *bsvtData; // x8
  __int128 v21; // q1
  int64_t v22; // x0
  struct BattleServantData_o *v23; // x8
  __int64 v24; // x20
  _BOOL8 IsNpc; // x0
  Il2CppObject *Master_object; // x21
  System_Int32_array *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x23
  int32_t v29; // w21
  System_Int32_array *v30; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v31; // x20
  unsigned __int64 v32; // x21
  int32_t v33; // w22
  float v34; // s8
  unsigned __int64 max_length; // x9
  int32_t v36; // w25
  int32_t v37; // w26
  System_String_o *v38; // x28
  System_String_o *v39; // x27
  _BOOL4 v40; // w20
  UnityEngine_GameObject_o *v41; // x29
  Il2CppObject *v42; // x23
  UnityEngine_Transform_o *v43; // x23
  UnityEngine_Transform_o *v44; // x23
  UnityEngine_Transform_o *v45; // x23
  Il2CppObject *Component_object; // x29
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v48; // [xsp+10h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v49; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A22A9A & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData);
    sub_1B715CC(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1B715CC(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v9);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v11);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B715CC(&StringLiteral_20475/*"img_txt_extraskill"*/, v13);
    byte_4A22A9A = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  lvList = 0LL;
  releaseStateList = 0LL;
  entity = 0LL;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0LL, 0LL) )
  {
    AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0LL);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0LL, 0LL) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v15) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20475/*"img_txt_extraskill"*/, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_98;
  v21 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v51.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v51.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v50 = v51;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v50, 0LL);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v22, 0LL);
  if ( !AppendSkillTitle )
    return;
  v23 = this->fields.bsvtData;
  if ( !v23 )
    goto LABEL_98;
  v24 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v23->fields.followerType, 0LL);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v24 + 488),
      *(System_Int32_array **)(v24 + 496),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v24, 0LL);
    if ( !Master_object )
      goto LABEL_98;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_39389504(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v24 + 488),
      *(System_Int32_array **)(v24 + 496),
      0LL);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v27 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0LL);
  if ( !v27 )
    return;
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)v27;
  if ( !*(_QWORD *)&v27->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  v29 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0LL);
    if ( !AppendSkillTitle )
      goto LABEL_98;
    if ( v29 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) )
      break;
    AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                    (UnityEngine_GameObject_o *)AppendSkillTitle,
                                    0LL);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                      (UnityEngine_Transform_o *)AppendSkillTitle,
                                      v29,
                                      0LL);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0LL);
            AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
            ++v29;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_98;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillMaster___);
  v30 = idList;
  entity = 0LL;
  if ( !idList )
LABEL_98:
    sub_1B71828(AppendSkillTitle, v15);
  v31 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v32 = 0LL;
  v33 = 0;
  v34 = 0.0;
  v48 = v28;
  v49 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v30->max_length;
    if ( (__int64)v32 >= (int)max_length )
      break;
    if ( v32 >= max_length )
      goto LABEL_101;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v28,
                         v30->m_Items[v32 + 1],
                         (const MethodInfo_2E754F4 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_98;
      if ( v32 >= idList->max_length )
        goto LABEL_101;
      if ( !lvList )
        goto LABEL_98;
      if ( v32 >= lvList->max_length )
        goto LABEL_101;
      v36 = idList->m_Items[v32 + 1];
      if ( v36 >= 1 )
      {
        if ( !v31 )
          goto LABEL_98;
        v37 = lvList->m_Items[v32 + 1];
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v31,
                             &entity,
                             v36,
                             (const MethodInfo_30F87B4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_98;
        if ( v32 >= titleList->max_length )
          goto LABEL_101;
        if ( !explanationList )
          goto LABEL_98;
        if ( v32 >= explanationList->max_length )
          goto LABEL_101;
        if ( !releaseStateList )
          goto LABEL_98;
        if ( v32 >= releaseStateList->max_length )
LABEL_101:
          sub_1B71830(AppendSkillTitle, v15);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_98;
        v38 = titleList->m_Items[v32];
        v39 = explanationList->m_Items[v32];
        v40 = releaseStateList->m_Items[v32 + 4];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0LL);
        if ( !AppendSkillTitle )
          goto LABEL_98;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v33 )
        {
          v42 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v42,
                                        (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v41 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_98;
          v43 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0LL);
          if ( !v43 )
            goto LABEL_98;
          UnityEngine_Transform__set_parent(v43, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v59.fields.y = -v34;
          v59.fields.x = 0.0;
          v59.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v59, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
          v44 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4A1A756 )
          {
            AppendSkillTitle = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v15);
            byte_4A1A756 = 1;
          }
          if ( !v44 )
            goto LABEL_98;
          UnityEngine_Transform__set_localScale(v44, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
          v45 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4A1A757 )
          {
            AppendSkillTitle = sub_1B715CC(&UnityEngine_Quaternion_TypeInfo, v15);
            byte_4A1A757 = 1;
          }
          if ( !v45 )
            goto LABEL_98;
          UnityEngine_Transform__set_localRotation(
            v45,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          v28 = v48;
        }
        else
        {
          AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                        (UnityEngine_Transform_o *)AppendSkillTitle,
                                        v33,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v41 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v41, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v58.fields.y = -v34;
          v58.fields.x = 0.0;
          v58.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v58, 0LL);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v41,
                             (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_98;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v33 + 1,
            v36,
            v38,
            v39,
            v40,
            v37,
            0LL);
        }
        else if ( !Component_object )
        {
          goto LABEL_98;
        }
        AppendSkillTitle = BattleServantConfSkillComponent__GetHeight(
                             (BattleServantConfSkillComponent_o *)Component_object,
                             0LL);
        v31 = v49;
        v34 = v34 + (float)((float)(AppendSkillTitle - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v33;
      }
    }
    v30 = idList;
    ++v32;
    if ( !idList )
      goto LABEL_98;
  }
  this->fields.AppendSkillOffset = -(float)(v34 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  __int64 v9; // x1
  Il2CppObject *Object_object__48486748; // x20
  char v11; // w21
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A22AA4 & 1) == 0 )
  {
    sub_1B715CC(&Method_AssetData_GetObject_GameObject____75846976, method);
    sub_1B715CC(&AssetManager_TypeInfo, v3);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v5);
    sub_1B715CC(&StringLiteral_3193/*"Battle/Common"*/, v6);
    sub_1B715CC(&StringLiteral_3211/*"BattleAssetUIAtlas"*/, v7);
    byte_4A22AA4 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3193/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__48486748 = AssetData__GetObject_object__48486748(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3211/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E3D95C *)Method_AssetData_GetObject_GameObject____75846976);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__48486748,
                                  0LL,
                                  0LL);
  v11 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__48486748 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__48486748,
                           (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B71570(
        (ServantStatusBattleListViewItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v13,
        v14);
      return v11 & 1;
    }
LABEL_12:
    sub_1B71828(AssetStorage, v9);
  }
  return v11 & 1;
}


void __fastcall BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  UnityEngine_Object_o *attributeLabel; // x20
  const MethodInfo *v18; // x1
  UILabel_o *mPanel; // x0
  const MethodInfo *v20; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  bool v23; // w20
  bool IsHideAttribute; // w0
  UnityEngine_Object_o *attributeObj; // x22
  bool v26; // w21
  bool v27; // w0
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v29; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v31; // w8
  UnityEngine_Object_o *v32; // x21
  struct UIScrollView_o *v33; // x8
  UnityEngine_Object_o *v34; // x21
  int v35; // w8
  float v36; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v38; // x8
  struct UIScrollView_o *v39; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v41; // x8
  struct UIProgressBar_o *v42; // x8
  float v43; // s8
  UnityEngine_GameObject_o *v44; // x0
  struct UIScrollView_o *v45; // x8
  struct UIScrollView_o *v46; // x8
  struct UIProgressBar_o *v47; // x8
  struct UIScrollView_o *v48; // x8
  struct UIProgressBar_o *v49; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v51; // x3
  int32_t v52; // w24
  int32_t v53; // w23
  int32_t HideStateSubAttribute; // w21
  System_Collections_Generic_List_object__o *v55; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v58; // x3
  System_String_o *v59; // x0
  System_String_o *v60; // x25
  System_String_o *HideStr; // x24
  int32_t v62; // w2
  int32_t v63; // w3
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v69; // x0
  const MethodInfo *v70; // x3
  System_String_o *v71; // x0
  System_String_o *v72; // x24
  System_String_o *v73; // x23
  int32_t v74; // w2
  int32_t v75; // w3
  struct System_Object_array *v76; // x8
  _QWORD *v77; // x9
  __int64 v78; // x10
  Il2CppClass **v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x23
  System_String_o *v82; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v85; // x3
  System_String_o *v86; // x0
  System_String_o *v87; // x20
  System_String_o *v88; // x20
  UILabel_o *v89; // x19
  System_String_o *v90; // x0
  Il2CppObject *v91; // x1
  bool v92; // w0
  bool v93; // w20
  System_String_o *v94; // x0
  int v95; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A22AA7 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B715CC(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B715CC(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B715CC(&LocalizationManager_TypeInfo, v5);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B715CC(&string_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_11590/*"SERVANT_PERSONALITY_"*/, v8);
    sub_1B715CC(&StringLiteral_11504/*"SERVANT_ATTRIBUTE_SPLIT"*/, v9);
    sub_1B715CC(&StringLiteral_21066/*"line_whiteAlpha_Noblur"*/, v10);
    sub_1B715CC(&StringLiteral_11907/*"SERVANT_SUB_ATTRIBUTE_"*/, v11);
    sub_1B715CC(&StringLiteral_11500/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, v12);
    sub_1B715CC(&StringLiteral_11501/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, v13);
    sub_1B715CC(&StringLiteral_11591/*"SERVANT_POLICY_"*/, v14);
    sub_1B715CC(&StringLiteral_1/*""*/, v15);
    sub_1B715CC(&StringLiteral_11499/*"SERVANT_ATTRIBUTE_FORMAT"*/, v16);
    byte_4A22AA7 = 1;
  }
  *(_QWORD *)personality = 0LL;
  v95 = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0LL, 0LL) )
  {
    mPanel = this->fields.attributeLabel;
    if ( !mPanel )
      goto LABEL_137;
    UILabel__set_text(mPanel, string_TypeInfo->static_fields->Empty, 0LL);
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_137;
    svtdata = bsvtData->fields.svtdata;
    if ( !svtdata )
      goto LABEL_137;
    v23 = svtdata->fields.type == 5 || (unsigned int)(svtdata->fields.type - 1) < 2;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v23, v20);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v26 = IsHideAttribute;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v27 = UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL);
    if ( v26 )
    {
      if ( v27 )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_137;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0LL, 0LL);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_53;
      v29 = this->fields.AbillityScrollView;
      if ( !v29 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v29->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
        goto LABEL_53;
      if ( !this->fields.isEquip )
        goto LABEL_42;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(npRoot, 0LL, 0LL) )
      {
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v31 = 1110966272;
      }
      else
      {
LABEL_42:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v31 = -1034158080;
      }
      v36 = *(float *)&v31;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, v36, 0LL);
      v38 = this->fields.AbillityScrollView;
      if ( v38 )
      {
        mPanel = (UILabel_o *)v38->fields.mPanel;
        if ( mPanel )
        {
          ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float, float, float, float))mPanel->klass->vtable._18_SetRect.method)(
            mPanel,
            mPanel->klass->vtable._19_ParentHasChanged.methodPtr,
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0LL);
          v39 = this->fields.AbillityScrollView;
          if ( v39 )
          {
            verticalScrollBar = v39->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0LL);
                v41 = this->fields.AbillityScrollView;
                if ( v41 )
                {
                  v42 = v41->fields.verticalScrollBar;
                  if ( v42 )
                  {
                    mPanel = (UILabel_o *)v42->fields.mFG;
                    if ( mPanel )
                    {
                      UIWidget__set_height((UIWidget_o *)mPanel, 460, 0LL);
LABEL_53:
                      mPanel = (UILabel_o *)this->fields.buffListView;
                      if ( mPanel )
                      {
                        BattleViewBufflistComponent__UpdateBuffListScrollView(
                          (BattleViewBufflistComponent_o *)mPanel,
                          1,
                          0LL);
                        mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
                        if ( mPanel )
                        {
                          mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)mPanel,
                                                  0LL);
                          if ( mPanel )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0LL);
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_137:
      sub_1B71828(mPanel, v18);
    }
    if ( v27 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
    }
    v32 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v32, 0LL, 0LL);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v33 = this->fields.AbillityScrollView;
      if ( !v33 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v33->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v34 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v34, 0LL, 0LL) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v35 = 1110966272;
        }
        else
        {
LABEL_57:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v35 = -1034158080;
        }
        v43 = *(float *)&v35;
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
        GameObjectExtensions__SetLocalPositionY(v44, v43, 0LL);
        v45 = this->fields.AbillityScrollView;
        if ( !v45 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v45->fields.mPanel;
        if ( !mPanel )
          goto LABEL_137;
        ((void (__fastcall *)(UILabel_o *, Il2CppMethodPointer, float, float, float, float))mPanel->klass->vtable._18_SetRect.method)(
          mPanel,
          mPanel->klass->vtable._19_ParentHasChanged.methodPtr,
          0.0,
          -127.0,
          670.0,
          430.0);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0LL);
        v46 = this->fields.AbillityScrollView;
        if ( !v46 )
          goto LABEL_137;
        v47 = v46->fields.verticalScrollBar;
        if ( !v47 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v47->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
        v48 = this->fields.AbillityScrollView;
        if ( !v48 )
          goto LABEL_137;
        v49 = v48->fields.verticalScrollBar;
        if ( !v49 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v49->fields.mFG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
      }
    }
    mPanel = (UILabel_o *)this->fields.buffListView;
    if ( !mPanel )
      goto LABEL_137;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)mPanel, 0, 0LL);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v18) )
    {
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_atlas((UISprite_o *)mPanel, this->fields.BattleAssetUIAtlas, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21066/*"line_whiteAlpha_Noblur"*/, 0LL);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      ((void (__fastcall *)(UILabel_o *, __int64, void *))mPanel->klass[1]._1.namespaze)(
        mPanel,
        1LL,
        mPanel->klass[1]._1.byval_arg.data);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v51);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v52 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v53 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
      v55 = (System_Collections_Generic_List_object__o *)sub_1B71818(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v55,
        (const MethodInfo_34CFA2C *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v52 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0LL);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v23 && (personality[1] | v52) == 0 )
            v52 = 2;
          if ( personality[1] )
          {
            v59 = System_Int32__ToString((int32_t)&personality[1], 0LL);
            v60 = System_String__Concat_61505504((System_String_o *)StringLiteral_11591/*"SERVANT_POLICY_"*/, v59, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsNullOrEmpty = LocalizationManager__Get(v60, 0LL);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v52,
                    OverwritePolicy,
                    v58);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v55 )
            goto LABEL_137;
          items = v55->fields._items;
          v65 = Method_System_Collections_Generic_List_string__Add__;
          ++v55->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v55->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &items->obj.klass + size;
            v55->fields._size = size + 1;
            v67[4] = (Il2CppClass *)HideStr;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)HideStr, v62, v63);
          }
        }
      }
      if ( v53 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0LL);
        v69 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0LL);
        if ( ((unsigned __int8)v69 & 1) != 0 )
        {
          if ( v23 && (personality[0] | v53) == 0 )
            v53 = 2;
          if ( personality[0] )
          {
            v71 = System_Int32__ToString((int32_t)personality, 0LL);
            v72 = System_String__Concat_61505504((System_String_o *)StringLiteral_11590/*"SERVANT_PERSONALITY_"*/, v71, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v69 = LocalizationManager__Get(v72, 0LL);
            OverwritePersonality = v69;
          }
        }
        v73 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v69,
                v53,
                OverwritePersonality,
                v70);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v73, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v55 )
            goto LABEL_137;
          v76 = v55->fields._items;
          v77 = Method_System_Collections_Generic_List_string__Add__;
          ++v55->fields._version;
          if ( !v76 )
            goto LABEL_137;
          v78 = v55->fields._size;
          if ( (unsigned int)v78 >= v76->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v55,
              (Il2CppObject *)v73,
              *(const MethodInfo_34D0260 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &v76->obj.klass + v78;
            v55->fields._size = v78 + 1;
            v79[4] = (Il2CppClass *)v73;
            sub_1B71570((ServantStatusBattleListViewItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11504/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
      v81 = System_String__Join_61521160(v80, (System_Collections_Generic_IEnumerable_string__o *)v55, 0LL);
      v82 = (System_String_o *)StringLiteral_1/*""*/;
      if ( HideStateSubAttribute != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)mPanel, 0LL);
        Attri = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
        if ( ((unsigned __int8)Attri & 1) != 0 )
        {
          mPanel = (UILabel_o *)this->fields.bsvtData;
          if ( !mPanel )
            goto LABEL_137;
          Attri = (System_String_o *)BattleServantData__getAttri((BattleServantData_o *)mPanel, 0LL);
          if ( v23 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v95 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v86 = System_Int32__ToString((int32_t)&v95, 0LL);
            v87 = System_String__Concat_61505504((System_String_o *)StringLiteral_11907/*"SERVANT_SUB_ATTRIBUTE_"*/, v86, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Attri = LocalizationManager__Get(v87, 0LL);
            OverwriteSubAttribute = Attri;
          }
        }
        v88 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v85);
        if ( !System_String__IsNullOrEmpty(v88, 0LL) )
          v82 = v88;
      }
      if ( System_String__IsNullOrEmpty(v81, 0LL) )
      {
        v89 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11501/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0LL);
        v91 = (Il2CppObject *)v82;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v90, v91, 0LL);
        if ( !v89 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v89, (System_String_o *)mPanel, 0LL);
        return;
      }
      v92 = System_String__IsNullOrEmpty(v82, 0LL);
      v89 = this->fields.attributeLabel;
      v93 = v92;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v92 )
        {
LABEL_131:
          v90 = LocalizationManager__Get((System_String_o *)StringLiteral_11500/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0LL);
          v91 = (Il2CppObject *)v81;
          goto LABEL_132;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v93 )
          goto LABEL_131;
      }
      v94 = LocalizationManager__Get((System_String_o *)StringLiteral_11499/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
      mPanel = (UILabel_o *)System_String__Format_61519876(v94, (Il2CppObject *)v81, (Il2CppObject *)v82, 0LL);
      if ( !v89 )
        goto LABEL_137;
      goto LABEL_133;
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v5; // x1
  BattleServantConfWindowPassiveSkillListComponent_o *v6; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v9; // x2

  if ( (byte_4A22AA6 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_21340/*"menu_txt_class_score"*/, v3);
    byte_4A22AA6 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v6 )
      goto LABEL_19;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v6, 0, 0LL);
  }
  bsvtData = this->fields.bsvtData;
  if ( bsvtData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0LL) )
  {
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v5) )
    {
      v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v6 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._5_SetSkillTitle.method)(
          v6,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_21340/*"menu_txt_class_score"*/,
          v6->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v6 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v6,
            this->fields.bsvtData,
            v9);
          v6 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v6 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v6, 1, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1B71828(v6, v5);
    }
  }
}


void __fastcall BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
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
  UnityEngine_Object_o *ClassSkillObj; // x21
  const MethodInfo *v20; // x1
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  struct BattleServantData_o *v25; // x8
  __int64 v26; // x21
  __int64 v27; // x22
  int32_t v28; // w0
  struct BattleServantData_o *v29; // x8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x1
  __int128 v32; // q1
  BattleUserServantData_o *UserServantFromID; // x21
  System_Collections_Generic_IEnumerable_T__o *v34; // x22
  System_Collections_Generic_List_int__o *v35; // x20
  BattleServantData_o *v36; // x22
  System_Collections_ICollection_o *v37; // x21
  const MethodInfo *v38; // x2
  int32_t v39; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v41; // x0
  SkillLvMaster_o *v42; // x26
  int32_t v43; // w22
  int32_t v44; // w24
  float v45; // s8
  int32_t v46; // w27
  System_String_o *v47; // x28
  System_String_o *v48; // x29
  UnityEngine_GameObject_o *v49; // x25
  Il2CppObject *v50; // x25
  SkillLvMaster_o *v51; // x21
  UnityEngine_Transform_o *v52; // x26
  UnityEngine_Transform_o *v53; // x26
  UnityEngine_Transform_o *v54; // x26
  Il2CppObject *Component_object; // x25
  Il2CppObject *v56; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v57; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+30h] [xbp-A0h]
  SkillLvEntity_o *v59; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v61; // 0:x0.16
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A22A98 & 1) == 0 )
  {
    sub_1B715CC(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData);
    sub_1B715CC(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B715CC(&DataManager_TypeInfo, v6);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__InsertRange__, v9);
    sub_1B715CC(&Method_System_Collections_Generic_List_int___ctor___75798152, v10);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B715CC(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B715CC(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v15);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B715CC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B715CC(&StringLiteral_20462/*"img_txt_classskill"*/, v18);
    byte_4A22A98 = 1;
  }
  entity = 0LL;
  v59 = 0LL;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0LL, 0LL) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0LL, 0LL) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0LL, 0LL) )
      {
        bsvtData = (__int64)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_54;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, 0LL) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
            || BattleServantConfConponent__SetAtlas(this, v20) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20462/*"img_txt_classskill"*/, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
                         bsvtData,
                         *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
            v25 = this->fields.bsvtData;
            if ( !v25 )
              goto LABEL_54;
            v27 = *(_QWORD *)&v25->fields.svtId.fields.currentCryptoKey;
            v26 = *(_QWORD *)&v25->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v61.fields.currentCryptoKey = v27;
            *(_QWORD *)&v61.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46308268(v61, 0LL);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v28, 0LL);
            v29 = this->fields.bsvtData;
            if ( !v29 )
              goto LABEL_54;
            if ( (bsvtData & 1) != 0 )
            {
              deckSvt = v29->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_54;
              userSvtId = deckSvt->fields.userSvtId;
            }
            else
            {
              v32 = *(_OWORD *)&v29->fields.userSvtId.fields.fakeValue;
              *(_OWORD *)&v58.fields.currentCryptoKey = *(_OWORD *)&v29->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v58.fields.fakeValue = v32;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v57 = v58;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46311792(&v57, 0LL);
            }
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0LL);
            if ( UserServantFromID )
            {
              bsvtData = (__int64)this->fields.bsvtData;
              if ( !bsvtData )
                goto LABEL_54;
              v34 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                     (BattleServantData_o *)bsvtData,
                                                                     UserServantFromID->fields.classPassive,
                                                                     1,
                                                                     0LL);
              v35 = (System_Collections_Generic_List_int__o *)sub_1B71818(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_55257872(
                v35,
                v34,
                (const MethodInfo_34B2B10 *)Method_System_Collections_Generic_List_int___ctor___75798152);
              v36 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0LL);
              if ( !v36 )
                goto LABEL_54;
              v37 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v36,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0LL);
              bsvtData = BasicHelper__IsNullOrEmpty(v37, 0LL);
              if ( (bsvtData & 1) != 0 )
              {
                if ( !v35 )
                  goto LABEL_54;
              }
              else
              {
                bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v35, v38);
                if ( !v35 )
                  goto LABEL_54;
                System_Collections_Generic_List_int___InsertRange(
                  v35,
                  bsvtData,
                  (System_Collections_Generic_IEnumerable_T__o *)v37,
                  (const MethodInfo_34B41F4 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v35->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v39 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)bsvtData,
                                            0LL);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v39 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
                        break;
                      bsvtData = (__int64)this->fields.ClassSkillListParent;
                      if ( bsvtData )
                      {
                        bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)bsvtData,
                                              0LL);
                        if ( bsvtData )
                        {
                          bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)bsvtData,
                                                v39,
                                                0LL);
                          if ( bsvtData )
                          {
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( bsvtData )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                              bsvtData = (__int64)this->fields.ClassSkillListParent;
                              ++v39;
                              if ( bsvtData )
                                continue;
                            }
                          }
                        }
                      }
                      goto LABEL_54;
                    }
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0LL;
                    v41 = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v59 = 0LL;
                    if ( v35->fields._size >= 1 )
                    {
                      v42 = (SkillLvMaster_o *)v41;
                      v43 = 0;
                      v44 = 0;
                      v45 = 0.0;
                      v56 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v35,
                                     v44,
                                     (const MethodInfo_34B2F4C *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v46 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_30F87B4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v42 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity(v42, &v59, v46, 1, 0LL) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                          if ( !v59 )
                            goto LABEL_54;
                          v47 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)SkillLvEntity__getDetail_39638576(v59, 1, 0, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_54;
                          v48 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                this->fields.ClassSkillListParent,
                                                0LL);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v43 )
                          {
                            v50 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            v51 = v42;
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v50,
                                                  (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v49 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v52 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0LL);
                            if ( !v52 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v52, (UnityEngine_Transform_o *)bsvtData, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v63.fields.y = -v45;
                            v63.fields.x = 0.0;
                            v63.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v63, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
                            v53 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4A1A756 )
                            {
                              bsvtData = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v20);
                              byte_4A1A756 = 1;
                            }
                            if ( !v53 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v53,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
                            v54 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4A1A757 )
                            {
                              bsvtData = sub_1B715CC(&UnityEngine_Quaternion_TypeInfo, v20);
                              byte_4A1A757 = 1;
                            }
                            if ( !v54 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v54,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0LL);
                            v42 = v51;
                            Master_object = v56;
                          }
                          else
                          {
                            bsvtData = (__int64)this->fields.ClassSkillListParent;
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)bsvtData,
                                                  v43,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v49 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v49, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v62.fields.y = -v45;
                            v62.fields.x = 0.0;
                            v62.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v62, 0LL);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v49,
                                               (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          bsvtData = UnityEngine_Object__op_Inequality(
                                       (UnityEngine_Object_o *)Component_object,
                                       0LL,
                                       0LL);
                          if ( (bsvtData & 1) != 0 )
                          {
                            if ( !Component_object )
                              goto LABEL_54;
                            BattleServantConfSkillComponent__SetItem(
                              (BattleServantConfSkillComponent_o *)Component_object,
                              v44 + 1,
                              v46,
                              v47,
                              v48,
                              1,
                              0,
                              0LL);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          ++v43;
                          v45 = v45
                              + (float)((float)(BattleServantConfSkillComponent__GetHeight(
                                                  (BattleServantConfSkillComponent_o *)Component_object,
                                                  0LL)
                                              - HIDWORD(Component_object[5].klass))
                                      + 110.0);
                        }
                        if ( ++v44 >= v35->fields._size )
                          goto LABEL_98;
                      }
                    }
                    v45 = 0.0;
LABEL_98:
                    this->fields.ClassSkillOffset = -(float)(v45 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1B71828(bsvtData, v20);
              }
            }
          }
        }
      }
    }
  }
}


void __fastcall BattleServantConfConponent__SetCommandCard(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  __int64 v6; // x1
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v8; // x20
  unsigned __int64 v9; // x21
  int32_t *v10; // x23
  unsigned __int64 max_length; // x9
  BattleCommandComponent_o *v12; // x22
  const MethodInfo *v13; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A22A9C & 1) == 0 )
  {
    sub_1B715CC(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v3);
    byte_4A22A9C = 1;
  }
  component = 0LL;
  bsvtData = this->fields.bsvtData;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, 0LL);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_23:
      sub_1B71828(CommandCodeIdsEX, v6);
    v8 = CommandCodeIdsEX;
    v9 = 0LL;
    v10 = &CommandCodeIdsEX->m_Items[1];
    while ( 1 )
    {
      max_length = CommandCardList->max_length;
      if ( (__int64)v9 >= (int)max_length )
        break;
      if ( v9 >= max_length )
        goto LABEL_25;
      v12 = CommandCardList->m_Items[v9];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v12, 0LL, 0LL);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v12 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v12, 0LL);
        v12->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_42848916(v12, this->fields.bsvtData, v9, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_2E52D50 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_23;
          BattleCommandComponent__setDepth(v12, LODWORD(component[11].klass) + 1, 0LL);
        }
        BattleCommandComponent__SetDownloadEventSprite(v12, 0LL);
        if ( !v8 )
          goto LABEL_23;
        if ( v9 >= v8->max_length
          || (BattleCommandComponent__SetCommandCodeView_42853104(v12, v10[v9], 0LL), v9 >= v8->max_length)
          || (BattleCommandComponent__SetLockInfo(v12, v10[v9] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v12, v13),
              BattleCommandComponent__HidePowerUpValueLabelActive(v12, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v12, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v12, 0LL),
              v9 >= v8->max_length) )
        {
LABEL_25:
          sub_1B71830(CommandCodeIdsEX, v6);
        }
        data = v12->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.commandCodeId = v10[v9];
        BattleCommandComponent__UpdateCommandCardEffect(v12, 0LL);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v12, 0LL);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v9;
      if ( !CommandCardList )
        goto LABEL_23;
    }
  }
}


void __fastcall BattleServantConfConponent__SetCommandCardTypeChangeBuff(
        BattleServantConfConponent_o *this,
        BattleCommandComponent_o *commandCard,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x21
  int32_t addOrder; // w3
  int v7; // w2
  BattleBuffData_BuffData_o *v8; // x0
  BattleBuffData_BuffData_o *v9; // x22
  int32_t turn; // w8
  int v11; // w8
  bool v12; // w20

  if ( !commandCard )
    sub_1B71828(this, 0LL);
  data = commandCard->fields.data;
  if ( data && !BattleCommandData__isTreasureDvc(commandCard->fields.data, 0LL) )
  {
    v8 = BattleCommandData__GetCommandCardTypeChangeBuff(data, 0LL);
    if ( v8 )
    {
      v9 = v8;
      LOBYTE(v8) = BattleCommandData__IsCommandCardTypeChanged(data, 0LL);
      turn = v9->fields.turn;
      addOrder = v9->fields.addOrder;
      this->fields.isCommandCardUnderIcon = 1;
      if ( turn + 1 >= 0 )
        v11 = turn + 1;
      else
        v11 = turn + 2;
      v7 = v11 >> 1;
    }
    else
    {
      addOrder = 0;
      v7 = 0;
    }
  }
  else
  {
    addOrder = 0;
    v7 = 0;
    LOBYTE(v8) = 0;
  }
  v12 = (unsigned __int8)v8 & 1;
  BattleCommandComponent__SetCommandCardTypeChange(commandCard, (unsigned __int8)v8 & 1, v7, addOrder, 0LL);
  BattleCommandComponent__SetActiveSpecialCardBuffIcon(commandCard, v12, 0LL);
}


void __fastcall BattleServantConfConponent__SetCommandCodeSkillList(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 v17; // x1
  __int64 transform; // x0
  int32_t v19; // w20
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v21; // x8
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v23; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  int v27; // w21
  __int64 v28; // x8
  int32_t v29; // w22
  unsigned __int64 v30; // x29
  float v31; // s8
  int32_t v32; // w25
  System_Int32_array *v33; // x8
  unsigned __int64 v34; // x24
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v36; // x26
  Il2CppObject *v37; // x26
  UnityEngine_Transform_o *v38; // x27
  UnityEngine_Transform_o *v39; // x27
  UnityEngine_Transform_o *v40; // x27
  Il2CppObject *Component_object; // x26
  float v42; // s0
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v44; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v49; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A22A9D & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Array_FindIndex_int___, method);
    sub_1B715CC(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_1B715CC(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1B715CC(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v6);
    sub_1B715CC(&LocalizationManager_TypeInfo, v7);
    sub_1B715CC(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v9);
    sub_1B715CC(&System_Predicate_int__TypeInfo, v10);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B715CC(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__, v12);
    sub_1B715CC(&BattleServantConfConponent___c_TypeInfo, v13);
    sub_1B715CC(&StringLiteral_2844/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v14);
    byte_4A22A9D = 1;
  }
  idList = 0LL;
  explanationList = 0LL;
  titleList = 0LL;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0LL, 0LL) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0LL, 0LL) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_90;
  v19 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_90;
    if ( v19 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v19, 0LL);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v19;
            if ( transform )
              continue;
          }
        }
      }
    }
    goto LABEL_90;
  }
  transform = (__int64)this->fields.bsvtData;
  if ( !transform )
    goto LABEL_90;
  CommandCodeIds = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, 0LL);
  v21 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v21 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__85_0 = v21->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleServantConfConponent___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_1B71818(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__85_0,
      v23,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = _9__85_0;
    sub_1B71570((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v25, v26);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__85_0,
                (const MethodInfo_2F5464C *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v27 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0LL)) == 0) )
  {
LABEL_90:
    sub_1B71828(transform, v17);
  }
  if ( v27 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2844/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  v28 = *(_QWORD *)&CommandCodeIds->max_length;
  if ( (int)v28 >= 1 )
  {
    v29 = 0;
    v30 = 0LL;
    v31 = 0.0;
    v44 = CommandCodeIds;
    do
    {
      if ( v30 >= (unsigned int)v28 )
LABEL_91:
        sub_1B71830(transform, v17);
      v32 = CommandCodeIds->m_Items[v30 + 1];
      if ( v32 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v32,
                               (const MethodInfo_30F8760 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v33 = idList;
          if ( !idList )
            goto LABEL_90;
          v34 = 0LL;
          while ( 1 )
          {
            max_length = v33->max_length;
            if ( (__int64)v34 >= (int)max_length )
              break;
            if ( v34 >= max_length )
              goto LABEL_91;
            if ( v33->m_Items[v34 + 1] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v29 )
              {
                v37 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v37,
                                       (const MethodInfo_2EDE770 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v36 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v38 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0LL);
                if ( !v38 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v49.fields.x = 0.0;
                v49.fields.z = 0.0;
                v49.fields.y = v31;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v49, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
                v39 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4A1A756 )
                {
                  transform = sub_1B715CC(&UnityEngine_Vector3_TypeInfo, v17);
                  byte_4A1A756 = 1;
                }
                if ( !v39 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v39, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v36, 0LL);
                v40 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4A1A757 )
                {
                  transform = sub_1B715CC(&UnityEngine_Quaternion_TypeInfo, v17);
                  byte_4A1A757 = 1;
                }
                if ( !v40 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v40,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0LL);
              }
              else
              {
                transform = (__int64)this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v29, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v36 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v36,
                                   (const MethodInfo_2EAA998 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v34 >= idList->max_length )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v34 >= titleList->max_length )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v34 >= explanationList->max_length )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v32,
                  idList->m_Items[v34 + 1],
                  titleList->m_Items[v34],
                  explanationList->m_Items[v34],
                  v34 == 0,
                  0LL);
              }
              v33 = idList;
              v42 = -100.0;
              if ( !v34 )
                v42 = -126.0;
              v31 = v31 + v42;
              ++v29;
            }
            ++v34;
            if ( !v33 )
              goto LABEL_90;
          }
          CommandCodeIds = v44;
        }
      }
      LODWORD(v28) = CommandCodeIds->max_length;
      ++v30;
    }
    while ( (__int64)v30 < (int)v28 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A22AA0 & 1) == 0 )
  {
    sub_1B715CC(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, method);
    byte_4A22AA0 = 1;
  }
  v3 = sub_1B71818(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
  BattleServantConfConponent__StartOpenTab_d__92___ctor((BattleServantConfConponent__StartOpenTab_d__92_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B71828(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B71570((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *v7; // x19
  __int64 *v8; // x8

  if ( (byte_4A22AA5 & 1) == 0 )
  {
    sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    sub_1B715CC(&StringLiteral_17970/*"close"*/, v3);
    sub_1B715CC(&StringLiteral_14484/*"Top/close"*/, v4);
    byte_4A22AA5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B71828(0LL, v6);
  v7 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14484/*"Top/close"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    v8 = &StringLiteral_14484/*"Top/close"*/;
  else
    v8 = &StringLiteral_17970/*"close"*/;
  return (System_String_o *)*v8;
}


BattleServantData_o *__fastcall BattleServantConfConponent__get_svtData(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bsvtData;
}


bool __fastcall BattleServantConfConponent__isTargetSvt(
        BattleServantConfConponent_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantData_o *bsvtData; // x8

  bsvtData = this->fields.bsvtData;
  return bsvtData && bsvtData->fields.uniqueId == uniqueId;
}


void __fastcall BattleServantConfConponent__setCallBackPushClose(
        BattleServantConfConponent_o *this,
        BattleServantConfConponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.callback_close = callback;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.callback_close, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall BattleServantConfConponent__setConfData(
        BattleServantConfConponent_o *this,
        BattleServantData_o *inbsvtData,
        bool isShowBuffIcon,
        BattleInfoData_o *battleInfoData,
        bool isNpc,
        const MethodInfo *method)
{
  BattleInfoData_o *battle_info; // x24
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
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
  System_String_o *v26; // x1
  struct BattleData_o *v27; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v29; // x25
  UnityEngine_Object_o *atklabel; // x25
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct BattleServantData_o *v34; // x8
  UILabel_o *v35; // x25
  Il2CppObject *v36; // x0
  struct BattleServantData_o *v37; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v39; // x1
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x1
  const MethodInfo *v43; // x1
  int32_t v44; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v46; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v49; // w0
  TreasureDvcLvEntity_o *v50; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v52; // x25
  System_String_o *DetalShort_39820684; // x0
  UILabel_o *maxNp; // x25
  __int64 v55; // x2
  __int64 v56; // x3
  __int64 v57; // x4
  Il2CppObject *v58; // x0
  struct UILabel_o *v59; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v61; // x1
  UnityEngine_Object_o *v62; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v65; // w24
  int32_t v66; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  char v69; // w2
  int32_t v70; // w3
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v72; // w1
  System_String_o **p_svtOverwriteBattleName; // x8
  UnityEngine_Object_o *unknownNp; // x25
  UILabel_o *v75; // x25
  UnityEngine_Object_o *commandCard; // x24
  BattleCommandData_o *v77; // x24
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  ServantClassIconComponent_o *v80; // x21
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v82; // x21
  int32_t v83; // w20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v85; // x1
  int v86; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_4A22A95 & 1) == 0 )
  {
    sub_1B715CC(&BattleCommandData_TypeInfo, inbsvtData);
    sub_1B715CC(&BattleServantConfConponent_TypeInfo, v11);
    sub_1B715CC(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v12);
    sub_1B715CC(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_1B715CC(&int_TypeInfo, v14);
    sub_1B715CC(&LocalizationManager_TypeInfo, v15);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v16);
    sub_1B715CC(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B715CC(&StringLiteral_9300/*"NP_UNKNOWN"*/, v19);
    sub_1B715CC(&StringLiteral_24874/*"{0:#,0}"*/, v20);
    sub_1B715CC(&StringLiteral_1/*""*/, v21);
    sub_1B715CC(&StringLiteral_8895/*"Max {0}%"*/, v22);
    byte_4A22A95 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)&this->fields.bsvtData,
    (int32_t)inbsvtData,
    isShowBuffIcon,
    (int32_t)battleInfoData);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0LL, 0LL);
      battle_info = 0LL;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v27 = this->fields.data;
        if ( !v27 )
          goto LABEL_144;
        battle_info = v27->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0LL, 0LL) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_144;
      v29 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0LL);
      if ( !v29 )
        goto LABEL_144;
      UILabel__set_text(v29, (System_String_o *)bsvtData, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v34 = this->fields.bsvtData;
      if ( !v34 )
        goto LABEL_144;
      v35 = this->fields.atklabel;
      atk = v34->fields.atk;
      v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk, v31, v32, v33);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_24874/*"{0:#,0}"*/, v36, 0LL);
      if ( !v35 )
        goto LABEL_144;
      UILabel__set_text(v35, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v37 = this->fields.bsvtData;
      if ( v37 )
      {
        bsvtData = (BattleServantData_o *)v37->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v39);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v40);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v41);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v42);
            BattleServantConfConponent__SetCommandCard(this, v42);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v43);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0LL, 0LL);
              if ( *p_bsvtData )
              {
                v44 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v46 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v46, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v46, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v49 = UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL);
                if ( v44 < 1 )
                {
                  if ( v49 )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_144;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0LL);
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v65 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v66 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0LL);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v65,
                                               v66,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1B71570(
                    (ServantStatusBattleListViewItem_o *)&this->fields.facetex,
                    (int32_t)Manager__loadCommandCard,
                    v69,
                    v70);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_119;
                  bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( !bsvtData )
                    goto LABEL_144;
                  v72 = 1;
                  goto LABEL_118;
                }
                if ( !v49 )
                  goto LABEL_119;
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0LL);
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v44,
                                                    lv,
                                                    0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_144;
                v50 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v50 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                  if ( !npdetail )
                    goto LABEL_144;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0LL);
                  v52 = this->fields.npdetail;
                  DetalShort_39820684 = TreasureDvcLvEntity__getDetalShort_39820684(v50, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v52,
                    DetalShort_39820684,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v86 = 100 * v50->fields.gaugeCount;
                  v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v86, v55, v56, v57);
                  bsvtData = (BattleServantData_o *)System_String__Format(
                                                      (System_String_o *)StringLiteral_8895/*"Max {0}%"*/,
                                                      v58,
                                                      0LL);
                  if ( !maxNp )
                    goto LABEL_144;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v59 = this->fields.npdetail;
                  if ( !v59 )
                    goto LABEL_144;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v59->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v59 = this->fields.npdetail;
                      if ( !v59 )
                        goto LABEL_144;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v59->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_144;
                if ( bsvtData )
                  v61 = (System_String_o *)bsvtData;
                else
                  v61 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v61, 0LL);
                v62 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v62, 0LL, 0LL) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_144;
                  IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)bsvtData, *p_bsvtData, 1, 0LL);
                }
                else
                {
                  IsNpDetailActive = 1;
                }
                bsvtData = (BattleServantData_o *)this->fields.maxNp;
                if ( bsvtData )
                {
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( bsvtData )
                  {
                    bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)bsvtData,
                                                        0LL);
                    if ( bsvtData )
                    {
                      bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)bsvtData,
                                                          0LL);
                      if ( bsvtData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, IsNpDetailActive, 0LL);
                        bsvtData = (BattleServantData_o *)this->fields.nplevel;
                        if ( bsvtData )
                        {
                          bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)bsvtData,
                                                              0LL);
                          if ( bsvtData )
                          {
                            bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                                (UnityEngine_Transform_o *)bsvtData,
                                                                0LL);
                            if ( bsvtData )
                            {
                              bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)bsvtData,
                                                                  0LL);
                              if ( bsvtData )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)bsvtData,
                                  IsNpDetailActive,
                                  0LL);
                                bsvtData = (BattleServantData_o *)this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_svtOverwriteBattleName = &bsvtData->fields.svtOverwriteBattleName;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_svtOverwriteBattleName = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_svtOverwriteBattleName, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v75 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v26 = (System_String_o *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9300/*"NP_UNKNOWN"*/,
                                                                        0LL);
                                    v26 = (System_String_o *)bsvtData;
                                  }
                                  if ( !v75 )
                                    goto LABEL_144;
                                  UILabel__set_text(v75, v26, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v77 = (BattleCommandData_o *)sub_1B71818(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v77, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_42733860(
                                                                      bsvtData,
                                                                      0,
                                                                      0LL);
                                  if ( !v77 )
                                    goto LABEL_144;
                                  v77->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v77->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v77->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v77->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v77->fields.svtId = BattleServantData__getSvtId(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v77->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                                  v77->fields.treasureDvc = v44;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v77,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0LL);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_144;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0LL);
                                if ( !bsvtData )
                                  goto LABEL_144;
                                v72 = 0;
LABEL_118:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v72, 0LL);
LABEL_119:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleServantNPSpeedChangeComponent__SetData(
                                    (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                                    *p_bsvtData,
                                    0LL);
                                }
                                classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                  goto LABEL_142;
                                if ( inbsvtData )
                                {
                                  v80 = this->fields.classIcon;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0LL);
                                  if ( v80 )
                                  {
                                    ServantClassIconComponent__SetImage(
                                      v80,
                                      (int32_t)bsvtData,
                                      inbsvtData->fields._frameType_k__BackingField,
                                      0LL);
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                                (ServantClassIconComponent_o *)bsvtData,
                                                                0LL);
                                      v82 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                      v83 = IconSpriteScaledWidth;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      if ( UnityEngine_Object__op_Inequality(v82, 0LL, 0LL) )
                                      {
                                        bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                        if ( !bsvtData )
                                          goto LABEL_144;
                                        if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v83 >= 270 )
                                          CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v83, 0LL);
                                      }
                                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                      if ( bsvtData )
                                      {
                                        Component_object = UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             (const MethodInfo_2E51E8C *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                                            (UnityEngine_Object_o *)Component_object,
                                                                            0LL,
                                                                            0LL);
                                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                          goto LABEL_142;
                                        if ( Component_object )
                                        {
                                          UnityEngine_Behaviour__set_enabled(
                                            (UnityEngine_Behaviour_o *)Component_object,
                                            1,
                                            0LL);
LABEL_142:
                                          BattleServantConfConponent__SetAttribute(this, (const MethodInfo *)v26);
                                          BattleServantConfConponent__ChangeLayout(this, v85);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_144:
    sub_1B71828(bsvtData, v26);
  }
}


void __fastcall BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  __int64 v13; // x1
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x27
  __int64 v16; // x8
  SkillLvMaster_o *v17; // x21
  unsigned __int64 v18; // x29
  Il2CppClass **v19; // x19
  __int64 *v20; // x19
  __int64 v21; // t1
  __int64 v22; // x22
  __int64 v23; // x23
  unsigned __int64 v24; // x19
  float v25; // s8
  int32_t v26; // w25
  int32_t v27; // w26
  unsigned __int64 v28; // x20
  struct BattleUserServantData_array *v29; // x29
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v36; // x27
  Il2CppClass **v37; // x0
  BattleServantConfConponent_o *v38; // x21
  System_String_o *v39; // x28
  float v40; // s0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_List_object__o *v43; // x8
  struct System_Object_array *v44; // x9
  _QWORD *v45; // x10
  __int64 v46; // x11
  __int64 v47; // x1
  Il2CppClass **v48; // x0
  Il2CppObject *v49; // [xsp+0h] [xbp-A0h]
  SkillLvMaster_o *v50; // [xsp+8h] [xbp-98h]
  __int64 v51; // [xsp+18h] [xbp-88h]
  int32_t index; // [xsp+24h] [xbp-7Ch]
  SkillLvEntity_o *v53; // [xsp+28h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4A22A96 & 1) == 0 )
  {
    sub_1B715CC(&BalanceConfig_TypeInfo, method);
    sub_1B715CC(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1B715CC(&Method_DataManager_GetMaster_SkillMaster___, v4);
    sub_1B715CC(&DataManager_TypeInfo, v5);
    sub_1B715CC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_1B715CC(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v7);
    sub_1B715CC(&UnityEngine_Object_TypeInfo, v8);
    byte_4A22A96 = 1;
  }
  entity = 0LL;
  v53 = 0LL;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0LL, 0LL) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0LL, 0LL) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_51;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_51;
        v16 = *(_QWORD *)&equipList->max_length;
        if ( (int)v16 >= 1 )
        {
          v17 = (SkillLvMaster_o *)BattleSkillIdList;
          v18 = 0LL;
          v49 = Master_object;
          v50 = (SkillLvMaster_o *)BattleSkillIdList;
          do
          {
            if ( v18 >= (unsigned int)v16 )
LABEL_52:
              sub_1B71830(BattleSkillIdList, v13);
            v19 = &equipList->obj.klass + v18;
            v21 = (__int64)v19[4];
            v20 = (__int64 *)(v19 + 4);
            BattleSkillIdList = v21;
            if ( v21 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0LL);
              if ( v18 >= equipList->max_length )
                goto LABEL_52;
              v22 = BattleSkillIdList;
              BattleSkillIdList = *v20;
              if ( !*v20 )
                goto LABEL_51;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v22 )
                goto LABEL_51;
              if ( *(int *)(v22 + 24) >= 1 )
              {
                v23 = BattleSkillIdList;
                v24 = 0LL;
                v25 = 0.0;
                index = 0;
                v51 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    BattleSkillIdList = (__int64)BalanceConfig_TypeInfo;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 44LL) <= index )
                    break;
                  if ( v24 >= *(unsigned int *)(v22 + 24) )
                    goto LABEL_52;
                  if ( !v23 )
                    goto LABEL_51;
                  if ( v24 >= *(unsigned int *)(v23 + 24) )
                    goto LABEL_52;
                  v26 = *(_DWORD *)(v22 + 32 + 4 * v24);
                  v27 = *(_DWORD *)(v51 + 4 * v24);
                  entity = 0LL;
                  if ( !Master_object )
                    goto LABEL_51;
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v26,
                                        (const MethodInfo_30F87B4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    v53 = 0LL;
                    if ( !v17 )
                      goto LABEL_51;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v17, &v53, v26, v27, 0LL);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v28 = v18;
                      v29 = equipList;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     index,
                                                     v25,
                                                     0LL);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_51;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v34 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_51;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v36 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_34D0260 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v37[4] = (Il2CppClass *)v36;
                        sub_1B71570((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v30, v31);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_51;
                      v38 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v53 )
                        goto LABEL_51;
                      v39 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_39638576(v53, v27, 0, 0LL);
                      if ( !v36 )
                        goto LABEL_51;
                      v40 = EquipPossessionSkillInfoComponent__SetSkill(
                              v36,
                              v26,
                              v39,
                              (System_String_o *)BattleSkillIdList,
                              0LL);
                      v38->fields.isEquip = 1;
                      this = v38;
                      equipList = v29;
                      v18 = v28;
                      Master_object = v49;
                      v17 = v50;
                      v25 = v25 + v40;
                      ++index;
                    }
                  }
                  ++v24;
                }
                while ( (__int64)v24 < *(int *)(v22 + 24) );
              }
            }
            LODWORD(v16) = equipList->max_length;
            ++v18;
          }
          while ( (__int64)v18 < (int)v16 );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0LL);
          v43 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v43 )
          {
            v44 = v43->fields._items;
            v45 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v43->fields._version;
            if ( v44 )
            {
              v46 = v43->fields._size;
              v47 = BattleSkillIdList;
              if ( (unsigned int)v46 >= v44->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v43,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_34D0260 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &v44->obj.klass + v46;
                v43->fields._size = v46 + 1;
                v48[4] = (Il2CppClass *)v47;
                sub_1B71570((ServantStatusBattleListViewItem_o *)(v48 + 4), v47, v41, v42);
              }
              return;
            }
          }
LABEL_51:
          sub_1B71828(BattleSkillIdList, v13);
        }
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleServantConfConponent_CloseButtonCallBack___ctor(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B7168C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B71844(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B716F4(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19BC96C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19BC92C;
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B71580(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B71584(result, 0LL, method);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__92___ctor(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleServantConfConponent__StartOpenTab_d__92__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__92_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_4A22AB1 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_1B715CC(&UnityEngine_Object_TypeInfo, method);
    byte_4A22AB1 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1B71828(this, method);
    if ( BattleServantConfConponent__IsLastOpenServantAbility(_4__this, 0LL) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, 0LL);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_17;
  BattleServantAbilityObj = (UnityEngine_Object_o *)_4__this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0LL, 0LL) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__92_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v2->fields.__2__current = 0LL;
  p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B71570(p__2__current, 0, v8, v9);
  *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
  return v6;
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B715E0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B71818(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B715E0(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B716F4(v3, v4);
}


Il2CppObject *__fastcall BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleServantConfConponent__StartOpenTab_d__92__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A22AAF & 1) == 0 )
  {
    sub_1B715CC(&BattleServantConfConponent___c_TypeInfo, v1);
    byte_4A22AAF = 1;
  }
  v2 = (Il2CppObject *)sub_1B71818(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v2;
  sub_1B71570(
    (ServantStatusBattleListViewItem_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleServantConfConponent___c___ChangeLayout_b__79_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t __fastcall BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__81_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B71828(this, 0LL);
  return x->fields.skillId;
}


bool __fastcall BattleServantConfConponent___c___SetCommandCodeSkillList_b__85_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void __fastcall BattleServantConfConponent___c__DisplayClass81_0___ctor(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleServantConfConponent___c__DisplayClass81_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_4A22AB0 & 1) == 0 )
  {
    sub_1B715CC(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_4A22AB0 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1B71828(0LL, *(_QWORD *)&x);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_3389104 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}