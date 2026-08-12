void UIRectUpdater___ctor(UIRectUpdater_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7

  if ( (byte_5974F6A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIRect___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_UIRect__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRect___ctor__);
    sub_2213A60(&System_Collections_Generic_List_UIRect__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_UIRectUpdater___ctor__);
    byte_5974F6A = 1;
  }
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_UIRect__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_UIRect___ctor__);
  this->fields.rects = (struct System_Collections_Generic_HashSet_UIRect__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.rects, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_UIRect__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_UIRect___ctor__);
  this->fields.indexableRects = (struct System_Collections_Generic_List_UIRect__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.indexableRects,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_UIRectUpdater___ctor__);
}


void UIRectUpdater__Register(UIRectUpdater_o *this, UIRect_o *rect, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *rects; // x0

  if ( (byte_5974F67 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIRect__Add__);
    byte_5974F67 = 1;
  }
  rects = (System_Collections_Generic_HashSet_object__o *)this->fields.rects;
  if ( !rects )
    sub_2213CDC(0, rect);
  System_Collections_Generic_HashSet_object___Add(
    rects,
    (Il2CppObject *)rect,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_UIRect__Add__);
  this->fields.isRectsDirty = 1;
}


void UIRectUpdater__Unregister(UIRectUpdater_o *this, UIRect_o *rect, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *rects; // x0

  if ( (byte_5974F68 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_UIRect__Remove__);
    byte_5974F68 = 1;
  }
  rects = (System_Collections_Generic_HashSet_object__o *)this->fields.rects;
  if ( !rects )
    sub_2213CDC(0, rect);
  System_Collections_Generic_HashSet_object___Remove(
    rects,
    (Il2CppObject *)rect,
    (const MethodInfo_42BABA0 *)Method_System_Collections_Generic_HashSet_UIRect__Remove__);
  this->fields.isRectsDirty = 1;
}


void UIRectUpdater__Update(UIRectUpdater_o *this, const MethodInfo *method)
{
  UIRectUpdater_o *v2; // x19
  int32_t m_CancellationTokenSource; // w2
  int v4; // w8
  struct System_Collections_Generic_List_UIRect__o *indexableRects; // x8
  int size; // w24
  int32_t v7; // w22
  UIRect_o *v8; // x23

  v2 = this;
  if ( (byte_5974F69 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_UIRect__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRect__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_UIRect__get_Count__);
    this = (UIRectUpdater_o *)sub_2213A60(&Method_System_Collections_Generic_List_UIRect__get_Item__);
    byte_5974F69 = 1;
  }
  if ( v2->fields.isRectsDirty )
  {
    this = (UIRectUpdater_o *)v2->fields.indexableRects;
    v2->fields.isRectsDirty = 0;
    if ( !this )
      goto LABEL_18;
    m_CancellationTokenSource = (int32_t)this->fields.m_CancellationTokenSource;
    v4 = HIDWORD(this->fields.m_CancellationTokenSource) + 1;
    LODWORD(this->fields.m_CancellationTokenSource) = 0;
    HIDWORD(this->fields.m_CancellationTokenSource) = v4;
    if ( m_CancellationTokenSource >= 1 )
    {
      System_Array__Clear((System_Array_o *)this->fields.m_CachedPtr, 0, m_CancellationTokenSource, 0);
      this = (UIRectUpdater_o *)v2->fields.indexableRects;
      if ( !this )
        goto LABEL_18;
    }
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)this,
      (System_Collections_Generic_IEnumerable_T__o *)v2->fields.rects,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_UIRect__AddRange__);
  }
  indexableRects = v2->fields.indexableRects;
  if ( !indexableRects )
    goto LABEL_18;
  size = indexableRects->fields._size;
  if ( size >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      this = (UIRectUpdater_o *)v2->fields.indexableRects;
      if ( !this )
        break;
      this = (UIRectUpdater_o *)System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)this,
                                  v7,
                                  (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UIRect__get_Item__);
      if ( !this )
        break;
      v8 = (UIRect_o *)this;
      if ( UnityEngine_Behaviour__get_isActiveAndEnabled((UnityEngine_Behaviour_o *)this, 0) && v8->fields.mStarted )
        UIRect__UpdateMe(v8, 0);
      if ( size == ++v7 )
        return;
    }
LABEL_18:
    sub_2213CDC(this, method);
  }
}