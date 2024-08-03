void __fastcall BattleServantConfConponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleServantConfConponent_StaticFields *static_fields; // x8

  if ( (byte_49FF3AB & 1) == 0 )
  {
    sub_1B640C8(&BattleServantConfConponent_TypeInfo, v1);
    byte_49FF3AB = 1;
  }
  static_fields = BattleServantConfConponent_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DETAIL_FONT_SIZE = xmmword_BA3690;
  static_fields->EQIUP_SKILL_OBJ_HEIGHT = 110;
}


void __fastcall BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF3AA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__, method);
    sub_1B640C8(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo, v4);
    byte_49FF3AA = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v5;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.equipPossessionSkillInfoComponentList,
    (int32_t)v5,
    v6,
    v7);
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
  UnityEngine_GameObject_o *v14; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v17; // s8
  _BOOL8 v18; // x0
  Il2CppObject *current; // x24
  Il2CppClass *klass; // x9
  BattleServantConfConponent_c *v21; // x8
  int32_t implementedInterfaces_high; // w25
  Il2CppClass *v23; // x9
  BattleServantConfConponent_c *v24; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  unsigned __int64 CommandCodeIds; // x0
  __int64 v27; // x1
  __int64 v28; // x2
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

  if ( (byte_49FF395 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindIndex_int___, method);
    sub_1B640C8(&BattleServantConfConponent_TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v10);
    sub_1B640C8(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, v11);
    sub_1B640C8(&BattleServantConfConponent___c_TypeInfo, v12);
    byte_49FF395 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
  {
    v14 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v14, 0LL);
    GameObjectExtensions__SetLocalPositionY(v14, LocalPositionY + (float)this->fields.adjustHeight, 0LL);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v17 = 0.0;
    v46 = v45;
    while ( 1 )
    {
      v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v18 )
        break;
      current = v46.fields._current;
      if ( !v46.fields._current )
        sub_1B64324(v18);
      klass = v46.fields._current[3].klass;
      if ( !klass )
        sub_1B64324(v18);
      v21 = BattleServantConfConponent_TypeInfo;
      implementedInterfaces_high = HIDWORD(klass->_1.implementedInterfaces);
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v21 = BattleServantConfConponent_TypeInfo;
      }
      if ( implementedInterfaces_high > v21->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v21->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v21);
        v23 = current[3].klass;
        if ( !v23 )
          sub_1B64324(v18);
        v21 = BattleServantConfConponent_TypeInfo;
        v17 = v17
            + (float)(BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT
                    - HIDWORD(v23->_1.implementedInterfaces));
      }
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleServantConfConponent_TypeInfo;
      }
      v17 = v17 - (float)v21->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v24 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v24 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v17 + (float)v24->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
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
        _9__79_0 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v27, v28);
        System_Predicate_int____ctor(_9__79_0, v32, Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, 0LL);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__79_0 = _9__79_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v34, v35);
      }
      if ( System_Array__FindIndex_int_(
             v29,
             (System_Predicate_T__o *)_9__79_0,
             (const MethodInfo_2F309A4 *)Method_System_Array_FindIndex_int___) == -1
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
            sub_1B6432C(CommandCodeIds, v36);
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
      sub_1B64324(equipPossessionSkillInfoComponentList);
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
    sub_1B64324(0LL);
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
    sub_1B64324(0LL);
  BattleViewBufflistComponent__setShow(buffListView, 0LL);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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

  if ( (byte_49FF399 & 1) == 0 )
  {
    sub_1B640C8(&bool___TypeInfo, idList);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v14);
    sub_1B640C8(&DataManager_TypeInfo, v15);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__, v16);
    sub_1B640C8(&int___TypeInfo, v17);
    sub_1B640C8(&LocalizationManager_TypeInfo, v18);
    sub_1B640C8(&string___TypeInfo, v19);
    sub_1B640C8(&StringLiteral_43/*"\n"*/, v20);
    sub_1B640C8(&StringLiteral_3778/*"COND_TYPE_TITLE"*/, v21);
    sub_1B640C8(&StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    byte_49FF399 = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length = releaseSkillIds->max_length, (_DWORD)max_length == releaseSkillLvs->max_length) )
  {
    v25 = (System_Int32_array *)sub_1B64170(int___TypeInfo, max_length);
    *idList = v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v25, v26, v27);
    v28 = (System_String_array *)sub_1B64170(string___TypeInfo, releaseSkillIds->max_length);
    *titleList = v28;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v28, v29, v30);
    v31 = (System_String_array *)sub_1B64170(string___TypeInfo, releaseSkillIds->max_length);
    *explanationList = v31;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v31, v32, v33);
    v34 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, releaseSkillIds->max_length);
    *releaseStateList = v34;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v34, v35, v36);
    v37 = (System_Int32_array *)sub_1B64170(int___TypeInfo, releaseSkillIds->max_length);
    *lvList = v37;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v37, v38, v39);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
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
                                                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v54 + v46), (int32_t)Master_object, v56, v57);
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
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v54 + v46), (int32_t)Master_object, v68, v69);
            v70 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3778/*"COND_TYPE_TITLE"*/,
                                                                            0LL);
            if ( !v70 )
              goto LABEL_62;
            if ( v44 >= v70->max_length )
              break;
            v70->m_Items[v44] = (System_String_o *)Master_object;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v70 + v46), (int32_t)Master_object, v71, v72);
            v73 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1B64324(Master_object);
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
              v76 = System_String__Concat_61375396(v75[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0LL);
              v75[4] = v76;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v74 + v46), (int32_t)v76, v77, v78);
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
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_3766/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0LL);
            v83 = System_String__Concat_61375396(v81, v82, 0LL);
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
          if ( !byte_49F7D6A )
          {
            sub_1B640C8(&LocalizationManager_TypeInfo, v41);
            byte_49F7D6A = 1;
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
          sub_1B6406C((ServantStatusBattleListViewItem_o *)((char *)v64 + v46), (int32_t)v65, v51, v52);
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
        sub_1B6406C(v61, v63, v59, v60);
        LODWORD(v42) = releaseSkillIds->max_length;
        ++v44;
        v46 += 8LL;
        if ( (__int64)v44 >= (int)v42 )
          return;
      }
      sub_1B6432C(Master_object, v41);
    }
  }
  else
  {
    v84 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
    *idList = v84;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)idList, (int32_t)v84, v85, v86);
    v87 = (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
    *titleList = v87;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)titleList, (int32_t)v87, v88, v89);
    v90 = (System_String_array *)sub_1B64170(string___TypeInfo, 0LL);
    *explanationList = v90;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)explanationList, (int32_t)v90, v91, v92);
    v93 = (System_Boolean_array *)sub_1B64170(bool___TypeInfo, 0LL);
    *releaseStateList = v93;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)releaseStateList, (int32_t)v93, v94, v95);
    v96 = (System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
    *lvList = v96;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)lvList, (int32_t)v96, v97, v98);
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

  if ( (byte_49FF3A9 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, policy);
    sub_1B640C8(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, v7);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantLimitMaster___, v8);
    sub_1B640C8(&DataManager_TypeInfo, v9);
    sub_1B640C8(
      &Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__,
      v10);
    sub_1B640C8(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    byte_49FF3A9 = 1;
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
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
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
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_30D3EA4 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantLimitMaster___);
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
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v39, 0LL);
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
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v40, 0LL);
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
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v41, 0LL);
  if ( !v17 )
