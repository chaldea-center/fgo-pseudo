void BattleServantConfConponent___cctor(const MethodInfo *method)
{
  if ( (byte_4C46623 & 1) == 0 )
  {
    sub_1C37058(&BattleServantConfConponent_TypeInfo);
    byte_4C46623 = 1;
  }
  *BattleServantConfConponent_TypeInfo->static_fields = (struct BattleServantConfConponent_StaticFields)xmmword_C0FD20;
}


void BattleServantConfConponent___ctor(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46622 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
    byte_4C46622 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EquipPossessionSkillInfoComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent___ctor__);
  this->fields.equipPossessionSkillInfoComponentList = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.equipPossessionSkillInfoComponentList, (int32_t)v3, v4, v5);
  this->fields.NotEquipObjHeightPos = 45.0;
  this->fields.ClassSkillInitPosY = -633.0;
  this->fields.AppendSkillInitPosY = -679.0;
  this->fields.isOpenAfter = 1;
  BattleWindowComponent___ctor((BattleWindowComponent_o *)this, 0);
}


void BattleServantConfConponent__ChangeLayout(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  long double v2; // q8
  UnityEngine_Object_o *equipObj; // x20
  UnityEngine_GameObject_o *v5; // x20
  float LocalPositionY; // s0
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x0
  float v8; // s8
  _BOOL8 v9; // x0
  Il2CppObject *current; // x20
  int32_t EquipSkillConfLabelHeight; // w0
  BattleServantConfConponent_c *v12; // x8
  int32_t v13; // w21
  int32_t EQIUP_SKILL_LABEL_DEFAULT_HEIGHT; // w26
  int32_t v15; // w0
  BattleServantConfConponent_c *v16; // x0
  UnityEngine_Object_o *CardAndCommandObj; // x20
  System_Int32_array *CommandCodeIds; // x0
  float v19; // s9
  System_Int32_array *v20; // x20
  BattleServantConfConponent___c_c *v21; // x0
  System_Predicate_int__o *_9__79_0; // x21
  Il2CppObject *v23; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  __int64 Index_int; // x0
  unsigned __int64 max_length; // x10
  unsigned __int64 v29; // x9
  int v30; // w8
  int v31; // w13
  UnityEngine_Object_o *npSpeedChange; // x20
  const MethodInfo *v33; // x1
  struct BattleServantNPSpeedChangeComponent_o *v34; // x8
  UnityEngine_Object_o *ClassSkillObj; // x20
  UnityEngine_Object_o *AppendSkillObj; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v38; // x1
  struct BattleServantClassBoardSkillEffectListComponent_o *v39; // x8
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C4660A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindIndex_int___);
    sub_1C37058(&BattleServantConfConponent_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__);
    sub_1C37058(&BattleServantConfConponent___c_TypeInfo);
    byte_4C4660A = 1;
  }
  memset(&v43, 0, sizeof(v43));
  equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
  {
    v5 = this->fields.equipObj;
    LocalPositionY = GameObjectExtensions__GetLocalPositionY(v5, 0);
    GameObjectExtensions__SetLocalPositionY(v5, LocalPositionY + (float)this->fields.adjustHeight, 0);
  }
  if ( this->fields.isEquip )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v42,
      equipPossessionSkillInfoComponentList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    v8 = 0.0;
    v43 = v42;
    while ( 1 )
    {
      v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v43,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
      if ( !v9 )
        break;
      current = v43.fields._current;
      if ( !v43.fields._current )
        sub_1C372B4(v9);
      EquipSkillConfLabelHeight = EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                                    (EquipPossessionSkillInfoComponent_o *)v43.fields._current,
                                    0);
      v12 = BattleServantConfConponent_TypeInfo;
      v13 = EquipSkillConfLabelHeight;
      if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
        v12 = BattleServantConfConponent_TypeInfo;
      }
      EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = v12->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
      if ( v13 > EQIUP_SKILL_LABEL_DEFAULT_HEIGHT )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          EQIUP_SKILL_LABEL_DEFAULT_HEIGHT = BattleServantConfConponent_TypeInfo->static_fields->EQIUP_SKILL_LABEL_DEFAULT_HEIGHT;
        }
        v15 = EquipPossessionSkillInfoComponent__get_EquipSkillConfLabelHeight(
                (EquipPossessionSkillInfoComponent_o *)current,
                0);
        v12 = BattleServantConfConponent_TypeInfo;
        v8 = v8 + (float)(EQIUP_SKILL_LABEL_DEFAULT_HEIGHT - v15);
      }
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = BattleServantConfConponent_TypeInfo;
      }
      v8 = v8 - (float)v12->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v43,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    v16 = BattleServantConfConponent_TypeInfo;
    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
      v16 = BattleServantConfConponent_TypeInfo;
    }
    *(float *)&v2 = v8 + (float)v16->static_fields->EQIUP_SKILL_OBJ_HEIGHT;
  }
  else
  {
    *(float *)&v2 = this->fields.NotEquipObjHeightPos;
  }
  CardAndCommandObj = (UnityEngine_Object_o *)this->fields.CardAndCommandObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(CardAndCommandObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.CardAndCommandObj,
      *(float *)&v2 + (float)this->fields.adjustHeight,
      0);
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.bsvtData;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    CommandCodeIds = BattleServantData__GetCommandCodeIds(
                       (BattleServantData_o *)equipPossessionSkillInfoComponentList,
                       0);
    v19 = 0.0;
    if ( CommandCodeIds )
    {
      v20 = CommandCodeIds;
      v21 = BattleServantConfConponent___c_TypeInfo;
      if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
        v21 = BattleServantConfConponent___c_TypeInfo;
      }
      _9__79_0 = v21->static_fields->__9__79_0;
      if ( !_9__79_0 )
      {
        if ( !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          v21 = BattleServantConfConponent___c_TypeInfo;
        }
        v23 = (Il2CppObject *)v21->static_fields->__9;
        _9__79_0 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
        System_Predicate_int____ctor(_9__79_0, v23, Method_BattleServantConfConponent___c__ChangeLayout_b__79_0__, 0);
        static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
        static_fields->__9__79_0 = _9__79_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__79_0, (int32_t)_9__79_0, v25, v26);
      }
      Index_int = System_Array__FindIndex_int_(
                    v20,
                    (System_Predicate_T__o *)_9__79_0,
                    (const MethodInfo_31ED814 *)Method_System_Array_FindIndex_int___);
      if ( (_DWORD)Index_int != -1 && (int)v20->max_length >= 1 )
      {
        max_length = (unsigned int)v20->max_length;
        v29 = 0;
        v30 = 0;
        do
        {
          if ( v29 >= max_length )
            sub_1C372BC(Index_int);
          v31 = v20->m_Items[v29++];
          if ( v31 > 0 )
            ++v30;
        }
        while ( (__int64)v29 < (int)max_length );
        if ( v30 <= 0 )
          v19 = 0.0;
        else
          v19 = (float)((float)v30 * 126.0) + -32.0;
      }
    }
    *(float *)&v2 = *(float *)&v2 - v19;
  }
  npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.npSpeedChange;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    *(float *)&equipPossessionSkillInfoComponentList[3].klass = *(float *)&v2 + (float)this->fields.adjustHeight;
    BattleServantNPSpeedChangeComponent__SetButtonPosition(
      (BattleServantNPSpeedChangeComponent_o *)equipPossessionSkillInfoComponentList,
      v33);
    v34 = this->fields.npSpeedChange;
    if ( !v34 )
      goto LABEL_78;
    *(float *)&v2 = *(float *)&v2 - (float)v34->fields.contentsHeight;
  }
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.ClassSkillObj,
      (float)(*(float *)&v2 + this->fields.ClassSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    *(float *)&v2 = *(float *)&v2 + this->fields.ClassSkillOffset;
  }
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    GameObjectExtensions__SetLocalPositionY(
      this->fields.AppendSkillObj,
      (float)(*(float *)&v2 + this->fields.AppendSkillInitPosY) + (float)this->fields.adjustHeight,
      0);
    *(float *)&v2 = *(float *)&v2 + this->fields.AppendSkillOffset;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList )
      goto LABEL_78;
    if ( BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           v38) )
    {
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.classBoardSkillObj;
      if ( !equipPossessionSkillInfoComponentList )
        goto LABEL_78;
      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                             equipPossessionSkillInfoComponentList,
                                                                                             equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                             v2,
                                                                                             (float)this->fields.adjustHeight);
      v39 = this->fields.classBoardSkillObj;
      if ( !v39 )
        goto LABEL_78;
      *(float *)&v2 = *(float *)&v2 + v39->fields.skillOffset;
    }
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassBoardSkillObj, 0, 0) )
  {
    equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj;
    if ( !equipPossessionSkillInfoComponentList
      || BattleServantConfWindowPassiveSkillListComponent__IsActive(
           (BattleServantConfWindowPassiveSkillListComponent_o *)equipPossessionSkillInfoComponentList,
           v41)
      && ((equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.grandClassBoardSkillObj) == 0
       || (equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)((__int64 (__fastcall *)(System_Collections_Generic_List_object__o *, const MethodInfo *, long double, float))equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.methodPtr)(
                                                                                                  equipPossessionSkillInfoComponentList,
                                                                                                  equipPossessionSkillInfoComponentList->klass->vtable._4_unknown.method,
                                                                                                  v2,
                                                                                                  (float)this->fields.adjustHeight),
           !this->fields.grandClassBoardSkillObj)) )
    {
LABEL_78:
      sub_1C372B4(equipPossessionSkillInfoComponentList);
    }
  }
}


void BattleServantConfConponent__Close(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C372B4(0);
  BattleViewBufflistComponent__setHide(buffListView, 1, 0);
  BattleWindowComponent__Close((BattleWindowComponent_o *)this, call, 0);
}


void BattleServantConfConponent__CompOpen(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v4; // x1
  System_Collections_IEnumerator_o *started; // x0

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C372B4(0);
  BattleViewBufflistComponent__setShow(buffListView, 0);
  started = BattleServantConfConponent__StartOpenTab(this, v4);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, started, 0);
  BattleWindowComponent__CompOpen((BattleWindowComponent_o *)this, 0);
}


void BattleServantConfConponent__GetAppendSkillInfo(
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
  __int64 max_length_low; // x1
  System_Int32_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_String_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Boolean_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  il2cpp_array_size_t max_length; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v32; // x19
  unsigned __int64 v33; // x27
  int32_t *v34; // x26
  __int64 v35; // x23
  System_Int32_array *v36; // x8
  System_Boolean_array *v37; // x9
  int32_t v38; // w8
  System_Int32_array *v39; // x9
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Boolean_array *v42; // x8
  System_String_array *v43; // x29
  SkillEntity_o *v44; // x28
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_String_array *v47; // x25
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  CGThumbnailListItem_o *v50; // x28
  Il2CppClass **v51; // x8
  int32_t v52; // w1
  System_String_array *v53; // x28
  System_String_o *v54; // x1
  System_String_array *v55; // x8
  Il2CppClass **v56; // x28
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  System_String_array *v59; // x25
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  System_String_array *v62; // x8
  System_String_array *v63; // x25
  System_String_o **v64; // x28
  System_String_o *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_String_array *v68; // x8
  Il2CppClass **v69; // x25
  System_String_o *v70; // x29
  System_String_o *v71; // x0
  System_String_o *v72; // x0
  System_Int32_array *v73; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  System_String_array *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  System_String_array *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Boolean_array *v82; // x0
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  System_Int32_array *v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  System_Int32_array **v88; // [xsp+8h] [xbp-88h]
  System_String_array **v89; // [xsp+10h] [xbp-80h]
  int32_t *m_Items; // [xsp+18h] [xbp-78h]

  if ( (byte_4C4660E & 1) == 0 )
  {
    sub_1C37058(&bool___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_43/*"\n"*/);
    sub_1C37058(&StringLiteral_3735/*"COND_TYPE_TITLE"*/);
    sub_1C37058(&StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4660E = 1;
  }
  if ( releaseSkillIds
    && releaseSkillLvs
    && (max_length_low = LODWORD(releaseSkillIds->max_length),
        (_DWORD)max_length_low == LODWORD(releaseSkillLvs->max_length)) )
  {
    v15 = (System_Int32_array *)sub_1C37100(int___TypeInfo, max_length_low);
    *idList = v15;
    sub_1C36FFC((CGThumbnailListItem_o *)idList, (int32_t)v15, v16, v17);
    v18 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *titleList = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)titleList, (int32_t)v18, v19, v20);
    v21 = (System_String_array *)sub_1C37100(string___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *explanationList = v21;
    sub_1C36FFC((CGThumbnailListItem_o *)explanationList, (int32_t)v21, v22, v23);
    v24 = (System_Boolean_array *)sub_1C37100(bool___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *releaseStateList = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v24, v25, v26);
    v27 = (System_Int32_array *)sub_1C37100(int___TypeInfo, LODWORD(releaseSkillIds->max_length));
    *lvList = v27;
    sub_1C36FFC((CGThumbnailListItem_o *)lvList, (int32_t)v27, v28, v29);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
    max_length = releaseSkillIds->max_length;
    if ( (int)max_length >= 1 )
    {
      v32 = Master_object;
      v33 = 0;
      m_Items = releaseSkillLvs->m_Items;
      v34 = releaseSkillIds->m_Items;
      v35 = 32;
      v88 = lvList;
      v89 = titleList;
      while ( v33 < (unsigned int)max_length )
      {
        v36 = *idList;
        if ( !*idList )
          goto LABEL_62;
        if ( v33 >= LODWORD(v36->max_length) )
          break;
        v36->m_Items[v33] = v34[v33];
        if ( v33 >= LODWORD(releaseSkillLvs->max_length) )
          break;
        v37 = *releaseStateList;
        if ( !*releaseStateList )
          goto LABEL_62;
        if ( v33 >= LODWORD(v37->max_length) )
          break;
        v38 = m_Items[v33];
        v37->m_Items[v33] = v38 > 0;
        v39 = *lvList;
        if ( !*lvList )
          goto LABEL_62;
        if ( v33 >= LODWORD(v39->max_length) )
          break;
        v39->m_Items[v33] = v38;
        if ( !v32 )
          goto LABEL_62;
        Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        v32,
                                                                        v34[v33],
                                                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
        if ( Master_object )
        {
          v42 = *releaseStateList;
          if ( !*releaseStateList )
            goto LABEL_62;
          if ( v33 >= LODWORD(v42->max_length) )
            break;
          v43 = *titleList;
          v44 = (SkillEntity_o *)Master_object;
          if ( v42->m_Items[v33] )
          {
            if ( v33 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            m_Items[v33],
                                                                            0);
            if ( !v43 )
              goto LABEL_62;
            if ( v33 >= LODWORD(v43->max_length) )
              break;
            v43->m_Items[v33] = (System_String_o *)Master_object;
            sub_1C36FFC((CGThumbnailListItem_o *)((char *)v43 + v35), (int32_t)Master_object, v45, v46);
            if ( v33 >= LODWORD(releaseSkillLvs->max_length) )
              break;
            v47 = *explanationList;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectExplanation(
                                                                            v44,
                                                                            m_Items[v33],
                                                                            0);
            titleList = v89;
            if ( !v47 )
              goto LABEL_62;
            if ( v33 >= LODWORD(v47->max_length) )
              break;
            v50 = (CGThumbnailListItem_o *)((char *)v47 + v35);
            v51 = &v47->obj.klass + v33;
            lvList = v88;
            v52 = (int)Master_object;
            v51[4] = (Il2CppClass *)Master_object;
          }
          else
          {
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)SkillEntity__getEffectTitle(
                                                                            (SkillEntity_o *)Master_object,
                                                                            1,
                                                                            0);
            if ( !v43 )
              goto LABEL_62;
            if ( v33 >= LODWORD(v43->max_length) )
              break;
            v43->m_Items[v33] = (System_String_o *)Master_object;
            sub_1C36FFC((CGThumbnailListItem_o *)((char *)v43 + v35), (int32_t)Master_object, v57, v58);
            v59 = *explanationList;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager__Get(
                                                                            (System_String_o *)StringLiteral_3735/*"COND_TYPE_TITLE"*/,
                                                                            0);
            if ( !v59 )
              goto LABEL_62;
            if ( v33 >= LODWORD(v59->max_length) )
              break;
            v59->m_Items[v33] = (System_String_o *)Master_object;
            sub_1C36FFC((CGThumbnailListItem_o *)((char *)v59 + v35), (int32_t)Master_object, v60, v61);
            v62 = *explanationList;
            if ( !*explanationList )
LABEL_62:
              sub_1C372B4(Master_object);
            if ( v33 >= LODWORD(v62->max_length) )
              break;
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__op_Inequality(
                                                                            v62->m_Items[v33],
                                                                            (System_String_o *)StringLiteral_1/*""*/,
                                                                            0);
            if ( ((unsigned __int8)Master_object & 1) != 0 )
            {
              v63 = *explanationList;
              if ( !*explanationList )
                goto LABEL_62;
              if ( v33 >= LODWORD(v63->max_length) )
                break;
              v64 = (System_String_o **)(&v63->obj.klass + v33);
              v65 = System_String__Concat_63561656(v64[4], (System_String_o *)StringLiteral_43/*"\n"*/, 0);
              v64[4] = v65;
              sub_1C36FFC((CGThumbnailListItem_o *)((char *)v63 + v35), (int32_t)v65, v66, v67);
            }
            v68 = *explanationList;
            if ( !*explanationList )
              goto LABEL_62;
            if ( v33 >= LODWORD(v68->max_length) )
              break;
            v69 = &v68->obj.klass + v33;
            v50 = (CGThumbnailListItem_o *)(v69 + 4);
            v70 = (System_String_o *)v69[4];
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v71 = LocalizationManager__Get((System_String_o *)StringLiteral_3723/*"COND_TYPE_APPEND_PASSIVE_SKILL_RELEASE"*/, 0);
            v72 = System_String__Concat_63561656(v70, v71, 0);
            v69[4] = (Il2CppClass *)v72;
            lvList = v88;
            titleList = v89;
            v52 = (int)v72;
          }
        }
        else
        {
          v53 = *titleList;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          if ( !byte_4C3E2C9 )
          {
            sub_1C37058(&LocalizationManager_TypeInfo);
            byte_4C3E2C9 = 1;
          }
          Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)LocalizationManager_TypeInfo;
          }
          if ( !v53 )
            goto LABEL_62;
          if ( v33 >= LODWORD(v53->max_length) )
            break;
          v54 = *(System_String_o **)&Master_object[2].fields.list->fields._blockReentrancyCount;
          v53->m_Items[v33] = v54;
          sub_1C36FFC((CGThumbnailListItem_o *)((char *)v53 + v35), (int32_t)v54, v40, v41);
          v55 = *explanationList;
          if ( !*explanationList )
            goto LABEL_62;
          if ( v33 >= LODWORD(v55->max_length) )
            break;
          v56 = &v55->obj.klass + v33;
          v52 = StringLiteral_1/*""*/;
          v56[4] = (Il2CppClass *)StringLiteral_1/*""*/;
          v50 = (CGThumbnailListItem_o *)(v56 + 4);
        }
        sub_1C36FFC(v50, v52, v48, v49);
        LODWORD(max_length) = releaseSkillIds->max_length;
        ++v33;
        v35 += 8;
        if ( (__int64)v33 >= (int)max_length )
          return;
      }
      sub_1C372BC(Master_object);
    }
  }
  else
  {
    v73 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
    *idList = v73;
    sub_1C36FFC((CGThumbnailListItem_o *)idList, (int32_t)v73, v74, v75);
    v76 = (System_String_array *)sub_1C37100(string___TypeInfo, 0);
    *titleList = v76;
    sub_1C36FFC((CGThumbnailListItem_o *)titleList, (int32_t)v76, v77, v78);
    v79 = (System_String_array *)sub_1C37100(string___TypeInfo, 0);
    *explanationList = v79;
    sub_1C36FFC((CGThumbnailListItem_o *)explanationList, (int32_t)v79, v80, v81);
    v82 = (System_Boolean_array *)sub_1C37100(bool___TypeInfo, 0);
    *releaseStateList = v82;
    sub_1C36FFC((CGThumbnailListItem_o *)releaseStateList, (int32_t)v82, v83, v84);
    v85 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
    *lvList = v85;
    sub_1C36FFC((CGThumbnailListItem_o *)lvList, (int32_t)v85, v86, v87);
  }
}


