void MaterialEventLogListViewItem___ctor(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  GrandQuestFolderBoardItem_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v7 = (GrandQuestFolderBoardItem_o *)this;
  ListViewItem___ctor_44487500((ListViewItem_o *)this, index, 0);
  v7->fields._Name_k__BackingField = (struct System_String_o *)info;
  v7 = (GrandQuestFolderBoardItem_o *)((char *)v7 + 128);
  LODWORD(v7[-1].fields._ClosedMessage_k__BackingField) = kind;
  sub_1C93A78(v7, (int32_t)info, v8, v9, v10, v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
bool MaterialEventLogListViewItem__CheckPlayableMaterial(
        MaterialEventLogListViewItem_o *this,
        int32_t limitCount,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v4; // x20
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x21
  System_String_o *v7; // x0
  struct MaterialEventLogListViewItem_Info_o *v9; // x8
  VoiceMaterialCondMaster_o *v10; // x20
  int32_t svtVoiceId; // w22
  int32_t voicePrefix; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v13; // x23

  v4 = this;
  if ( (byte_4D2BB03 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_1C93AD4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    this = (MaterialEventLogListViewItem_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2BB03 = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(voiceId, 0);
  if ( System_String__IsNullOrEmpty(v7, 0) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v9 = v4->fields._info_k__BackingField;
  if ( !v9 )
    goto LABEL_14;
  v10 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v9->fields.svtVoiceId;
  voicePrefix = v9->fields.voicePrefix;
  v13 = v9->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49689872(
                                             v13,
                                             0);
  if ( !v10 )
LABEL_14:
    sub_1C93D2C(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v10, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0);
}


bool MaterialEventLogListViewItem__IsItemMatchFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((bool (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
           this,
           sort,
           this->klass->vtable._5_IsMatchFilter.method);
}


bool MaterialEventLogListViewItem__IsMatchFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  return !info_k__BackingField
      || !info_k__BackingField->fields.svt_id
      || MaterialEventLogListViewItem__IsMatchServantFilter(this, sort, method);
}


bool MaterialEventLogListViewItem__IsMatchServantFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  FilterKindList_c *v5; // x0
  System_Collections_Generic_List_T__o *ClassGroupFilterKindList; // x0
  ListViewSort_FilterKind_array *v7; // x0
  FilterKindList_c *v8; // x0
  ListViewSort_FilterKind_array *v9; // x0
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v11; // x8
  FilterKindList_c *v12; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v14; // x21
  ListViewSort_FilterKind_array *v15; // x0
  struct MaterialEventLogListViewItem_Info_o *v16; // x8

  if ( (byte_4D2BB05 & 1) == 0 )
  {
    sub_1C93AD4(&FilterKindList_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4D2BB05 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                       sort,
                                                                       v7,
                                                                       0);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v8 = FilterKindList_TypeInfo;
    if ( !FilterKindList_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
      v8 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v8->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_27;
    v9 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                            ClassGroupFilterKindList,
                                            (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                         sort,
                                                                         v9,
                                                                         0);
    if ( ((unsigned __int8)ClassGroupFilterKindList & 1) == 0 )
    {
      info_k__BackingField = this->fields._info_k__BackingField;
      if ( !info_k__BackingField )
        goto LABEL_27;
      if ( !ListViewSort__IsMatchClassFilter(sort, info_k__BackingField->fields.servantEntity, 0) )
        return 0;
    }
  }
  else
  {
    v11 = this->fields._info_k__BackingField;
    if ( !v11 )
      goto LABEL_27;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v11->fields.servantEntity, 0) )
      return 0;
  }
  v12 = FilterKindList_TypeInfo;
  if ( !FilterKindList_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo);
    v12 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v12->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v14 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_3860C5C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v15, 0) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                       sort,
                                                                       v14,
                                                                       0);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v16 = this->fields._info_k__BackingField;
  if ( !v16 )
LABEL_27:
    sub_1C93D2C(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v16->fields.rarity, 0);
}


bool MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  char v12; // w20
  int64_t index; // x8
  int32_t v14; // w1
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4D2BB04 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2BB04 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v12 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
          this,
          sort,
          klass->vtable._5_IsMatchFilter.method);
  if ( (v12 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0;
    this->fields.sortValue0B = 0;
    this->fields.sortValue1 = index;
    v14 = StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)p_sortStr1, v14, v6, v7, v8, v9, v10, v11);
    *((_WORD *)p_sortStr1 + 20) = 0;
    p_sortStr1[2] = 0;
    p_sortStr1[3] = 0;
    p_sortStr1[1] = 0;
  }
  return v12 & 1;
}


int32_t MaterialEventLogListViewItem__get_genderType(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    sub_1C93D2C(this, method);
  return info_k__BackingField->fields.genderType;
}


MaterialEventLogListViewItem_Info_o *MaterialEventLogListViewItem__get_info(
        MaterialEventLogListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._info_k__BackingField;
}


int32_t MaterialEventLogListViewItem__get_kind(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  return this->fields._kind_k__BackingField;
}


