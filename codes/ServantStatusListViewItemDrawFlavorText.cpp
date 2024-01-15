void __fastcall ServantStatusListViewItemDrawFlavorText___ctor(
        ServantStatusListViewItemDrawFlavorText_o *this,
        const MethodInfo *method)
{
  LOBYTE(this[1].klass) = 1;
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
  UIWidget_o *v14; // x0
  int32_t mHeight; // w23
  UILabel_o *v16; // x0
  UILabel_o *v17; // x0
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseCollider; // x20
  double y; // d9
  struct UnityEngine_BoxCollider_o *v21; // x0
  UnityEngine_Object_o *titleBase; // x20
  UnityEngine_Object_o *baseSprite; // x21
  int32_t v24; // w20
  int v25; // w23
  UnityEngine_BoxCollider_o *v26; // x0
  int v27; // s0
  float v28; // s1
  UnityEngine_BoxCollider_o *v30; // x0
  float v31; // s1
  UnityEngine_Object_o *v32; // x21
  UIWidget_o *v33; // x0
  UnityEngine_Component_o *v34; // x0
  UnityEngine_Transform_o *transform; // x0
  float v36; // s0
  float v37; // s2
  UnityEngine_GameObject_o *messageLabel; // x0
  float v39; // s11
  float v40; // s12
  UnityEngine_Transform_o *v41; // x0
  float v42; // s0
  float v43; // s2
  UIWidget_o *v44; // x0
  float v45; // s9
  float v46; // s10
  UnityEngine_Component_o *v47; // x0
  UnityEngine_Transform_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *v50; // x0
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v52; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_40FDEA1 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, item);
    this = (ServantStatusListViewItemDrawFlavorText_o *)sub_B16FFC(&StringLiteral_1/*""*/, v7);
    byte_40FDEA1 = 1;
  }
  LODWORD(v6->fields.baseButton) = mode;
  if ( item && mode && LOBYTE(v6[1].klass) )
  {
    LOBYTE(v6[1].klass) = 0;
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
          {
            sub_B17100(this, item, *(_QWORD *)&mode);
            sub_B170A0();
          }
          v12 = &svtCommentEntityList->obj.klass + (int)v11;
          v13 = (ServantCommentEntity_o *)v12[4];
          if ( !v13 )
            goto LABEL_55;
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
      v14 = *(UIWidget_o **)&v6->fields.isFirst;
      if ( v14 )
      {
        mHeight = v14->fields.mHeight;
        UIWidget__set_height(v14, 1000, 0LL);
        v16 = *(UILabel_o **)&v6->fields.isFirst;
        if ( v16 )
        {
          UILabel__set_text(v16, Comment, 0LL);
          v17 = *(UILabel_o **)&v6->fields.isFirst;
          if ( v17 )
          {
            printedSize = UILabel__get_printedSize(v17, 0LL);
            baseCollider = (UnityEngine_Object_o *)v6->fields.baseCollider;
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
              v21 = v6->fields.baseCollider;
              if ( !v21 )
                goto LABEL_55;
              ((void (__fastcall *)(struct UnityEngine_BoxCollider_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))v21->klass[1]._1.implementedInterfaces)(
                v21,
                0LL,
                1LL,
                v21->klass[1]._1.interfaceOffsets);
            }
            else
            {
              titleBase = (UnityEngine_Object_o *)v6->fields.titleBase;
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              UnityEngine_Object__op_Inequality(titleBase, 0LL, 0LL);
            }
            baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
            v24 = (int)y;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            v25 = v24 - mHeight;
            if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
            {
              v26 = (UnityEngine_BoxCollider_o *)v6->fields.baseSprite;
              if ( !v26 )
                goto LABEL_55;
              *(UnityEngine_Vector3_o *)&v27 = UnityEngine_BoxCollider__get_size(v26, 0LL);
              v30 = (UnityEngine_BoxCollider_o *)v6->fields.baseSprite;
              if ( !v30 )
                goto LABEL_55;
              v31 = v28 + (float)v25;
              UnityEngine_BoxCollider__set_size(v30, *(UnityEngine_Vector3_o *)&v27, 0LL);
            }
            v32 = (UnityEngine_Object_o *)v6->fields.titleBase;
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Inequality(v32, 0LL, 0LL) )
            {
              v33 = (UIWidget_o *)v6->fields.titleBase;
              if ( !v33 )
                goto LABEL_55;
              UIWidget__set_height(v33, v33->fields.mHeight + v25, 0LL);
            }
            v34 = *(UnityEngine_Component_o **)&v6->fields.isFirst;
            if ( v34 )
            {
              transform = UnityEngine_Component__get_transform(v34, 0LL);
              if ( transform )
              {
                *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Transform__get_localPosition(transform, 0LL);
                messageLabel = (UnityEngine_GameObject_o *)v6->fields.messageLabel;
                if ( messageLabel )
                {
                  v39 = v36;
                  v40 = v37;
                  v41 = UnityEngine_GameObject__get_transform(messageLabel, 0LL);
                  if ( v41 )
                  {
                    *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(v41, 0LL);
                    v44 = *(UIWidget_o **)&v6->fields.isFirst;
                    if ( v44 )
                    {
                      v45 = v42;
                      v46 = v43;
                      UIWidget__set_height(v44, v24, 0LL);
                      v47 = *(UnityEngine_Component_o **)&v6->fields.isFirst;
                      if ( v47 )
                      {
                        v48 = UnityEngine_Component__get_transform(v47, 0LL);
                        if ( v48 )
                        {
                          v51.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v51.fields.x = v39;
                          v51.fields.z = v40;
                          UnityEngine_Transform__set_localPosition(v48, v51, 0LL);
                          v49 = (UnityEngine_GameObject_o *)v6->fields.messageLabel;
                          if ( v49 )
                          {
                            v50 = UnityEngine_GameObject__get_transform(v49, 0LL);
                            if ( v50 )
                            {
                              v52.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v52.fields.x = v45;
                              v52.fields.z = v46;
                              UnityEngine_Transform__set_localPosition(v50, v52, 0LL);
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
    sub_B170D4();
  }
}