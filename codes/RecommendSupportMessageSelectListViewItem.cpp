void RecommendSupportMessageSelectListViewItem___ctor(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t index,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  const MethodInfo *v13; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  ListViewItem___ctor_50749276((ListViewItem_o *)this, index, 0);
  this->fields._RecommendAdviceMessageEntity_k__BackingField = entity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)entity,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_21FFECC(v12, v13);
  this->fields._Category_k__BackingField = RecommendAdviceMessageEntity_k__BackingField->fields.category;
  RecommendSupportMessageSelectListViewItem__UpdateProperties(this, v13);
}


bool RecommendSupportMessageSelectListViewItem__SetSortValue(
        RecommendSupportMessageSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  bool result; // w0

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_21FFECC(this, sort);
  result = 1;
  this->fields.sortValue1 = RecommendAdviceMessageEntity_k__BackingField->fields.priority;
  return result;
}


void RecommendSupportMessageSelectListViewItem__UpdateProperties(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( (byte_5934363 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    sub_21FFC50(&Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_5934363 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__GetDialog_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_394087C *)Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___)) == 0
    || (RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  this->fields._IsUse_k__BackingField = System_Linq_Enumerable__Contains_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)Instance[13].klass,
                                          RecommendAdviceMessageEntity_k__BackingField->fields.id,
                                          (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t RecommendSupportMessageSelectListViewItem__get_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Category_k__BackingField;
}


bool RecommendSupportMessageSelectListViewItem__get_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t RecommendSupportMessageSelectListViewItem__get_ObjectId(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_21FFECC(this, method);
  return RecommendAdviceMessageEntity_k__BackingField->fields.id;
}


RecommendAdviceMessageEntity_o *RecommendSupportMessageSelectListViewItem__get_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RecommendAdviceMessageEntity_k__BackingField;
}


void RecommendSupportMessageSelectListViewItem__set_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Category_k__BackingField = value;
}


void RecommendSupportMessageSelectListViewItem__set_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void RecommendSupportMessageSelectListViewItem__set_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        RecommendAdviceMessageEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._RecommendAdviceMessageEntity_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}