void MaterialEventLogListViewItem__set_info(
        MaterialEventLogListViewItem_o *this,
        MaterialEventLogListViewItem_Info_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._info_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._info_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MaterialEventLogListViewItem__set_kind(
        MaterialEventLogListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._kind_k__BackingField = value;
}


void MaterialEventLogListViewItem_Info___ctor(MaterialEventLogListViewItem_Info_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2BB07 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2BB07 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playableLimitCountlist, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


MaterialEventLogListViewItem_Info_o *MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  __int64 *v2; // x21
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  System_String_o *IsNullOrEmpty; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *v13; // x1
  bool v14; // w0
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v29; // x0
  __int64 v30; // x21
  __int64 v31; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct System_String_o *commonString; // x1
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  struct MaterialEventLogListViewItem_o *itm; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 v53; // x1
  System_Collections_Generic_List_int__o *v54; // x0
  __int64 current; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  bool v59; // w0
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  Il2CppObject *v66; // x0
  __int64 *v68; // x0
  const MethodInfo_35F61FC **v69; // x23
  int v70; // w1
  __int64 v71; // x22
  System_Collections_Generic_List_Enumerator_int__o v72; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v73; // [xsp+20h] [xbp-50h] BYREF

  v2 = (__int64 *)&byte_4D2B000;
  if ( (byte_4D2BB06 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_MaterialEventLogListViewItem__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&string_TypeInfo);
    byte_4D2BB06 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  v4 = sub_1C93D20(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v4, v5);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0);
  v13 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0);
    v13 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_34;
  }
  if ( !v4 )
LABEL_33:
    sub_1C93D2C(IsNullOrEmpty, v13);
  *(_QWORD *)(v4 + 16) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
  v14 = System_String__IsNullOrEmpty(this->fields.ruby, 0);
  v13 = 0;
  if ( !v14 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v21 = System_String__Clone(IsNullOrEmpty, 0);
    v13 = v21;
    if ( v21 && (System_String_c *)v21->klass != string_TypeInfo )
      goto LABEL_34;
  }
  *(_QWORD *)(v4 + 24) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v4 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v4 + 68) = *(_QWORD *)&this->fields.flag;
  on_click_act = this->fields.on_click_act;
  if ( on_click_act )
  {
    v29 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, const MethodInfo *))on_click_act->klass->vtable._6_Clone.methodPtr)(
            on_click_act,
            on_click_act->klass->vtable._6_Clone.method);
    if ( v29 )
    {
      v30 = v29;
      v31 = sub_1C93C10(v29, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v31 )
        goto LABEL_17;
      sub_1C940C8(v30);
    }
  }
  v31 = 0;
LABEL_17:
  *(_QWORD *)(v4 + 80) = v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 80), v31, v22, v23, v24, v25, v26, v27);
  voiceId = this->fields.voiceId;
  *(_QWORD *)(v4 + 96) = voiceId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 96), (int32_t)voiceId, v33, v34, v35, v36, v37, v38);
  *(_OWORD *)(v4 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  *(_DWORD *)(v4 + 140) = this->fields.genderType;
  commonString = this->fields.commonString;
  *(_QWORD *)(v4 + 144) = commonString;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 144), (int32_t)commonString, v40, v41, v42, v43, v44, v45);
  itm = this->fields.itm;
  *(_QWORD *)(v4 + 88) = itm;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 88), (int32_t)itm, v47, v48, v49, v50, v51, v52);
  *(_BYTE *)(v4 + 208) = this->fields.isEmptyGalleryFolder;
  *(_BYTE *)(v4 + 209) = this->fields.isGallery;
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  v2 = &Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v73 = v72;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v73,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v54 = *(System_Collections_Generic_List_int__o **)(v4 + 120);
    if ( !v54 )
      sub_1C93D2C(0, v53);
    current = (unsigned int)v73.fields._current;
    items = v54->fields._items;
    v57 = Method_System_Collections_Generic_List_int__Add__;
    ++v54->fields._version;
    if ( !items )
      sub_1C93D2C(v54, current);
    size = v54->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v54,
        current,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v54->fields._size = size + 1;
      items->m_Items[size] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v73,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v59 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0);
    v13 = 0;
    if ( v59 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v66 = System_String__Clone(IsNullOrEmpty, 0);
    v13 = v66;
    if ( !v66 || (System_String_c *)v66->klass == string_TypeInfo )
      break;
LABEL_34:
    v68 = (__int64 *)sub_1C940C8(v13);
    v69 = (const MethodInfo_35F61FC **)v2;
    v2 = v68;
    if ( v70 != 1 )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(&v73, *v69);
      sub_1D77CB0(v2);
    }
    v71 = *(_QWORD *)__cxa_begin_catch(v68);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(&v73, *v69);
    if ( v71 )
      sub_1C93D24(v71);
  }
  *(_QWORD *)(v4 + 128) = v13;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 128), (int32_t)v13, v60, v61, v62, v63, v64, v65);
  return (MaterialEventLogListViewItem_Info_o *)v4;
}


int32_t MaterialEventLogListViewItem_Info__get_winResult(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.win_result & 0xFFFFFFFE) == 2 )
    return this->fields.win_result;
  else
    return 1;
}


void MaterialEventLogListViewItem_Info__set_winResult(
        MaterialEventLogListViewItem_Info_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.win_result = value;
}