void BattleServantConfConponent__GetAttributeValue(
        BattleServantConfConponent_o *this,
        int32_t *policy,
        int32_t *personality,
        const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  int32_t v8; // w0
  int32_t deckIndex; // w0
  struct BattleServantData_o *v10; // x8
  ServantLimitMaster_o *v11; // x22
  __int64 v12; // x23
  __int64 v13; // x24
  const MethodInfo *v14; // x2
  struct BattleServantData_o *v15; // x8
  __int64 v16; // x23
  __int64 v17; // x24
  BattleServantData_o *v18; // x8
  int32_t v19; // w21
  int32_t v20; // w3
  ServantLimitMaster_o *v21; // x0
  int32_t v22; // w2
  struct BattleServantData_o *v23; // x8
  struct ServantLimitAddEntity_o *svtlimitaddent; // x8
  struct BattleServantData_o *v25; // x8
  struct ServantLimitAddEntity_o *v26; // x8
  struct BattleServantData_o *v27; // x8
  __int64 v28; // x21
  __int64 v29; // x23
  ServantLimitEntity_o *v30; // x8
  int32_t v31; // w9
  ServantLimitEntity_o *entity; // [xsp+8h] [xbp-48h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v34; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v35; // 0:x0.16

  if ( (byte_4C4661F & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    sub_1C37058(&Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C4661F = 1;
  }
  entity = 0;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  v8 = BattleServantData__GetChangePolicy(bsvtData, 0);
  *policy = v8;
  if ( (v8 & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *policy,
                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_IndividualityPolicyMaster__IndividualityPolicyEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    *policy = bsvtData->fields.deckIndex;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_53;
  deckIndex = BattleServantData__GetChangePersonality(bsvtData, 0);
  *personality = deckIndex;
  if ( (deckIndex & 0x80000000) == 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    if ( !bsvtData )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)bsvtData,
                                        *personality,
                                        (const MethodInfo_33A10A0 *)Method_DataMasterBase_IndividualityPersonalityMaster__IndividualityPersonalityEntity__int__GetEntity__);
    if ( !bsvtData )
      goto LABEL_53;
    deckIndex = bsvtData->fields.deckIndex;
    *personality = deckIndex;
  }
  if ( ((*policy | deckIndex) & 0x80000000) == 0 )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  bsvtData = (BattleServantData_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitMaster___);
  v10 = this->fields.bsvtData;
  if ( !v10 )
    goto LABEL_53;
  v11 = (ServantLimitMaster_o *)bsvtData;
  v13 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.currentCryptoKey;
  v12 = *(_QWORD *)&v10->fields._dispLimitCount_k__BackingField.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v33.fields.currentCryptoKey = v13;
  *(_QWORD *)&v33.fields.fakeValue = v12;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v33, 0);
  if ( (int)bsvtData < 11 )
  {
    v15 = this->fields.bsvtData;
    if ( v15 )
    {
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v34.fields.currentCryptoKey = v17;
      *(_QWORD *)&v34.fields.fakeValue = v16;
      bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v34, 0);
      v18 = this->fields.bsvtData;
      if ( v18 )
      {
        v19 = (int)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(v18, 1, 0);
        if ( v11 )
        {
          v20 = (int)bsvtData;
          v21 = v11;
          v22 = v19;
          goto LABEL_44;
        }
      }
    }
    goto LABEL_53;
  }
  if ( *policy < 0 )
  {
    v23 = this->fields.bsvtData;
    if ( !v23 )
      goto LABEL_53;
    svtlimitaddent = v23->fields.svtlimitaddent;
    if ( !svtlimitaddent )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPolicy(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)svtlimitaddent->fields.individuality,
                                        v14);
    *policy = (int)bsvtData;
  }
  if ( *personality < 0 )
  {
    v25 = this->fields.bsvtData;
    if ( !v25 )
      goto LABEL_53;
    v26 = v25->fields.svtlimitaddent;
    if ( !v26 )
      goto LABEL_53;
    bsvtData = (BattleServantData_o *)BattleServantConfConponent__GetPersonality(
                                        (BattleServantConfConponent_o *)bsvtData,
                                        (System_Collections_Generic_IEnumerable_int__o *)v26->fields.individuality,
                                        v14);
    *personality = (int)bsvtData;
  }
  v27 = this->fields.bsvtData;
  if ( !v27 )
    goto LABEL_53;
  v29 = *(_QWORD *)&v27->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&v27->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v35.fields.currentCryptoKey = v29;
  *(_QWORD *)&v35.fields.fakeValue = v28;
  bsvtData = (BattleServantData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v35, 0);
  if ( !v11 )
LABEL_53:
    sub_1C372B4(bsvtData);
  v22 = (int)bsvtData;
  v21 = v11;
  v20 = 0;
LABEL_44:
  ServantLimitMaster__TryGetEntity(v21, &entity, v22, v20, 0);
  v30 = entity;
  v31 = *policy;
  if ( entity )
  {
    if ( v31 < 0 )
      *policy = entity->fields.policy;
    if ( *personality < 0 )
      *personality = v30->fields.personality;
  }
  else
  {
    if ( v31 < 0 )
      *policy = 0;
    if ( *personality < 0 )
      *personality = 0;
  }
}


EventDropUpValInfo_array *BattleServantConfConponent__GetFriendshipUpCampaignInfo(
        BattleServantConfConponent_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x19
  Il2CppObject *Master_object; // x21
  void *Instance; // x0
  _BOOL8 v7; // x0
  Il2CppObject *current; // x21
  System_Collections_Generic_IEnumerable_TSource__o *monitor; // x0
  Il2CppObject *v10; // x0
  UserServantEntity_o *HeroineData; // x0
  __int64 v12; // x23
  __int64 v13; // x0
  EventDropUpValInfo_o *v14; // x22
  __int64 OnlyMaxFuncGroupId; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-90h] BYREF

  if ( (byte_4C46621 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_EventCampaignMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_1C37058(&EventDropUpValInfo_TypeInfo);
    sub_1C37058(&FunctionEntity_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
    sub_1C37058(&System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C46621 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_EventDropUpValInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_EventDropUpValInfo___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventCampaignMaster___);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
  if ( !Instance || !Master_object )
    goto LABEL_35;
  Instance = EventCampaignMaster__GetFriendshipUpCampaigns(
               (EventCampaignMaster_o *)Master_object,
               *((_QWORD *)Instance + 14),
               0);
  if ( Instance )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v23,
      (System_Collections_Generic_List_object__o *)Instance,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    v24 = v23;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v24,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
      if ( !v7 )
        break;
      current = v24.fields._current;
      if ( !v24.fields._current )
        sub_1C372B4(v7);
      monitor = (System_Collections_Generic_IEnumerable_TSource__o *)v24.fields._current[2].monitor;
      if ( !monitor
        || !monitor[1].monitor
        || System_Linq_Enumerable__Contains_int_(
             monitor,
             svtId,
             (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        v10 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
        if ( !v10 )
          sub_1C372B4(0);
        HeroineData = UserServantMaster__getHeroineData((UserServantMaster_o *)v10, svtId, 0);
        if ( !HeroineData || UserServantEntity__IsAddFriendShipHeroine(HeroineData, 0) )
        {
          v12 = sub_1C372A4(FunctionEntity_TypeInfo);
          FunctionEntity___ctor((FunctionEntity_o *)v12, 0);
          if ( !v12 )
            sub_1C372B4(v13);
          *(_QWORD *)(v12 + 24) = 111;
          v14 = (EventDropUpValInfo_o *)sub_1C372A4(EventDropUpValInfo_TypeInfo);
          EventDropUpValInfo___ctor(v14, 0, (FunctionEntity_o *)v12, 0);
          OnlyMaxFuncGroupId = EventCampaignEntity__GetOnlyMaxFuncGroupId((EventCampaignEntity_o *)current, 0);
          if ( !v14 )
            sub_1C372B4(OnlyMaxFuncGroupId);
          v14->fields.groupId = OnlyMaxFuncGroupId;
          if ( !v4 )
            sub_1C372B4(OnlyMaxFuncGroupId);
          items = v4->fields._items;
          v19 = Method_System_Collections_Generic_List_EventDropUpValInfo__Add__;
          ++v4->fields._version;
          if ( !items )
            sub_1C372B4(OnlyMaxFuncGroupId);
          size = v4->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v4,
              (Il2CppObject *)v14,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
          }
          else
          {
            v21 = &items->obj.klass + size;
            v4->fields._size = size + 1;
            v21[4] = (Il2CppClass *)v14;
            sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v24,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
  }
  if ( !v4 )
LABEL_35:
    sub_1C372B4(Instance);
  return (EventDropUpValInfo_array *)System_Collections_Generic_List_object___ToArray(
                                       v4,
                                       (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_EventDropUpValInfo__ToArray__);
}


System_String_o *BattleServantConfConponent__GetHideStr(
        BattleServantConfConponent_o *this,
        int32_t hideStatus,
        System_String_o *defaultStr,
        const MethodInfo *method)
{
  __int64 *v6; // x8

  if ( (byte_4C4661C & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_11576/*"SERVANT_ATTRIBUTE_HIDE"*/);
    sub_1C37058(&StringLiteral_11577/*"SERVANT_ATTRIBUTE_NONE"*/);
    byte_4C4661C = 1;
  }
  if ( hideStatus == 2 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11577/*"SERVANT_ATTRIBUTE_NONE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  if ( hideStatus == 1 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = &StringLiteral_11576/*"SERVANT_ATTRIBUTE_HIDE"*/;
    return LocalizationManager__Get((System_String_o *)*v6, 0);
  }
  return defaultStr;
}


System_Int32_array *BattleServantConfConponent__GetNeedAddAnnotationSkillIds(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *passiveSkillIdList,
        const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *FriendshipUpCampaignInfo; // x21
  BattleServantConfConponent_o *SvtId; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_int__o *v9; // x20

  if ( (byte_4C46620 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__);
    byte_4C46620 = 1;
  }
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_12;
  FriendshipUpCampaignInfo = 0;
  if ( !BattleServantData__IsFollwerSupport(bsvtData, 0) )
  {
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_12;
    FriendshipUpCampaignInfo = 0;
    if ( !BattleServantData__IsNpc(bsvtData, 0) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_12;
      SvtId = (BattleServantConfConponent_o *)BattleServantData__getSvtId(bsvtData, 0);
      FriendshipUpCampaignInfo = (System_Collections_Generic_IEnumerable_EventDropUpValInfo__o *)BattleServantConfConponent__GetFriendshipUpCampaignInfo(
                                                                                                   SvtId,
                                                                                                   (int32_t)SvtId,
                                                                                                   v8);
    }
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v9
    || (System_Collections_Generic_List_int___AddRange(
          v9,
          (System_Collections_Generic_IEnumerable_T__o *)passiveSkillIdList,
          (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__),
        (bsvtData = (BattleServantData_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_PartyOrganizationUtility__get_Instance__)) == 0) )
  {
LABEL_12:
    sub_1C372B4(bsvtData);
  }
  return PartyOrganizationUtility__GetNeedAddAnnotationSkillIds(
           (PartyOrganizationUtility_o *)bsvtData,
           (System_Collections_Generic_IEnumerable_int__o *)v9,
           FriendshipUpCampaignInfo,
           0);
}


int32_t BattleServantConfConponent__GetPersonality(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  int32_t v19; // w21
  __int64 v20; // x0
  double v21; // d0
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4C4661E & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C4661E = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v7 = *(unsigned __int16 *)&individualityArray->klass->_2.rank;
  if ( *(_WORD *)&individualityArray->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v9)(
          individualityArray,
          *(_QWORD *)(v9 + 8));
  if ( !v10 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_15:
      v14 = sub_1C87870(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v17 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_22;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_22:
      v18 = sub_1C87870(v10, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = log10((double)v19);
    if ( (unsigned int)(v19 - 300) <= 0x63
      && v21 != INFINITY
      && (int)v21 == 2
      && (unsigned int)(v19 - 303) <= 6
      && v19 != 307 )
    {
      if ( !v4 )
        sub_1C372B4(v20);
      items = v4->fields._items;
      v23 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C372B4(v20);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v19,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v19;
      }
    }
  }
  v25 = *(_QWORD *)v10;
  v26 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
    {
      --v26;
      v27 += 4;
      if ( !v26 )
        goto LABEL_40;
    }
    v28 = v25 + 16LL * *v27 + 312;
  }
  else
  {
LABEL_40:
    v28 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v10, *(_QWORD *)(v28 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPersonalityMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPersonalityMaster__GetPersonalityValue(
               (IndividualityPersonalityMaster_o *)Master_object,
               v5,
               0);
LABEL_51:
    sub_1C372B4(v5);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetPolicy(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_IEnumerable_int__o *individualityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  System_Int32_array *v5; // x0
  System_Collections_Generic_IEnumerable_int__c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x20
  __int64 v11; // x8
  __int64 v12; // x9
  int *v13; // x10
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  int32_t v19; // w21
  __int64 v20; // x0
  double v21; // d0
  unsigned int v22; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  Il2CppObject *Master_object; // x20

  if ( (byte_4C4661D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C4661D = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !individualityArray )
    goto LABEL_51;
  klass = individualityArray->klass;
  v7 = *(unsigned __int16 *)&individualityArray->klass->_2.rank;
  if ( *(_WORD *)&individualityArray->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_int__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_1C87870(individualityArray, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_int__o *, _QWORD))v9)(
          individualityArray,
          *(_QWORD *)(v9 + 8));
  if ( !v10 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v11 = *(_QWORD *)v10;
    v12 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v13 = (int *)(*(_QWORD *)(v11 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v13 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        v13 += 4;
        if ( !v12 )
          goto LABEL_15;
      }
      v14 = v11 + 16LL * *v13 + 312;
    }
    else
    {
LABEL_15:
      v14 = sub_1C87870(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v14)(v10, *(_QWORD *)(v14 + 8)) & 1) == 0 )
      break;
    v15 = *(_QWORD *)v10;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_int__c **)v17 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_22;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_22:
      v18 = sub_1C87870(v10, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8));
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v21 = log10((double)v19);
    v22 = v19 - 300;
    if ( (unsigned int)(v19 - 300) <= 0x63 && v21 != INFINITY && (int)v21 == 2 && v22 <= 7 && ((1 << v22) & 0x87) != 0 )
    {
      if ( !v4 )
        sub_1C372B4(v20);
      items = v4->fields._items;
      v24 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        sub_1C372B4(v20);
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          v19,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = v19;
      }
    }
  }
  v26 = *(_QWORD *)v10;
  v27 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
    {
      --v27;
      v28 += 4;
      if ( !v27 )
        goto LABEL_40;
    }
    v29 = v26 + 16LL * *v28 + 312;
  }
  else
  {
LABEL_40:
    v29 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
  }
  v5 = (System_Int32_array *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v10, *(_QWORD *)(v29 + 8));
  if ( !v4 )
    goto LABEL_51;
  if ( v4->fields._size > 0 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_IndividualityPolicyMaster___);
    v5 = System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    if ( Master_object )
      return IndividualityPolicyMaster__GetPolicyValue((IndividualityPolicyMaster_o *)Master_object, v5, 0);
LABEL_51:
    sub_1C372B4(v5);
  }
  return -1;
}


int32_t BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(
        BattleServantConfConponent_o *this,
        System_Collections_Generic_List_int__o *skillIdList,
        const MethodInfo *method)
{
  __int64 v5; // x20
  int32_t result; // w0
  Il2CppObject *Master_object; // x0
  struct BattleServantData_o *bsvtData; // x8
  ServantPassiveSkillMaster_o *v9; // x21
  __int64 v10; // x22
  __int64 v11; // x23
  System_Collections_Generic_IEnumerable_ServantPassiveSkillEntity__o *v12; // x21
  BattleServantConfConponent___c_c *v13; // x8
  System_Func_object__int__o *_9__81_0; // x22
  Il2CppObject *v15; // x23
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Collections_Generic_IEnumerable_T__o *v19; // x22
  System_Collections_Generic_HashSet_int__o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Predicate_int__o *v23; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  if ( (byte_4C4660C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
    sub_1C37058(&System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor___78034736);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__FindIndex__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__);
    sub_1C37058(&Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__);
    sub_1C37058(&BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
    sub_1C37058(&BattleServantConfConponent___c_TypeInfo);
    byte_4C4660C = 1;
  }
  v5 = sub_1C372A4(BattleServantConfConponent___c__DisplayClass81_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)skillIdList, 0) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantPassiveSkillMaster___);
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_22;
  v9 = (ServantPassiveSkillMaster_o *)Master_object;
  v11 = *(_QWORD *)&bsvtData->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&bsvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v11;
  *(_QWORD *)&v24.fields.fakeValue = v10;
  Master_object = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v24, 0);
  if ( !v9 )
    goto LABEL_22;
  v12 = ServantPassiveSkillMaster__EnumerateSpecialSkillsBySvtId(v9, (int32_t)Master_object, 0);
  v13 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v13 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__81_0 = (System_Func_object__int__o *)v13->static_fields->__9__81_0;
  if ( !_9__81_0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = BattleServantConfConponent___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v13->static_fields->__9;
    _9__81_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ServantPassiveSkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__81_0,
      v15,
      Method_BattleServantConfConponent___c__GetSpecialPassiveSkillStartIndex_b__81_0__,
      0);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__81_0 = (struct System_Func_ServantPassiveSkillEntity__int__o *)_9__81_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__81_0, (int32_t)_9__81_0, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_object__int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                         (System_Func_TSource__TResult__o *)_9__81_0,
                                                         (const MethodInfo_311DA48 *)Method_System_Linq_Enumerable_Select_ServantPassiveSkillEntity__int___);
  v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor_56966008(
    v20,
    v19,
    (const MethodInfo_3653B78 *)Method_System_Collections_Generic_HashSet_int___ctor___78034736);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = v20,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)v20, v21, v22),
        v23 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo),
        System_Predicate_int____ctor(
          v23,
          (Il2CppObject *)v5,
          Method_BattleServantConfConponent___c__DisplayClass81_0__GetSpecialPassiveSkillStartIndex_b__1__,
          0),
        !skillIdList) )
  {
LABEL_22:
    sub_1C372B4(Master_object);
  }
  result = System_Collections_Generic_List_int___FindIndex(
             skillIdList,
             (System_Predicate_T__o *)v23,
             (const MethodInfo_3786834 *)Method_System_Collections_Generic_List_int__FindIndex__);
  if ( result < 0 )
    return skillIdList->fields._size;
  return result;
}