LABEL_53:
    sub_1B64324(bsvtData);
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

  if ( (byte_49FF3A6 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, *(_QWORD *)&hideStatus);
    sub_1B640C8(&StringLiteral_11488/*"SERVANT_ATTRIBUTE_HIDE"*/, v6);
    sub_1B640C8(&StringLiteral_11489/*"SERVANT_ATTRIBUTE_NONE"*/, v7);
    byte_49FF3A6 = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11489/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v8, 0LL);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = &StringLiteral_11488/*"SERVANT_ATTRIBUTE_HIDE"*/;
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
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  int32_t v30; // w21
  __int64 v31; // x0
  double v32; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_49FF3A8 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___, individualityArray);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&System_Math_TypeInfo, v14);
    byte_49FF3A8 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualityArray,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v18 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_1BB60A8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_1BB60A8(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v32 = log10((double)v30);
    if ( (unsigned int)(v30 - 300) <= 0x63
      && v32 != INFINITY
      && (int)v32 == 2
      && (unsigned int)(v30 - 303) <= 6
      && v30 != 307 )
    {
      if ( !v15 )
        sub_1B64324(v31);
      items = v15->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(v31);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          v30,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = v30;
      }
    }
  }
  v36 = *(_QWORD *)v21;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_40;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_40:
    v39 = sub_1BB60A8(v21, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v21, *(_QWORD *)(v39 + 8));
  if ( !v15 )
    goto LABEL_51;
  if ( v15->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v16,
               0LL);
