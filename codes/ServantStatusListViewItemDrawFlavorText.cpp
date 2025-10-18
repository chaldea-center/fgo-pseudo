void ServantStatusListViewItemDrawFlavorText___ctor(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


int32_t ServantStatusListViewItemDrawFlavorText__GetKind(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  return 10;
}


void ServantStatusListViewItemDrawFlavorText__SetItem(
        ServantStatusListViewItemDrawFlavorText_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFlavorText_o *v6; // x19
  struct ServantCommentEntity_array *svtCommentEntityList; // x22
  int max_length; // w8
  System_String_o *Comment; // x20
  unsigned int v10; // w23
  Il2CppClass **v11; // x8
  ServantCommentEntity_o *v12; // x21
  int v13; // w23
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseButton; // x21
  int32_t y; // w20
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *baseCollider; // x21
  int v19; // w23
  float v20; // s1
  UnityEngine_Object_o *v21; // x21
  float x; // s11
  float z; // s12
  float v24; // s9
  float v25; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C3FB7D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusListViewItemDrawFlavorText_o *)sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3FB7D = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode && v6->fields.isFirst )
  {
    v6->fields.isFirst = 0;
    svtCommentEntityList = item->fields.svtCommentEntityList;
    if ( svtCommentEntityList )
    {
      max_length = svtCommentEntityList->max_length;
      Comment = (System_String_o *)StringLiteral_1/*""*/;
      if ( max_length >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( v10 >= max_length )
            sub_1C372BC(this);
          v11 = &svtCommentEntityList->obj.klass + (int)v10;
          v12 = (ServantCommentEntity_o *)v11[4];
          if ( !v12 )
            goto LABEL_51;
          this = (ServantStatusListViewItemDrawFlavorText_o *)ServantCommentEntity__IsConst(
                                                                (ServantCommentEntity_o *)v11[4],
                                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          max_length = svtCommentEntityList->max_length;
          if ( (int)++v10 >= max_length )
            goto LABEL_16;
        }
        Comment = ServantCommentEntity__GetComment(v12, 0);
      }
LABEL_16:
      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
      if ( this )
      {
        v13 = *((_DWORD *)&this[1].fields.isFirst + 1);
        UIWidget__set_height((UIWidget_o *)this, 1000, 0);
        this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, Comment, 0);
          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
          if ( this )
          {
            printedSize = UILabel__get_printedSize((UILabel_o *)this, 0);
            baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
            if ( printedSize.fields.y == INFINITY )
              y = 0x80000000;
            else
              y = (int)printedSize.fields.y;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseButton;
              if ( !this )
                goto LABEL_51;
              ((void (__fastcall *)(ServantStatusListViewItemDrawFlavorText_o *, _QWORD, __int64, void *))this->klass[1]._1.image)(
                this,
                0,
                1,
                this->klass[1]._1.gc_desc);
            }
            else
            {
              baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
            }
            baseCollider = (UnityEngine_Object_o *)v6->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v19 = y - v13;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              v20 = size.fields.y + (float)v19;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
            }
            v21 = (UnityEngine_Object_o *)v6->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v21, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseSprite;
              if ( !this )
                goto LABEL_51;
              UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)&this[1].fields.isFirst + 1) + v19, 0);
            }
            this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
            if ( this )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
              if ( this )
              {
                localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                if ( this )
                {
                  x = localPosition.fields.x;
                  z = localPosition.fields.z;
                  this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0);
                  if ( this )
                  {
                    v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                    this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                    if ( this )
                    {
                      v24 = v28.fields.x;
                      v25 = v28.fields.z;
                      UIWidget__set_height((UIWidget_o *)this, y, 0);
                      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                      if ( this )
                      {
                        this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
                        if ( this )
                        {
                          v29.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v29.fields.x = x;
                          v29.fields.z = z;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v29, 0);
                          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                          if ( this )
                          {
                            this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
                            if ( this )
                            {
                              v30.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v30.fields.x = v24;
                              v30.fields.z = v25;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v30, 0);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_51:
    sub_1C372B4(this);
  }
}