void BattleServantConfConponent__Initialize(
        BattleServantConfConponent_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *transform; // x20
  int v8; // s0
  int v9; // s2
  UnityEngine_Object_o *commandCard; // x20
  Il2CppObject *Component_object; // x20
  UILabel_o *havenotTdLabel; // x20
  UnityEngine_Object_o *classBoardSkillObj; // x20
  const MethodInfo *v14; // x1
  UnityEngine_Object_o *grandClassBoardSkillObj; // x20
  const MethodInfo *v16; // x1
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46607 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_2775/*"BATTLE_HASNOT_TD"*/);
    byte_4C46607 = 1;
  }
  this->fields.data = data;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.data, (int32_t)data, (int32_t)method, v3);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  transform = UnityEngine_GameObject__get_transform(gameObject, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_35;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(gameObject, 0);
  if ( !gameObject )
    goto LABEL_35;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)gameObject, 0);
  if ( !transform )
    goto LABEL_35;
  v8 = 0;
  v9 = 0;
  UnityEngine_Transform__set_localPosition(transform, localPosition, 0);
  commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)this,
                                               (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
    if ( !gameObject )
      goto LABEL_35;
    if ( !this->fields.commandCard )
      goto LABEL_35;
    BattleCommandComponent__setDepth(this->fields.commandCard, LODWORD(gameObject[7].monitor) + 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject )
      goto LABEL_35;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)gameObject,
                         (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_Collider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)Component_object,
                                               0,
                                               0);
    if ( ((unsigned __int8)gameObject & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_35;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, 0, 0);
    }
    gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard;
    if ( !gameObject
      || (BattleCommandComponent__InitTreasureDeviceErrorSpriteMark((BattleCommandComponent_o *)gameObject, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.commandCard) == 0) )
    {
LABEL_35:
      sub_1C372B4(gameObject);
    }
    BattleCommandComponent__SetDownloadEventSprite((BattleCommandComponent_o *)gameObject, 0);
  }
  havenotTdLabel = this->fields.havenotTdLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2775/*"BATTLE_HASNOT_TD"*/, 0);
  if ( !havenotTdLabel )
    goto LABEL_35;
  UILabel__set_text(havenotTdLabel, (System_String_o *)gameObject, 0);
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSkillObj, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.classBoardSkillObj;
    if ( !gameObject )
      goto LABEL_35;
    BattleServantClassBoardSkillEffectListComponent__Init(
      (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
      v14);
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(grandClassBoardSkillObj, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)this->fields.grandClassBoardSkillObj;
    if ( gameObject )
    {
      BattleServantClassBoardSkillEffectListComponent__Init(
        (BattleServantClassBoardSkillEffectListComponent_o *)gameObject,
        v16);
      goto LABEL_34;
    }
    goto LABEL_35;
  }
LABEL_34:
  BattleWindowComponent__setInitData((BattleWindowComponent_o *)this, 2, 0.15, 0, 0);
}


bool BattleServantConfConponent__IsHideAttribute(
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

  *(_QWORD *)personality = 0;
  if ( ConstantMaster__IsNotDisplayBattleAttribute(0) )
    goto LABEL_8;
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_30;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePolicy(bsvtData, 0);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v6 = (int)bsvtData;
  bsvtData = (BattleServantData_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0);
  if ( !this->fields.bsvtData )
    goto LABEL_30;
  v7 = (int)bsvtData;
  HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0);
  if ( v6 != 3 || v7 != 3 || HideStateSubAttribute != 3 )
  {
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePolicy(bsvtData, 0);
      if ( this->fields.bsvtData )
      {
        v10 = (System_String_o *)bsvtData;
        bsvtData = (BattleServantData_o *)BattleServantData__GetOverwritePersonality(this->fields.bsvtData, 0);
        if ( this->fields.bsvtData )
        {
          v11 = (System_String_o *)bsvtData;
          OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute(this->fields.bsvtData, 0);
          BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v13);
          if ( v6 == 3 )
          {
            IsNullOrEmpty = 1;
          }
          else
          {
            IsNullOrEmpty = 0;
            if ( !personality[1] && !isSvtTypeSpecific )
              IsNullOrEmpty = System_String__IsNullOrEmpty(v10, 0);
          }
          if ( v7 == 3 )
          {
            v15 = 1;
          }
          else
          {
            v15 = 0;
            if ( !personality[0] && !isSvtTypeSpecific )
              v15 = System_String__IsNullOrEmpty(v11, 0);
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
            Attri = BattleServantData__getAttri(bsvtData, 0);
            v16 = 0;
            if ( !Attri && !isSvtTypeSpecific )
              v16 = System_String__IsNullOrEmpty(OverwriteSubAttribute, 0);
            goto LABEL_28;
          }
        }
      }
    }
LABEL_30:
    sub_1C372B4(bsvtData);
  }
LABEL_8:
  v9 = 1;
  return v9 & 1;
}


bool BattleServantConfConponent__IsLastOpenServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  if ( (byte_4C46614 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3128/*"BattleServantDetailTab"*/);
    byte_4C46614 = 1;
  }
  return !UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_3128/*"BattleServantDetailTab"*/, 0)
      || !UnityEngine_PlayerPrefs__GetInt_71224996((System_String_o *)StringLiteral_3128/*"BattleServantDetailTab"*/, 0)
      || UnityEngine_PlayerPrefs__GetInt_71224996((System_String_o *)StringLiteral_3128/*"BattleServantDetailTab"*/, 0) != 1;
}


void BattleServantConfConponent__OnClick(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *isOpening; // x0
  struct BattleCommandComponent_array *CommandCardList; // x8
  __int64 v5; // x22
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v7; // x23
  UnityEngine_Object_o *v8; // x20
  struct BattleCommandComponent_array *v9; // x8
  struct BattleServantConfConponent_CloseButtonCallBack_o *callback_close; // x8
  UnityEngine_Object_o *gameObject; // x20
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *equipPossessionSkillInfoComponentList; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46611 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46611 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)BattleWindowComponent__isOpening(
                                                                                               (BattleWindowComponent_o *)this,
                                                                                               0);
  if ( ((unsigned __int8)isOpening & 1) == 0 )
  {
    CommandCardList = this->fields.CommandCardList;
    if ( !CommandCardList )
      goto LABEL_16;
    v5 = 4;
    while ( 1 )
    {
      max_length_low = LODWORD(CommandCardList->max_length);
      v7 = v5 - 4;
      if ( v5 - 4 >= (int)max_length_low )
        break;
      if ( v7 >= max_length_low )
        goto LABEL_31;
      v8 = (UnityEngine_Object_o *)*((_QWORD *)&CommandCardList->obj.klass + v5);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)UnityEngine_Object__op_Equality(
                                                                                                   v8,
                                                                                                   0,
                                                                                                   0);
      if ( ((unsigned __int8)isOpening & 1) == 0 )
      {
        v9 = this->fields.CommandCardList;
        if ( !v9 )
          goto LABEL_16;
        if ( v7 >= LODWORD(v9->max_length) )
LABEL_31:
          sub_1C372BC(isOpening);
        isOpening = (struct System_Collections_Generic_List_EquipPossessionSkillInfoComponent__o *)*((_QWORD *)&v9->obj.klass + v5);
        if ( !isOpening )
          goto LABEL_16;
        BattleCommandComponent__ClearCardEffect((BattleCommandComponent_o *)isOpening, 0);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v5;
      if ( !CommandCardList )
        goto LABEL_16;
    }
    callback_close = this->fields.callback_close;
    if ( callback_close )
      ((void (__fastcall *)(intptr_t, intptr_t))callback_close->fields.invoke_impl)(
        callback_close->fields.method_code,
        callback_close->fields.method);
    isOpening = this->fields.equipPossessionSkillInfoComponentList;
    if ( !isOpening )
      goto LABEL_16;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)isOpening,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__MoveNext__) )
    {
      if ( !v16.fields._current )
        sub_1C372B4(0);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)v16.fields._current,
                                             0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_EquipPossessionSkillInfoComponent__Dispose__);
    equipPossessionSkillInfoComponentList = this->fields.equipPossessionSkillInfoComponentList;
    if ( !equipPossessionSkillInfoComponentList )
LABEL_16:
      sub_1C372B4(isOpening);
    size = equipPossessionSkillInfoComponentList->fields._size;
    v15 = equipPossessionSkillInfoComponentList->fields._version + 1;
    equipPossessionSkillInfoComponentList->fields._size = 0;
    equipPossessionSkillInfoComponentList->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)equipPossessionSkillInfoComponentList->fields._items, 0, size, 0);
    this->fields.bsvtData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bsvtData, 0, size, v12);
  }
}


void BattleServantConfConponent__OnClickServantAbility(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4C46615 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleServantConfConponent_OnClickServantAbility__);
    sub_1C37058(&StringLiteral_17464/*"btn_bg_on_1"*/);
    sub_1C37058(&StringLiteral_17459/*"btn_bg_off_1"*/);
    sub_1C37058(&StringLiteral_17603/*"btn_txt_servant_states_off"*/);
    sub_1C37058(&StringLiteral_3128/*"BattleServantDetailTab"*/);
    this = (BattleServantConfConponent_o *)sub_1C37058(&StringLiteral_17601/*"btn_txt_servant_property_on"*/);
    byte_4C46615 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantAbility__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantAbility__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C37070(Method_BattleServantConfConponent_OnClickServantAbility__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17464/*"btn_bg_on_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17601/*"btn_txt_servant_property_on"*/, 0);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17459/*"btn_bg_off_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_20:
    sub_1C372B4(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17603/*"btn_txt_servant_states_off"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3128/*"BattleServantDetailTab"*/, 0, 0);
}


void BattleServantConfConponent__OnClickServantState(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantConfConponent_o *v2; // x19
  UnityEngine_GameObject_o *BattleServantAbilityObj; // x0
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0

  v2 = this;
  if ( (byte_4C46616 & 1) == 0 )
  {
    sub_1C37058(&Method_BattleServantConfConponent_OnClickServantState__);
    sub_1C37058(&StringLiteral_17464/*"btn_bg_on_1"*/);
    sub_1C37058(&StringLiteral_17604/*"btn_txt_servant_states_on"*/);
    sub_1C37058(&StringLiteral_17600/*"btn_txt_servant_property_off"*/);
    sub_1C37058(&StringLiteral_17459/*"btn_bg_off_1"*/);
    this = (BattleServantConfConponent_o *)sub_1C37058(&StringLiteral_3128/*"BattleServantDetailTab"*/);
    byte_4C46616 = 1;
  }
  if ( !v2->fields.isOpenAfter )
  {
    if ( !BattleServantConfConponent__IsLastOpenServantAbility(this, method) )
      return;
    if ( !v2->fields.isOpenAfter )
    {
      v4 = Method_BattleServantConfConponent_OnClickServantState__;
      if ( (*((_BYTE *)Method_BattleServantConfConponent_OnClickServantState__ + 83) & 2) != 0 )
        v4 = (_QWORD *)sub_1C37070(Method_BattleServantConfConponent_OnClickServantState__);
      v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
      OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    }
  }
  BattleServantAbilityObj = v2->fields.BattleServantAbilityObj;
  v2->fields.isOpenAfter = 0;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.AbillityTab;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0);
  BattleServantAbilityObj = v2->fields.AbillityBtnBg;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityBtn;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17459/*"btn_bg_off_1"*/, 0);
  BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.AbillityName;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17600/*"btn_txt_servant_property_off"*/, 0);
  BattleServantAbilityObj = v2->fields.BattleServantStateObj;
  if ( !BattleServantAbilityObj )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0);
  BattleServantAbilityObj = v2->fields.StateTab;
  if ( !BattleServantAbilityObj
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 1, 0),
        (BattleServantAbilityObj = v2->fields.StateBtnBg) == 0)
    || (UnityEngine_GameObject__SetActive(BattleServantAbilityObj, 0, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateBtn) == 0)
    || (UIButton__set_normalSprite((UIButton_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17464/*"btn_bg_on_1"*/, 0),
        (BattleServantAbilityObj = (UnityEngine_GameObject_o *)v2->fields.StateName) == 0) )
  {
LABEL_21:
    sub_1C372B4(BattleServantAbilityObj);
  }
  UISprite__set_spriteName((UISprite_o *)BattleServantAbilityObj, (System_String_o *)StringLiteral_17604/*"btn_txt_servant_states_on"*/, 0);
  UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_3128/*"BattleServantDetailTab"*/, 1, 0);
}


void BattleServantConfConponent__Open(
        BattleServantConfConponent_o *this,
        BattleWindowComponent_EndCall_o *call,
        const MethodInfo *method)
{
  BattleViewBufflistComponent_o *buffListView; // x0
  const MethodInfo *v6; // x1

  buffListView = this->fields.buffListView;
  if ( !buffListView )
    sub_1C372B4(0);
  BattleViewBufflistComponent__setHide(buffListView, 0, 0);
  BattleWindowComponent__Open((BattleWindowComponent_o *)this, call, 0);
  BattleServantConfConponent__ResetScroll(this, v6);
}


