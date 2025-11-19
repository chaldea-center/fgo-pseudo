void MaterialEventLogListViewItem___ctor(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  ListViewItem___ctor((ListViewItem_o *)this, 0);
}


void MaterialEventLogListViewItem___ctor_33534396(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v7 = this;
  ListViewItem___ctor_44050768((ListViewItem_o *)this, index, 0);
  v7->fields._info_k__BackingField = info;
  v7 = (MaterialEventLogListViewItem_o *)((char *)v7 + 128);
  LODWORD(v7[-1].fields._info_k__BackingField) = kind;
  sub_1C6B9AC((CGThumbnailListItem_o *)v7, (int32_t)info, v8, v9);
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
  if ( (byte_4CB1482 & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_1C6BA08(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    this = (MaterialEventLogListViewItem_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CB1482 = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49268864(voiceId, 0);
  if ( System_String__IsNullOrEmpty(v7, 0) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v9 = v4->fields._info_k__BackingField;
  if ( !v9 )
    goto LABEL_14;
  v10 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v9->fields.svtVoiceId;
  voicePrefix = v9->fields.voicePrefix;
  v13 = v9->fields.voiceId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_49268864(
                                             v13,
                                             0);
  if ( !v10 )
LABEL_14:
    sub_1C6BC60(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v10, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0);
}


bool MaterialEventLogListViewItem__IsItemMatchFilter(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, const MethodInfo *))this->klass->vtable._5_IsMatchFilter.methodPtr)(
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

  if ( (byte_4CB1484 & 1) == 0 )
  {
    sub_1C6BA08(&FilterKindList_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_4CB1484 = 1;
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
                                          (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                            (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
                                                                       (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v14 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v15 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_37E7C34 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
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
    sub_1C6BC60(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v16->fields.rarity, 0);
}


bool MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  char v8; // w20
  int64_t index; // x8
  int32_t v10; // w1
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4CB1483 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB1483 = 1;
  }
  klass = this->klass;
  *(_WORD *)&this->fields.isTermination = 0;
  this->fields.sortValue1 = -1;
  v8 = ((__int64 (__fastcall *)(MaterialEventLogListViewItem_o *, ListViewSort_o *, const MethodInfo *))klass->vtable._5_IsMatchFilter.methodPtr)(
         this,
         sort,
         klass->vtable._5_IsMatchFilter.method);
  if ( (v8 & 1) != 0 )
  {
    index = this->fields.index;
    this->fields.sortValue0 = 0;
    this->fields.sortValue0B = 0;
    this->fields.sortValue1 = index;
    v10 = StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    sub_1C6B9AC((CGThumbnailListItem_o *)p_sortStr1, v10, v6, v7);
    *((_WORD *)p_sortStr1 + 20) = 0;
    p_sortStr1[2] = 0;
    p_sortStr1[3] = 0;
    p_sortStr1[1] = 0;
  }
  return v8 & 1;
}


int32_t MaterialEventLogListViewItem__get_genderType(MaterialEventLogListViewItem_o *this, const MethodInfo *method)
{
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8

  info_k__BackingField = this->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    sub_1C6BC60(this, method);
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
  const MethodInfo *v3; // x3

  this->fields._info_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._info_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v5; // x3

  if ( (byte_4CB1486 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_int__TypeInfo);
    byte_4CB1486 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_1C6BC54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_37E30FC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playableLimitCountlist, (int32_t)v3, v4, v5);
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
  const MethodInfo *v8; // x3
  Il2CppObject *v9; // x1
  bool v10; // w0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v17; // x0
  __int64 v18; // x21
  __int64 v19; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_String_o *commonString; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct MaterialEventLogListViewItem_o *itm; // x1
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  System_Collections_Generic_List_int__o *v30; // x0
  __int64 current; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  bool v35; // w0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x0
  __int64 *v40; // x0
  const MethodInfo_3582708 **v41; // x23
  int v42; // w1
  __int64 v43; // x22
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v45; // [xsp+20h] [xbp-50h] BYREF

  v2 = (__int64 *)&byte_4CB1000;
  if ( (byte_4CB1485 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_MaterialEventLogListViewItem__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C6BA08(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB1485 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v4 = sub_1C6BC54(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v4, v5);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0);
  v9 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0);
    v9 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty && IsNullOrEmpty->klass != string_TypeInfo )
      goto LABEL_34;
  }
  if ( !v4 )
LABEL_33:
    sub_1C6BC60(IsNullOrEmpty, v9);
  *(_QWORD *)(v4 + 16) = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 16), (int32_t)v9, v7, v8);
  v10 = System_String__IsNullOrEmpty(this->fields.ruby, 0);
  v9 = 0;
  if ( !v10 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v13 = System_String__Clone(IsNullOrEmpty, 0);
    v9 = v13;
    if ( v13 && (System_String_c *)v13->klass != string_TypeInfo )
      goto LABEL_34;
  }
  *(_QWORD *)(v4 + 24) = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 24), (int32_t)v9, v11, v12);
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v4 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v4 + 68) = *(_QWORD *)&this->fields.flag;
  on_click_act = this->fields.on_click_act;
  if ( on_click_act )
  {
    v17 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, const MethodInfo *))on_click_act->klass->vtable._6_Clone.methodPtr)(
            on_click_act,
            on_click_act->klass->vtable._6_Clone.method);
    if ( v17 )
    {
      v18 = v17;
      v19 = sub_1C6BB44(v17, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v19 )
        goto LABEL_17;
      sub_1C6BFFC(v18);
    }
  }
  v19 = 0;
