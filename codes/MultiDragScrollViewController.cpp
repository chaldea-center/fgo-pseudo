void MultiDragScrollViewController___ctor(MultiDragScrollViewController_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MultiDragScrollViewController__OnDrag(
        MultiDragScrollViewController_o *this,
        UnityEngine_Vector2_o delta,
        const MethodInfo *method)
{
  MultiDragScrollViewController_o *v3; // x19
  struct UIDragScrollView_o *verticalDrag; // x8
  struct UIDragScrollView_o *horizontalDrag; // x8

  if ( this->fields.isDragging )
  {
    v3 = this;
    if ( !this->fields.isDirectionLock )
    {
      if ( fabsf(delta.fields.y) <= fabsf(delta.fields.x) )
      {
        horizontalDrag = this->fields.horizontalDrag;
        if ( !horizontalDrag )
          goto LABEL_15;
        this = (MultiDragScrollViewController_o *)horizontalDrag->fields.scrollView;
        if ( !this )
          goto LABEL_15;
        if ( (((__int64 (__fastcall *)(MultiDragScrollViewController_o *, const char *))this->klass[1]._1.name)(
                this,
                this->klass[1]._1.namespaze)
            & 1) == 0 )
          return;
        this = (MultiDragScrollViewController_o *)v3->fields.verticalDrag;
      }
      else
      {
        verticalDrag = this->fields.verticalDrag;
        if ( !verticalDrag )
          goto LABEL_15;
        this = (MultiDragScrollViewController_o *)verticalDrag->fields.scrollView;
        if ( !this )
          goto LABEL_15;
        if ( (((__int64 (__fastcall *)(MultiDragScrollViewController_o *, _QWORD))this->klass[1]._1.byval_arg.data)(
                this,
                *(_QWORD *)&this->klass[1]._1.byval_arg.bits)
            & 1) == 0 )
          return;
        this = (MultiDragScrollViewController_o *)v3->fields.horizontalDrag;
      }
      v3->fields.isDirectionLock = 1;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        return;
      }
LABEL_15:
      sub_1C71608(this, method);
    }
  }
}


void MultiDragScrollViewController__OnDragStart(MultiDragScrollViewController_o *this, const MethodInfo *method)
{
  UnityEngine_Behaviour_o *horizontalDrag; // x0

  horizontalDrag = (UnityEngine_Behaviour_o *)this->fields.horizontalDrag;
  this->fields.isDragging = 1;
  if ( !horizontalDrag
    || (UnityEngine_Behaviour__set_enabled(horizontalDrag, !this->fields._StopDragHorizontally_k__BackingField, 0),
        (horizontalDrag = (UnityEngine_Behaviour_o *)this->fields.verticalDrag) == 0) )
  {
    sub_1C71608(horizontalDrag, method);
  }
  UnityEngine_Behaviour__set_enabled(horizontalDrag, !this->fields._StopDragVertically_k__BackingField, 0);
}


// local variable allocation has failed, the output may be wrong!
void MultiDragScrollViewController__OnPress(
        MultiDragScrollViewController_o *this,
        bool isPressed,
        const MethodInfo *method)
{
  struct UIDragScrollView_o *horizontalDrag; // x0
  struct UIDragScrollView_o *verticalDrag; // x8
  struct UIScrollView_o *scrollView; // x8
  UnityEngine_Object_o *centerOnChild; // x20
  struct UIDragScrollView_o *v9; // x8
  struct UIScrollView_o *v10; // x8
  struct UIDragScrollView_o *v11; // x8
  struct UIScrollView_o *v12; // x8
  UnityEngine_Object_o *v13; // x20
  struct UIDragScrollView_o *v14; // x8
  struct UIScrollView_o *v15; // x8

  if ( (byte_4CC8BC7 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8BC7 = 1;
  }
  if ( !isPressed )
  {
    horizontalDrag = this->fields.horizontalDrag;
    *(_WORD *)&this->fields.isDragging = 0;
    if ( !horizontalDrag )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)horizontalDrag,
      !this->fields._StopDragHorizontally_k__BackingField,
      0);
    horizontalDrag = this->fields.verticalDrag;
    if ( !horizontalDrag )
      goto LABEL_25;
    UnityEngine_Behaviour__set_enabled(
      (UnityEngine_Behaviour_o *)horizontalDrag,
      !this->fields._StopDragVertically_k__BackingField,
      0);
    verticalDrag = this->fields.verticalDrag;
    if ( !verticalDrag )
      goto LABEL_25;
    scrollView = verticalDrag->fields.scrollView;
    if ( !scrollView )
      goto LABEL_25;
    centerOnChild = (UnityEngine_Object_o *)scrollView->fields.centerOnChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    horizontalDrag = (struct UIDragScrollView_o *)UnityEngine_Object__op_Inequality(centerOnChild, 0, 0);
    if ( ((unsigned __int8)horizontalDrag & 1) != 0 )
    {
      v9 = this->fields.verticalDrag;
      if ( !v9 )
        goto LABEL_25;
      v10 = v9->fields.scrollView;
      if ( !v10 )
        goto LABEL_25;
      horizontalDrag = (struct UIDragScrollView_o *)v10->fields.centerOnChild;
      if ( !horizontalDrag )
        goto LABEL_25;
      horizontalDrag = (struct UIDragScrollView_o *)((__int64 (__fastcall *)(struct UIDragScrollView_o *, void *))horizontalDrag->klass[1]._1.image)(
                                                      horizontalDrag,
                                                      horizontalDrag->klass[1]._1.gc_desc);
    }
    v11 = this->fields.horizontalDrag;
    if ( !v11 )
      goto LABEL_25;
    v12 = v11->fields.scrollView;
    if ( !v12 )
      goto LABEL_25;
    v13 = (UnityEngine_Object_o *)v12->fields.centerOnChild;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    horizontalDrag = (struct UIDragScrollView_o *)UnityEngine_Object__op_Inequality(v13, 0, 0);
    if ( ((unsigned __int8)horizontalDrag & 1) != 0 )
    {
      v14 = this->fields.horizontalDrag;
      if ( v14 )
      {
        v15 = v14->fields.scrollView;
        if ( v15 )
        {
          horizontalDrag = (struct UIDragScrollView_o *)v15->fields.centerOnChild;
          if ( horizontalDrag )
          {
            ((void (__fastcall *)(struct UIDragScrollView_o *, void *))horizontalDrag->klass[1]._1.image)(
              horizontalDrag,
              horizontalDrag->klass[1]._1.gc_desc);
            return;
          }
        }
      }
LABEL_25:
      sub_1C71608(horizontalDrag, isPressed);
    }
  }
}


void MultiDragScrollViewController__Start(MultiDragScrollViewController_o *this, const MethodInfo *method)
{
  ;
}


bool MultiDragScrollViewController__get_StopDragHorizontally(
        MultiDragScrollViewController_o *this,
        const MethodInfo *method)
{
  return this->fields._StopDragHorizontally_k__BackingField;
}


bool MultiDragScrollViewController__get_StopDragVertically(
        MultiDragScrollViewController_o *this,
        const MethodInfo *method)
{
  return this->fields._StopDragVertically_k__BackingField;
}


void MultiDragScrollViewController__set_StopDragHorizontally(
        MultiDragScrollViewController_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._StopDragHorizontally_k__BackingField = value;
}


void MultiDragScrollViewController__set_StopDragVertically(
        MultiDragScrollViewController_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._StopDragVertically_k__BackingField = value;
}