LABEL_51:
    sub_1B64324(v16);
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
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v21; // x20
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  int32_t v30; // w21
  __int64 v31; // x0
  double v32; // d0
  unsigned int v33; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_49FF3A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_IndividualityPolicyMaster___, individualityArray);
    sub_1B640C8(&DataManager_TypeInfo, v4);
    sub_1B640C8(&System_IDisposable_TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_int__TypeInfo, v6);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_int__TypeInfo, v7);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&System_Math_TypeInfo, v14);
    byte_49FF3A7 = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    individualityArray,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v18 = *(unsigned __int16 *)(&individualityArray->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&individualityArray->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))p_method)(
          individualityArray,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_1BB60A8(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8)) & 1) == 0 )
      break;
    v26 = *(_QWORD *)v21;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v28 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_22;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_22:
      v29 = sub_1BB60A8(v21, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v32 = log10((double)v30);
    v33 = v30 - 300;
    if ( (unsigned int)(v30 - 300) <= 0x63 && v32 != INFINITY && (int)v32 == 2 && v33 <= 7 && ((1 << v33) & 0x87) != 0 )
    {
      if ( !v15 )
        sub_1B64324(v31);
      items = v15->fields._items;
      v35 = Method_System_Collections_Generic_List_int__Add__;
      ++v15->fields._version;
      if ( !items )
        sub_1B64324(v31);
      size = v15->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v15,
          v30,
          *(const MethodInfo_348FEDC **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v15->fields._size = size + 1;
        items->m_Items[size + 1] = v30;
      }
    }
  }
  v37 = *(_QWORD *)v21;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_40;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_40:
    v40 = sub_1BB60A8(v21, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v21, *(_QWORD *)(v40 + 8));
  if ( !v15 )
    goto LABEL_51;
  if ( v15->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v16 = System_Collections_Generic_List_int___ToArray(
            v15,
            (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v16, 0LL);
LABEL_51:
    sub_1B64324(v16);
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
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v22; // x21
  __int64 v23; // x22
  __int64 v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v27; // x21
  BattleServantConfConponent___c_c *v28; // x8
  System_Func_object__int__o *_9__81_0; // x22
  Il2CppObject *v30; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_T__o *v34; // x22
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_HashSet_int__o *v37; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_int__o *v42; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v43; // 0:x0.16

  if ( (byte_49FF397 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___, skillIdList);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___, v6);
    sub_1B640C8(&System_Func_ServantPassiveSkillEntity__int__TypeInfo, v7);
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int___ctor___75637208, v8);
    sub_1B640C8(&System_Collections_Generic_HashSet_int__TypeInfo, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__FindIndex__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v13);
    sub_1B640C8(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__, v14);
    sub_1B640C8(&Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__, v15);
    sub_1B640C8(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, v16);
    sub_1B640C8(&BattleServantConfConponent___c_TypeInfo, v17);
    byte_49FF397 = 1;
  }
  v18 = sub_1B64314(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo, skillIdList, method);
  BattleServantConfConponent___c__DisplayClass81_0___ctor(
    (BattleServantConfConponent___c__DisplayClass81_0_o *)v18,
    0LL);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v22 = (ServantPassiveSkillMaster_o *)Master_object;
  v24 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v23 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v43.fields.currentCryptoKey = v24;
  *(_QWORD *)&v43.fields.fakeValue = v23;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v43, 0LL);
  if ( !v22 )
    goto LABEL_22;
  v27 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v22, (int32_t)Master_object, 0LL);
  v28 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v28 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__81_0 = (System_Func_object__int__o *)v28->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v28->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v28);
      v28 = BattleServantConfConponent___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v28->static_fields->__9;
    _9__81_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_ServantPassiveSkillEntity__int__TypeInfo, v25, v26);
    System_Func_object__int____ctor(
      _9__81_0,
      v30,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v37 = (System_Collections_Generic_HashSet_int__o *)sub_1B64314(
                                                       System_Collections_Generic_HashSet_int__TypeInfo,
                                                       v35,
                                                       v36);
  System_Collections_Generic_HashSet_int____ctor_53885596(
    v37,
    v34,
    (const MethodInfo_3363A9C *)Method_System_Collections_Generic_HashSet_int___ctor___75637208);
  if ( !v18
    || (*(_QWORD *)(v18 + 16) = v37,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v37, v38, v39),
        v42 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v40, v41),
        System_Predicate_int____ctor(
          v42,
          (Il2CppObject *)v18,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0LL),
        !skillIdList) )
  {
LABEL_22:
    sub_1B64324(Master_object);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v42,
             (const MethodInfo_3490710 *)Method_System_Collections_Generic_List_int__FindIndex__);
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
  UnityEngine_Transform_o *transform; // x20
  int v12; // s1
  int v13; // s0
  int v14; // s2
  UnityEngine_Object_o *commandCard; // x20
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v19; // x1

  if ( (byte_49FF392 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_Collider___, data);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_2872/*"BATTLE_HASNOT_TD"*/, v9);
    byte_49FF392 = 1;
  }
  this->fields.data = data;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
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
  *(UnityEngine_Vector3_o *)(&v12 - 1) = UnityEngine_Transform__get_localPosition(
                                           (UnityEngine_Transform_o *)gameObject,
                                           0LL);
  if ( !transform )
    goto LABEL_30;
  v13 = 0;
  v14 = 0;
  UnityEngine_Transform__set_localPosition(transform, *(UnityEngine_Vector3_o *)(&v12 - 1), 0LL);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
                         (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_Collider___);
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
      sub_1B64324(gameObject);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0LL);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2872/*"BATTLE_HASNOT_TD"*/, 0LL);
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
        v19);
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
  BattleServantData_o *bsvtData; // x0
  int v6; // w24
  int v7; // w22
  int32_t HideStateSubAttribute; // w21
  char v9; // w8
  System_String_o *v10; // x26
  System_String_o *v11; // x25
  System_String_o *OverwriteSubAttribute; // x23
  const MethodInfo *v13; // x3
  bool IsNullOrEmpty; // w24
  bool v15; // w22
  bool v16; // w0
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
  v6 = (int)bsvtData;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0LL);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v7 = (int)bsvtData;
  HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0LL);
  if ( v6 != 3 || v7 != 3 || HideStateSubAttribute != 3 )
  {
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePolicy(bsvtData, 0LL);
      if ( this->fields.bsvtData )
      {
        v10 = (System_String_o *)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePersonality(this->fields.bsvtData, 0LL);
        if ( this->fields.bsvtData )
        {
          v11 = (System_String_o *)bsvtData;
          OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute(this->fields.bsvtData, 0LL);
          BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v13);
          if ( v6 == 3 )
          {
            IsNullOrEmpty = 1;
          }
          else
          {
            IsNullOrEmpty = 0;
            if ( !personality[1] && !isSvtTypeSpecific )
              IsNullOrEmpty = System_String__IsNullOrEmpty(v10, 0LL);
          }
          if ( v7 == 3 )
          {
            v15 = 1;
          }
          else
          {
            v15 = 0;
            if ( !personality[0] && !isSvtTypeSpecific )
              v15 = System_String__IsNullOrEmpty(v11, 0LL);
          }
          if ( HideStateSubAttribute == 3 )
          {
            v16 = 1;
LABEL_28:
            v9 = IsNullOrEmpty && v15 && v16;
            return v9 & 1;
          }
          bsvtData = this->fields.bsvtData;
          if ( bsvtData )
          {
            Attri = BattleServantData__getAttri(bsvtData, 0LL);
            v16 = 0;
            if ( !Attri && !isSvtTypeSpecific )
              v16 = System_String__IsNullOrEmpty(OverwriteSubAttribute, 0LL);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_30:
    sub_1B64324(bsvtData);
  }
LABEL_8:
  v9 = 1;
  return v9 & 1;
}


bool __fastcall BattleServantConfConponent__IsLastOpenServantAbility(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF39F & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_3226/*"BattleServantDetailTab"*/, method);
    byte_49FF39F = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3226/*"BattleServantDetailTab"*/, 0LL)
      || !UnityEngine_PlayerPrefs__GetInt_69085444((System_String_o *)StringLiteral_3226/*"BattleServantDetailTab"*/, 0LL)
      || UnityEngine_PlayerPrefs__GetInt_69085444((System_String_o *)StringLiteral_3226/*"BattleServantDetailTab"*/, 0LL) != 1;
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
  UnityEngine_Object_o *gameObject; // x20
  int32_t v16; // w3
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int32_t size; // w2
  int v19; // w9
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_49FF39C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__, v6);
    this = (BattleServantConfConponent_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49FF39C = 1;
  }
  memset(&v20, 0, sizeof(v20));
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
        sub_1B6432C(this, method);
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
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
  {
    if ( !v20.fields._current )
      sub_1B64324(0LL);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v20.fields._current,
                                           0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
  equipPossessionSkillInfoComponentList = v2->fields.equipPossessionSkillInfoComponentList;
  if ( !equipPossessionSkillInfoComponentList )
LABEL_15:
    sub_1B64324(this);
  size = equipPossessionSkillInfoComponentList->fields._size;
  v19 = equipPossessionSkillInfoComponentList->fields._version + 1;
  equipPossessionSkillInfoComponentList->fields._size = 0;
  equipPossessionSkillInfoComponentList->fields._version = v19;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0LL);
  v2->fields.bsvtData = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.bsvtData, 0, size, v16);
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
  if ( (byte_49FF3A0 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantConfConponent_OnClickServantAbility__, method);
    sub_1B640C8(&StringLiteral_17425/*"btn_bg_on_1"*/, v3);
    sub_1B640C8(&StringLiteral_17420/*"btn_bg_off_1"*/, v4);
    sub_1B640C8(&StringLiteral_17545/*"btn_txt_servant_states_off"*/, v5);
    sub_1B640C8(&StringLiteral_3226/*"BattleServantDetailTab"*/, v6);
    this = (BattleServantConfConponent_o *)sub_1B640C8(&StringLiteral_17543/*"btn_txt_servant_property_on"*/, v7);
    byte_49FF3A0 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v9 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B640E0(Method_BattleServantConfConponent_OnClickServantAbility__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17425/*"btn_bg_on_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17543/*"btn_txt_servant_property_on"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17420/*"btn_bg_off_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_20:
    sub_1B64324(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17545/*"btn_txt_servant_states_off"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3226/*"BattleServantDetailTab"*/, 0, 0LL);
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
  if ( (byte_49FF3A1 & 1) == 0 )
  {
    sub_1B640C8(&Method_BattleServantConfConponent_OnClickServantState__, method);
    sub_1B640C8(&StringLiteral_17425/*"btn_bg_on_1"*/, v3);
    sub_1B640C8(&StringLiteral_17546/*"btn_txt_servant_states_on"*/, v4);
    sub_1B640C8(&StringLiteral_17542/*"btn_txt_servant_property_off"*/, v5);
    sub_1B640C8(&StringLiteral_17420/*"btn_bg_off_1"*/, v6);
    this = (BattleServantConfConponent_o *)sub_1B640C8(&StringLiteral_3226/*"BattleServantDetailTab"*/, v7);
    byte_49FF3A1 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v9 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v9 = (_QWORD *)sub_1B640E0(Method_BattleServantConfConponent_OnClickServantState__);
      v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
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
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17420/*"btn_bg_off_1"*/, 0LL);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17542/*"btn_txt_servant_property_off"*/, 0LL);
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
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17425/*"btn_bg_on_1"*/, 0LL),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0LL) )
  {
LABEL_21:
    sub_1B64324(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17546/*"btn_txt_servant_states_on"*/, 0LL);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3226/*"BattleServantDetailTab"*/, 1, 0LL);
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
    sub_1B64324(0LL);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0LL);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0LL);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void __fastcall BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_49FF39D & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF39D = 1;
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
      sub_1B64324(buffListView);
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
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v19; // x1
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
  __int64 v30; // x1
  System_Int32_array *v31; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x20
  unsigned __int64 v33; // x21
  int32_t v34; // w22
  float v35; // s8
  unsigned __int64 max_length; // x9
  int32_t v37; // w25
  int32_t v38; // w26
  System_String_o *v39; // x28
  System_String_o *v40; // x27
  _BOOL4 v41; // w20
  UnityEngine_GameObject_o *v42; // x29
  Il2CppObject *v43; // x23
  UnityEngine_Transform_o *v44; // x23
  __int64 v45; // x1
  UnityEngine_Transform_o *v46; // x23
  __int64 v47; // x1
  UnityEngine_Transform_o *v48; // x23
  Il2CppObject *Component_object; // x29
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v51; // [xsp+10h] [xbp-F0h]
  DataMasterBase_TMaster__TEntity__PKType__o *v52; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF398 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___, battleInfoData);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v8);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v9);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v10);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v11);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_20446/*"img_txt_extraskill"*/, v13);
    byte_49FF398 = 1;
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
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL) && !BattleServantConfConponent__SetAtlas(this, v19) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0LL);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_98;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20446/*"img_txt_extraskill"*/, 0LL);
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
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v21;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v53 = v54;
  v22 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v53, 0LL);
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v24, 0LL);
    if ( !Master_object )
      goto LABEL_98;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_39272564(
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
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
  v31 = idList;
  entity = 0LL;
  if ( !idList )
LABEL_98:
    sub_1B64324(AppendSkillTitle);
  v32 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v33 = 0LL;
  v34 = 0;
  v35 = 0.0;
  v51 = v28;
  v52 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  while ( 1 )
  {
    max_length = v31->max_length;
    if ( (__int64)v33 >= (int)max_length )
      break;
    if ( v33 >= max_length )
      goto LABEL_101;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v28,
                         v31->m_Items[v33 + 1],
                         (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_98;
      if ( v33 >= idList->max_length )
        goto LABEL_101;
      if ( !lvList )
        goto LABEL_98;
      if ( v33 >= lvList->max_length )
        goto LABEL_101;
      v37 = idList->m_Items[v33 + 1];
      if ( v37 >= 1 )
      {
        if ( !v32 )
          goto LABEL_98;
        v38 = lvList->m_Items[v33 + 1];
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v32,
                             &entity,
                             v37,
                             (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_98;
        if ( v33 >= titleList->max_length )
          goto LABEL_101;
        if ( !explanationList )
          goto LABEL_98;
        if ( v33 >= explanationList->max_length )
          goto LABEL_101;
        if ( !releaseStateList )
          goto LABEL_98;
        if ( v33 >= releaseStateList->max_length )
LABEL_101:
          sub_1B6432C(AppendSkillTitle, v30);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_98;
        v39 = titleList->m_Items[v33];
        v40 = explanationList->m_Items[v33];
        v41 = releaseStateList->m_Items[v33 + 4];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0LL);
        if ( !AppendSkillTitle )
          goto LABEL_98;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0LL) <= v34 )
        {
          v43 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v43,
                                        (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v42 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_98;
          v44 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0LL);
          if ( !v44 )
            goto LABEL_98;
          UnityEngine_Transform__set_parent(v44, (UnityEngine_Transform_o *)AppendSkillTitle, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v62.fields.y = -v35;
          v62.fields.x = 0.0;
          v62.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v62, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
          v46 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_49F7116 )
          {
            AppendSkillTitle = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v45);
            byte_49F7116 = 1;
          }
          if ( !v46 )
            goto LABEL_98;
          UnityEngine_Transform__set_localScale(v46, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
          v48 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_49F7117 )
          {
            AppendSkillTitle = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v47);
            byte_49F7117 = 1;
          }
          if ( !v48 )
            goto LABEL_98;
          UnityEngine_Transform__set_localRotation(
            v48,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0LL);
          v28 = v51;
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
                                        v34,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v42 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0LL);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v42, 0LL);
          if ( !AppendSkillTitle )
            goto LABEL_98;
          v61.fields.y = -v35;
          v61.fields.x = 0.0;
          v61.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v61, 0LL);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v42,
                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_98;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v34 + 1,
            v37,
            v39,
            v40,
            v41,
            v38,
            0LL);
        }
        else if ( !Component_object )
        {
          goto LABEL_98;
        }
        AppendSkillTitle = BattleServantConfSkillComponent__GetHeight(
                             (BattleServantConfSkillComponent_o *)Component_object,
                             0LL);
        v32 = v52;
        v35 = v35 + (float)((float)(AppendSkillTitle - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v34;
      }
    }
    v31 = idList;
    ++v33;
    if ( !idList )
      goto LABEL_98;
  }
  this->fields.AppendSkillOffset = -(float)(v35 + 1.0);
}


