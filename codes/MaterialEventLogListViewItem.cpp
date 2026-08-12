void MaterialEventLogListViewItem___ctor(
        MaterialEventLogListViewItem_o *this,
        int32_t index,
        int32_t kind,
        MaterialEventLogListViewItem_Info_o *info,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v7 = (MissionNaviTransitionBoardItem_o *)this;
  ListViewItem___ctor_50819428((ListViewItem_o *)this, index, 0);
  v7->fields._Name_k__BackingField = (struct System_String_o *)info;
  v7 = (MissionNaviTransitionBoardItem_o *)((char *)v7 + 128);
  v7[-1].fields._BoardType_k__BackingField = kind;
  sub_2213A04(v7, (int32_t)info, v8, v9, v10, v11, v12, v13);
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
  __int64 v9; // x2
  struct MaterialEventLogListViewItem_Info_o *v10; // x8
  VoiceMaterialCondMaster_o *v11; // x20
  int32_t svtVoiceId; // w21
  int32_t voicePrefix; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *v14; // x23

  v4 = this;
  if ( (byte_596B74F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo);
    this = (MaterialEventLogListViewItem_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596B74F = 1;
  }
  info_k__BackingField = v4->fields._info_k__BackingField;
  if ( !info_k__BackingField )
    goto LABEL_14;
  voiceId = info_k__BackingField->fields.voiceId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(
      CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo,
      *(_QWORD *)&limitCount,
      method);
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(voiceId, 0);
  if ( System_String__IsNullOrEmpty(v7, 0) )
    return 1;
  this = (MaterialEventLogListViewItem_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_14;
  this = (MaterialEventLogListViewItem_o *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)this,
                                             (const MethodInfo_385636C *)Method_DataManager_GetMasterData_VoiceMaterialCondMaster___);
  v10 = v4->fields._info_k__BackingField;
  if ( !v10 )
    goto LABEL_14;
  v11 = (VoiceMaterialCondMaster_o *)this;
  svtVoiceId = v10->fields.svtVoiceId;
  voicePrefix = v10->fields.voicePrefix;
  v14 = v10->fields.voiceId;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredString_TypeInfo, *(_QWORD *)&limitCount, v9);
  this = (MaterialEventLogListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredString__op_Implicit_56033020(
                                             v14,
                                             0);
  if ( !v11 )
LABEL_14:
    sub_2213CDC(this, *(_QWORD *)&limitCount);
  return VoiceMaterialCondMaster__IsVoicePlay(v11, svtVoiceId, voicePrefix, (System_String_o *)this, limitCount, 0);
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
  __int64 v8; // x2
  FilterKindList_c *v9; // x0
  ListViewSort_FilterKind_array *v10; // x0
  __int64 v11; // x2
  struct MaterialEventLogListViewItem_Info_o *info_k__BackingField; // x8
  struct MaterialEventLogListViewItem_Info_o *v13; // x8
  FilterKindList_c *v14; // x0
  System_Collections_Generic_List_T__o *RarityFilterKindList; // x8
  ListViewSort_FilterKind_array *v16; // x21
  ListViewSort_FilterKind_array *v17; // x0
  struct MaterialEventLogListViewItem_Info_o *v18; // x8

  if ( (byte_596B751 & 1) == 0 )
  {
    sub_2213A60(&FilterKindList_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    byte_596B751 = 1;
  }
  if ( !sort )
    return 0;
  v5 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, method);
    v5 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v5->static_fields->ClassGroupFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  v7 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                          ClassGroupFilterKindList,
                                          (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                       sort,
                                                                       v7,
                                                                       0);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
  {
    v9 = FilterKindList_TypeInfo;
    if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v8);
      v9 = FilterKindList_TypeInfo;
    }
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v9->static_fields->ClassFilterKindList;
    if ( !ClassGroupFilterKindList )
      goto LABEL_27;
    v10 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                             ClassGroupFilterKindList,
                                             (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
    ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsUnSelectedAllTargetFilters(
                                                                         sort,
                                                                         v10,
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
    v13 = this->fields._info_k__BackingField;
    if ( !v13 )
      goto LABEL_27;
    if ( !ListViewSort__IsMatchClassGroupFilter(sort, v13->fields.servantEntity, 0) )
      return 0;
  }
  v14 = FilterKindList_TypeInfo;
  if ( !*(&FilterKindList_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(FilterKindList_TypeInfo, sort, v11);
    v14 = FilterKindList_TypeInfo;
  }
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)v14->static_fields->RarityFilterKindList;
  if ( !ClassGroupFilterKindList )
    goto LABEL_27;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)System_Collections_Generic_List_Int32Enum___ToArray(
                                                                       ClassGroupFilterKindList,
                                                                       (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  RarityFilterKindList = (System_Collections_Generic_List_T__o *)FilterKindList_TypeInfo->static_fields->RarityFilterKindList;
  if ( !RarityFilterKindList )
    goto LABEL_27;
  v16 = (ListViewSort_FilterKind_array *)ClassGroupFilterKindList;
  v17 = (ListViewSort_FilterKind_array *)System_Collections_Generic_List_Int32Enum___ToArray(
                                           RarityFilterKindList,
                                           (const MethodInfo_446B508 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind__ToArray__);
  if ( ListViewSort__IsUnSelectedAllTargetFilters(sort, v17, 0) )
    return 1;
  ClassGroupFilterKindList = (System_Collections_Generic_List_T__o *)ListViewSort__IsSelectedAllTargetFilters(
                                                                       sort,
                                                                       v16,
                                                                       0);
  if ( ((unsigned __int8)ClassGroupFilterKindList & 1) != 0 )
    return 1;
  v18 = this->fields._info_k__BackingField;
  if ( !v18 )
LABEL_27:
    sub_2213CDC(ClassGroupFilterKindList, sort);
  return ListViewSort__IsMatchRarityFilter(sort, v18->fields.rarity, 0);
}


bool MaterialEventLogListViewItem__SetSortValue(
        MaterialEventLogListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  MaterialEventLogListViewItem_c *klass; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  char v12; // w20
  int32_t v13; // w1
  struct System_String_o **p_sortStr1; // x19
  struct System_String_o *v15; // x8

  if ( (byte_596B750 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B750 = 1;
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
    v13 = (int)StringLiteral_1/*""*/;
    this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
    p_sortStr1 = &this->fields.sortStr1;
    v15 = (struct System_String_o *)*((int *)p_sortStr1 - 9);
    *(p_sortStr1 - 3) = 0;
    *(p_sortStr1 - 2) = 0;
    *(p_sortStr1 - 1) = v15;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_sortStr1, v13, v6, v7, v8, v9, v10, v11);
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
    sub_2213CDC(this, method);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._info_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._info_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596B753 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_int___ctor__);
    sub_2213A60(&System_Collections_Generic_List_int__TypeInfo);
    byte_596B753 = 1;
  }
  v3 = (System_Collections_Generic_List_int__o *)sub_2213CCC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44669E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.playableLimitCountlist = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playableLimitCountlist,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  this->fields.genderType = -1;
  System_Object___ctor((Il2CppObject *)this, 0);
}


MaterialEventLogListViewItem_Info_o *MaterialEventLogListViewItem_Info__Clone(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  const MethodInfo_40F5CB8 **v2; // x22
  __int64 v4; // x20
  const MethodInfo *v5; // x1
  System_String_o *IsNullOrEmpty; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  Il2CppObject *v13; // x1
  __int64 v14; // x8
  bool v15; // w0
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_Action_MaterialEventLogListViewItem__o *on_click_act; // x0
  __int64 v28; // x0
  __int64 v29; // x21
  System_Action_MaterialEventLogListViewItem__c *v30; // x22
  __int64 v31; // x1
  struct CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *voiceId; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_String_o *commonString; // x1
  int32_t genderType; // w8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct MaterialEventLogListViewItem_o *itm; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  __int64 current; // x1
  System_Collections_Generic_List_int__o *v55; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v57; // x9
  __int64 size; // x10
  bool v59; // w0
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  Il2CppObject *v64; // x0
  void *v66; // x0
  void *v67; // x21
  int v68; // w1
  __int64 v69; // x21
  __int64 v70; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_int__o *v71; // [xsp+10h] [xbp-60h]
  System_Collections_Generic_List_Enumerator_int__o v72; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596B752 & 1) == 0 )
  {
    sub_2213A60(&System_Action_MaterialEventLogListViewItem__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_2213A60(&MaterialEventLogListViewItem_Info_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_int__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    byte_596B752 = 1;
  }
  memset(&v72, 0, sizeof(v72));
  v4 = sub_2213CCC(MaterialEventLogListViewItem_Info_TypeInfo);
  MaterialEventLogListViewItem_Info___ctor((MaterialEventLogListViewItem_Info_o *)v4, v5);
  IsNullOrEmpty = (System_String_o *)System_String__IsNullOrEmpty(this->fields.str, 0);
  v13 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    IsNullOrEmpty = this->fields.str;
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    IsNullOrEmpty = (System_String_o *)System_String__Clone(IsNullOrEmpty, 0);
    v13 = (Il2CppObject *)IsNullOrEmpty;
    if ( IsNullOrEmpty )
    {
      v14 = qword_5984390;
      if ( IsNullOrEmpty->klass != (System_String_c *)qword_5984390 )
        goto LABEL_33;
    }
  }
  if ( !v4 )
LABEL_32:
    sub_2213CDC(IsNullOrEmpty, v13);
  *(_QWORD *)(v4 + 16) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)v13, v7, v8, v9, v10, v11, v12);
  v15 = System_String__IsNullOrEmpty(this->fields.ruby, 0);
  v13 = 0;
  if ( !v15 )
  {
    IsNullOrEmpty = this->fields.ruby;
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    v20 = System_String__Clone(IsNullOrEmpty, 0);
    v13 = v20;
    if ( v20 )
    {
      v14 = qword_5984390;
      if ( v20->klass != (Il2CppClass *)qword_5984390 )
        goto LABEL_33;
    }
  }
  *(_QWORD *)(v4 + 24) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 24), (int32_t)v13, v7, v8, v16, v17, v18, v19);
  on_click_act = this->fields.on_click_act;
  *(_OWORD *)(v4 + 32) = *(_OWORD *)&this->fields.mPriority;
  *(_OWORD *)(v4 + 52) = *(_OWORD *)&this->fields.phase_max;
  *(_QWORD *)(v4 + 68) = *(_QWORD *)&this->fields.flag;
  if ( on_click_act )
  {
    v28 = ((__int64 (__fastcall *)(struct System_Action_MaterialEventLogListViewItem__o *, const MethodInfo *))on_click_act->klass->vtable._6_Clone.methodPtr)(
            on_click_act,
            on_click_act->klass->vtable._6_Clone.method);
    if ( v28 )
    {
      v29 = v28;
      v30 = System_Action_MaterialEventLogListViewItem__TypeInfo;
      v31 = sub_2213BB4(v28, System_Action_MaterialEventLogListViewItem__TypeInfo);
      if ( v31 )
        goto LABEL_17;
      sub_221405C(v29, v30, v21, v22);
    }
  }
  v31 = 0;
