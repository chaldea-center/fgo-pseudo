void __fastcall GrandServantListItemSlot___ctor(GrandServantListItemSlot_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall GrandServantListItemSlot__Initialize(
        GrandServantListItemSlot_o *this,
        PlayMakerFSM_o *fsm,
        GrandServantListItemDraw_o *prefab,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Transform_o *transform; // x22
  struct GrandServantListItemDraw_o **p_draw; // x21
  const MethodInfo *v12; // x1
  GrandServantListItemDraw_o *draw; // x0
  const MethodInfo *v14; // x3
  GrandServantListSelectObject_o *v15; // x21
  Il2CppObject *Component_object; // x0
  const MethodInfo *v17; // x2
  Il2CppObject *v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4AFCEE5 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_GrandServantListSelectObject___, fsm);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UITouchPress___, v7);
    sub_1BC3008(&Method_UnityEngine_Object_Instantiate_GrandServantListItemDraw___, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    byte_4AFCEE5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this->fields.draw = (struct GrandServantListItemDraw_o *)UnityEngine_Object__Instantiate_object__50900816(
                                                             (Il2CppObject *)prefab,
                                                             transform,
                                                             (const MethodInfo_308AF50 *)Method_UnityEngine_Object_Instantiate_GrandServantListItemDraw___);
  p_draw = &this->fields.draw;
  sub_1BC2FAC(&this->fields.draw);
  draw = this->fields.draw;
  if ( !draw )
    goto LABEL_11;
  GrandServantListItemDraw__Initialize(draw, v12);
  draw = *p_draw;
  if ( !*p_draw
    || (draw = (GrandServantListItemDraw_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)draw,
                                               (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_GrandServantListSelectObject___)) == 0LL
    || (v15 = (GrandServantListSelectObject_o *)draw,
        GrandServantListSelectObject__Initialize(
          (GrandServantListSelectObject_o *)draw,
          fsm,
          this->fields.parentClassBoardBaseId,
          v14),
        (draw = (GrandServantListItemDraw_o *)this->fields.lockedRoot) == 0LL)
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)draw,
                             (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___),
        GrandServantListSelectObject__AddServantTouchPress(v15, (UITouchPress_o *)Component_object, v17),
        (draw = (GrandServantListItemDraw_o *)this->fields.emptyRoot) == 0LL) )
  {
LABEL_11:
    sub_1BC3264(draw, v12);
  }
  v18 = UnityEngine_GameObject__GetComponent_object_(
          (UnityEngine_GameObject_o *)draw,
          (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UITouchPress___);
  GrandServantListSelectObject__AddServantTouchPress(v15, (UITouchPress_o *)v18, v19);
}


void __fastcall GrandServantListItemSlot__Release(GrandServantListItemSlot_o *this, const MethodInfo *method)
{
  struct GrandServantListItemDraw_o *draw; // x8

  draw = this->fields.draw;
  if ( !draw || (this = (GrandServantListItemSlot_o *)draw->fields.servantNarrowTexture) == 0LL )
    sub_1BC3264(this, method);
  UINarrowFigureTexture__ReleaseCharacter((UINarrowFigureTexture_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall GrandServantListItemSlot__SetActiveIcon(
        GrandServantListItemSlot_o *this,
        bool b,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *iconOn; // x0

  iconOn = this->fields.iconOn;
  if ( !iconOn || (UnityEngine_GameObject__SetActive(iconOn, b, 0LL), (iconOn = this->fields.iconOff) == 0LL) )
    sub_1BC3264(iconOn, b);
  UnityEngine_GameObject__SetActive(iconOn, !b, 0LL);
}


void __fastcall GrandServantListItemSlot__UpdateView(
        GrandServantListItemSlot_o *this,
        GrandServantListData_o *grandServantListData,
        const MethodInfo *method)
{
  GrandServantListItemSlot_o *v3; // x19
  const MethodInfo *v4; // x2
  GrandServantListItemSlot_o *v5; // x20
  const MethodInfo *v6; // x2
  bool v7; // w1

  if ( !grandServantListData )
    goto LABEL_20;
  v3 = this;
  this = (GrandServantListItemSlot_o *)GrandServantListData__GetSlotData(
                                         grandServantListData,
                                         this->fields.parentClassBoardBaseId,
                                         method);
  if ( !this )
    goto LABEL_20;
  v5 = this;
  if ( LOBYTE(this->fields.m_CachedPtr) )
  {
    if ( this->fields.m_CancellationTokenSource )
    {
      GrandServantListItemSlot__SetActiveIcon(v3, 1, v4);
      this = (GrandServantListItemSlot_o *)v3->fields.lockedRoot;
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        this = (GrandServantListItemSlot_o *)v3->fields.emptyRoot;
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          this = (GrandServantListItemSlot_o *)v3->fields.draw;
          if ( this )
          {
            this = (GrandServantListItemSlot_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)this,
                                                   0LL);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
              this = (GrandServantListItemSlot_o *)v3->fields.draw;
              if ( this )
              {
                GrandServantListItemDraw__Setup(
                  (GrandServantListItemDraw_o *)this,
                  (GrandServantListSlotData_o *)v5,
                  v6);
                return;
              }
            }
          }
        }
      }
LABEL_20:
      sub_1BC3264(this, grandServantListData);
    }
    GrandServantListItemSlot__SetActiveIcon(v3, 0, v4);
    this = (GrandServantListItemSlot_o *)v3->fields.lockedRoot;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (GrandServantListItemSlot_o *)v3->fields.emptyRoot;
    if ( !this )
      goto LABEL_20;
    v7 = 1;
  }
  else
  {
    GrandServantListItemSlot__SetActiveIcon(v3, 0, v4);
    this = (GrandServantListItemSlot_o *)v3->fields.lockedRoot;
    if ( !this )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (GrandServantListItemSlot_o *)v3->fields.emptyRoot;
    if ( !this )
      goto LABEL_20;
    v7 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v7, 0LL);
  this = (GrandServantListItemSlot_o *)v3->fields.draw;
  if ( !this )
    goto LABEL_20;
  this = (GrandServantListItemSlot_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_20;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}