bool __fastcall BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__48347676; // x20
  char v10; // w21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FF3A2 & 1) == 0 )
  {
    sub_1B640C8(&Method_AssetData_GetObject_GameObject____75705960, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v4);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_3189/*"Battle/Common"*/, v6);
    sub_1B640C8(&StringLiteral_3207/*"BattleAssetUIAtlas"*/, v7);
    byte_49FF3A2 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3189/*"Battle/Common"*/, 0LL);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__48347676 = AssetData__GetObject_object__48347676(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3207/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_2E1BA1C *)Method_AssetData_GetObject_GameObject____75705960);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality(
                                  (UnityEngine_Object_o *)Object_object__48347676,
                                  0LL,
                                  0LL);
  v10 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__48347676 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__48347676,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&this->fields.BattleAssetUIAtlas,
        (int32_t)Component_object,
        v12,
        v13);
      return v10 & 1;
    }
LABEL_12:
    sub_1B64324(AssetStorage);
  }
  return v10 & 1;
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
  UILabel_o *mPanel; // x0
  const MethodInfo *v19; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  bool v22; // w20
  bool IsHideAttribute; // w0
  UnityEngine_Object_o *attributeObj; // x22
  bool v25; // w21
  bool v26; // w0
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v28; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v30; // w8
  UnityEngine_Object_o *v31; // x21
  struct UIScrollView_o *v32; // x8
  UnityEngine_Object_o *v33; // x21
  int v34; // w8
  float v35; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v37; // x8
  struct UIScrollView_o *v38; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v40; // x8
  struct UIProgressBar_o *v41; // x8
  float v42; // s8
  UnityEngine_GameObject_o *v43; // x0
  struct UIScrollView_o *v44; // x8
  struct UIScrollView_o *v45; // x8
  struct UIProgressBar_o *v46; // x8
  struct UIScrollView_o *v47; // x8
  struct UIProgressBar_o *v48; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v50; // x1
  const MethodInfo *v51; // x3
  int32_t v52; // w24
  int32_t v53; // w23
  int32_t HideStateSubAttribute; // w21
  __int64 v55; // x1
  __int64 v56; // x2
  System_Collections_Generic_List_object__o *v57; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v60; // x3
  System_String_o *v61; // x0
  System_String_o *v62; // x25
  System_String_o *HideStr; // x24
  int32_t v64; // w2
  int32_t v65; // w3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v71; // x0
  const MethodInfo *v72; // x3
  System_String_o *v73; // x0
  System_String_o *v74; // x24
  System_String_o *v75; // x23
  int32_t v76; // w2
  int32_t v77; // w3
  struct System_Object_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  Il2CppClass **v81; // x0
  System_String_o *v82; // x0
  System_String_o *v83; // x23
  System_String_o *v84; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v87; // x3
  System_String_o *v88; // x0
  System_String_o *v89; // x20
  System_String_o *v90; // x20
  UILabel_o *v91; // x19
  System_String_o *v92; // x0
  Il2CppObject *v93; // x1
  bool v94; // w0
  bool v95; // w20
  System_String_o *v96; // x0
  int v97; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_49FF3A5 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B640C8(&LocalizationManager_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B640C8(&string_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_11576/*"SERVANT_PERSONALITY_"*/, v8);
    sub_1B640C8(&StringLiteral_11490/*"SERVANT_ATTRIBUTE_SPLIT"*/, v9);
    sub_1B640C8(&StringLiteral_21036/*"line_whiteAlpha_Noblur"*/, v10);
    sub_1B640C8(&StringLiteral_11893/*"SERVANT_SUB_ATTRIBUTE_"*/, v11);
    sub_1B640C8(&StringLiteral_11486/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, v12);
    sub_1B640C8(&StringLiteral_11487/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, v13);
    sub_1B640C8(&StringLiteral_11577/*"SERVANT_POLICY_"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    sub_1B640C8(&StringLiteral_11485/*"SERVANT_ATTRIBUTE_FORMAT"*/, v16);
    byte_49FF3A5 = 1;
  }
  *(_QWORD *)personality = 0LL;
  v97 = 0;
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
    v22 = svtdata->fields.type == 5 || (unsigned int)(svtdata->fields.type - 1) < 2;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v22, v19);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v25 = IsHideAttribute;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Inequality(attributeObj, 0LL, 0LL);
    if ( v25 )
    {
      if ( v26 )
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
      v28 = this->fields.AbillityScrollView;
      if ( !v28 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v28->fields.mPanel;
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
        v30 = 1110966272;
      }
      else
      {
LABEL_42:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v30 = -1034158080;
      }
      v35 = *(float *)&v30;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, v35, 0LL);
      v37 = this->fields.AbillityScrollView;
      if ( v37 )
      {
        mPanel = (UILabel_o *)v37->fields.mPanel;
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
          v38 = this->fields.AbillityScrollView;
          if ( v38 )
          {
            verticalScrollBar = v38->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0LL);
                v40 = this->fields.AbillityScrollView;
                if ( v40 )
                {
                  v41 = v40->fields.verticalScrollBar;
                  if ( v41 )
                  {
                    mPanel = (UILabel_o *)v41->fields.mFG;
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
      sub_1B64324(mPanel);
    }
    if ( v26 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0LL);
    }
    v31 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v32 = this->fields.AbillityScrollView;
      if ( !v32 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v32->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0LL) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v33 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v33, 0LL, 0LL) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v34 = 1110966272;
        }
        else
        {
LABEL_57:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v34 = -1034158080;
        }
        v42 = *(float *)&v34;
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0LL);
        GameObjectExtensions__SetLocalPositionY(v43, v42, 0LL);
        v44 = this->fields.AbillityScrollView;
        if ( !v44 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v44->fields.mPanel;
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
        v45 = this->fields.AbillityScrollView;
        if ( !v45 )
          goto LABEL_137;
        v46 = v45->fields.verticalScrollBar;
        if ( !v46 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v46->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0LL);
        v47 = this->fields.AbillityScrollView;
        if ( !v47 )
          goto LABEL_137;
        v48 = v47->fields.verticalScrollBar;
        if ( !v48 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v48->fields.mFG;
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
      || BattleServantConfConponent__SetAtlas(this, v50) )
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
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21036/*"line_whiteAlpha_Noblur"*/, 0LL);
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
      v57 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_string__TypeInfo,
                                                           v55,
                                                           v56);
      System_Collections_Generic_List_object____ctor(
        v57,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v52 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0LL);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0LL);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v22 && (personality[1] | v52) == 0 )
            v52 = 2;
          if ( personality[1] )
          {
            v61 = System_Int32__ToString((int32_t)&personality[1], 0LL);
            v62 = System_String__Concat_61375396((System_String_o *)StringLiteral_11577/*"SERVANT_POLICY_"*/, v61, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsNullOrEmpty = LocalizationManager__Get(v62, 0LL);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v52,
                    OverwritePolicy,
                    v60);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v57 )
            goto LABEL_137;
          items = v57->fields._items;
          v67 = Method_System_Collections_Generic_List_string__Add__;
          ++v57->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v57->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v57,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v69 = &items->obj.klass + size;
            v57->fields._size = size + 1;
            v69[4] = (Il2CppClass *)HideStr;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)HideStr, v64, v65);
          }
        }
      }
      if ( v53 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0LL);
        v71 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0LL);
        if ( ((unsigned __int8)v71 & 1) != 0 )
        {
          if ( v22 && (personality[0] | v53) == 0 )
            v53 = 2;
          if ( personality[0] )
          {
            v73 = System_Int32__ToString((int32_t)personality, 0LL);
            v74 = System_String__Concat_61375396((System_String_o *)StringLiteral_11576/*"SERVANT_PERSONALITY_"*/, v73, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v71 = LocalizationManager__Get(v74, 0LL);
            OverwritePersonality = v71;
          }
        }
        v75 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v71,
                v53,
                OverwritePersonality,
                v72);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v75, 0LL);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v57 )
            goto LABEL_137;
          v78 = v57->fields._items;
          v79 = Method_System_Collections_Generic_List_string__Add__;
          ++v57->fields._version;
          if ( !v78 )
            goto LABEL_137;
          v80 = v57->fields._size;
          if ( (unsigned int)v80 >= v78->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v57,
              (Il2CppObject *)v75,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
          }
          else
          {
            v81 = &v78->obj.klass + v80;
            v57->fields._size = v80 + 1;
            v81[4] = (Il2CppClass *)v75;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v75, v76, v77);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v82 = LocalizationManager__Get((System_String_o *)StringLiteral_11490/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0LL);
      v83 = System_String__Join_61391052(v82, (System_Collections_Generic_IEnumerable_string__o *)v57, 0LL);
      v84 = (System_String_o *)StringLiteral_1/*""*/;
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
          if ( v22 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v97 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v88 = System_Int32__ToString((int32_t)&v97, 0LL);
            v89 = System_String__Concat_61375396((System_String_o *)StringLiteral_11893/*"SERVANT_SUB_ATTRIBUTE_"*/, v88, 0LL);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Attri = LocalizationManager__Get(v89, 0LL);
            OverwriteSubAttribute = Attri;
          }
        }
        v90 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v87);
        if ( !System_String__IsNullOrEmpty(v90, 0LL) )
          v84 = v90;
      }
      if ( System_String__IsNullOrEmpty(v83, 0LL) )
      {
        v91 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11487/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0LL);
        v93 = (Il2CppObject *)v84;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v92, v93, 0LL);
        if ( !v91 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v91, (System_String_o *)mPanel, 0LL);
        return;
      }
      v94 = System_String__IsNullOrEmpty(v84, 0LL);
      v91 = this->fields.attributeLabel;
      v95 = v94;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v94 )
        {
LABEL_131:
          v92 = LocalizationManager__Get((System_String_o *)StringLiteral_11486/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0LL);
          v93 = (Il2CppObject *)v83;
          goto LABEL_132;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v95 )
          goto LABEL_131;
      }
      v96 = LocalizationManager__Get((System_String_o *)StringLiteral_11485/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
      mPanel = (UILabel_o *)System_String__Format_61389768(v96, (Il2CppObject *)v83, (Il2CppObject *)v84, 0LL);
      if ( !v91 )
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
  BattleServantConfWindowPassiveSkillListComponent_o *v5; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_49FF3A4 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_21310/*"menu_txt_class_score"*/, v3);
    byte_49FF3A4 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0LL, 0LL) )
  {
    v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
    if ( !v5 )
      goto LABEL_19;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(v5, 0, 0LL);
  }
  bsvtData = this->fields.bsvtData;
  if ( bsvtData
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0LL) )
  {
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0LL, 0LL)
      || BattleServantConfConponent__SetAtlas(this, v8) )
    {
      v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
      if ( v5 )
      {
        ((void (__fastcall *)(BattleServantConfWindowPassiveSkillListComponent_o *, struct UIAtlas_o *, __int64, Il2CppMethodPointer))v5->klass->vtable._5_SetSkillTitle.method)(
          v5,
          this->fields.BattleAssetUIAtlas,
          StringLiteral_21310/*"menu_txt_class_score"*/,
          v5->klass->vtable._6_SetSkillInfoObject.methodPtr);
        v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
        if ( v5 )
        {
          BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
            (BattleServantClassBoardSkillEffectListComponent_o *)v5,
            this->fields.bsvtData,
            v9);
          v5 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
          if ( v5 )
          {
            BattleServantConfWindowPassiveSkillListComponent__SetActive(v5, 1, 0LL);
            return;
          }
        }
      }