LABEL_17:
  *(_QWORD *)(v4 + 80) = v19;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 80), v19, v14, v15);
  voiceId = this->fields.voiceId;
  *(_QWORD *)(v4 + 96) = voiceId;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 96), (int32_t)voiceId, v21, v22);
  *(_OWORD *)(v4 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  *(_DWORD *)(v4 + 140) = this->fields.genderType;
  commonString = this->fields.commonString;
  *(_QWORD *)(v4 + 144) = commonString;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 144), (int32_t)commonString, v24, v25);
  itm = this->fields.itm;
  *(_QWORD *)(v4 + 88) = itm;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 88), (int32_t)itm, v27, v28);
  *(_BYTE *)(v4 + 208) = this->fields.isEmptyGalleryFolder;
  *(_BYTE *)(v4 + 209) = this->fields.isGallery;
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_33;
  v2 = &Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v44,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_37E4424 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v45 = v44;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v45,
            (const MethodInfo_358270C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v30 = *(System_Collections_Generic_List_int__o **)(v4 + 120);
    if ( !v30 )
      sub_1C6BC60(0, v29);
    current = (unsigned int)v45.fields._current;
    items = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_int__Add__;
    ++v30->fields._version;
    if ( !items )
      sub_1C6BC60(v30, current);
    size = v30->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v30,
        current,
        *(const MethodInfo_37E3950 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v30->fields._size = size + 1;
      items->m_Items[size] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v45,
    (const MethodInfo_3582708 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v35 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0);
    v9 = 0;
    if ( v35 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_33;
    v38 = System_String__Clone(IsNullOrEmpty, 0);
    v9 = v38;
    if ( !v38 || (System_String_c *)v38->klass == string_TypeInfo )
      break;
LABEL_34:
    v40 = (__int64 *)sub_1C6BFFC(v9);
    v41 = (const MethodInfo_3582708 **)v2;
    v2 = v40;
    if ( v42 != 1 )
    {
      System_Collections_Generic_List_Enumerator_int___Dispose(&v45, *v41);
      sub_1D4FBE4(v2);
    }
    v43 = *(_QWORD *)__cxa_begin_catch(v40);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(&v45, *v41);
    if ( v43 )
      sub_1C6BC58(v43);
  }
  *(_QWORD *)(v4 + 128) = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v4 + 128), (int32_t)v9, v36, v37);
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