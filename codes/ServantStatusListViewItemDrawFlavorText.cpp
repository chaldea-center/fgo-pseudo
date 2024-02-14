void __fastcall ServantStatusListViewItemDrawFlavorText___ctor(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
  ServantStatusListViewItemDraw___ctor((ServantStatusListViewItemDraw_o *)this, 0LL);
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
  __int64 v7; // x1
  UIWidget_o *IsConst; // x0
  struct ServantCommentEntity_array *svtCommentEntityList; // x22
  int max_length; // w8
  System_String_o *Comment; // x20
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  ServantCommentEntity_o *v14; // x21
  int32_t mHeight; // w23
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseCollider; // x20
  double y; // d9
  UnityEngine_Object_o *titleBase; // x20
  UnityEngine_Object_o *baseSprite; // x21
  int32_t v21; // w20
  int v22; // w23
  int v23; // s0
  float v24; // s1
  float v26; // s1
  UnityEngine_Object_o *v27; // x21
  float v28; // s0
  float v29; // s2
  float v30; // s11
  float v31; // s12
  float v32; // s0
  float v33; // s2
  float v34; // s9
  float v35; // s10
  __int64 v36; // x0
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42186B2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, item);
    sub_B0D8A4(&StringLiteral_1/*""*/, v7);
    byte_42186B2 = 1;
  }
  ServantStatusListViewItemDraw__SetItem((ServantStatusListViewItemDraw_o *)this, item, mode, 0LL);
  if ( item && mode && LOBYTE(this[1].klass) )
  {
    LOBYTE(this[1].klass) = 0;
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
          {
            v36 = sub_B0D9A8(IsConst);
            sub_B0D948(v36, 0LL);
          }
          v13 = &svtCommentEntityList->obj.klass + (int)v12;
          v14 = (ServantCommentEntity_o *)v13[4];
          if ( !v14 )
            goto LABEL_55;
          IsConst = (UIWidget_o *)ServantCommentEntity__IsConst((ServantCommentEntity_o *)v13[4], 0LL);
          if ( ((unsigned __int8)IsConst & 1) != 0 )
            break;
          max_length = svtCommentEntityList->max_length;
          if ( (int)++v12 >= max_length )
            goto LABEL_16;
        }
        Comment = ServantCommentEntity__GetComment(v14, 0LL);
      }
LABEL_16:
      IsConst = *(UIWidget_o **)&this->fields.isFirst;
      if ( IsConst )
      {
        mHeight = IsConst->fields.mHeight;
        UIWidget__set_height(IsConst, 1000, 0LL);
        IsConst = *(UIWidget_o **)&this->fields.isFirst;
        if ( IsConst )
        {
          UILabel__set_text((UILabel_o *)IsConst, Comment, 0LL);
          IsConst = *(UIWidget_o **)&this->fields.isFirst;
          if ( IsConst )
          {
            printedSize = UILabel__get_printedSize((UILabel_o *)IsConst, 0LL);
            baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
            if ( printedSize.fields.y == INFINITY )
              y = -printedSize.fields.y;
            else
              y = printedSize.fields.y;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
            {
              IsConst = (UIWidget_o *)this->fields.baseCollider;
              if ( !IsConst )
                goto LABEL_55;
              ((void (__fastcall *)(UIWidget_o *, _QWORD, __int64, Il2CppMethodPointer))IsConst->klass->vtable._14_OnEnable.method)(
                IsConst,
                0LL,
                1LL,
                IsConst->klass->vtable._15_OnInit.methodPtr);
            }
            else
            {
              titleBase = (UnityEngine_Object_o *)this->fields.titleBase;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL);
            }
            baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
            v21 = (int)y;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v22 = v21 - mHeight;
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              IsConst = (UIWidget_o *)this->fields.baseSprite;
              if ( !IsConst )
                goto LABEL_55;
              *(UnityEngine_Vector3_o *)&v23 = UnityEngine_BoxCollider__get_size(
                                                 (UnityEngine_BoxCollider_o *)IsConst,
                                                 0LL);
              IsConst = (UIWidget_o *)this->fields.baseSprite;
              if ( !IsConst )
                goto LABEL_55;
              v26 = v24 + (float)v22;
              UnityEngine_BoxCollider__set_size(
                (UnityEngine_BoxCollider_o *)IsConst,
                *(UnityEngine_Vector3_o *)&v23,
                0LL);
            }
            v27 = (UnityEngine_Object_o *)this->fields.titleBase;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v27, 0LL, 0LL) )
            {
              IsConst = (UIWidget_o *)this->fields.titleBase;
              if ( !IsConst )
                goto LABEL_55;
              UIWidget__set_height(IsConst, IsConst->fields.mHeight + v22, 0LL);
            }
            IsConst = *(UIWidget_o **)&this->fields.isFirst;
            if ( IsConst )
            {
              IsConst = (UIWidget_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)IsConst, 0LL);
              if ( IsConst )
              {
                *(UnityEngine_Vector3_o *)&v28 = UnityEngine_Transform__get_localPosition(
                                                   (UnityEngine_Transform_o *)IsConst,
                                                   0LL);
                IsConst = (UIWidget_o *)this->fields.messageLabel;
                if ( IsConst )
                {
                  v30 = v28;
                  v31 = v29;
                  IsConst = (UIWidget_o *)UnityEngine_GameObject__get_transform(
                                            (UnityEngine_GameObject_o *)IsConst,
                                            0LL);
                  if ( IsConst )
                  {
                    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Transform__get_localPosition(
                                                       (UnityEngine_Transform_o *)IsConst,
                                                       0LL);
                    IsConst = *(UIWidget_o **)&this->fields.isFirst;
                    if ( IsConst )
                    {
                      v34 = v32;
                      v35 = v33;
                      UIWidget__set_height(IsConst, v21, 0LL);
                      IsConst = *(UIWidget_o **)&this->fields.isFirst;
                      if ( IsConst )
                      {
                        IsConst = (UIWidget_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)IsConst,
                                                  0LL);
                        if ( IsConst )
                        {
                          v37.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v37.fields.x = v30;
                          v37.fields.z = v31;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsConst, v37, 0LL);
                          IsConst = (UIWidget_o *)this->fields.messageLabel;
                          if ( IsConst )
                          {
                            IsConst = (UIWidget_o *)UnityEngine_GameObject__get_transform(
                                                      (UnityEngine_GameObject_o *)IsConst,
                                                      0LL);
                            if ( IsConst )
                            {
                              v38.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v38.fields.x = v34;
                              v38.fields.z = v35;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)IsConst, v38, 0LL);
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
LABEL_55:
    sub_B0D97C(IsConst);
  }
}