LABEL_19:
      sub_1B64324(v5);
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
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v24; // x1
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
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_List_int__o *v37; // x20
  BattleServantData_o *v38; // x22
  System_Collections_ICollection_o *v39; // x21
  const MethodInfo *v40; // x2
  int32_t v41; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v43; // x0
  SkillLvMaster_o *v44; // x26
  int32_t v45; // w22
  int32_t v46; // w24
  float v47; // s8
  int32_t v48; // w27
  System_String_o *v49; // x28
  System_String_o *v50; // x29
  UnityEngine_GameObject_o *v51; // x25
  Il2CppObject *v52; // x25
  SkillLvMaster_o *v53; // x21
  UnityEngine_Transform_o *v54; // x26
  __int64 v55; // x1
  UnityEngine_Transform_o *v56; // x26
  __int64 v57; // x1
  UnityEngine_Transform_o *v58; // x26
  Il2CppObject *Component_object; // x25
  Il2CppObject *v60; // [xsp+8h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-A0h]
  SkillLvEntity_o *v63; // [xsp+58h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+68h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v65; // 0:x0.16
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF396 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, battleInfoData);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__InsertRange__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor___75657200, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v12);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v13);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v14);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    sub_1B640C8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_20433/*"img_txt_classskill"*/, v18);
    byte_49FF396 = 1;
  }
  entity = 0LL;
  v63 = 0LL;
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
            || BattleServantConfConponent__SetAtlas(this, v24) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0LL);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20433/*"img_txt_classskill"*/, 0LL);
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
            *(_QWORD *)&v65.fields.currentCryptoKey = v27;
            *(_QWORD *)&v65.fields.fakeValue = v26;
            v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46171608(v65, 0LL);
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
              *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&v29->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v62.fields.fakeValue = v32;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v61 = v62;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46175132(&v61, 0LL);
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
              v37 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                                System_Collections_Generic_List_int__TypeInfo,
                                                                v35,
                                                                v36);
              System_Collections_Generic_List_int____ctor_55113648(
                v37,
                v34,
                (const MethodInfo_348F7B0 *)Method_System_Collections_Generic_List_int___ctor___75657200);
              v38 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0LL);
              if ( !v38 )
                goto LABEL_54;
              v39 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v38,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0LL);
              bsvtData = BasicHelper__IsNullOrEmpty(v39, 0LL);
              if ( (bsvtData & 1) != 0 )
              {
                if ( !v37 )
                  goto LABEL_54;
              }
              else
              {
                bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v37, v40);
                if ( !v37 )
                  goto LABEL_54;
                System_Collections_Generic_List_int___InsertRange(
                  v37,
                  bsvtData,
                  (System_Collections_Generic_IEnumerable_T__o *)v39,
                  (const MethodInfo_3490F34 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v37->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v41 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)bsvtData,
                                            0LL);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v41 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) )
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
                                                v41,
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
                              ++v41;
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
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0LL;
                    v43 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v63 = 0LL;
                    if ( v37->fields._size >= 1 )
                    {
                      v44 = (SkillLvMaster_o *)v43;
                      v45 = 0;
                      v46 = 0;
                      v47 = 0.0;
                      v60 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v37,
                                     v46,
                                     (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v48 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v44 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity(v44, &v63, v48, 1, 0LL) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                          if ( !v63 )
                            goto LABEL_54;
                          v49 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)SkillLvEntity__getDetail_39520556(v63, 1, 0, 0LL);
                          if ( !this->fields.ClassSkillListParent )
                            goto LABEL_54;
                          v50 = (System_String_o *)bsvtData;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                this->fields.ClassSkillListParent,
                                                0LL);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0LL) <= v45 )
                          {
                            v52 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            v53 = v44;
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v52,
                                                  (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v51 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v54 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0LL);
                            if ( !v54 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v54, (UnityEngine_Transform_o *)bsvtData, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v67.fields.y = -v47;
                            v67.fields.x = 0.0;
                            v67.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v67, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
                            v56 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_49F7116 )
                            {
                              bsvtData = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v55);
                              byte_49F7116 = 1;
                            }
                            if ( !v56 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v56,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
                            v58 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_49F7117 )
                            {
                              bsvtData = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v57);
                              byte_49F7117 = 1;
                            }
                            if ( !v58 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v58,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0LL);
                            v44 = v53;
                            Master_object = v60;
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
                                                  v45,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v51 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v51, 0LL);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v66.fields.y = -v47;
                            v66.fields.x = 0.0;
                            v66.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v66, 0LL);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v51,
                                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
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
                              v46 + 1,
                              v48,
                              v49,
                              v50,
                              1,
                              0,
                              0LL);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          ++v45;
                          v47 = v47
                              + (float)((float)(BattleServantConfSkillComponent__GetHeight(
                                                  (BattleServantConfSkillComponent_o *)Component_object,
                                                  0LL)
                                              - HIDWORD(Component_object[5].klass))
                                      + 110.0);
                        }
                        if ( ++v46 >= v37->fields._size )
                          goto LABEL_98;
                      }
                    }
                    v47 = 0.0;