void BattleServantConfConponent__ResetScroll(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *BattleServantAbilityObj; // x20
  UnityEngine_Object_o *BattleServantStateObj; // x20
  UnityEngine_GameObject_o *buffListView; // x0
  UnityEngine_Object_o *AbillityScrollView; // x20
  UnityEngine_Object_o *AbillityScrollBarWiget; // x20
  UnityEngine_Object_o *StateScrollView; // x20
  UnityEngine_Object_o *StateScrollBarWiget; // x20

  if ( (byte_4C46612 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46612 = 1;
  }
  BattleServantAbilityObj = (UnityEngine_Object_o *)this->fields.BattleServantAbilityObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
  {
    BattleServantStateObj = (UnityEngine_Object_o *)this->fields.BattleServantStateObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleServantStateObj, 0, 0) )
    {
      buffListView = this->fields.BattleServantAbilityObj;
      if ( buffListView )
      {
        UnityEngine_GameObject__SetActive(buffListView, 1, 0);
        buffListView = this->fields.BattleServantStateObj;
        if ( buffListView )
        {
          UnityEngine_GameObject__SetActive(buffListView, 1, 0);
          buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
          if ( buffListView )
          {
            BattleViewBufflistComponent__setShow((BattleViewBufflistComponent_o *)buffListView, 0);
            AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            AbillityScrollBarWiget = (UnityEngine_Object_o *)this->fields.AbillityScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(AbillityScrollBarWiget, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.AbillityScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0);
            }
            StateScrollView = (UnityEngine_Object_o *)this->fields.StateScrollView;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollView, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollView;
              if ( !buffListView )
                goto LABEL_37;
              UIScrollView__ResetPosition((UIScrollView_o *)buffListView, 0);
            }
            StateScrollBarWiget = (UnityEngine_Object_o *)this->fields.StateScrollBarWiget;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(StateScrollBarWiget, 0, 0) )
            {
              buffListView = (UnityEngine_GameObject_o *)this->fields.StateScrollBarWiget;
              if ( !buffListView )
                goto LABEL_37;
              UIWidget__ResizeCollider((UIWidget_o *)buffListView, 0);
            }
            buffListView = this->fields.BattleServantAbilityObj;
            if ( buffListView )
            {
              UnityEngine_GameObject__SetActive(buffListView, 0, 0);
              buffListView = (UnityEngine_GameObject_o *)this->fields.buffListView;
              if ( buffListView )
              {
                BattleViewBufflistComponent__setHide((BattleViewBufflistComponent_o *)buffListView, 0, 0);
                buffListView = this->fields.BattleServantStateObj;
                if ( buffListView )
                {
                  UnityEngine_GameObject__SetActive(buffListView, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C372B4(buffListView);
    }
  }
}


void BattleServantConfConponent__SetAppendSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *AppendSkillObj; // x21
  __int64 AppendSkillTitle; // x0
  UnityEngine_Object_o *AppendSkillListParent; // x21
  UnityEngine_Object_o *AppendSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v10; // x1
  struct BattleServantData_o *bsvtData; // x8
  __int128 v12; // q1
  int64_t v13; // x0
  struct BattleServantData_o *v14; // x8
  __int64 v15; // x20
  _BOOL8 IsNpc; // x0
  Il2CppObject *Master_object; // x21
  System_Int32_array *v18; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  int32_t v20; // w21
  System_Int32_array *v21; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v22; // x29
  unsigned __int64 v23; // x24
  int32_t v24; // w22
  float v25; // s8
  unsigned __int64 max_length_low; // x9
  int32_t v27; // w25
  System_String_o *v28; // x27
  System_String_o *v29; // x26
  _BOOL4 v30; // w21
  UnityEngine_GameObject_o *v31; // x28
  Il2CppObject *v32; // x28
  DataMasterBase_TMaster__TEntity__PKType__o *v33; // x20
  UnityEngine_Transform_o *v34; // x29
  UnityEngine_Transform_o *v35; // x29
  UnityEngine_Transform_o *v36; // x29
  Il2CppObject *Component_object; // x28
  int32_t v38; // w6
  const MethodInfo *v39; // x7
  _DWORD *monitor; // x8
  System_Int32_array *releaseSkillLvs; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_IEnumerable_TSource__o *v42; // [xsp+18h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+20h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+40h] [xbp-C0h]
  Il2CppObject *entity; // [xsp+68h] [xbp-98h] BYREF
  System_Int32_array *lvList; // [xsp+70h] [xbp-90h] BYREF
  System_Boolean_array *releaseStateList; // [xsp+78h] [xbp-88h] BYREF
  System_String_array *explanationList; // [xsp+80h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+88h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+98h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4660D & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&StringLiteral_20648/*"img_txt_extraskill"*/);
    byte_4C4660D = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  lvList = 0;
  releaseStateList = 0;
  entity = 0;
  AppendSkillObj = (UnityEngine_Object_o *)this->fields.AppendSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(AppendSkillObj, 0, 0) )
  {
    AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
    if ( !AppendSkillTitle )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
  }
  if ( !battleInfoData )
    return;
  AppendSkillListParent = (UnityEngine_Object_o *)this->fields.AppendSkillListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillListParent, 0, 0) || !this->fields.bsvtData )
    return;
  AppendSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.AppendSkillInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(AppendSkillInfoPrefab, 0, 0) )
    return;
  this->fields.AppendSkillOffset = 0.0;
  BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) && !BattleServantConfConponent__SetAtlas(this, v10) )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UISprite__set_atlas((UISprite_o *)AppendSkillTitle, this->fields.BattleAssetUIAtlas, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UISprite__set_spriteName((UISprite_o *)AppendSkillTitle, (System_String_o *)StringLiteral_20648/*"img_txt_extraskill"*/, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillTitle;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  AppendSkillTitle = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)AppendSkillTitle + 840LL))(
                       AppendSkillTitle,
                       *(_QWORD *)(*(_QWORD *)AppendSkillTitle + 848LL));
  bsvtData = this->fields.bsvtData;
  if ( !bsvtData )
    goto LABEL_99;
  v12 = *(_OWORD *)&bsvtData->fields.userSvtId.fields.fakeValue;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&bsvtData->fields.userSvtId.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v12;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v43 = v44;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v43, 0);
  AppendSkillTitle = (__int64)BattleInfoData__getUserServantFromID(battleInfoData, v13, 0);
  if ( !AppendSkillTitle )
    return;
  v14 = this->fields.bsvtData;
  if ( !v14 )
    goto LABEL_99;
  v15 = AppendSkillTitle;
  IsNpc = Follower__IsNpc(v14->fields.followerType, 0);
  if ( IsNpc )
  {
    BattleServantConfConponent__GetAppendSkillInfo(
      (BattleServantConfConponent_o *)IsNpc,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      *(System_Int32_array **)(v15 + 528),
      *(System_Int32_array **)(v15 + 536),
      (const MethodInfo *)releaseSkillLvs);
  }
  else
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantAppendPassiveSkillMaster___);
    AppendSkillTitle = UserServantEntity__getSvtId((UserServantEntity_o *)v15, 0);
    if ( !Master_object )
      goto LABEL_99;
    ServantAppendPassiveSkillMaster__GetAppendPassiveSkillInfo_42609416(
      (ServantAppendPassiveSkillMaster_o *)Master_object,
      &idList,
      &titleList,
      &explanationList,
      &releaseStateList,
      &lvList,
      AppendSkillTitle,
      *(System_Int32_array **)(v15 + 528),
      *(System_Int32_array **)(v15 + 536),
      0);
  }
  AppendSkillTitle = (__int64)this->fields.bsvtData;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  v18 = BattleServantData__FilterDisplayingSkillIdArray((BattleServantData_o *)AppendSkillTitle, idList, 1, 0);
  if ( !v18 )
    return;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)v18;
  if ( !v18->max_length )
    return;
  AppendSkillTitle = (__int64)this->fields.AppendSkillObj;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
  AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
  if ( !AppendSkillTitle )
    goto LABEL_99;
  v20 = 0;
  while ( 1 )
  {
    AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
    if ( !AppendSkillTitle )
      goto LABEL_99;
    if ( v20 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) )
      break;
    AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
    if ( AppendSkillTitle )
    {
      AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)AppendSkillTitle, 0);
      if ( AppendSkillTitle )
      {
        AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)AppendSkillTitle, v20, 0);
        if ( AppendSkillTitle )
        {
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( AppendSkillTitle )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 0, 0);
            AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
            ++v20;
            if ( AppendSkillTitle )
              continue;
          }
        }
      }
    }
    goto LABEL_99;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  AppendSkillTitle = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  v21 = idList;
  entity = 0;
  if ( !idList )
LABEL_99:
    sub_1C372B4(AppendSkillTitle);
  v22 = (DataMasterBase_TMaster__TEntity__PKType__o *)AppendSkillTitle;
  v23 = 0;
  v24 = 0;
  v25 = 0.0;
  v42 = v19;
  while ( 1 )
  {
    max_length_low = LODWORD(v21->max_length);
    if ( (__int64)v23 >= (int)max_length_low )
      break;
    if ( v23 >= max_length_low )
      goto LABEL_102;
    AppendSkillTitle = System_Linq_Enumerable__Contains_int_(
                         v19,
                         v21->m_Items[v23],
                         (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( (AppendSkillTitle & 1) != 0 )
    {
      if ( !idList )
        goto LABEL_99;
      if ( v23 >= LODWORD(idList->max_length) )
        goto LABEL_102;
      if ( !lvList )
        goto LABEL_99;
      if ( v23 >= LODWORD(lvList->max_length) )
        goto LABEL_102;
      v27 = idList->m_Items[v23];
      if ( v27 >= 1 )
      {
        if ( !v22 )
          goto LABEL_99;
        AppendSkillTitle = DataMasterBase_object__object__int___TryGetEntity(
                             v22,
                             &entity,
                             v27,
                             (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( (AppendSkillTitle & 1) == 0 )
          return;
        if ( !titleList )
          goto LABEL_99;
        if ( v23 >= LODWORD(titleList->max_length) )
          goto LABEL_102;
        if ( !explanationList )
          goto LABEL_99;
        if ( v23 >= LODWORD(explanationList->max_length) )
          goto LABEL_102;
        if ( !releaseStateList )
          goto LABEL_99;
        if ( v23 >= LODWORD(releaseStateList->max_length) )
LABEL_102:
          sub_1C372BC(AppendSkillTitle);
        AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
        if ( !AppendSkillTitle )
          goto LABEL_99;
        v28 = titleList->m_Items[v23];
        v29 = explanationList->m_Items[v23];
        v30 = releaseStateList->m_Items[v23];
        AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                      (UnityEngine_GameObject_o *)AppendSkillTitle,
                                      0);
        if ( !AppendSkillTitle )
          goto LABEL_99;
        if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)AppendSkillTitle, 0) <= v24 )
        {
          v32 = (Il2CppObject *)this->fields.AppendSkillInfoPrefab;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v33 = v22;
          AppendSkillTitle = (__int64)UnityEngine_Object__Instantiate_object_(
                                        v32,
                                        (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v31 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !this->fields.AppendSkillListParent )
            goto LABEL_99;
          v34 = (UnityEngine_Transform_o *)AppendSkillTitle;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(this->fields.AppendSkillListParent, 0);
          if ( !v34 )
            goto LABEL_99;
          UnityEngine_Transform__set_parent(v34, (UnityEngine_Transform_o *)AppendSkillTitle, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v52.fields.y = -v25;
          v52.fields.x = 0.0;
          v52.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v52, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          v35 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4C3C926 )
          {
            AppendSkillTitle = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
            byte_4C3C926 = 1;
          }
          if ( !v35 )
            goto LABEL_99;
          UnityEngine_Transform__set_localScale(v35, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          v36 = (UnityEngine_Transform_o *)AppendSkillTitle;
          if ( !byte_4C3C927 )
          {
            AppendSkillTitle = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
            byte_4C3C927 = 1;
          }
          if ( !v36 )
            goto LABEL_99;
          UnityEngine_Transform__set_localRotation(
            v36,
            UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
            0);
          v22 = v33;
          v19 = v42;
        }
        else
        {
          AppendSkillTitle = (__int64)this->fields.AppendSkillListParent;
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(
                                        (UnityEngine_GameObject_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_Transform__GetChild(
                                        (UnityEngine_Transform_o *)AppendSkillTitle,
                                        v24,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          AppendSkillTitle = (__int64)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)AppendSkillTitle,
                                        0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v31 = (UnityEngine_GameObject_o *)AppendSkillTitle;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)AppendSkillTitle, 1, 0);
          AppendSkillTitle = (__int64)UnityEngine_GameObject__get_transform(v31, 0);
          if ( !AppendSkillTitle )
            goto LABEL_99;
          v51.fields.y = -v25;
          v51.fields.x = 0.0;
          v51.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)AppendSkillTitle, v51, 0);
        }
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             v31,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        AppendSkillTitle = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( (AppendSkillTitle & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_99;
          BattleServantConfSkillComponent__SetItem(
            (BattleServantConfSkillComponent_o *)Component_object,
            v24 + 1,
            v27,
            v28,
            v29,
            v30,
            v38,
            v39);
        }
        else if ( !Component_object )
        {
          goto LABEL_99;
        }
        monitor = Component_object[4].monitor;
        if ( !monitor )
          goto LABEL_99;
        v25 = v25 + (float)((float)(monitor[43] - HIDWORD(Component_object[5].klass)) + 110.0);
        ++v24;
      }
    }
    v21 = idList;
    ++v23;
    if ( !idList )
      goto LABEL_99;
  }
  this->fields.AppendSkillOffset = -(float)(v25 + 1.0);
}


bool BattleServantConfConponent__SetAtlas(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  AssetData_o *AssetStorage; // x0
  Il2CppObject *Object_object__51154888; // x20
  char v5; // w21
  Il2CppObject *Component_object; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C46617 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3087/*"Battle/Common"*/);
    sub_1C37058(&StringLiteral_3107/*"BattleAssetUIAtlas"*/);
    byte_4C46617 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_3087/*"Battle/Common"*/, 0);
  if ( !AssetStorage )
    goto LABEL_12;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              AssetStorage,
                              (System_String_o *)StringLiteral_3107/*"BattleAssetUIAtlas"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  AssetStorage = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_object__51154888, 0, 0);
  v5 = (char)AssetStorage;
  if ( ((unsigned __int8)AssetStorage & 1) != 0 )
  {
    if ( Object_object__51154888 )
    {
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Object_object__51154888,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
      this->fields.BattleAssetUIAtlas = (struct UIAtlas_o *)Component_object;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.BattleAssetUIAtlas, (int32_t)Component_object, v7, v8);
      return v5 & 1;
    }
LABEL_12:
    sub_1C372B4(AssetStorage);
  }
  return v5 & 1;
}


void BattleServantConfConponent__SetAttribute(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *attributeLabel; // x20
  UILabel_o *mPanel; // x0
  const MethodInfo *v5; // x2
  struct BattleServantData_o *bsvtData; // x8
  struct ServantEntity_o *svtdata; // x8
  bool v8; // w20
  bool IsHideAttribute; // w0
  UnityEngine_Object_o *attributeObj; // x22
  bool v11; // w21
  bool v12; // w0
  UnityEngine_Object_o *AbillityScrollView; // x20
  struct UIScrollView_o *v14; // x8
  UnityEngine_Object_o *npRoot; // x20
  int v16; // w8
  UnityEngine_Object_o *v17; // x21
  struct UIScrollView_o *v18; // x8
  UnityEngine_Object_o *v19; // x21
  int v20; // w8
  float v21; // s8
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v23; // x8
  struct UIScrollView_o *v24; // x8
  struct UIProgressBar_o *verticalScrollBar; // x8
  struct UIScrollView_o *v26; // x8
  struct UIProgressBar_o *v27; // x8
  float v28; // s8
  UnityEngine_GameObject_o *v29; // x0
  struct UIScrollView_o *v30; // x8
  struct UIScrollView_o *v31; // x8
  struct UIProgressBar_o *v32; // x8
  struct UIScrollView_o *v33; // x8
  struct UIProgressBar_o *v34; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x3
  int32_t v38; // w24
  int32_t v39; // w23
  int32_t HideStateSubAttribute; // w21
  System_Collections_Generic_List_object__o *v41; // x22
  System_String_o *OverwritePolicy; // x25
  System_String_o *IsNullOrEmpty; // x0
  const MethodInfo *v44; // x3
  System_String_o *v45; // x0
  System_String_o *v46; // x25
  System_String_o *HideStr; // x24
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_String_o *OverwritePersonality; // x24
  System_String_o *v55; // x0
  const MethodInfo *v56; // x3
  System_String_o *v57; // x0
  System_String_o *v58; // x24
  System_String_o *v59; // x23
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x23
  System_String_o *v68; // x22
  System_String_o *OverwriteSubAttribute; // x24
  System_String_o *Attri; // x0
  const MethodInfo *v71; // x3
  System_String_o *v72; // x0
  System_String_o *v73; // x20
  System_String_o *v74; // x20
  UILabel_o *v75; // x19
  System_String_o *v76; // x0
  Il2CppObject *v77; // x1
  bool v78; // w0
  bool v79; // w20
  System_String_o *v80; // x0
  int v81; // [xsp+Ch] [xbp-54h] BYREF
  int32_t personality[2]; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C4661B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_11664/*"SERVANT_PERSONALITY_"*/);
    sub_1C37058(&StringLiteral_11578/*"SERVANT_ATTRIBUTE_SPLIT"*/);
    sub_1C37058(&StringLiteral_21250/*"line_whiteAlpha_Noblur"*/);
    sub_1C37058(&StringLiteral_12006/*"SERVANT_SUB_ATTRIBUTE_"*/);
    sub_1C37058(&StringLiteral_11574/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/);
    sub_1C37058(&StringLiteral_11575/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/);
    sub_1C37058(&StringLiteral_11665/*"SERVANT_POLICY_"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_11573/*"SERVANT_ATTRIBUTE_FORMAT"*/);
    byte_4C4661B = 1;
  }
  *(_QWORD *)personality = 0;
  v81 = 0;
  attributeLabel = (UnityEngine_Object_o *)this->fields.attributeLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(attributeLabel, 0, 0) )
  {
    mPanel = this->fields.attributeLabel;
    if ( !mPanel )
      goto LABEL_137;
    UILabel__set_text(mPanel, string_TypeInfo->static_fields->Empty, 0);
    bsvtData = this->fields.bsvtData;
    if ( !bsvtData )
      goto LABEL_137;
    svtdata = bsvtData->fields.svtdata;
    if ( !svtdata )
      goto LABEL_137;
    v8 = svtdata->fields.type == 5 || (unsigned int)(svtdata->fields.type - 1) < 2;
    IsHideAttribute = BattleServantConfConponent__IsHideAttribute(this, v8, v5);
    attributeObj = (UnityEngine_Object_o *)this->fields.attributeObj;
    v11 = IsHideAttribute;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Inequality(attributeObj, 0, 0);
    if ( v11 )
    {
      if ( v12 )
      {
        mPanel = (UILabel_o *)this->fields.attributeObj;
        if ( !mPanel )
          goto LABEL_137;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
      }
      AbillityScrollView = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(AbillityScrollView, 0, 0);
      if ( ((unsigned __int8)mPanel & 1) == 0 )
        goto LABEL_53;
      v14 = this->fields.AbillityScrollView;
      if ( !v14 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v14->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
        goto LABEL_53;
      if ( !this->fields.isEquip )
        goto LABEL_42;
      npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(npRoot, 0, 0) )
      {
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v16 = 1110966272;
      }
      else
      {
LABEL_42:
        mPanel = (UILabel_o *)this->fields.AbillityScrollView;
        if ( !mPanel )
          goto LABEL_137;
        v16 = -1034158080;
      }
      v21 = *(float *)&v16;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      GameObjectExtensions__SetLocalPositionY(gameObject, v21, 0);
      v23 = this->fields.AbillityScrollView;
      if ( v23 )
      {
        mPanel = (UILabel_o *)v23->fields.mPanel;
        if ( mPanel )
        {
          ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
            mPanel,
            mPanel->klass->vtable._18_SetRect.method,
            0.0,
            -127.0,
            670.0,
            460.0);
          GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -227.0, 0);
          v24 = this->fields.AbillityScrollView;
          if ( v24 )
          {
            verticalScrollBar = v24->fields.verticalScrollBar;
            if ( verticalScrollBar )
            {
              mPanel = (UILabel_o *)verticalScrollBar->fields.mBG;
              if ( mPanel )
              {
                UIWidget__set_height((UIWidget_o *)mPanel, 448, 0);
                v26 = this->fields.AbillityScrollView;
                if ( v26 )
                {
                  v27 = v26->fields.verticalScrollBar;
                  if ( v27 )
                  {
                    mPanel = (UILabel_o *)v27->fields.mFG;
                    if ( mPanel )
                    {
                      UIWidget__set_height((UIWidget_o *)mPanel, 460, 0);
LABEL_53:
                      mPanel = (UILabel_o *)this->fields.buffListView;
                      if ( mPanel )
                      {
                        BattleViewBufflistComponent__UpdateBuffListScrollView(
                          (BattleViewBufflistComponent_o *)mPanel,
                          1,
                          0);
                        mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
                        if ( mPanel )
                        {
                          mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)mPanel,
                                                  0);
                          if ( mPanel )
                          {
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 0, 0);
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
      sub_1C372B4(mPanel);
    }
    if ( v12 )
    {
      mPanel = (UILabel_o *)this->fields.attributeObj;
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
    }
    v17 = (UnityEngine_Object_o *)this->fields.AbillityScrollView;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mPanel = (UILabel_o *)UnityEngine_Object__op_Inequality(v17, 0, 0);
    if ( ((unsigned __int8)mPanel & 1) != 0 )
    {
      v18 = this->fields.AbillityScrollView;
      if ( !v18 )
        goto LABEL_137;
      mPanel = (UILabel_o *)v18->fields.mPanel;
      if ( !mPanel )
        goto LABEL_137;
      if ( UIPanel__get_height((UIPanel_o *)mPanel, 0) > 430.0 )
      {
        if ( !this->fields.isEquip )
          goto LABEL_57;
        v19 = (UnityEngine_Object_o *)this->fields.npRoot;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v19, 0, 0) )
        {
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v20 = 1110966272;
        }
        else
        {
LABEL_57:
          mPanel = (UILabel_o *)this->fields.AbillityScrollView;
          if ( !mPanel )
            goto LABEL_137;
          v20 = -1034158080;
        }
        v28 = *(float *)&v20;
        v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
        GameObjectExtensions__SetLocalPositionY(v29, v28, 0);
        v30 = this->fields.AbillityScrollView;
        if ( !v30 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v30->fields.mPanel;
        if ( !mPanel )
          goto LABEL_137;
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *, float, float, float, float))mPanel->klass->vtable._18_SetRect.methodPtr)(
          mPanel,
          mPanel->klass->vtable._18_SetRect.method,
          0.0,
          -127.0,
          670.0,
          430.0);
        GameObjectExtensions__SetLocalPositionY(this->fields.abillityScrollBarObject, -238.0, 0);
        v31 = this->fields.AbillityScrollView;
        if ( !v31 )
          goto LABEL_137;
        v32 = v31->fields.verticalScrollBar;
        if ( !v32 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v32->fields.mBG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
        v33 = this->fields.AbillityScrollView;
        if ( !v33 )
          goto LABEL_137;
        v34 = v33->fields.verticalScrollBar;
        if ( !v34 )
          goto LABEL_137;
        mPanel = (UILabel_o *)v34->fields.mFG;
        if ( !mPanel )
          goto LABEL_137;
        UIWidget__set_height((UIWidget_o *)mPanel, 430, 0);
      }
    }
    mPanel = (UILabel_o *)this->fields.buffListView;
    if ( !mPanel )
      goto LABEL_137;
    BattleViewBufflistComponent__UpdateBuffListScrollView((BattleViewBufflistComponent_o *)mPanel, 0, 0);
    BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v36) )
    {
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mPanel, 0);
      if ( !mPanel )
        goto LABEL_137;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mPanel, 1, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_atlas((UISprite_o *)mPanel, this->fields.BattleAssetUIAtlas, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      UISprite__set_spriteName((UISprite_o *)mPanel, (System_String_o *)StringLiteral_21250/*"line_whiteAlpha_Noblur"*/, 0);
      mPanel = (UILabel_o *)this->fields.attributeBaseSprite;
      if ( !mPanel )
        goto LABEL_137;
      ((void (__fastcall *)(UILabel_o *, __int64, const char *))mPanel->klass[1]._1.name)(
        mPanel,
        1,
        mPanel->klass[1]._1.namespaze);
      BattleServantConfConponent__GetAttributeValue(this, &personality[1], personality, v37);
      mPanel = (UILabel_o *)this->fields.bsvtData;
      if ( !mPanel )
        goto LABEL_137;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePolicy((BattleServantData_o *)mPanel, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v38 = (int)mPanel;
      mPanel = (UILabel_o *)BattleServantData__GetHideStatePersonality(this->fields.bsvtData, 0);
      if ( !this->fields.bsvtData )
        goto LABEL_137;
      v39 = (int)mPanel;
      HideStateSubAttribute = BattleServantData__GetHideStateSubAttribute(this->fields.bsvtData, 0);
      v41 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v41,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( v38 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePolicy = BattleServantData__GetOverwritePolicy((BattleServantData_o *)mPanel, 0);
        IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(OverwritePolicy, 0);
        if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
        {
          if ( v8 && (personality[1] | v38) == 0 )
            v38 = 2;
          if ( personality[1] )
          {
            v45 = System_Int32__ToString((int32_t)&personality[1], 0);
            v46 = System_String__Concat_63561656((System_String_o *)StringLiteral_11665/*"SERVANT_POLICY_"*/, v45, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            IsNullOrEmpty = LocalizationManager__Get(v46, 0);
            OverwritePolicy = IsNullOrEmpty;
          }
        }
        HideStr = BattleServantConfConponent__GetHideStr(
                    (BattleServantConfConponent_o *)IsNullOrEmpty,
                    v38,
                    OverwritePolicy,
                    v44);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(HideStr, 0);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_137;
          items = v41->fields._items;
          v51 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !items )
            goto LABEL_137;
          size = v41->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)HideStr,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &items->obj.klass + size;
            v41->fields._size = size + 1;
            v53[4] = (Il2CppClass *)HideStr;
            sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)HideStr, v48, v49);
          }
        }
      }
      if ( v39 != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwritePersonality = BattleServantData__GetOverwritePersonality((BattleServantData_o *)mPanel, 0);
        v55 = (System_String_o *)System_String__IsNullOrEmpty(OverwritePersonality, 0);
        if ( ((unsigned __int8)v55 & 1) != 0 )
        {
          if ( v8 && (personality[0] | v39) == 0 )
            v39 = 2;
          if ( personality[0] )
          {
            v57 = System_Int32__ToString((int32_t)personality, 0);
            v58 = System_String__Concat_63561656((System_String_o *)StringLiteral_11664/*"SERVANT_PERSONALITY_"*/, v57, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v55 = LocalizationManager__Get(v58, 0);
            OverwritePersonality = v55;
          }
        }
        v59 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)v55,
                v39,
                OverwritePersonality,
                v56);
        mPanel = (UILabel_o *)System_String__IsNullOrEmpty(v59, 0);
        if ( ((unsigned __int8)mPanel & 1) == 0 )
        {
          if ( !v41 )
            goto LABEL_137;
          v62 = v41->fields._items;
          v63 = Method_System_Collections_Generic_List_string__Add__;
          ++v41->fields._version;
          if ( !v62 )
            goto LABEL_137;
          v64 = v41->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v41,
              (Il2CppObject *)v59,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v41->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)v59;
            sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v59, v60, v61);
          }
        }
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v66 = LocalizationManager__Get((System_String_o *)StringLiteral_11578/*"SERVANT_ATTRIBUTE_SPLIT"*/, 0);
      v67 = System_String__Join_63604232(v66, (System_Collections_Generic_IEnumerable_string__o *)v41, 0);
      v68 = (System_String_o *)StringLiteral_1/*""*/;
      if ( HideStateSubAttribute != 3 )
      {
        mPanel = (UILabel_o *)this->fields.bsvtData;
        if ( !mPanel )
          goto LABEL_137;
        OverwriteSubAttribute = BattleServantData__GetOverwriteSubAttribute((BattleServantData_o *)mPanel, 0);
        Attri = (System_String_o *)System_String__IsNullOrEmpty(OverwriteSubAttribute, 0);
        if ( ((unsigned __int8)Attri & 1) != 0 )
        {
          mPanel = (UILabel_o *)this->fields.bsvtData;
          if ( !mPanel )
            goto LABEL_137;
          Attri = (System_String_o *)BattleServantData__getAttri((BattleServantData_o *)mPanel, 0);
          if ( v8 && ((unsigned int)Attri | HideStateSubAttribute) == 0 )
            HideStateSubAttribute = 2;
          v81 = (int)Attri;
          if ( (_DWORD)Attri )
          {
            v72 = System_Int32__ToString((int32_t)&v81, 0);
            v73 = System_String__Concat_63561656((System_String_o *)StringLiteral_12006/*"SERVANT_SUB_ATTRIBUTE_"*/, v72, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            Attri = LocalizationManager__Get(v73, 0);
            OverwriteSubAttribute = Attri;
          }
        }
        v74 = BattleServantConfConponent__GetHideStr(
                (BattleServantConfConponent_o *)Attri,
                HideStateSubAttribute,
                OverwriteSubAttribute,
                v71);
        if ( !System_String__IsNullOrEmpty(v74, 0) )
          v68 = v74;
      }
      if ( System_String__IsNullOrEmpty(v67, 0) )
      {
        v75 = this->fields.attributeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11575/*"SERVANT_ATTRIBUTE_FORMAT_SUB_ATTRIBUTE"*/, 0);
        v77 = (Il2CppObject *)v68;
LABEL_132:
        mPanel = (UILabel_o *)System_String__Format(v76, v77, 0);
        if ( !v75 )
          goto LABEL_137;
LABEL_133:
        UILabel__set_text(v75, (System_String_o *)mPanel, 0);
        return;
      }
      v78 = System_String__IsNullOrEmpty(v68, 0);
      v75 = this->fields.attributeLabel;
      v79 = v78;
      if ( LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        if ( v78 )
        {
LABEL_131:
          v76 = LocalizationManager__Get((System_String_o *)StringLiteral_11574/*"SERVANT_ATTRIBUTE_FORMAT_ATTRIBUTE"*/, 0);
          v77 = (Il2CppObject *)v67;
          goto LABEL_132;
        }
      }
      else
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        if ( v79 )
          goto LABEL_131;
      }
      v80 = LocalizationManager__Get((System_String_o *)StringLiteral_11573/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0);
      mPanel = (UILabel_o *)System_String__Format_63602948(v80, (Il2CppObject *)v67, (Il2CppObject *)v68, 0);
      if ( !v75 )
        goto LABEL_137;
      goto LABEL_133;
    }
  }
}


