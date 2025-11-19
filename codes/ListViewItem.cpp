void ListViewItem___ctor(ListViewItem_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1

  if ( (byte_4CB7A10 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7A10 = 1;
  }
  this->fields.selectNum = -1;
  v5 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sortStr1, v5, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.basePosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.basePosition.fields.x = 0;
}


void ListViewItem___ctor_44050768(ListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t v6; // w1
  int32_t v7; // w1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB7A11 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7A11 = 1;
  }
  this->fields.selectNum = -1;
  v6 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sortStr1, v6, (int32_t)method, v3);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.sortIndex = index;
  this->fields.loopIndex = index;
  this->fields.index = index;
  this->fields.sortValue2 = 0;
  this->fields.sortValue1 = 0;
  this->fields.sortValue0 = 0;
  v7 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sortStr1, v7, v8, v9);
  this->fields.basePosition.fields.z = 0.0;
  *(_QWORD *)&this->fields.basePosition.fields.x = 0;
}


void ListViewItem__Finalize(ListViewItem_o *this, const MethodInfo *method)
{
  System_Object__Finalize((Il2CppObject *)this, 0);
}


bool ListViewItem__IsMatchFilter(ListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  return 1;
}


void ListViewItem__Set(ListViewItem_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o *sortStr1; // x1
  struct System_String_o **p_sortStr1; // x20
  struct System_String_o *v7; // x9

  if ( !item )
    sub_1C6BC60(this, 0);
  *(_QWORD *)&this->fields.index = *(_QWORD *)&item->fields.index;
  this->fields.loopIndex = item->fields.loopIndex;
  *(_OWORD *)&this->fields.sortValue0 = *(_OWORD *)&item->fields.sortValue0;
  this->fields.sortValue1 = item->fields.sortValue1;
  sortStr1 = item->fields.sortStr1;
  this->fields.sortStr1 = sortStr1;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sortStr1, (int32_t)sortStr1, (int32_t)method, v3);
  *(_OWORD *)(p_sortStr1 + 1) = *(_OWORD *)&item->fields.sortValue1B;
  p_sortStr1[3] = (struct System_String_o *)item->fields.sortValue2B;
  v7 = *(struct System_String_o **)&item->fields.basePosition.fields.x;
  *((_DWORD *)p_sortStr1 + 13) = LODWORD(item->fields.basePosition.fields.z);
  *(struct System_String_o **)((char *)p_sortStr1 + 44) = v7;
  p_sortStr1[4] = (struct System_String_o *)item->fields.sortValueLast;
}


void ListViewItem__SetLoopIndex(ListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  this->fields.loopIndex = index;
}


void ListViewItem__SetSortIndex(ListViewItem_o *this, int32_t index, const MethodInfo *method)
{
  this->fields.sortIndex = index;
  this->fields.loopIndex = index;
}


bool ListViewItem__SetSortValue(ListViewItem_o *this, ListViewSort_o *sort, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int64_t index; // x8
  int32_t v6; // w1
  struct System_String_o **p_sortStr1; // x19

  if ( (byte_4CB7A12 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7A12 = 1;
  }
  index = this->fields.index;
  this->fields.sortValue0 = 0;
  this->fields.sortValue0B = 0;
  this->fields.sortValue1 = index;
  v6 = StringLiteral_1/*""*/;
  this->fields.sortStr1 = (struct System_String_o *)StringLiteral_1/*""*/;
  p_sortStr1 = &this->fields.sortStr1;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_sortStr1, v6, (int32_t)method, v3);
  *((_WORD *)p_sortStr1 + 20) = 0;
  *(_OWORD *)(p_sortStr1 + 3) = 0u;
  *(_OWORD *)(p_sortStr1 + 1) = 0u;
  return 1;
}


int32_t ListViewItem__SortCompDown(ListViewItem_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  int64_t sortValue0; // x8
  int64_t v4; // x9
  ListViewItem_o *v6; // x19
  bool v7; // cc
  int64_t sortValue0B; // x8
  int64_t v9; // x9
  int64_t sortValue1; // x8
  int64_t v11; // x9
  System_String_o *sortStr1; // x0
  System_String_o *v13; // x1
  int64_t sortValue1B; // x8
  int64_t v15; // x9
  int64_t sortValue2; // x8
  int64_t v17; // x9
  int64_t sortValue2B; // x8
  int64_t v19; // x9
  int64_t sortValueLast; // x8
  int64_t v21; // x9

  if ( !item )
    goto LABEL_18;
  sortValue0 = this->fields.sortValue0;
  v4 = item->fields.sortValue0;
  v6 = this;
  v7 = sortValue0 < v4;
  if ( sortValue0 == v4 )
  {
    sortValue0B = this->fields.sortValue0B;
    v9 = item->fields.sortValue0B;
    v7 = sortValue0B < v9;
    if ( sortValue0B == v9 )
    {
      sortValue1 = this->fields.sortValue1;
      v11 = item->fields.sortValue1;
      v7 = sortValue1 < v11;
      if ( sortValue1 == v11 )
      {
        sortStr1 = this->fields.sortStr1;
        if ( !sortStr1 || (v13 = item->fields.sortStr1) == 0 || System_String__Equals_64002112(sortStr1, v13, 0) )
        {
          sortValue1B = v6->fields.sortValue1B;
          v15 = item->fields.sortValue1B;
          v7 = sortValue1B < v15;
          if ( sortValue1B == v15 )
          {
            sortValue2 = v6->fields.sortValue2;
            v17 = item->fields.sortValue2;
            v7 = sortValue2 < v17;
            if ( sortValue2 == v17 )
            {
              sortValue2B = v6->fields.sortValue2B;
              v19 = item->fields.sortValue2B;
              v7 = sortValue2B < v19;
              if ( sortValue2B == v19 )
              {
                sortValueLast = v6->fields.sortValueLast;
                v21 = item->fields.sortValueLast;
                v7 = sortValueLast < v21;
                if ( sortValueLast == v21 )
                  return 0;
              }
            }
          }
          goto LABEL_13;
        }
        this = (ListViewItem_o *)item->fields.sortStr1;
        if ( this )
          return System_String__CompareTo_64001156((System_String_o *)this, v6->fields.sortStr1, 0);
LABEL_18:
        sub_1C6BC60(this, item);
      }
    }
  }
LABEL_13:
  if ( v7 )
    return 1;
  else
    return -1;
}


