void GrandServantListItemSlot___ctor(GrandServantListItemSlot_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void GrandServantListItemSlot__Initialize(
        GrandServantListItemSlot_o *this,
        PlayMakerFSM_o *fsm,
        GrandServantListItemDraw_o *prefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v10; // x0
  struct GrandServantListItemDraw_o **p_draw; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  GrandServantListItemDraw_o *draw; // x0
  const MethodInfo *v20; // x3
  GrandServantListSelectObject_o *v21; // x21
  Il2CppObject *Component_object; // x0
  const MethodInfo *v23; // x2
  Il2CppObject *v24; // x1
  const MethodInfo *v25; // x2

  if ( (byte_5933231 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_GrandServantListSelectObject___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GrandServantListItemDraw___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5933231 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  v10 = UnityEngine_Object__Instantiate_object__59506996(
          (Il2CppObject *)prefab,
          transform,
          (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GrandServantListItemDraw___);
  this->fields.draw = (struct GrandServantListItemDraw_o *)v10;
  p_draw = &this->fields.draw;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.draw, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  draw = this->fields.draw;
  if ( !draw )
    goto LABEL_11;
  GrandServantListItemDraw__Initialize(draw, v18);
  draw = *p_draw;
  if ( !*p_draw
    || (draw = (GrandServantListItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)draw,
                                               (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_GrandServantListSelectObject___)) == 0
    || (v21 = (GrandServantListSelectObject_o *)draw,
        GrandServantListSelectObject__Initialize(
          (GrandServantListSelectObject_o *)draw,
          fsm,
          this->fields.grandGraphId,
          v20),
        (draw = (GrandServantListItemDraw_o *)this->fields.lockedRoot) == 0)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)draw,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___),
        GrandServantListSelectObject__AddServantTouchPress(v21, (UITouchPress_o *)Component_object, v23),
        (draw = (GrandServantListItemDraw_o *)this->fields.emptyRoot) == 0) )
  {
LABEL_11:
    sub_21FFECC(draw, v18);
  }
  v24 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)draw,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  GrandServantListSelectObject__AddServantTouchPress(v21, (UITouchPress_o *)v24, v25);
}


void GrandServantListItemSlot__Release(GrandServantListItemSlot_o *this, const MethodInfo *method)
{
  struct GrandServantListItemDraw_o *draw; // x8

  draw = this->fields.draw;
  if ( !draw || (this = (GrandServantListItemSlot_o *)draw->fields.servantNarrowTexture) == 0 )
    sub_21FFECC(this, method);
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void GrandServantListItemSlot__SetActiveIcon(GrandServantListItemSlot_o *this, bool b, const MethodInfo *method)
{
  UnityEngine_GameObject_o *iconOn; // x0

  iconOn = this->fields.iconOn;
  if ( !iconOn || (UnityEngine_GameObject__SetActive(iconOn, b, 0), (iconOn = this->fields.iconOff) == 0) )
    sub_21FFECC(iconOn, b);
  UnityEngine_GameObject__SetActive(iconOn, !b, 0);
}


void GrandServantListItemSlot__UpdateView(
        GrandServantListItemSlot_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  GrandServantListItemSlot_o *v4; // x19
  const MethodInfo *v5; // x2
  GrandServantListItemSlot_o *v6; // x21
  const MethodInfo *v7; // x4
  bool v8; // w1

  if ( !grandServantListData )
    goto LABEL_20;
  v4 = this;
  this = (GrandServantListItemSlot_o *)GrandServantListData__GetSlotData(
                                         grandServantListData,
                                         this->fields.grandGraphId,
                                         method);
  if ( !this )
    goto LABEL_20;
  v6 = this;
  if ( LOBYTE(this->fields.m_CachedPtr) )
  {
    if ( this->fields.m_CancellationTokenSource )
    {
      GrandServantListItemSlot__SetActiveIcon(v4, 1, v5);
      this = (GrandServantListItemSlot_o *)v4->fields.lockedRoot;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        this = (GrandServantListItemSlot_o *)v4->fields.emptyRoot;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
          this = (GrandServantListItemSlot_o *)v4->fields.draw;
          if ( this )
          {
            this = (GrandServantListItemSlot_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
              this = (GrandServantListItemSlot_o *)v4->fields.draw;
              if ( this )
              {
                GrandServantListItemDraw__Setup(
                  (GrandServantListItemDraw_o *)this,
                  (GrandServantListSlotData_o *)v6,
                  grandServantListData->fields._Kind_k__BackingField,
                  grandServantListData->fields._QuestData_k__BackingField,
                  v7);
                return;
              }
            }
          }
        }
      }
LABEL_20:
      sub_21FFECC(this, grandServantListData);
    }
    GrandServantListItemSlot__SetActiveIcon(v4, 0, v5);
    this = (GrandServantListItemSlot_o *)v4->fields.lockedRoot;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    this = (GrandServantListItemSlot_o *)v4->fields.emptyRoot;
    if ( !this )
      goto LABEL_20;
    v8 = 1;
  }
  else
  {
    GrandServantListItemSlot__SetActiveIcon(v4, 0, v5);
    this = (GrandServantListItemSlot_o *)v4->fields.lockedRoot;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (GrandServantListItemSlot_o *)v4->fields.emptyRoot;
    if ( !this )
      goto LABEL_20;
    v8 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8, 0);
  this = (GrandServantListItemSlot_o *)v4->fields.draw;
  if ( !this )
    goto LABEL_20;
  this = (GrandServantListItemSlot_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}