LABEL_98:
                    this->fields.ClassSkillOffset = -(float)(v47 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1B64324(bsvtData);
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

  if ( (byte_49FF39A & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_TryGetComponent_UIWidget___, method);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FF39A = 1;
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
      sub_1B64324(CommandCodeIdsEX);
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
        BattleCommandComponent__setData_42708172(v12, this->fields.bsvtData, v9, 0LL);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_2E30D54 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
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
          || (BattleCommandComponent__SetCommandCodeView_42712360(v12, v10[v9], 0LL), v9 >= v8->max_length)
          || (BattleCommandComponent__SetLockInfo(v12, v10[v9] == -1, 0LL),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v12, v13),
              BattleCommandComponent__HidePowerUpValueLabelActive(v12, this->fields.isCommandCardUnderIcon, 0LL),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v12, 0LL),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v12, 0LL),
              v9 >= v8->max_length) )
        {
LABEL_25:
          sub_1B6432C(CommandCodeIdsEX, v6);
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
    sub_1B64324(this);
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
  __int64 transform; // x0
  int32_t v18; // w20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v22; // x8
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v24; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w21
  __int64 v29; // x1
  __int64 v30; // x8
  int32_t v31; // w22
  unsigned __int64 v32; // x29
  float v33; // s8
  int32_t v34; // w25
  System_Int32_array *v35; // x8
  unsigned __int64 v36; // x24
  unsigned __int64 max_length; // x9
  UnityEngine_GameObject_o *v38; // x26
  Il2CppObject *v39; // x26
  UnityEngine_Transform_o *v40; // x27
  __int64 v41; // x1
  UnityEngine_Transform_o *v42; // x27
  __int64 v43; // x1
  UnityEngine_Transform_o *v44; // x27
  Il2CppObject *Component_object; // x26
  float v46; // s0
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v48; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FF39B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_FindIndex_int___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_CommandCodeMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMasterData_SkillMaster___, v4);
    sub_1B640C8(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&System_Predicate_int__TypeInfo, v10);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B640C8(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__, v12);
    sub_1B640C8(&BattleServantConfConponent___c_TypeInfo, v13);
    sub_1B640C8(&StringLiteral_2841/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, v14);
    byte_49FF39B = 1;
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
  v18 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_90;
    if ( v18 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v18, 0LL);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v18;
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
  v22 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v22 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__85_0 = v22->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = BattleServantConfConponent___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_1B64314(System_Predicate_int__TypeInfo, v19, v20);
    System_Predicate_int____ctor(
      _9__85_0,
      v24,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      0LL);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = _9__85_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v26, v27);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__85_0,
                (const MethodInfo_2F309A4 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v28 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0LL)) == 0) )
  {
LABEL_90:
    sub_1B64324(transform);
  }
  if ( v28 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2841/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0LL);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0LL);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  v30 = *(_QWORD *)&CommandCodeIds->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = 0;
    v32 = 0LL;
    v33 = 0.0;
    v48 = CommandCodeIds;
    do
    {
      if ( v32 >= (unsigned int)v30 )
LABEL_91:
        sub_1B6432C(transform, v29);
      v34 = CommandCodeIds->m_Items[v32 + 1];
      if ( v34 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v34,
                               (const MethodInfo_30D3EA4 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0LL);
          v35 = idList;
          if ( !idList )
            goto LABEL_90;
          v36 = 0LL;
          while ( 1 )
          {
            max_length = v35->max_length;
            if ( (__int64)v36 >= (int)max_length )
              break;
            if ( v36 >= max_length )
              goto LABEL_91;
            if ( v35->m_Items[v36 + 1] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0LL);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0LL) <= v31 )
              {
                v39 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v39,
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v38 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v40 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0LL);
                if ( !v40 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v40, (UnityEngine_Transform_o *)transform, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v53.fields.x = 0.0;
                v53.fields.z = 0.0;
                v53.fields.y = v33;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v53, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
                v42 = (UnityEngine_Transform_o *)transform;
                if ( !byte_49F7116 )
                {
                  transform = sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v41);
                  byte_49F7116 = 1;
                }
                if ( !v42 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v42, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
                transform = (__int64)UnityEngine_GameObject__get_transform(v38, 0LL);
                v44 = (UnityEngine_Transform_o *)transform;
                if ( !byte_49F7117 )
                {
                  transform = sub_1B640C8(&UnityEngine_Quaternion_TypeInfo, v43);
                  byte_49F7117 = 1;
                }
                if ( !v44 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v44,
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
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v31, 0LL);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
                if ( !transform )
                  goto LABEL_90;
                v38 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v38,
                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v36 >= idList->max_length )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v36 >= titleList->max_length )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v36 >= explanationList->max_length )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v34,
                  idList->m_Items[v36 + 1],
                  titleList->m_Items[v36],
                  explanationList->m_Items[v36],
                  v36 == 0,
                  0LL);
              }
              v35 = idList;
              v46 = -100.0;
              if ( !v36 )
                v46 = -126.0;
              v33 = v33 + v46;
              ++v31;
            }
            ++v36;
            if ( !v35 )
              goto LABEL_90;
          }
          CommandCodeIds = v48;
        }
      }
      LODWORD(v30) = CommandCodeIds->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)v30 );
  }
}


