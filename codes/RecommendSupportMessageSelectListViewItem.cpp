void __fastcall RecommendSupportMessageSelectListViewItem___ctor(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t index,
        RecommendAdviceMessageEntity_o *entity,
        const MethodInfo *method)
{
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  const MethodInfo *v9; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  ListViewItem___ctor_40706472((ListViewItem_o *)this, index, 0LL);
  this->fields._RecommendAdviceMessageEntity_k__BackingField = entity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)entity,
    v6,
    v7);
  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1B8880C(v8, v9);
  this->fields._Category_k__BackingField = RecommendAdviceMessageEntity_k__BackingField->fields.category;
  RecommendSupportMessageSelectListViewItem__UpdateProperties(this, v9);
}


bool __fastcall RecommendSupportMessageSelectListViewItem__SetSortValue(
        RecommendSupportMessageSelectListViewItem_o *this,
        ListViewSort_o *sort,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x9
  bool result; // w0

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1B8880C(this, sort);
  result = 1;
  this->fields.sortValue1 = RecommendAdviceMessageEntity_k__BackingField->fields.priority;
  return result;
}


void __fastcall RecommendSupportMessageSelectListViewItem__UpdateProperties(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  if ( (byte_4A573C7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
    byte_4A573C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_RecommendSupportSelectControl__get_Instance__);
  if ( !Instance
    || (Instance = RecommendSupportSelectControl__GetDialog_object_(
                     (RecommendSupportSelectControl_o *)Instance,
                     (const MethodInfo_2F105F0 *)Method_RecommendSupportSelectControl_GetDialog_RecommendSupportMessageSelectDialog___)) == 0LL
    || (RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField) == 0LL )
  {
    sub_1B8880C(Instance, v4);
  }
  this->fields._IsUse_k__BackingField = System_Linq_Enumerable__Contains_int_(
                                          (System_Collections_Generic_IEnumerable_TSource__o *)Instance[12].monitor,
                                          RecommendAdviceMessageEntity_k__BackingField->fields.id,
                                          (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
}


int32_t __fastcall RecommendSupportMessageSelectListViewItem__get_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._Category_k__BackingField;
}


bool __fastcall RecommendSupportMessageSelectListViewItem__get_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._IsUse_k__BackingField;
}


int32_t __fastcall RecommendSupportMessageSelectListViewItem__get_ObjectId(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  struct RecommendAdviceMessageEntity_o *RecommendAdviceMessageEntity_k__BackingField; // x8

  RecommendAdviceMessageEntity_k__BackingField = this->fields._RecommendAdviceMessageEntity_k__BackingField;
  if ( !RecommendAdviceMessageEntity_k__BackingField )
    sub_1B8880C(this, method);
  return RecommendAdviceMessageEntity_k__BackingField->fields.id;
}


RecommendAdviceMessageEntity_o *__fastcall RecommendSupportMessageSelectListViewItem__get_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        const MethodInfo *method)
{
  return this->fields._RecommendAdviceMessageEntity_k__BackingField;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_Category(
        RecommendSupportMessageSelectListViewItem_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Category_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_IsUse(
        RecommendSupportMessageSelectListViewItem_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsUse_k__BackingField = value;
}


void __fastcall RecommendSupportMessageSelectListViewItem__set_RecommendAdviceMessageEntity(
        RecommendSupportMessageSelectListViewItem_o *this,
        RecommendAdviceMessageEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._RecommendAdviceMessageEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._RecommendAdviceMessageEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}