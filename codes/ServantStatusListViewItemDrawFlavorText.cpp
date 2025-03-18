void __fastcall ServantStatusListViewItemDrawFlavorText___ctor(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawFlavorText__GetKind(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  return 10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawFlavorText__SetItem(
        ServantStatusListViewItemDrawFlavorText_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  ServantStatusListViewItemDrawFlavorText_o *v6; // x19
  __int64 v7; // x1
  struct ServantCommentEntity_array *svtCommentEntityList; // x22
  int max_length; // w8
  System_String_o *Comment; // x20
  unsigned int v11; // w23
  Il2CppClass **v12; // x8
  ServantCommentEntity_o *v13; // x21
  int v14; // w23
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseButton; // x21
  int32_t y; // w20
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *baseCollider; // x21
  int v20; // w23
  int v21; // s0
  float v22; // s1
  float v24; // s1
  UnityEngine_Object_o *v25; // x21
  float v26; // s0
  float v27; // s2
  float v28; // s11
  float v29; // s12
  float v30; // s0
  float v31; // s2
  float v32; // s9
  float v33; // s10
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C1EE18 & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Object_TypeInfo, item);
    this = (ServantStatusListViewItemDrawFlavorText_o *)sub_1C3B764(&StringLiteral_1/*""*/, v7);
    byte_4C1EE18 = 1;
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
        v11 = 0;
        while ( 1 )
        {
          if ( v11 >= max_length )
            sub_1C3B9C8(this, item);
          v12 = &svtCommentEntityList->obj.klass + (int)v11;
          v13 = (ServantCommentEntity_o *)v12[4];
          if ( !v13 )
            goto LABEL_51;
          this = (ServantStatusListViewItemDrawFlavorText_o *)ServantCommentEntity__IsConst(
                                                                (ServantCommentEntity_o *)v12[4],
                                                                0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          max_length = svtCommentEntityList->max_length;
          if ( (int)++v11 >= max_length )
            goto LABEL_16;
        }
        Comment = ServantCommentEntity__GetComment(v13, 0LL);
      }
LABEL_16:
      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
      if ( this )
      {
        v14 = *((_DWORD *)&this[1].fields.isFirst + 1);
        UIWidget__set_height((UIWidget_o *)this, 1000, 0LL);
        this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
        if ( this )
        {
          UILabel__set_text((UILabel_o *)this, Comment, 0LL);
          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
          if ( this )
          {
            printedSize = UILabel__get_printedSize((UILabel_o *)this, 0LL);
            baseButton = (UnityEngine_Object_o *)v6->fields.baseButton;
            if ( printedSize.fields.y == INFINITY )
              y = 0x80000000;
            else
              y = (int)printedSize.fields.y;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0LL, 0LL) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseButton;
              if ( !this )
                goto LABEL_51;
              ((void (__fastcall *)(ServantStatusListViewItemDrawFlavorText_o *, _QWORD, __int64, const char *))this->klass[1]._1.gc_desc)(
                this,
                0LL,
                1LL,
                this->klass[1]._1.name);
            }
            else
            {
              baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
            }
            baseCollider = (UnityEngine_Object_o *)v6->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v20 = y - v14;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              *(UnityEngine_Vector3_o *)&v21 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              v24 = v22 + (float)v20;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v21, 0LL);
            }
            v25 = (UnityEngine_Object_o *)v6->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseSprite;
              if ( !this )
                goto LABEL_51;
              UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)&this[1].fields.isFirst + 1) + v20, 0LL);
            }
            this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
            if ( this )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
              if ( this )
              {
                *(UnityEngine_Vector3_o *)&v26 = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
                this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                if ( this )
                {
                  v28 = v26;
                  v29 = v27;
                  this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                    if ( this )
                    {
                      v32 = v30;
                      v33 = v31;
                      UIWidget__set_height((UIWidget_o *)this, y, 0LL);
                      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                      if ( this )
                      {
                        this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
                        if ( this )
                        {
                          v34.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v34.fields.x = v28;
                          v34.fields.z = v29;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0LL);
                          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                          if ( this )
                          {
                            this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
                            if ( this )
                            {
                              v35.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v35.fields.x = v32;
                              v35.fields.z = v33;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0LL);
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
    sub_1C3B9C0(this, item);
  }
}