void BattleServantConfConponent__SetClassBoardSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSkillObj; // x21
  const MethodInfo *v6; // x2
  struct BattleServantClassBoardSkillEffectListComponent_o *v7; // x0
  struct BattleServantData_o *bsvtData; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v13; // x8

  if ( (byte_4C46619 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21535/*"menu_txt_class_score"*/);
    byte_4C46619 = 1;
  }
  classBoardSkillObj = (UnityEngine_Object_o *)this->fields.classBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(classBoardSkillObj, 0, 0) )
  {
    v7 = this->fields.classBoardSkillObj;
    if ( !v7 )
      goto LABEL_18;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)v7,
      0,
      v6);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData
      && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills, 0) )
    {
      BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0) || BattleServantConfConponent__SetAtlas(this, v10) )
      {
        v7 = this->fields.classBoardSkillObj;
        if ( v7 )
        {
          ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))v7->klass->vtable._5_SetSkillTitle.methodPtr)(
            v7,
            this->fields.BattleAssetUIAtlas,
            StringLiteral_21535/*"menu_txt_class_score"*/,
            v7->klass->vtable._5_SetSkillTitle.method);
          v7 = this->fields.classBoardSkillObj;
          if ( v7 )
          {
            v7 = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                               v7,
                                                                               this->fields.bsvtData,
                                                                               battleInfoData,
                                                                               0,
                                                                               v11);
            v13 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.classBoardSkillObj;
            if ( v13 )
            {
              BattleServantConfWindowPassiveSkillListComponent__SetActive(v13, (unsigned __int8)v7 & 1, v12);
              return;
            }
          }
        }
LABEL_18:
        sub_1C372B4(v7);
      }
    }
  }
}


void BattleServantConfConponent__SetClassSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *ClassSkillObj; // x21
  __int64 bsvtData; // x0
  UnityEngine_Object_o *ClassSkillListParent; // x21
  UnityEngine_Object_o *ClassSkillInfoPrefab; // x21
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v10; // x1
  struct BattleServantData_o *v11; // x8
  __int64 v12; // x21
  __int64 v13; // x22
  int32_t v14; // w0
  struct BattleServantData_o *v15; // x8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t userSvtId; // x1
  __int128 v18; // q1
  BattleUserServantData_o *UserServantFromID; // x21
  System_Collections_Generic_IEnumerable_T__o *v20; // x22
  System_Collections_Generic_List_int__o *v21; // x20
  BattleServantData_o *v22; // x22
  System_Collections_ICollection_o *v23; // x21
  const MethodInfo *v24; // x2
  int32_t v25; // w21
  Il2CppObject *Master_object; // x21
  Il2CppObject *v27; // x23
  const MethodInfo *v28; // x2
  int32_t v29; // w25
  int32_t v30; // w26
  float v31; // s8
  int32_t v32; // w29
  System_String_o *v33; // x27
  System_String_o *Detail_42880244; // x22
  UnityEngine_GameObject_o *v35; // x24
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x23
  UnityEngine_Transform_o *v38; // x23
  UnityEngine_Transform_o *v39; // x23
  UnityEngine_Transform_o *v40; // x23
  Il2CppObject *Component_object; // x24
  int32_t v42; // w6
  const MethodInfo *v43; // x7
  _DWORD *monitor; // x8
  Il2CppObject *v45; // [xsp+8h] [xbp-D8h]
  System_String_o *str1; // [xsp+10h] [xbp-D0h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+18h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v48; // [xsp+20h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+40h] [xbp-A0h]
  SkillLvEntity_o *v50; // [xsp+68h] [xbp-78h] BYREF
  Il2CppObject *entity; // [xsp+78h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16
  UnityEngine_Vector3_o v53; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4660B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__InsertRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&StringLiteral_20635/*"img_txt_classskill"*/);
    sub_1C37058(&StringLiteral_10100/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/);
    byte_4C4660B = 1;
  }
  entity = 0;
  v50 = 0;
  ClassSkillObj = (UnityEngine_Object_o *)this->fields.ClassSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(ClassSkillObj, 0, 0) )
  {
    bsvtData = (__int64)this->fields.ClassSkillObj;
    if ( !bsvtData )
      goto LABEL_54;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
  }
  if ( battleInfoData )
  {
    ClassSkillListParent = (UnityEngine_Object_o *)this->fields.ClassSkillListParent;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(ClassSkillListParent, 0, 0) && this->fields.bsvtData )
    {
      ClassSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.ClassSkillInfoPrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(ClassSkillInfoPrefab, 0, 0) )
      {
        bsvtData = (__int64)this->fields.bsvtData;
        if ( !bsvtData )
          goto LABEL_54;
        if ( !BattleServantData__IsHideClassSkillNpcFollower((BattleServantData_o *)bsvtData, 0) )
        {
          this->fields.ClassSkillOffset = 0.0;
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, v10) )
          {
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_atlas((UISprite_o *)bsvtData, this->fields.BattleAssetUIAtlas, 0);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            UISprite__set_spriteName((UISprite_o *)bsvtData, (System_String_o *)StringLiteral_20635/*"img_txt_classskill"*/, 0);
            bsvtData = (__int64)this->fields.ClassSkillTitle;
            if ( !bsvtData )
              goto LABEL_54;
            bsvtData = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)bsvtData + 840LL))(
                         bsvtData,
                         *(_QWORD *)(*(_QWORD *)bsvtData + 848LL));
            v11 = this->fields.bsvtData;
            if ( !v11 )
              goto LABEL_54;
            v13 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
            v12 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v52.fields.currentCryptoKey = v13;
            *(_QWORD *)&v52.fields.fakeValue = v12;
            v14 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v52, 0);
            bsvtData = BattleInfoData__IsUseNewTransformLogic(battleInfoData, v14, 0);
            v15 = this->fields.bsvtData;
            if ( !v15 )
              goto LABEL_54;
            if ( (bsvtData & 1) != 0 )
            {
              deckSvt = v15->fields.deckSvt;
              if ( !deckSvt )
                goto LABEL_54;
              userSvtId = deckSvt->fields.userSvtId;
            }
            else
            {
              v18 = *(_OWORD *)&v15->fields.userSvtId.fields.fakeValue;
              *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&v15->fields.userSvtId.fields.currentCryptoKey;
              *(_OWORD *)&v49.fields.fakeValue = v18;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v48 = v49;
              userSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v48, 0);
            }
            UserServantFromID = BattleInfoData__getUserServantFromID(battleInfoData, userSvtId, 0);
            if ( UserServantFromID )
            {
              bsvtData = (__int64)this->fields.bsvtData;
              if ( !bsvtData )
                goto LABEL_54;
              v20 = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                                     (BattleServantData_o *)bsvtData,
                                                                     UserServantFromID->fields.classPassive,
                                                                     1,
                                                                     0);
              v21 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_58218708(
                v21,
                v20,
                (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
              v22 = this->fields.bsvtData;
              bsvtData = (__int64)BattleUserServantData__getAddPassiveSkill(UserServantFromID, 0);
              if ( !v22 )
                goto LABEL_54;
              v23 = (System_Collections_ICollection_o *)BattleServantData__FilterDisplayingSkillIdArray(
                                                          v22,
                                                          (System_Int32_array *)bsvtData,
                                                          0,
                                                          0);
              bsvtData = BasicHelper__IsNullOrEmpty(v23, 0);
              if ( (bsvtData & 1) != 0 )
              {
                if ( !v21 )
                  goto LABEL_54;
              }
              else
              {
                bsvtData = BattleServantConfConponent__GetSpecialPassiveSkillStartIndex(this, v21, v24);
                if ( !v21 )
                  goto LABEL_54;
                System_Collections_Generic_List_int___InsertRange(
                  v21,
                  bsvtData,
                  (System_Collections_Generic_IEnumerable_T__o *)v23,
                  (const MethodInfo_3786FB8 *)Method_System_Collections_Generic_List_int__InsertRange__);
              }
              if ( v21->fields._size >= 1 )
              {
                bsvtData = (__int64)this->fields.ClassSkillObj;
                if ( bsvtData )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                  bsvtData = (__int64)this->fields.ClassSkillListParent;
                  if ( bsvtData )
                  {
                    v25 = 0;
                    while ( 1 )
                    {
                      bsvtData = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)bsvtData, 0);
                      if ( !bsvtData )
                        goto LABEL_54;
                      if ( v25 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) )
                        break;
                      bsvtData = (__int64)this->fields.ClassSkillListParent;
                      if ( bsvtData )
                      {
                        bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                              (UnityEngine_GameObject_o *)bsvtData,
                                              0);
                        if ( bsvtData )
                        {
                          bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                (UnityEngine_Transform_o *)bsvtData,
                                                v25,
                                                0);
                          if ( bsvtData )
                          {
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0);
                            if ( bsvtData )
                            {
                              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                              bsvtData = (__int64)this->fields.ClassSkillListParent;
                              ++v25;
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
                    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
                    entity = 0;
                    v27 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
                    v50 = 0;
                    source = (System_Collections_Generic_IEnumerable_TSource__o *)BattleServantConfConponent__GetNeedAddAnnotationSkillIds(
                                                                                    this,
                                                                                    (System_Collections_Generic_IEnumerable_int__o *)v21,
                                                                                    v28);
                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                    str1 = LocalizationManager__Get((System_String_o *)StringLiteral_10100/*"PARTY_ORGANIZATION_BONUS_SKILL_DUPLICATE_ANNOTATION"*/, 0);
                    if ( v21->fields._size >= 1 )
                    {
                      v29 = 0;
                      v30 = 0;
                      v31 = 0.0;
                      v45 = Master_object;
                      while ( 1 )
                      {
                        bsvtData = System_Collections_Generic_List_int___get_Item(
                                     v21,
                                     v30,
                                     (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
                        if ( (int)bsvtData >= 1 )
                        {
                          if ( !Master_object )
                            goto LABEL_54;
                          v32 = bsvtData;
                          bsvtData = DataMasterBase_object__object__int___TryGetEntity(
                                       (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                       &entity,
                                       bsvtData,
                                       (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
                          if ( (bsvtData & 1) == 0 )
                            return;
                          if ( !v27 )
                            goto LABEL_54;
                          if ( !SkillLvMaster__TryGetEntity((SkillLvMaster_o *)v27, &v50, v32, 1, 0) )
                            return;
                          bsvtData = (__int64)entity;
                          if ( !entity )
                            goto LABEL_54;
                          bsvtData = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                          if ( !v50 )
                            goto LABEL_54;
                          v33 = (System_String_o *)bsvtData;
                          Detail_42880244 = SkillLvEntity__getDetail_42880244(v50, 1, 0, 0);
                          if ( System_Linq_Enumerable__Contains_int_(
                                 source,
                                 v32,
                                 (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
                          {
                            Detail_42880244 = System_String__Concat_63561656(Detail_42880244, str1, 0);
                          }
                          bsvtData = (__int64)this->fields.ClassSkillListParent;
                          if ( !bsvtData )
                            goto LABEL_54;
                          bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                (UnityEngine_GameObject_o *)bsvtData,
                                                0);
                          if ( !bsvtData )
                            goto LABEL_54;
                          if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)bsvtData, 0) <= v29 )
                          {
                            v36 = v27;
                            v37 = (Il2CppObject *)this->fields.ClassSkillInfoPrefab;
                            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                            bsvtData = (__int64)UnityEngine_Object__Instantiate_object_(
                                                  v37,
                                                  (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !this->fields.ClassSkillListParent )
                              goto LABEL_54;
                            v38 = (UnityEngine_Transform_o *)bsvtData;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  this->fields.ClassSkillListParent,
                                                  0);
                            if ( !v38 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_parent(v38, (UnityEngine_Transform_o *)bsvtData, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v54.fields.y = -v31;
                            v54.fields.x = 0.0;
                            v54.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v54, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            v39 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4C3C926 )
                            {
                              bsvtData = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                              byte_4C3C926 = 1;
                            }
                            if ( !v39 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localScale(
                              v39,
                              UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
                              0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            v40 = (UnityEngine_Transform_o *)bsvtData;
                            if ( !byte_4C3C927 )
                            {
                              bsvtData = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
                              byte_4C3C927 = 1;
                            }
                            if ( !v40 )
                              goto LABEL_54;
                            UnityEngine_Transform__set_localRotation(
                              v40,
                              UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                              0);
                            v27 = v36;
                            Master_object = v45;
                          }
                          else
                          {
                            bsvtData = (__int64)this->fields.ClassSkillListParent;
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(
                                                  (UnityEngine_GameObject_o *)bsvtData,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Transform__GetChild(
                                                  (UnityEngine_Transform_o *)bsvtData,
                                                  v29,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            bsvtData = (__int64)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)bsvtData,
                                                  0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v35 = (UnityEngine_GameObject_o *)bsvtData;
                            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                            bsvtData = (__int64)UnityEngine_GameObject__get_transform(v35, 0);
                            if ( !bsvtData )
                              goto LABEL_54;
                            v53.fields.y = -v31;
                            v53.fields.x = 0.0;
                            v53.fields.z = 0.0;
                            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)bsvtData, v53, 0);
                          }
                          Component_object = UnityEngine_GameObject__GetComponent_object_(
                                               v35,
                                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantConfSkillComponent___);
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          bsvtData = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
                          if ( (bsvtData & 1) != 0 )
                          {
                            if ( !Component_object )
                              goto LABEL_54;
                            BattleServantConfSkillComponent__SetItem(
                              (BattleServantConfSkillComponent_o *)Component_object,
                              v30 + 1,
                              v32,
                              v33,
                              Detail_42880244,
                              1,
                              v42,
                              v43);
                          }
                          else if ( !Component_object )
                          {
                            goto LABEL_54;
                          }
                          monitor = Component_object[4].monitor;
                          if ( !monitor )
                            goto LABEL_54;
                          ++v29;
                          v31 = v31 + (float)((float)(monitor[43] - HIDWORD(Component_object[5].klass)) + 110.0);
                        }
                        if ( ++v30 >= v21->fields._size )
                          goto LABEL_103;
                      }
                    }
                    v31 = 0.0;
LABEL_103:
                    this->fields.ClassSkillOffset = -(float)(v31 + 1.0);
                    return;
                  }
                }
LABEL_54:
                sub_1C372B4(bsvtData);
              }
            }
          }
        }
      }
    }
  }
}