int32_t ListViewItem__SortCompUp(ListViewItem_o *this, ListViewItem_o *item, const MethodInfo *method)
{
  int64_t sortValue0; // x8
  int64_t v4; // x9
  ListViewItem_o *v6; // x20
  bool v7; // cc
  int64_t sortValue0B; // x8
  int64_t v9; // x9
  int64_t sortValue1; // x8
  int64_t v11; // x9
  bool v12; // cc
  System_String_o *sortStr1; // x0
  System_String_o *v14; // x1
  int64_t sortValue1B; // x8
  int64_t v16; // x9
  int64_t sortValue2; // x8
  int64_t v18; // x9
  int64_t sortValue2B; // x8
  int64_t v20; // x9
  int64_t sortValueLast; // x8
  int64_t v22; // x9

  if ( !item )
    goto LABEL_21;
  sortValue0 = this->fields.sortValue0;
  v4 = item->fields.sortValue0;
  v6 = this;
  v7 = sortValue0 < v4;
  if ( sortValue0 != v4
    || (sortValue0B = this->fields.sortValue0B, v9 = item->fields.sortValue0B, v7 = sortValue0B < v9, sortValue0B != v9) )
  {
LABEL_13:
    if ( v7 )
      return 1;
    else
      return -1;
  }
  sortValue1 = this->fields.sortValue1;
  v11 = item->fields.sortValue1;
  v12 = sortValue1 <= v11;
  if ( sortValue1 == v11 )
  {
    sortStr1 = this->fields.sortStr1;
    if ( !sortStr1 || (v14 = item->fields.sortStr1) == 0 || System_String__Equals_64002112(sortStr1, v14, 0) )
    {
      sortValue1B = v6->fields.sortValue1B;
      v16 = item->fields.sortValue1B;
      v12 = sortValue1B <= v16;
      if ( sortValue1B == v16 )
      {
        sortValue2 = v6->fields.sortValue2;
        v18 = item->fields.sortValue2;
        v7 = sortValue2 < v18;
        if ( sortValue2 == v18 )
        {
          sortValue2B = v6->fields.sortValue2B;
          v20 = item->fields.sortValue2B;
          v7 = sortValue2B < v20;
          if ( sortValue2B == v20 )
          {
            sortValueLast = v6->fields.sortValueLast;
            v22 = item->fields.sortValueLast;
            v7 = sortValueLast < v22;
            if ( sortValueLast == v22 )
              return 0;
          }
        }
        goto LABEL_13;
      }
      goto LABEL_16;
    }
    this = (ListViewItem_o *)v6->fields.sortStr1;
    if ( this )
      return System_String__CompareTo_64001156((System_String_o *)this, item->fields.sortStr1, 0);
LABEL_21:
    sub_1C6BC60(this, item);
  }
LABEL_16:
  if ( v12 )
    return -1;
  else
    return 1;
}


UnityEngine_Vector3_o ListViewItem__get_BasePosition(ListViewItem_o *this, const MethodInfo *method)
{
  float x; // s0
  float y; // s1
  float z; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.basePosition.fields.x;
  y = this->fields.basePosition.fields.y;
  z = this->fields.basePosition.fields.z;
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t ListViewItem__get_Index(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.index;
}


bool ListViewItem__get_IsSelect(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.selectNum >= 0;
}


bool ListViewItem__get_IsTermination(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isTermination;
}


bool ListViewItem__get_IsTerminationSpace(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.isTerminationSpace;
}


int32_t ListViewItem__get_LoopIndex(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.loopIndex;
}


int32_t ListViewItem__get_SelectNum(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.selectNum;
}


int32_t ListViewItem__get_SortIndex(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.sortIndex;
}


ListViewObject_o *ListViewItem__get_ViewObject(ListViewItem_o *this, const MethodInfo *method)
{
  return this->fields.viewObject;
}


void ListViewItem__set_BasePosition(ListViewItem_o *this, UnityEngine_Vector3_o value, const MethodInfo *method)
{
  this->fields.basePosition = value;
}


void ListViewItem__set_IsSelect(ListViewItem_o *this, bool value, const MethodInfo *method)
{
  if ( !this )
    sub_1C6BC60(0, value);
  this->fields.selectNum = value - 1;
}


void ListViewItem__set_IsTermination(ListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isTermination = value;
}


void ListViewItem__set_IsTerminationSpace(ListViewItem_o *this, bool value, const MethodInfo *method)
{
  this->fields.isTerminationSpace = value;
}


void ListViewItem__set_SelectNum(ListViewItem_o *this, int32_t value, const MethodInfo *method)
{
  this->fields.selectNum = value;
}


void ListViewItem__set_ViewObject(ListViewItem_o *this, ListViewObject_o *value, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.viewObject = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.viewObject, (int32_t)value, (int32_t)method, v3);
}