System_Collections_IEnumerator_o *__fastcall BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_49FF39E & 1) == 0 )
  {
    sub_1B640C8(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, method);
    byte_49FF39E = 1;
  }
  v4 = sub_1B64314(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo, method, v2);
  BattleServantConfConponent__StartOpenTab_d__92___ctor((BattleServantConfConponent__StartOpenTab_d__92_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v4;
}


System_String_o *__fastcall BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v6; // x19
  __int64 *v7; // x8

  if ( (byte_49FF3A3 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17950/*"close"*/, v3);
    sub_1B640C8(&StringLiteral_14462/*"Top/close"*/, v4);
    byte_49FF3A3 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B64324(0LL);
  v6 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14462/*"Top/close"*/, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v6, 0LL, 0LL) )
    v7 = &StringLiteral_14462/*"Top/close"*/;
  else
    v7 = &StringLiteral_17950/*"close"*/;
  return (System_String_o *)*v7;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.callback_close, (int32_t)callback, (int32_t)method, v3);
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
  struct BattleData_o *v26; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v28; // x25
  UnityEngine_Object_o *atklabel; // x25
  struct BattleServantData_o *v30; // x8
  UILabel_o *v31; // x25
  Il2CppObject *v32; // x0
  struct BattleServantData_o *v33; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v35; // x1
  const MethodInfo *v36; // x2
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  int32_t v40; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v42; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v45; // w0
  TreasureDvcLvEntity_o *v46; // x23
  UIWidget_o *npdetail; // x24
  UILabel_o *v48; // x24
  System_String_o *DetalShort_39616640; // x0
  UILabel_o *maxNp; // x24
  Il2CppObject *v51; // x0
  struct UILabel_o *v52; // x8
  UILabel_o *nplevel; // x23
  System_String_o *v54; // x1
  UnityEngine_Object_o *v55; // x23
  bool IsNpDetailActive; // w23
  UITexture_o *facetex; // x23
  int32_t v58; // w24
  int32_t v59; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  char v62; // w2
  int32_t v63; // w3
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v65; // w1
  System_String_o **p_svtOverwriteBattleName; // x8
  UnityEngine_Object_o *unknownNp; // x24
  UILabel_o *v68; // x24
  System_String_o *v69; // x1
  UnityEngine_Object_o *commandCard; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  BattleCommandData_o *v73; // x23
  UnityEngine_Object_o *npSpeedChange; // x22
  UnityEngine_Object_o *classIcon; // x21
  const MethodInfo *v76; // x1
  ServantClassIconComponent_o *v77; // x21
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v79; // x21
  int32_t v80; // w20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v82; // x1
  int v83; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t atk; // [xsp+8h] [xbp-58h] BYREF
  int32_t lv; // [xsp+Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_49FF393 & 1) == 0 )
  {
    sub_1B640C8(&BattleCommandData_TypeInfo, inbsvtData);
    sub_1B640C8(&BattleServantConfConponent_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_UIAnchor___, v12);
    sub_1B640C8(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___, v13);
    sub_1B640C8(&int_TypeInfo, v14);
    sub_1B640C8(&LocalizationManager_TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&ServantAssetLoadManager_TypeInfo, v17);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_1B640C8(&StringLiteral_9290/*"NP_UNKNOWN"*/, v19);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v20);
    sub_1B640C8(&StringLiteral_1/*""*/, v21);
    sub_1B640C8(&StringLiteral_8885/*"Max {0}%"*/, v22);
    byte_49FF393 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1B6406C(
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
        v26 = this->fields.data;
        if ( !v26 )
          goto LABEL_145;
        battle_info = v26->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0LL, 0LL) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_145;
      v28 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0LL);
      if ( !v28 )
        goto LABEL_145;
      UILabel__set_text(v28, (System_String_o *)bsvtData, 0LL);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0LL);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0LL, 0LL);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v30 = this->fields.bsvtData;
      if ( !v30 )
        goto LABEL_145;
      v31 = this->fields.atklabel;
      atk = v30->fields.atk;
      v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_24834/*"{0:#,0}"*/, v32, 0LL);
      if ( !v31 )
        goto LABEL_145;
      UILabel__set_text(v31, (System_String_o *)bsvtData, 0LL);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0LL);
      v33 = this->fields.bsvtData;
      if ( v33 )
      {
        bsvtData = (BattleServantData_o *)v33->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0LL);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0LL);
            BattleServantConfConponent__setEquipList(this, v35);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v36);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v37);
            if ( !isNpc )
              BattleServantConfConponent__SetClassBoardSkillList(this, v38);
            BattleServantConfConponent__SetCommandCard(this, v38);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v39);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0LL);
              if ( *p_bsvtData )
              {
                v40 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0LL, 0LL) )
                {
                  v42 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v42, 0LL);
                  GameObjectExtensions__SetLocalPositionY(v42, LocalPositionY - (float)this->fields.adjustHeight, 0LL);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v45 = UnityEngine_Object__op_Inequality(npRoot, 0LL, 0LL);
                if ( v40 < 1 )
                {
                  if ( v45 )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_145;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_145;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0LL);
                    if ( !bsvtData )
                      goto LABEL_145;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0LL);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_145;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_145;
                  v58 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0LL);
                  if ( !*p_bsvtData )
                    goto LABEL_145;
                  v59 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0LL);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v58,
                                               v59,
                                               CommandDispLimitCount,
                                               0LL);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1B6406C(
                    (ServantStatusBattleListViewItem_o *)&this->fields.facetex,
                    (int32_t)Manager__loadCommandCard,
                    v62,
                    v63);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0LL, 0LL) )
                    goto LABEL_120;
                  bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_145;
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0LL);
                  if ( !bsvtData )
                    goto LABEL_145;
                  v65 = 1;
                  goto LABEL_119;
                }
                if ( !v45 )
                  goto LABEL_120;
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_145;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_145;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0LL);
                if ( !bsvtData )
                  goto LABEL_145;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0LL);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_145;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_145;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v40,
                                                    lv,
                                                    0LL);
                if ( !this->fields.maxNp )
                  goto LABEL_145;
                v46 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0LL);
                if ( v46 )
                {
                  npdetail = (UIWidget_o *)this->fields.npdetail;
                  bsvtData = (BattleServantData_o *)BattleServantConfConponent_TypeInfo;
                  if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                  if ( !npdetail )
                    goto LABEL_145;
                  UIWidget__set_height(
                    npdetail,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT,
                    0LL);
                  v48 = this->fields.npdetail;
                  DetalShort_39616640 = TreasureDvcLvEntity__getDetalShort_39616640(v46, lv, 0LL);
                  WrapControlText__textBBCodeAdjust(
                    v48,
                    DetalShort_39616640,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_MAX_HEIGHT,
                    0LL);
                  maxNp = this->fields.maxNp;
                  v83 = 100 * v46->fields.gaugeCount;
                  v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v83);
                  bsvtData = (BattleServantData_o *)System_String__Format(
                                                      (System_String_o *)StringLiteral_8885/*"Max {0}%"*/,
                                                      v51,
                                                      0LL);
                  if ( !maxNp )
                    goto LABEL_145;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0LL);
                  v52 = this->fields.npdetail;
                  if ( !v52 )
                    goto LABEL_145;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v52->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v52 = this->fields.npdetail;
                      if ( !v52 )
                        goto LABEL_145;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v52->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0LL);
                if ( !nplevel )
                  goto LABEL_145;
                if ( bsvtData )
                  v54 = (System_String_o *)bsvtData;
                else
                  v54 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v54, 0LL);
                v55 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v55, 0LL, 0LL) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_145;
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
                                    goto LABEL_145;
                                  p_svtOverwriteBattleName = &bsvtData->fields.svtOverwriteBattleName;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_145;
                                  p_svtOverwriteBattleName = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_svtOverwriteBattleName, 0LL);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0LL, 0LL);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v68 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v69 = (System_String_o *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9290/*"NP_UNKNOWN"*/,
                                                                        0LL);
                                    v69 = (System_String_o *)bsvtData;
                                  }
                                  if ( !v68 )
                                    goto LABEL_145;
                                  UILabel__set_text(v68, v69, 0LL);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0LL, 0LL) )
                                {
                                  v73 = (BattleCommandData_o *)sub_1B64314(BattleCommandData_TypeInfo, v71, v72);
                                  BattleCommandData___ctor(v73, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_42519448(
                                                                      bsvtData,
                                                                      0,
                                                                      0LL);
                                  if ( !v73 )
                                    goto LABEL_145;
                                  v73->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  v73->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  v73->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  v73->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v73->fields.svtId = BattleServantData__getSvtId(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  v73->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0LL);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_145;
                                  v73->fields.treasureDvc = BattleServantData__getTreasureDvcId(bsvtData, 0, 0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_145;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v73,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0LL);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_145;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0LL);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_145;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0LL);
                                if ( !bsvtData )
                                  goto LABEL_145;
                                v65 = 0;