void BattleServantConfConponent__SetCommandCard(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  BattleServantData_o *bsvtData; // x0
  System_Int32_array *CommandCodeIdsEX; // x0
  struct BattleCommandComponent_array *CommandCardList; // x8
  System_Int32_array *v6; // x20
  unsigned __int64 v7; // x21
  int32_t *m_Items; // x23
  unsigned __int64 max_length_low; // x9
  BattleCommandComponent_o *v10; // x22
  const MethodInfo *v11; // x2
  struct BattleCommandData_o *data; // x8
  Il2CppObject *component; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4660F & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_TryGetComponent_UIWidget___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4660F = 1;
  }
  component = 0;
  bsvtData = this->fields.bsvtData;
  if ( bsvtData && this->fields.CommandCardList )
  {
    CommandCodeIdsEX = BattleServantData__GetCommandCodeIdsEX(bsvtData, 0);
    CommandCardList = this->fields.CommandCardList;
    this->fields.isCommandCardUnderIcon = 0;
    if ( !CommandCardList )
LABEL_23:
      sub_1C372B4(CommandCodeIdsEX);
    v6 = CommandCodeIdsEX;
    v7 = 0;
    m_Items = CommandCodeIdsEX->m_Items;
    while ( 1 )
    {
      max_length_low = LODWORD(CommandCardList->max_length);
      if ( (__int64)v7 >= (int)max_length_low )
        break;
      if ( v7 >= max_length_low )
        goto LABEL_25;
      v10 = CommandCardList->m_Items[v7];
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v10, 0, 0);
      if ( ((unsigned __int8)CommandCodeIdsEX & 1) == 0 )
      {
        if ( !v10 )
          goto LABEL_23;
        BattleCommandComponent__Initialize(v10, 0);
        v10->fields.isCodeTextureView = 1;
        BattleCommandComponent__setData_46433048(v10, this->fields.bsvtData, v7, 0);
        CommandCodeIdsEX = (System_Int32_array *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)this,
                                                   &component,
                                                   (const MethodInfo_30DF524 *)Method_UnityEngine_Component_TryGetComponent_UIWidget___);
        if ( ((unsigned __int8)CommandCodeIdsEX & 1) != 0 )
        {
          if ( !component )
            goto LABEL_23;
          BattleCommandComponent__setDepth(v10, LODWORD(component[11].klass) + 1, 0);
        }
        BattleCommandComponent__SetDownloadEventSprite(v10, 0);
        if ( !v6 )
          goto LABEL_23;
        if ( v7 >= LODWORD(v6->max_length)
          || (BattleCommandComponent__SetCommandCodeView_46437144(v10, m_Items[v7], 0), v7 >= LODWORD(v6->max_length))
          || (BattleCommandComponent__SetLockInfo(v10, m_Items[v7] == -1, 0),
              BattleServantConfConponent__SetCommandCardTypeChangeBuff(this, v10, v11),
              BattleCommandComponent__HidePowerUpValueLabelActive(v10, this->fields.isCommandCardUnderIcon, 0),
              BattleCommandComponent__ResetCardBuffIconAlphaAnim(v10, 0),
              BattleCommandComponent__ChangeSpecialCommandCardBuffIcon(v10, 0),
              v7 >= LODWORD(v6->max_length)) )
        {
LABEL_25:
          sub_1C372BC(CommandCodeIdsEX);
        }
        data = v10->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.commandCodeId = m_Items[v7];
        BattleCommandComponent__UpdateCommandCardEffect(v10, 0);
        BattleCommandComponent__ChangeCardEffectMaskForInside(v10, 0);
      }
      CommandCardList = this->fields.CommandCardList;
      ++v7;
      if ( !CommandCardList )
        goto LABEL_23;
    }
  }
}


void BattleServantConfConponent__SetCommandCardTypeChangeBuff(
        BattleServantConfConponent_o *this,
        BattleCommandComponent_o *commandCard,
        const MethodInfo *method)
{
  BattleCommandData_o *data; // x21
  int32_t addOrder; // w3
  int32_t v7; // w2
  BattleBuffData_BuffData_o *v8; // x0
  BattleBuffData_BuffData_o *v9; // x22
  int32_t turn; // w8
  int v11; // w8
  bool v12; // w20

  if ( !commandCard )
    sub_1C372B4(this);
  data = commandCard->fields.data;
  if ( data && !BattleCommandData__isTreasureDvc(commandCard->fields.data, 0) )
  {
    v8 = BattleCommandData__GetCommandCardTypeChangeBuff(data, 0);
    if ( v8 )
    {
      v9 = v8;
      LOBYTE(v8) = BattleCommandData__IsCommandCardTypeChanged(data, 0);
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
  BattleCommandComponent__SetCommandCardTypeChange(commandCard, (unsigned __int8)v8 & 1, v7, addOrder, 0);
  BattleCommandComponent__SetActiveSpecialCardBuffIcon(commandCard, v12, 0);
}


void BattleServantConfConponent__SetCommandCodeSkillList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *CommandCodeListParent; // x20
  UnityEngine_Object_o *CommandCodeInfoPrefab; // x20
  __int64 transform; // x0
  int32_t v6; // w20
  System_Int32_array *CommandCodeIds; // x24
  BattleServantConfConponent___c_c *v8; // x8
  System_Predicate_int__o *_9__85_0; // x21
  Il2CppObject *v10; // x22
  struct BattleServantConfConponent___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int v14; // w21
  il2cpp_array_size_t max_length; // x8
  int32_t v16; // w22
  unsigned __int64 v17; // x29
  float v18; // s8
  int32_t v19; // w25
  System_Int32_array *v20; // x8
  unsigned __int64 v21; // x24
  unsigned __int64 max_length_low; // x9
  UnityEngine_GameObject_o *v23; // x26
  Il2CppObject *v24; // x26
  UnityEngine_Transform_o *v25; // x27
  UnityEngine_Transform_o *v26; // x27
  UnityEngine_Transform_o *v27; // x27
  Il2CppObject *Component_object; // x26
  float v29; // s0
  UILabel_o *NoCommandCodeLabel; // x19
  System_Int32_array *v31; // [xsp+0h] [xbp-90h]
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // [xsp+8h] [xbp-88h]
  System_String_array *explanationList; // [xsp+10h] [xbp-80h] BYREF
  System_String_array *titleList; // [xsp+18h] [xbp-78h] BYREF
  System_Int32_array *idList; // [xsp+28h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C46610 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_FindIndex_int___);
    sub_1C37058(&Method_DataManager_GetMasterData_CommandCodeMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1C37058(&Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&System_Predicate_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__);
    sub_1C37058(&BattleServantConfConponent___c_TypeInfo);
    sub_1C37058(&StringLiteral_2741/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/);
    byte_4C46610 = 1;
  }
  idList = 0;
  explanationList = 0;
  titleList = 0;
  CommandCodeListParent = (UnityEngine_Object_o *)this->fields.CommandCodeListParent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeListParent, 0, 0) || !this->fields.bsvtData )
    return;
  CommandCodeInfoPrefab = (UnityEngine_Object_o *)this->fields.CommandCodeInfoPrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(CommandCodeInfoPrefab, 0, 0) )
    return;
  transform = (__int64)this->fields.CommandCodeInfoPrefab;
  if ( !transform )
    goto LABEL_90;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)this->fields.CommandCodeListParent;
  if ( !transform )
    goto LABEL_90;
  v6 = 0;
  while ( 1 )
  {
    transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
    if ( !transform )
      goto LABEL_90;
    if ( v6 >= UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) )
      break;
    transform = (__int64)this->fields.CommandCodeListParent;
    if ( transform )
    {
      transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
      if ( transform )
      {
        transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v6, 0);
        if ( transform )
        {
          transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( transform )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
            transform = (__int64)this->fields.CommandCodeListParent;
            ++v6;
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
  CommandCodeIds = BattleServantData__GetCommandCodeIds((BattleServantData_o *)transform, 0);
  v8 = BattleServantConfConponent___c_TypeInfo;
  if ( !BattleServantConfConponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleServantConfConponent___c_TypeInfo);
    v8 = BattleServantConfConponent___c_TypeInfo;
  }
  _9__85_0 = v8->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleServantConfConponent___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v8->static_fields->__9;
    _9__85_0 = (System_Predicate_int__o *)sub_1C372A4(System_Predicate_int__TypeInfo);
    System_Predicate_int____ctor(
      _9__85_0,
      v10,
      Method_BattleServantConfConponent___c__SetCommandCodeSkillList_b__85_0__,
      0);
    static_fields = BattleServantConfConponent___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = _9__85_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v12, v13);
  }
  transform = System_Array__FindIndex_int_(
                CommandCodeIds,
                (System_Predicate_T__o *)_9__85_0,
                (const MethodInfo_31ED814 *)Method_System_Array_FindIndex_int___);
  if ( !this->fields.NoCommandCodeLabel
    || (v14 = transform,
        (transform = (__int64)UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)this->fields.NoCommandCodeLabel,
                                0)) == 0) )
  {
LABEL_90:
    sub_1C372B4(transform);
  }
  if ( v14 == -1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
    NoCommandCodeLabel = this->fields.NoCommandCodeLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_2741/*"BATTLE_DIALOG_DETAIL_NOCOMMANDCODE"*/, 0);
    if ( NoCommandCodeLabel )
    {
      UILabel__set_text(NoCommandCodeLabel, (System_String_o *)transform, 0);
      return;
    }
    goto LABEL_90;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)transform,
                                                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_CommandCodeMaster___);
  transform = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !transform )
    goto LABEL_90;
  transform = (__int64)DataManager__GetMasterData_object_(
                         (DataManager_o *)transform,
                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_SkillMaster___);
  if ( !CommandCodeIds )
    goto LABEL_90;
  max_length = CommandCodeIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = 0;
    v17 = 0;
    v18 = 0.0;
    v31 = CommandCodeIds;
    do
    {
      if ( v17 >= (unsigned int)max_length )
LABEL_91:
        sub_1C372BC(transform);
      v19 = CommandCodeIds->m_Items[v17];
      if ( v19 >= 1 )
      {
        transform = (__int64)MasterData_object;
        if ( !MasterData_object )
          goto LABEL_90;
        transform = (__int64)DataMasterBase_object__object__int___GetEntity(
                               MasterData_object,
                               v19,
                               (const MethodInfo_33A10A0 *)Method_DataMasterBase_CommandCodeMaster__CommandCodeEntity__int__GetEntity__);
        if ( transform )
        {
          CommandCodeEntity__GetSkillInfo((CommandCodeEntity_o *)transform, &idList, &titleList, &explanationList, 0);
          v20 = idList;
          if ( !idList )
            goto LABEL_90;
          v21 = 0;
          while ( 1 )
          {
            max_length_low = LODWORD(v20->max_length);
            if ( (__int64)v21 >= (int)max_length_low )
              break;
            if ( v21 >= max_length_low )
              goto LABEL_91;
            if ( v20->m_Items[v21] >= 1 )
            {
              transform = (__int64)this->fields.CommandCodeListParent;
              if ( !transform )
                goto LABEL_90;
              transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
              if ( !transform )
                goto LABEL_90;
              if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)transform, 0) <= v16 )
              {
                v24 = (Il2CppObject *)this->fields.CommandCodeInfoPrefab;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                transform = (__int64)UnityEngine_Object__Instantiate_object_(
                                       v24,
                                       (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
                if ( !transform )
                  goto LABEL_90;
                v23 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v23, 0);
                if ( !this->fields.CommandCodeListParent )
                  goto LABEL_90;
                v25 = (UnityEngine_Transform_o *)transform;
                transform = (__int64)UnityEngine_GameObject__get_transform(this->fields.CommandCodeListParent, 0);
                if ( !v25 )
                  goto LABEL_90;
                UnityEngine_Transform__set_parent(v25, (UnityEngine_Transform_o *)transform, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v23, 0);
                if ( !transform )
                  goto LABEL_90;
                v36.fields.x = 0.0;
                v36.fields.z = 0.0;
                v36.fields.y = v18;
                UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)transform, v36, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v23, 0);
                v26 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4C3C926 )
                {
                  transform = sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                  byte_4C3C926 = 1;
                }
                if ( !v26 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localScale(v26, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
                transform = (__int64)UnityEngine_GameObject__get_transform(v23, 0);
                v27 = (UnityEngine_Transform_o *)transform;
                if ( !byte_4C3C927 )
                {
                  transform = sub_1C37058(&UnityEngine_Quaternion_TypeInfo);
                  byte_4C3C927 = 1;
                }
                if ( !v27 )
                  goto LABEL_90;
                UnityEngine_Transform__set_localRotation(
                  v27,
                  UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
                  0);
              }
              else
              {
                transform = (__int64)this->fields.CommandCodeListParent;
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)transform, 0);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Transform__GetChild((UnityEngine_Transform_o *)transform, v16, 0);
                if ( !transform )
                  goto LABEL_90;
                transform = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
                if ( !transform )
                  goto LABEL_90;
                v23 = (UnityEngine_GameObject_o *)transform;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0);
              }
              Component_object = UnityEngine_GameObject__GetComponent_object_(
                                   v23,
                                   (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CommandCodeSkillInfo___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              transform = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
              if ( (transform & 1) != 0 )
              {
                if ( !idList )
                  goto LABEL_90;
                if ( v21 >= LODWORD(idList->max_length) )
                  goto LABEL_91;
                if ( !titleList )
                  goto LABEL_90;
                if ( v21 >= LODWORD(titleList->max_length) )
                  goto LABEL_91;
                if ( !explanationList )
                  goto LABEL_90;
                if ( v21 >= LODWORD(explanationList->max_length) )
                  goto LABEL_91;
                if ( !Component_object )
                  goto LABEL_90;
                CommandCodeSkillInfo__Set(
                  (CommandCodeSkillInfo_o *)Component_object,
                  v19,
                  idList->m_Items[v21],
                  titleList->m_Items[v21],
                  explanationList->m_Items[v21],
                  v21 == 0,
                  0);
              }
              v20 = idList;
              v29 = -100.0;
              if ( !v21 )
                v29 = -126.0;
              v18 = v18 + v29;
              ++v16;
            }
            ++v21;
            if ( !v20 )
              goto LABEL_90;
          }
          CommandCodeIds = v31;
        }
      }
      LODWORD(max_length) = CommandCodeIds->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)max_length );
  }
}


