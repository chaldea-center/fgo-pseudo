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
  __int64 v8; // x2
  struct ServantCommentEntity_array *svtCommentEntityList; // x22
  int max_length; // w8
  System_String_o *Comment; // x20
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  ServantCommentEntity_o *v14; // x21
  int v15; // w23
  UnityEngine_Vector2_o v16; // x1
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseButton; // x21
  int32_t y; // w20
  __int64 v20; // x1
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *baseCollider; // x21
  int v23; // w23
  int v24; // s0
  float v25; // s1
  float v27; // s1
  UnityEngine_Object_o *v28; // x21
  float v29; // s0
  float v30; // s2
  float v31; // s11
  float v32; // s12
  float v33; // s0
  float v34; // s2
  float v35; // s9
  float v36; // s10
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4B13206 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, item, *(_QWORD *)&mode);
    this = (ServantStatusListViewItemDrawFlavorText_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v7, v8);
    byte_4B13206 = 1;
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
        v12 = 0;
        while ( 1 )
        {
          if ( v12 >= max_length )
            sub_1BCAA44(this, item);
          v13 = &svtCommentEntityList->obj.klass + (int)v12;
          v14 = (ServantCommentEntity_o *)v13[4];
          if ( !v14 )
            goto LABEL_51;
          this = (ServantStatusListViewItemDrawFlavorText_o *)ServantCommentEntity__IsConst(
                                                                (ServantCommentEntity_o *)v13[4],
                                                                0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          max_length = svtCommentEntityList->max_length;
          if ( (int)++v12 >= max_length )
            goto LABEL_16;
        }
        Comment = ServantCommentEntity__GetComment(v14, 0LL);
      }
LABEL_16:
      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
      if ( this )
      {
        v15 = *((_DWORD *)&this[1].fields.isFirst + 1);
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
              ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(UnityEngine_Object_TypeInfo, v16);
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
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
              UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL);
            }
            baseCollider = (UnityEngine_Object_o *)v6->fields.baseCollider;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
            v23 = y - v15;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              *(UnityEngine_Vector3_o *)&v24 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0LL);
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              v27 = v25 + (float)v23;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, *(UnityEngine_Vector3_o *)&v24, 0LL);
            }
            v28 = (UnityEngine_Object_o *)v6->fields.baseSprite;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
            if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseSprite;
              if ( !this )
                goto LABEL_51;
              UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)&this[1].fields.isFirst + 1) + v23, 0LL);
            }
            this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
            if ( this )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
              if ( this )
              {
                *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)this,
                                                   0LL);
                this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                if ( this )
                {
                  v31 = v29;
                  v32 = v30;
                  this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0LL);
                  if ( this )
                  {
                    *(UnityEngine_Vector3_o *)&v33 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
                    this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                    if ( this )
                    {
                      v35 = v33;
                      v36 = v34;
                      UIWidget__set_height((UIWidget_o *)this, y, 0LL);
                      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                      if ( this )
                      {
                        this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0LL);
                        if ( this )
                        {
                          v37.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v37.fields.x = v31;
                          v37.fields.z = v32;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v37, 0LL);
                          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                          if ( this )
                          {
                            this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
                            if ( this )
                            {
                              v38.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v38.fields.x = v35;
                              v38.fields.z = v36;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v38, 0LL);
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
    sub_1BCAA3C(this, item);
  }
}