LABEL_119:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v65, 0LL);
LABEL_120:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0LL, 0LL) )
                                {
                                  bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                                  if ( !bsvtData )
                                    goto LABEL_145;
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
                                  goto LABEL_143;
                                if ( inbsvtData )
                                {
                                  v77 = this->fields.classIcon;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0LL);
                                  if ( v77 )
                                  {
                                    ServantClassIconComponent__SetImage(
                                      v77,
                                      (int32_t)bsvtData,
                                      inbsvtData->fields._frameType_k__BackingField,
                                      0LL);
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                                (ServantClassIconComponent_o *)bsvtData,
                                                                0LL);
                                      v79 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                      v80 = IconSpriteScaledWidth;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      if ( UnityEngine_Object__op_Inequality(v79, 0LL, 0LL) )
                                      {
                                        bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                        if ( !bsvtData )
                                          goto LABEL_145;
                                        if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v80 >= 270 )
                                          CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v80, 0LL);
                                      }
                                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                      if ( bsvtData )
                                      {
                                        Component_object = UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                                            (UnityEngine_Object_o *)Component_object,
                                                                            0LL,
                                                                            0LL);
                                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                          goto LABEL_143;
                                        if ( Component_object )
                                        {
                                          UnityEngine_Behaviour__set_enabled(
                                            (UnityEngine_Behaviour_o *)Component_object,
                                            1,
                                            0LL);
LABEL_143:
                                          BattleServantConfConponent__SetAttribute(this, v76);
                                          BattleServantConfConponent__ChangeLayout(this, v82);
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
LABEL_145:
    sub_1B64324(bsvtData);
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

  if ( (byte_49FF394 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillLvMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_SkillMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    byte_49FF394 = 1;
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
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SkillLvMaster___);
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
              sub_1B6432C(BattleSkillIdList, v13);
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
                                        (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
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
                          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v37 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v37[4] = (Il2CppClass *)v36;
                        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v36, v30, v31);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_51;
                      v38 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                      if ( !v53 )
                        goto LABEL_51;
                      v39 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_39520556(v53, v27, 0, 0LL);
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
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
              }
              else
              {
                v48 = &v44->obj.klass + v46;
                v43->fields._size = v46 + 1;
                v48[4] = (Il2CppClass *)v47;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v48 + 4), v47, v41, v42);
              }
              return;
            }
          }
LABEL_51:
          sub_1B64324(BattleSkillIdList);
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AF81C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AF7DC;
}


System_IAsyncResult_o *__fastcall BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v5, callback, object);
}


void __fastcall BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  if ( (byte_49FF3AF & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, method);
    byte_49FF3AF = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1B64324(this);
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
  sub_1B6406C(p__2__current, 0, v8, v9);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF3AD & 1) == 0 )
  {
    sub_1B640C8(&BattleServantConfConponent___c_TypeInfo, v1);
    byte_49FF3AD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleServantConfConponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)BattleServantConfConponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
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

  if ( (byte_49FF3AE & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_HashSet_int__Contains__, *(_QWORD *)&x);
    byte_49FF3AE = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1B64324(0LL);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_33640A0 *)Method_System_Collections_Generic_HashSet_int__Contains__);
}