void BattleServantConfConponent__SetGrandClassBoardSkillList(
        BattleServantConfConponent_o *this,
        BattleInfoData_o *battleInfoData,
        const MethodInfo *method)
{
  UnityEngine_Object_o *grandClassBoardSkillObj; // x21
  const MethodInfo *v6; // x2
  struct BattleServantClassBoardSkillEffectListComponent_o *IsNullOrEmpty; // x0
  struct BattleServantData_o *bsvtData; // x8
  struct BattleServantData_o *v9; // x8
  UnityEngine_Object_o *BattleAssetUIAtlas; // x21
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x2
  BattleServantConfWindowPassiveSkillListComponent_o *v14; // x8

  if ( (byte_4C4661A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_21536/*"menu_txt_grand_class_score"*/);
    byte_4C4661A = 1;
  }
  grandClassBoardSkillObj = (UnityEngine_Object_o *)this->fields.grandClassBoardSkillObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(grandClassBoardSkillObj, 0, 0) )
  {
    IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
    if ( !IsNullOrEmpty )
      goto LABEL_20;
    BattleServantConfWindowPassiveSkillListComponent__SetActive(
      (BattleServantConfWindowPassiveSkillListComponent_o *)IsNullOrEmpty,
      0,
      v6);
    bsvtData = this->fields.bsvtData;
    if ( bsvtData )
    {
      IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BasicHelper__IsNullOrEmpty(
                                                                                    (System_Collections_ICollection_o *)bsvtData->fields.classBoardAddPassiveSkills,
                                                                                    0);
      if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
      {
        v9 = this->fields.bsvtData;
        if ( !v9 )
          goto LABEL_20;
        if ( v9->fields._IsUseGrandBoard_k__BackingField )
        {
          BattleAssetUIAtlas = (UnityEngine_Object_o *)this->fields.BattleAssetUIAtlas;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Equality(BattleAssetUIAtlas, 0, 0)
            || BattleServantConfConponent__SetAtlas(this, v11) )
          {
            IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
            if ( IsNullOrEmpty )
            {
              ((void (__fastcall *)(struct BattleServantClassBoardSkillEffectListComponent_o *, struct UIAtlas_o *, __int64, const MethodInfo *))IsNullOrEmpty->klass->vtable._5_SetSkillTitle.methodPtr)(
                IsNullOrEmpty,
                this->fields.BattleAssetUIAtlas,
                StringLiteral_21536/*"menu_txt_grand_class_score"*/,
                IsNullOrEmpty->klass->vtable._5_SetSkillTitle.method);
              IsNullOrEmpty = this->fields.grandClassBoardSkillObj;
              if ( IsNullOrEmpty )
              {
                IsNullOrEmpty = (struct BattleServantClassBoardSkillEffectListComponent_o *)BattleServantClassBoardSkillEffectListComponent__SetClassBoardPassiveSkillInfoList(
                                                                                              IsNullOrEmpty,
                                                                                              this->fields.bsvtData,
                                                                                              battleInfoData,
                                                                                              1,
                                                                                              v12);
                v14 = (BattleServantConfWindowPassiveSkillListComponent_o *)this->fields.grandClassBoardSkillObj;
                if ( v14 )
                {
                  BattleServantConfWindowPassiveSkillListComponent__SetActive(
                    v14,
                    (unsigned __int8)IsNullOrEmpty & 1,
                    v13);
                  return;
                }
              }
            }
LABEL_20:
            sub_1C372B4(IsNullOrEmpty);
          }
        }
      }
    }
  }
}


System_Collections_IEnumerator_o *BattleServantConfConponent__StartOpenTab(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C46613 & 1) == 0 )
  {
    sub_1C37058(&BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
    byte_4C46613 = 1;
  }
  v3 = sub_1C372A4(BattleServantConfConponent__StartOpenTab_d__92_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


System_String_o *BattleServantConfConponent__get_closeBtnPath(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *v4; // x19
  __int64 *v5; // x8

  if ( (byte_4C46618 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_18019/*"close"*/);
    sub_1C37058(&StringLiteral_14556/*"Top/close"*/);
    byte_4C46618 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C372B4(0);
  v4 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)StringLiteral_14556/*"Top/close"*/, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v4, 0, 0) )
    v5 = &StringLiteral_14556/*"Top/close"*/;
  else
    v5 = &StringLiteral_18019/*"close"*/;
  return (System_String_o *)*v5;
}


BattleServantData_o *BattleServantConfConponent__get_svtData(
        BattleServantConfConponent_o *this,
        const MethodInfo *method)
{
  return this->fields.bsvtData;
}


bool BattleServantConfConponent__isTargetSvt(
        BattleServantConfConponent_o *this,
        int32_t uniqueId,
        const MethodInfo *method)
{
  struct BattleServantData_o *bsvtData; // x8

  bsvtData = this->fields.bsvtData;
  return bsvtData && bsvtData->fields.uniqueId == uniqueId;
}


void BattleServantConfConponent__setCallBackPushClose(
        BattleServantConfConponent_o *this,
        BattleServantConfConponent_CloseButtonCallBack_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callback_close = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callback_close, (int32_t)callback, (int32_t)method, v3);
}


