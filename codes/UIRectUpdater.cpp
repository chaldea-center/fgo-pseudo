void UIRectUpdater___ctor(UIRectUpdater_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C5B325 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_UIRect___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_UIRect__TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIRect___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_UIRect__TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_UIRectUpdater___ctor__);
    byte_4C5B325 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_UIRect__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_366C4CC *)Method_System_Collections_Generic_HashSet_UIRect___ctor__);
  this->fields.rects = (struct System_Collections_Generic_HashSet_UIRect__o *)v3;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.rects, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_UIRect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_UIRect___ctor__);
  this->fields.indexableRects = (struct System_Collections_Generic_List_UIRect__o *)v6;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.indexableRects, (int32_t)v6, v7, v8);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39FFA90 *)Method_SingletonMonoBehaviour_UIRectUpdater___ctor__);
}


void UIRectUpdater__Register(UIRectUpdater_o *this, UIRect_o *rect, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *rects; // x0

  if ( (byte_4C5B322 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_UIRect__Add__);
    byte_4C5B322 = 1;
  }
  rects = (System_Collections_Generic_HashSet_T__o *)this->fields.rects;
  if ( !rects )
    sub_1C3E7C0(0, rect);
  System_Collections_Generic_HashSet_object___Add(
    rects,
    (Il2CppObject *)rect,
    (const MethodInfo_366D6B0 *)Method_System_Collections_Generic_HashSet_UIRect__Add__);
  this->fields.isRectsDirty = 1;
}


void UIRectUpdater__Unregister(UIRectUpdater_o *this, UIRect_o *rect, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *rects; // x0

  if ( (byte_4C5B323 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_UIRect__Remove__);
    byte_4C5B323 = 1;
  }
  rects = (System_Collections_Generic_HashSet_T__o *)this->fields.rects;
  if ( !rects )
    sub_1C3E7C0(0, rect);
  System_Collections_Generic_HashSet_object___Remove(
    rects,
    (Il2CppObject *)rect,
    (const MethodInfo_366CD8C *)Method_System_Collections_Generic_HashSet_UIRect__Remove__);
  this->fields.isRectsDirty = 1;
}


void UIRectUpdater__Update(UIRectUpdater_o *this, const MethodInfo *method)
{
  void *indexableRects; // x0
  int32_t v4; // w2
  int v5; // w8
  int v6; // w24
  int32_t v7; // w21
  UIRect_o *v8; // x23

  if ( (byte_4C5B324 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_UIRect__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIRect__Clear__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIRect__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_UIRect__get_Item__);
    byte_4C5B324 = 1;
  }
  if ( this->fields.isRectsDirty )
  {
    indexableRects = this->fields.indexableRects;
    this->fields.isRectsDirty = 0;
    if ( !indexableRects )
      goto LABEL_19;
    v4 = *((_DWORD *)indexableRects + 6);
    v5 = *((_DWORD *)indexableRects + 7) + 1;
    *((_DWORD *)indexableRects + 6) = 0;
    *((_DWORD *)indexableRects + 7) = v5;
    if ( v4 >= 1 )
    {
      System_Array__Clear(*((System_Array_o **)indexableRects + 2), 0, v4, 0);
      indexableRects = this->fields.indexableRects;
      if ( !indexableRects )
        goto LABEL_19;
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)indexableRects,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields.rects,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_UIRect__AddRange__);
  }
  indexableRects = this->fields.indexableRects;
  if ( !indexableRects )
    goto LABEL_19;
  v6 = *((_DWORD *)indexableRects + 6);
  if ( v6 >= 1 )
  {
    v7 = 0;
    do
    {
      indexableRects = System_Collections_Generic_List_object___get_Item(
                         (System_Collections_Generic_List_object__o *)indexableRects,
                         v7,
                         (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_UIRect__get_Item__);
      if ( !indexableRects )
        break;
      v8 = (UIRect_o *)indexableRects;
      if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)indexableRects, 0)
        && v8->fields.mStarted )
      {
        UIRect__UpdateMe(v8, 0);
      }
      if ( v6 == ++v7 )
        return;
      indexableRects = this->fields.indexableRects;
    }
    while ( indexableRects );
LABEL_19:
    sub_1C3E7C0(indexableRects, method);
  }
}