LABEL_17:
  *(_QWORD *)(v4 + 80) = v31;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 80), v31, v21, v22, v23, v24, v25, v26);
  voiceId = this->fields.voiceId;
  *(_QWORD *)(v4 + 96) = voiceId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 96), (int32_t)voiceId, v33, v34, v35, v36, v37, v38);
  commonString = this->fields.commonString;
  *(_OWORD *)(v4 + 104) = *(_OWORD *)&this->fields.svtVoiceType;
  genderType = this->fields.genderType;
  *(_QWORD *)(v4 + 144) = commonString;
  *(_DWORD *)(v4 + 140) = genderType;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 144), (int32_t)commonString, v41, v42, v43, v44, v45, v46);
  itm = this->fields.itm;
  *(_QWORD *)(v4 + 88) = itm;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 88), (int32_t)itm, v48, v49, v50, v51, v52, v53);
  *(_WORD *)(v4 + 208) = *(_WORD *)&this->fields.isEmptyGalleryFolder;
  IsNullOrEmpty = (System_String_o *)this->fields.playableLimitCountlist;
  if ( !IsNullOrEmpty )
    goto LABEL_32;
  v2 = (const MethodInfo_40F5CB8 **)&Method_System_Collections_Generic_List_Enumerator_int__Dispose__;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v72,
    (System_Collections_Generic_List_int__o *)IsNullOrEmpty,
    (const MethodInfo_4467D20 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v70 = 0;
  v71 = &v72;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v72,
            (const MethodInfo_40F5CBC *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v55 = *(System_Collections_Generic_List_int__o **)(v4 + 120);
    if ( !v55
      || (items = v55->fields._items,
          current = (unsigned int)v72.fields._current,
          v57 = Method_System_Collections_Generic_List_int__Add__,
          ++v55->fields._version,
          !items) )
    {
      sub_2213CDC(v55, current);
    }
    size = v55->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v55,
        current,
        *(const MethodInfo_4467270 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
    }
    else
    {
      v55->fields._size = size + 1;
      items->m_Items[size] = current;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v72,
    (const MethodInfo_40F5CB8 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  while ( 1 )
  {
    v59 = System_String__IsNullOrEmpty(this->fields.playLimitCountMessage, 0);
    v13 = 0;
    if ( v59 )
      break;
    IsNullOrEmpty = this->fields.playLimitCountMessage;
    if ( !IsNullOrEmpty )
      goto LABEL_32;
    v64 = System_String__Clone(IsNullOrEmpty, 0);
    v13 = v64;
    if ( !v64 )
      break;
    v14 = qword_5984390;
    if ( v64->klass == (Il2CppClass *)qword_5984390 )
      break;
LABEL_33:
    v66 = (void *)sub_221405C(v13, v14, v7, v8);
    v67 = v66;
    if ( v68 != 1 )
    {
      sub_1FFE714(&v70);
      sub_230112C(v67);
    }
    v69 = *(_QWORD *)__cxa_begin_catch(v66);
    v70 = v69;
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_int___Dispose(v71, *v2);
    if ( v69 )
      sub_2213CD4(v69);
  }
  *(_QWORD *)(v4 + 128) = v13;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 128), (int32_t)v13, v7, v8, v60, v61, v62, v63);
  return (MaterialEventLogListViewItem_Info_o *)v4;
}


bool MaterialEventLogListViewItem_Info__get_IsQuest(
        MaterialEventLogListViewItem_Info_o *this,
        const MethodInfo *method)
{
  return this->fields.quest_id > 0 || this->fields.script_id > 0;
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