void BattleServantConfConponent__setConfData(
        BattleServantConfConponent_o *this,
        BattleServantData_o *inbsvtData,
        bool isShowBuffIcon,
        BattleInfoData_o *battleInfoData,
        bool isNpc,
        const MethodInfo *method)
{
  BattleInfoData_o *battle_info; // x24
  BattleServantData_o **p_bsvtData; // x21
  UnityEngine_Object_o *data; // x24
  BattleServantData_o *bsvtData; // x0
  struct BattleData_o *v14; // x8
  UnityEngine_Object_o *shortNameLabel; // x25
  UILabel_o *v16; // x25
  UnityEngine_Object_o *atklabel; // x25
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  struct BattleServantData_o *v24; // x8
  UILabel_o *v25; // x25
  Il2CppObject *v26; // x0
  struct BattleServantData_o *v27; // x8
  BattleViewBufflistComponent_o *buffListView; // x25
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x2
  const MethodInfo *v32; // x1
  const MethodInfo *v33; // x2
  const MethodInfo *v34; // x2
  const MethodInfo *v35; // x1
  int32_t v36; // w23
  UnityEngine_Object_o *equipObj; // x24
  UnityEngine_GameObject_o *v38; // x24
  float LocalPositionY; // s0
  UnityEngine_Object_o *npRoot; // x24
  bool v41; // w0
  TreasureDvcLvEntity_o *v42; // x24
  UIWidget_o *npdetail; // x25
  UILabel_o *v44; // x25
  System_String_o *DetalShort_42989840; // x0
  UILabel_o *maxNp; // x25
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  Il2CppObject *v53; // x0
  struct UILabel_o *v54; // x8
  UILabel_o *nplevel; // x24
  System_String_o *v56; // x1
  UnityEngine_Object_o *v57; // x24
  bool IsNpDetailActive; // w24
  UITexture_o *facetex; // x23
  int32_t v60; // w24
  int32_t v61; // w25
  int32_t CommandDispLimitCount; // w26
  struct UITexture_o *Manager__loadCommandCard; // x0
  char v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_Object_o *havenotTdLabel; // x22
  bool v67; // w1
  System_String_o **p_nexttpturn; // x8
  UnityEngine_Object_o *unknownNp; // x25
  UILabel_o *v70; // x25
  System_String_o *v71; // x1
  UnityEngine_Object_o *commandCard; // x24
  BattleCommandData_o *v73; // x24
  UnityEngine_Object_o *npSpeedChange; // x22
  const MethodInfo *v75; // x2
  UnityEngine_Object_o *classIcon; // x21
  const MethodInfo *v77; // x1
  ServantClassIconComponent_o *v78; // x21
  int32_t IconSpriteScaledWidth; // w0
  UnityEngine_Object_o *v80; // x21
  int32_t v81; // w20
  Il2CppObject *Component_object; // x20
  const MethodInfo *v83; // x1
  int v84; // [xsp+Ch] [xbp-64h] BYREF
  int32_t atk; // [xsp+18h] [xbp-58h] BYREF
  int32_t lv; // [xsp+1Ch] [xbp-54h] BYREF

  battle_info = battleInfoData;
  if ( (byte_4C46608 & 1) == 0 )
  {
    sub_1C37058(&BattleCommandData_TypeInfo);
    sub_1C37058(&BattleServantConfConponent_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIAnchor___);
    sub_1C37058(&Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_9365/*"NP_UNKNOWN"*/);
    sub_1C37058(&StringLiteral_25052/*"{0:#,0}"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_8970/*"Max {0}%"*/);
    byte_4C46608 = 1;
  }
  lv = 0;
  this->fields.bsvtData = inbsvtData;
  p_bsvtData = &this->fields.bsvtData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.bsvtData,
    (int32_t)inbsvtData,
    isShowBuffIcon,
    (const MethodInfo *)battleInfoData);
  if ( this->fields.bsvtData )
  {
    if ( !battle_info )
    {
      data = (UnityEngine_Object_o *)this->fields.data;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(data, 0, 0);
      battle_info = 0;
      if ( ((unsigned __int8)bsvtData & 1) != 0 )
      {
        v14 = this->fields.data;
        if ( !v14 )
          goto LABEL_144;
        battle_info = v14->fields.battle_info;
      }
    }
    shortNameLabel = (UnityEngine_Object_o *)this->fields.shortNameLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(shortNameLabel, 0, 0) )
    {
      bsvtData = this->fields.bsvtData;
      if ( !bsvtData )
        goto LABEL_144;
      v16 = this->fields.shortNameLabel;
      bsvtData = (BattleServantData_o *)BattleServantData__getServantShortName(bsvtData, 0);
      if ( !v16 )
        goto LABEL_144;
      UILabel__set_text(v16, (System_String_o *)bsvtData, 0);
      CommonFunction__ScalingLabelWidth(this->fields.shortNameLabel, 270, 0);
    }
    atklabel = (UnityEngine_Object_o *)this->fields.atklabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(atklabel, 0, 0);
    if ( ((unsigned __int8)bsvtData & 1) != 0 )
    {
      v24 = this->fields.bsvtData;
      if ( !v24 )
        goto LABEL_144;
      v25 = this->fields.atklabel;
      atk = v24->fields.atk;
      v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &atk, v18, v19, v20, v21, v22, v23);
      bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_25052/*"{0:#,0}"*/, v26, 0);
      if ( !v25 )
        goto LABEL_144;
      UILabel__set_text(v25, (System_String_o *)bsvtData, 0);
    }
    bsvtData = (BattleServantData_o *)this->fields.buffListView;
    if ( bsvtData )
    {
      BattleViewBufflistComponent__setClassIcon((BattleViewBufflistComponent_o *)bsvtData, this->fields.bsvtData, 0);
      v27 = this->fields.bsvtData;
      if ( v27 )
      {
        bsvtData = (BattleServantData_o *)v27->fields.buffData;
        if ( bsvtData )
        {
          buffListView = this->fields.buffListView;
          bsvtData = (BattleServantData_o *)BattleBuffData__getShowServantConf((BattleBuffData_o *)bsvtData, 0);
          if ( buffListView )
          {
            BattleViewBufflistComponent__setBuffList(buffListView, (BattleBuffData_ShowBuffData_array *)bsvtData, 0);
            BattleServantConfConponent__setEquipList(this, v29);
            BattleServantConfConponent__SetClassSkillList(this, battle_info, v30);
            BattleServantConfConponent__SetAppendSkillList(this, battle_info, v31);
            if ( !isNpc )
            {
              BattleServantConfConponent__SetClassBoardSkillList(this, battle_info, v33);
              BattleServantConfConponent__SetGrandClassBoardSkillList(this, battle_info, v34);
            }
            BattleServantConfConponent__SetCommandCard(this, v32);
            BattleServantConfConponent__SetCommandCodeSkillList(this, v35);
            bsvtData = this->fields.bsvtData;
            if ( bsvtData )
            {
              bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcId(bsvtData, 1, 0, 0);
              if ( *p_bsvtData )
              {
                v36 = (int)bsvtData;
                lv = (*p_bsvtData)->fields.treasuredvcLevel;
                equipObj = (UnityEngine_Object_o *)this->fields.equipObj;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(equipObj, 0, 0) )
                {
                  v38 = this->fields.equipObj;
                  LocalPositionY = GameObjectExtensions__GetLocalPositionY(v38, 0);
                  GameObjectExtensions__SetLocalPositionY(v38, LocalPositionY - (float)this->fields.adjustHeight, 0);
                }
                this->fields.adjustHeight = 0;
                npRoot = (UnityEngine_Object_o *)this->fields.npRoot;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v41 = UnityEngine_Object__op_Inequality(npRoot, 0, 0);
                if ( v36 < 1 )
                {
                  if ( v41 )
                  {
                    bsvtData = (BattleServantData_o *)this->fields.npRoot;
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                    bsvtData = (BattleServantData_o *)this->fields.commandCard;
                    if ( !bsvtData )
                      goto LABEL_144;
                    bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)bsvtData,
                                                        0);
                    if ( !bsvtData )
                      goto LABEL_144;
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 0, 0);
                  }
                  facetex = this->fields.facetex;
                  bsvtData = this->fields.bsvtData;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)BattleServantData__GetCommandImageSvtId(bsvtData, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v60 = (int)bsvtData;
                  bsvtData = (BattleServantData_o *)BattleServantData__getDispLimitCount(*p_bsvtData, 1, 0);
                  if ( !*p_bsvtData )
                    goto LABEL_144;
                  v61 = (int)bsvtData;
                  CommandDispLimitCount = BattleServantData__getCommandDispLimitCount(*p_bsvtData, 0);
                  if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  Manager__loadCommandCard = ServantAssetLoadManager__loadCommandCard(
                                               facetex,
                                               v60,
                                               v61,
                                               CommandDispLimitCount,
                                               0);
                  this->fields.facetex = Manager__loadCommandCard;
                  sub_1C36FFC(
                    (CGThumbnailListItem_o *)&this->fields.facetex,
                    (int32_t)Manager__loadCommandCard,
                    v64,
                    v65);
                  havenotTdLabel = (UnityEngine_Object_o *)this->fields.havenotTdLabel;
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  if ( !UnityEngine_Object__op_Inequality(havenotTdLabel, 0, 0) )
                    goto LABEL_119;
                  bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                  if ( !bsvtData )
                    goto LABEL_144;
                  bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                      (UnityEngine_Component_o *)bsvtData,
                                                      0);
                  if ( !bsvtData )
                    goto LABEL_144;
                  v67 = 1;
                  goto LABEL_118;
                }
                if ( !v41 )
                  goto LABEL_119;
                bsvtData = (BattleServantData_o *)this->fields.npRoot;
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)this->fields.commandCard;
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)bsvtData,
                                                    0);
                if ( !bsvtData )
                  goto LABEL_144;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, 1, 0);
                bsvtData = (BattleServantData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)DataManager__GetMasterData_object_(
                                                    (DataManager_o *)bsvtData,
                                                    (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TreasureDvcLvMaster___);
                if ( !bsvtData )
                  goto LABEL_144;
                bsvtData = (BattleServantData_o *)TreasureDvcLvMaster__GetEntity(
                                                    (TreasureDvcLvMaster_o *)bsvtData,
                                                    v36,
                                                    lv,
                                                    0);
                if ( !this->fields.maxNp )
                  goto LABEL_144;
                v42 = (TreasureDvcLvEntity_o *)bsvtData;
                UILabel__set_text(this->fields.maxNp, (System_String_o *)StringLiteral_1/*""*/, 0);
                if ( v42 )
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
                    0);
                  v44 = this->fields.npdetail;
                  DetalShort_42989840 = TreasureDvcLvEntity__getDetalShort_42989840(v42, lv, 0);
                  WrapControlText__textBBCodeAdjust(
                    v44,
                    DetalShort_42989840,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    BattleServantConfConponent_TypeInfo->static_fields->DETAIL_FONT_SIZE,
                    0);
                  maxNp = this->fields.maxNp;
                  v84 = 100 * v42->fields.gaugeCount;
                  v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v84, v47, v48, v49, v50, v51, v52);
                  bsvtData = (BattleServantData_o *)System_String__Format((System_String_o *)StringLiteral_8970/*"Max {0}%"*/, v53, 0);
                  if ( !maxNp )
                    goto LABEL_144;
                  UILabel__set_text(maxNp, (System_String_o *)bsvtData, 0);
                  v54 = this->fields.npdetail;
                  if ( !v54 )
                    goto LABEL_144;
                  if ( BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT < v54->fields.mHeight )
                  {
                    if ( !BattleServantConfConponent_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleServantConfConponent_TypeInfo);
                      v54 = this->fields.npdetail;
                      if ( !v54 )
                        goto LABEL_144;
                    }
                    this->fields.adjustHeight = BattleServantConfConponent_TypeInfo->static_fields->DETAIL_LABEL_DEFAULT_HEIGHT
                                              - v54->fields.mHeight;
                  }
                }
                nplevel = this->fields.nplevel;
                bsvtData = (BattleServantData_o *)System_Int32__ToString((int32_t)&lv, 0);
                if ( !nplevel )
                  goto LABEL_144;
                if ( bsvtData )
                  v56 = (System_String_o *)bsvtData;
                else
                  v56 = (System_String_o *)StringLiteral_1/*""*/;
                UILabel__set_text(nplevel, v56, 0);
                v57 = (UnityEngine_Object_o *)this->fields.data;
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Inequality(v57, 0, 0) )
                {
                  bsvtData = (BattleServantData_o *)this->fields.data;
                  if ( !bsvtData )
                    goto LABEL_144;
                  IsNpDetailActive = BattleData__IsNpDetailActive((BattleData_o *)bsvtData, *p_bsvtData, 1, 0);
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
                                                      0);
                  if ( bsvtData )
                  {
                    bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                        (UnityEngine_Transform_o *)bsvtData,
                                                        0);
                    if ( bsvtData )
                    {
                      bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)bsvtData,
                                                          0);
                      if ( bsvtData )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, IsNpDetailActive, 0);
                        bsvtData = (BattleServantData_o *)this->fields.nplevel;
                        if ( bsvtData )
                        {
                          bsvtData = (BattleServantData_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)bsvtData,
                                                              0);
                          if ( bsvtData )
                          {
                            bsvtData = (BattleServantData_o *)UnityEngine_Transform__get_parent(
                                                                (UnityEngine_Transform_o *)bsvtData,
                                                                0);
                            if ( bsvtData )
                            {
                              bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)bsvtData,
                                                                  0);
                              if ( bsvtData )
                              {
                                UnityEngine_GameObject__SetActive(
                                  (UnityEngine_GameObject_o *)bsvtData,
                                  IsNpDetailActive,
                                  0);
                                bsvtData = (BattleServantData_o *)this->fields.npdetail;
                                if ( IsNpDetailActive )
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_nexttpturn = (System_String_o **)&bsvtData->fields.nexttpturn;
                                }
                                else
                                {
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  p_nexttpturn = (System_String_o **)&StringLiteral_1/*""*/;
                                }
                                UILabel__set_text((UILabel_o *)bsvtData, *p_nexttpturn, 0);
                                unknownNp = (UnityEngine_Object_o *)this->fields.unknownNp;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(unknownNp, 0, 0);
                                if ( ((unsigned __int8)bsvtData & 1) != 0 )
                                {
                                  v70 = this->fields.unknownNp;
                                  if ( IsNpDetailActive )
                                  {
                                    v71 = (System_String_o *)StringLiteral_1/*""*/;
                                  }
                                  else
                                  {
                                    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                                      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
                                    bsvtData = (BattleServantData_o *)LocalizationManager__Get(
                                                                        (System_String_o *)StringLiteral_9365/*"NP_UNKNOWN"*/,
                                                                        0);
                                    v71 = (System_String_o *)bsvtData;
                                  }
                                  if ( !v70 )
                                    goto LABEL_144;
                                  UILabel__set_text(v70, v71, 0);
                                }
                                commandCard = (UnityEngine_Object_o *)this->fields.commandCard;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(commandCard, 0, 0) )
                                {
                                  v73 = (BattleCommandData_o *)sub_1C372A4(BattleCommandData_TypeInfo);
                                  BattleCommandData___ctor(v73, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getTreasureDvcCardId_46295320(
                                                                      bsvtData,
                                                                      0,
                                                                      0);
                                  if ( !v73 )
                                    goto LABEL_144;
                                  v73->fields._type = (int)bsvtData;
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v73->fields.svtlimit = BattleServantData__getCommandDispLimitCount(bsvtData, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v73->fields._loadsvtLimit = BattleServantData__getDispLimitCount(bsvtData, 1, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v73->fields.uniqueId = bsvtData->fields.uniqueId;
                                  v73->fields.svtId = BattleServantData__getSvtId(bsvtData, 0);
                                  bsvtData = *p_bsvtData;
                                  if ( !*p_bsvtData )
                                    goto LABEL_144;
                                  v73->fields.imageSvtId = BattleServantData__GetCommandImageSvtId(bsvtData, 0);
                                  v73->fields.treasureDvc = v36;
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__setData(
                                    (BattleCommandComponent_o *)bsvtData,
                                    v73,
                                    this->fields.bsvtData,
                                    0,
                                    isShowBuffIcon,
                                    0,
                                    1,
                                    0);
                                  bsvtData = (BattleServantData_o *)this->fields.commandCard;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleCommandComponent__SetConfWindowTreasureDeviceErrorMark(
                                    (BattleCommandComponent_o *)bsvtData,
                                    0);
                                }
                                bsvtData = (BattleServantData_o *)this->fields.havenotTdLabel;
                                if ( !bsvtData )
                                  goto LABEL_144;
                                bsvtData = (BattleServantData_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)bsvtData,
                                                                    0);
                                if ( !bsvtData )
                                  goto LABEL_144;
                                v67 = 0;
LABEL_118:
                                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bsvtData, v67, 0);
LABEL_119:
                                npSpeedChange = (UnityEngine_Object_o *)this->fields.npSpeedChange;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                if ( UnityEngine_Object__op_Inequality(npSpeedChange, 0, 0) )
                                {
                                  bsvtData = (BattleServantData_o *)this->fields.npSpeedChange;
                                  if ( !bsvtData )
                                    goto LABEL_144;
                                  BattleServantNPSpeedChangeComponent__SetData(
                                    (BattleServantNPSpeedChangeComponent_o *)bsvtData,
                                    *p_bsvtData,
                                    v75);
                                }
                                classIcon = (UnityEngine_Object_o *)this->fields.classIcon;
                                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(classIcon, 0, 0);
                                if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                  goto LABEL_142;
                                if ( inbsvtData )
                                {
                                  v78 = this->fields.classIcon;
                                  bsvtData = (BattleServantData_o *)BattleServantData__getClassId(inbsvtData, 0, 0);
                                  if ( v78 )
                                  {
                                    ServantClassIconComponent__SetImage(
                                      v78,
                                      (int32_t)bsvtData,
                                      inbsvtData->fields._frameType_k__BackingField,
                                      0,
                                      0,
                                      0,
                                      0);
                                    bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                    if ( bsvtData )
                                    {
                                      IconSpriteScaledWidth = ServantClassIconComponent__GetIconSpriteScaledWidth(
                                                                (ServantClassIconComponent_o *)bsvtData,
                                                                0);
                                      v80 = (UnityEngine_Object_o *)this->fields.shortNameLabel;
                                      v81 = IconSpriteScaledWidth;
                                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                      if ( UnityEngine_Object__op_Inequality(v80, 0, 0) )
                                      {
                                        bsvtData = (BattleServantData_o *)this->fields.shortNameLabel;
                                        if ( !bsvtData )
                                          goto LABEL_144;
                                        if ( bsvtData->fields._iconLimitCount_k__BackingField.fields.fakeValue + v81 >= 270 )
                                          CommonFunction__ScalingLabelWidth((UILabel_o *)bsvtData, 270 - v81, 0);
                                      }
                                      bsvtData = (BattleServantData_o *)this->fields.classIcon;
                                      if ( bsvtData )
                                      {
                                        Component_object = UnityEngine_Component__GetComponent_object_(
                                                             (UnityEngine_Component_o *)bsvtData,
                                                             (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIAnchor___);
                                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                                        bsvtData = (BattleServantData_o *)UnityEngine_Object__op_Inequality(
                                                                            (UnityEngine_Object_o *)Component_object,
                                                                            0,
                                                                            0);
                                        if ( ((unsigned __int8)bsvtData & 1) == 0 )
                                          goto LABEL_142;
                                        if ( Component_object )
                                        {
                                          UnityEngine_Behaviour__set_enabled(
                                            (UnityEngine_Behaviour_o *)Component_object,
                                            1,
                                            0);
LABEL_142:
                                          BattleServantConfConponent__SetAttribute(this, v77);
                                          BattleServantConfConponent__ChangeLayout(this, v83);
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
    sub_1C372B4(bsvtData);
  }
}


void BattleServantConfConponent__setEquipList(BattleServantConfConponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *baseEquipSkillInfoPrefab; // x20
  UnityEngine_Object_o *equipSkillInfoRoot; // x20
  Il2CppObject *Master_object; // x20
  __int64 BattleSkillIdList; // x0
  struct BattleServantData_o *bsvtData; // x8
  struct BattleUserServantData_array *equipList; // x24
  il2cpp_array_size_t max_length; // x8
  BalanceConfig_c **v10; // x26
  const MethodInfo_33A10EC **v11; // x28
  SkillLvMaster_o *v12; // x21
  unsigned __int64 v13; // x25
  float v14; // s8
  Il2CppClass **v15; // x19
  __int64 *v16; // x19
  __int64 v17; // t1
  __int64 v18; // x22
  __int64 v19; // x23
  int v20; // w29
  unsigned __int64 v21; // x19
  float v22; // s9
  int32_t v23; // w24
  int32_t v24; // w25
  const MethodInfo_33A10EC **v25; // x20
  BalanceConfig_c **v26; // x28
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_List_object__o *equipPossessionSkillInfoComponentList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v31; // x10
  __int64 size; // x11
  EquipPossessionSkillInfoComponent_o *v33; // x26
  Il2CppClass **v34; // x0
  BattleServantConfConponent_o *v35; // x21
  System_String_o *v36; // x27
  float v37; // s0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_object__o *v40; // x8
  struct System_Object_array *v41; // x9
  _QWORD *v42; // x10
  __int64 v43; // x11
  __int64 v44; // x1
  Il2CppClass **v45; // x0
  struct BattleUserServantData_array *v46; // [xsp+8h] [xbp-B8h]
  unsigned __int64 v47; // [xsp+10h] [xbp-B0h]
  Il2CppObject *v48; // [xsp+18h] [xbp-A8h]
  SkillLvMaster_o *v49; // [xsp+20h] [xbp-A0h]
  int v50; // [xsp+2Ch] [xbp-94h]
  __int64 v51; // [xsp+38h] [xbp-88h]
  SkillLvEntity_o *v52; // [xsp+40h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-78h] BYREF

  if ( (byte_4C46609 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46609 = 1;
  }
  v52 = 0;
  entity = 0;
  if ( this->fields.bsvtData )
  {
    baseEquipSkillInfoPrefab = (UnityEngine_Object_o *)this->fields.baseEquipSkillInfoPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(baseEquipSkillInfoPrefab, 0, 0) )
    {
      equipSkillInfoRoot = (UnityEngine_Object_o *)this->fields.equipSkillInfoRoot;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Equality(equipSkillInfoRoot, 0, 0) )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
        BattleSkillIdList = (__int64)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
        bsvtData = this->fields.bsvtData;
        this->fields.isEquip = 0;
        if ( !bsvtData )
          goto LABEL_54;
        equipList = bsvtData->fields.equipList;
        if ( !equipList )
          goto LABEL_54;
        max_length = equipList->max_length;
        if ( (int)max_length >= 1 )
        {
          v50 = 0;
          v10 = &BalanceConfig_TypeInfo;
          v11 = (const MethodInfo_33A10EC **)&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__;
          v12 = (SkillLvMaster_o *)BattleSkillIdList;
          v13 = 0;
          v14 = 0.0;
          v48 = Master_object;
          v49 = (SkillLvMaster_o *)BattleSkillIdList;
          v46 = equipList;
          do
          {
            if ( v13 >= (unsigned int)max_length )
LABEL_55:
              sub_1C372BC(BattleSkillIdList);
            v15 = &equipList->obj.klass + v13;
            v17 = (__int64)v15[4];
            v16 = (__int64 *)(v15 + 4);
            BattleSkillIdList = v17;
            if ( v17 )
            {
              BattleSkillIdList = (__int64)BattleUserServantData__getBattleSkillIdList(
                                             (BattleUserServantData_o *)BattleSkillIdList,
                                             0);
              if ( v13 >= LODWORD(equipList->max_length) )
                goto LABEL_55;
              v18 = BattleSkillIdList;
              BattleSkillIdList = *v16;
              if ( !*v16 )
                goto LABEL_54;
              BattleSkillIdList = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)BattleSkillIdList + 408LL))(
                                    BattleSkillIdList,
                                    *(_QWORD *)(*(_QWORD *)BattleSkillIdList + 416LL));
              if ( !v18 )
                goto LABEL_54;
              v47 = v13;
              if ( *(int *)(v18 + 24) < 1 )
              {
                v20 = 0;
                v22 = 0.0;
              }
              else
              {
                v19 = BattleSkillIdList;
                v20 = 0;
                v21 = 0;
                v22 = 0.0;
                v51 = BattleSkillIdList + 32;
                do
                {
                  BattleSkillIdList = (__int64)*v10;
                  if ( !(*v10)->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BattleSkillIdList);
                    BattleSkillIdList = (__int64)*v10;
                  }
                  if ( *(_DWORD *)(*(_QWORD *)(BattleSkillIdList + 184) + 56LL) <= v20 )
                    break;
                  if ( v21 >= *(unsigned int *)(v18 + 24) )
                    goto LABEL_55;
                  if ( !v19 )
                    goto LABEL_54;
                  if ( v21 >= *(unsigned int *)(v19 + 24) )
                    goto LABEL_55;
                  if ( !Master_object )
                    goto LABEL_54;
                  v23 = *(_DWORD *)(v18 + 32 + 4 * v21);
                  v24 = *(_DWORD *)(v51 + 4 * v21);
                  BattleSkillIdList = DataMasterBase_object__object__int___TryGetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                        &entity,
                                        v23,
                                        *v11);
                  if ( (BattleSkillIdList & 1) != 0 )
                  {
                    if ( !v12 )
                      goto LABEL_54;
                    BattleSkillIdList = SkillLvMaster__TryGetEntity(v12, &v52, v23, v24, 0);
                    if ( (BattleSkillIdList & 1) != 0 )
                    {
                      v25 = v11;
                      v26 = v10;
                      BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                                     this->fields.baseEquipSkillInfoPrefab,
                                                     this->fields.equipSkillInfoRoot,
                                                     v20 + v50,
                                                     v14 + v22,
                                                     0);
                      equipPossessionSkillInfoComponentList = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
                      if ( !equipPossessionSkillInfoComponentList )
                        goto LABEL_54;
                      items = equipPossessionSkillInfoComponentList->fields._items;
                      v31 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
                      ++equipPossessionSkillInfoComponentList->fields._version;
                      if ( !items )
                        goto LABEL_54;
                      size = equipPossessionSkillInfoComponentList->fields._size;
                      v33 = (EquipPossessionSkillInfoComponent_o *)BattleSkillIdList;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          equipPossessionSkillInfoComponentList,
                          (Il2CppObject *)BattleSkillIdList,
                          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v34 = &items->obj.klass + size;
                        equipPossessionSkillInfoComponentList->fields._size = size + 1;
                        v34[4] = (Il2CppClass *)v33;
                        sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v27, v28);
                      }
                      BattleSkillIdList = (__int64)entity;
                      if ( !entity )
                        goto LABEL_54;
                      v35 = this;
                      BattleSkillIdList = (__int64)SkillEntity__getName((SkillEntity_o *)entity, 0);
                      if ( !v52 )
                        goto LABEL_54;
                      v36 = (System_String_o *)BattleSkillIdList;
                      BattleSkillIdList = (__int64)SkillLvEntity__getDetail_42880244(v52, v24, 0, 0);
                      if ( !v33 )
                        goto LABEL_54;
                      v37 = EquipPossessionSkillInfoComponent__SetSkill(
                              v33,
                              v23,
                              v36,
                              (System_String_o *)BattleSkillIdList,
                              0);
                      this = v35;
                      v35->fields.isEquip = 1;
                      v10 = v26;
                      v11 = v25;
                      Master_object = v48;
                      v12 = v49;
                      v22 = v22 + v37;
                      ++v20;
                    }
                  }
                  ++v21;
                }
                while ( (__int64)v21 < *(int *)(v18 + 24) );
              }
              equipList = v46;
              v13 = v47;
              v14 = v14 + v22;
              v50 += v20;
            }
            LODWORD(max_length) = equipList->max_length;
            ++v13;
          }
          while ( (__int64)v13 < (int)max_length );
        }
        if ( !this->fields.isEquip )
        {
          BattleSkillIdList = (__int64)EquipPossessionSkillInfoComponent__CreateEquipSkillObj(
                                         this->fields.baseEquipSkillInfoPrefab,
                                         this->fields.equipSkillInfoRoot,
                                         0,
                                         0.0,
                                         0);
          v40 = (System_Collections_Generic_List_object__o *)this->fields.equipPossessionSkillInfoComponentList;
          if ( v40 )
          {
            v41 = v40->fields._items;
            v42 = Method_System_Collections_Generic_List_EquipPossessionSkillInfoComponent__Add__;
            ++v40->fields._version;
            if ( v41 )
            {
              v43 = v40->fields._size;
              v44 = BattleSkillIdList;
              if ( (unsigned int)v43 >= LODWORD(v41->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v40,
                  (Il2CppObject *)BattleSkillIdList,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
              }
              else
              {
                v45 = &v41->obj.klass + v43;
                v40->fields._size = v43 + 1;
                v45[4] = (Il2CppClass *)v44;
                sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), v44, v38, v39);
              }
              return;
            }
          }
LABEL_54:
          sub_1C372B4(BattleSkillIdList);
        }
      }
    }
  }
}


void BattleServantConfConponent_CloseButtonCallBack___ctor(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7F310;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7F2D0;
}


System_IAsyncResult_o *BattleServantConfConponent_CloseButtonCallBack__BeginInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void BattleServantConfConponent_CloseButtonCallBack__EndInvoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleServantConfConponent_CloseButtonCallBack__Invoke(
        BattleServantConfConponent_CloseButtonCallBack_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void BattleServantConfConponent__StartOpenTab_d__92___ctor(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleServantConfConponent__StartOpenTab_d__92__MoveNext(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent__StartOpenTab_d__92_o *v2; // x19
  int32_t _1__state; // w8
  struct BattleServantConfConponent_o *_4__this; // x20
  UnityEngine_Object_o *BattleServantAbilityObj; // x21
  bool v6; // w21
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_4C46626 & 1) == 0 )
  {
    this = (BattleServantConfConponent__StartOpenTab_d__92_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46626 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    if ( !_4__this )
LABEL_17:
      sub_1C372B4(this);
    if ( BattleServantConfConponent__IsLastOpenServantAbility((BattleServantConfConponent_o *)this, method) )
      BattleServantConfConponent__OnClickServantAbility(_4__this, v10);
    else
      BattleServantConfConponent__OnClickServantState(_4__this, v10);
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
  if ( UnityEngine_Object__op_Equality(BattleServantAbilityObj, 0, 0) )
    return 0;
  this = (BattleServantConfConponent__StartOpenTab_d__92_o *)_4__this->fields.BattleServantAbilityObj;
  v6 = 1;
  _4__this->fields.isOpenAfter = 1;
  if ( !this )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v2->fields.__2__current = 0;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C36FFC(p__2__current, 0, v8, v9);
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return v6;
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__92__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_Reset(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleServantConfConponent__StartOpenTab_d__92_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleServantConfConponent__StartOpenTab_d__92__System_Collections_IEnumerator_get_Current(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleServantConfConponent__StartOpenTab_d__92__System_IDisposable_Dispose(
        BattleServantConfConponent__StartOpenTab_d__92_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleServantConfConponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C46624 & 1) == 0 )
  {
    sub_1C37058(&BattleServantConfConponent___c_TypeInfo);
    byte_4C46624 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleServantConfConponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleServantConfConponent___c_TypeInfo->static_fields->__9 = (struct BattleServantConfConponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleServantConfConponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleServantConfConponent___c___ctor(BattleServantConfConponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantConfConponent___c___ChangeLayout_b__79_0(
        BattleServantConfConponent___c_o *this,
        int32_t codeId,
        const MethodInfo *method)
{
  return codeId > 0;
}


int32_t BattleServantConfConponent___c___GetSpecialPassiveSkillStartIndex_b__81_0(
        BattleServantConfConponent___c_o *this,
        ServantPassiveSkillEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.skillId;
}


bool BattleServantConfConponent___c___SetCommandCodeSkillList_b__85_0(
        BattleServantConfConponent___c_o *this,
        int32_t id,
        const MethodInfo *method)
{
  return id > 0;
}


void BattleServantConfConponent___c__DisplayClass81_0___ctor(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleServantConfConponent___c__DisplayClass81_0___GetSpecialPassiveSkillStartIndex_b__1(
        BattleServantConfConponent___c__DisplayClass81_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *passiveIdHashSet; // x0

  if ( (byte_4C46625 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    byte_4C46625 = 1;
  }
  passiveIdHashSet = this->fields.passiveIdHashSet;
  if ( !passiveIdHashSet )
    sub_1C372B4(0);
  return System_Collections_Generic_HashSet_int___Contains(
           passiveIdHashSet,
           x,
           (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
}