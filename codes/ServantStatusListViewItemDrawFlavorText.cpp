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
  __int64 v10; // x23
  ServantCommentEntity_o *v11; // x21
  int v12; // w23
  UnityEngine_Vector2_o v13; // x1
  UnityEngine_Vector2_o v14; // x2
  UnityEngine_Vector2_o printedSize; // kr00_8
  UnityEngine_Object_o *baseButton; // x21
  int32_t y; // w20
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *baseSprite; // x21
  UnityEngine_Object_o *baseCollider; // x21
  int v23; // w23
  __int64 v24; // x2
  float v25; // s1
  UnityEngine_Object_o *v26; // x21
  float x; // s11
  float z; // s12
  float v29; // s9
  float v30; // s10
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_593515E & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (ServantStatusListViewItemDrawFlavorText_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593515E = 1;
  }
  v6->fields.dispMode = mode;
  if ( item && mode && v6->fields.isFirst )
  {
    svtCommentEntityList = item->fields.svtCommentEntityList;
    v6->fields.isFirst = 0;
    if ( svtCommentEntityList )
    {
      max_length = svtCommentEntityList->max_length;
      Comment = (System_String_o *)StringLiteral_1/*""*/;
      if ( max_length >= 1 )
      {
        v10 = 0;
        while ( 1 )
        {
          if ( (unsigned int)v10 >= max_length )
            sub_21FFED4(this);
          v11 = svtCommentEntityList->m_Items[v10];
          if ( !v11 )
            goto LABEL_51;
          this = (ServantStatusListViewItemDrawFlavorText_o *)ServantCommentEntity__IsConst(
                                                                svtCommentEntityList->m_Items[v10],
                                                                0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          max_length = svtCommentEntityList->max_length;
          if ( (int)++v10 >= max_length )
            goto LABEL_16;
        }
        Comment = ServantCommentEntity__GetComment(v11, 0);
      }
LABEL_16:
      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
      if ( this )
      {
        v12 = *((_DWORD *)&this[1].fields.isFirst + 1);
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
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
                UnityEngine_Object_TypeInfo,
                v13,
                v14);
            if ( UnityEngine_Object__op_Inequality(baseButton, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseButton;
              if ( !this )
                goto LABEL_51;
              ((void (__fastcall *)(ServantStatusListViewItemDrawFlavorText_o *, _QWORD, __int64, const char *))this->klass[1]._1.name)(
                this,
                0,
                1,
                this->klass[1]._1.namespaze);
            }
            else
            {
              baseSprite = (UnityEngine_Object_o *)v6->fields.baseSprite;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v18);
              UnityEngine_Object__op_Inequality(baseSprite, 0, 0);
            }
            baseCollider = (UnityEngine_Object_o *)v6->fields.baseCollider;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
            v23 = y - v12;
            if ( UnityEngine_Object__op_Inequality(baseCollider, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)this, 0);
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseCollider;
              if ( !this )
                goto LABEL_51;
              v25 = size.fields.y + (float)v23;
              UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)this, size, 0);
            }
            v26 = (UnityEngine_Object_o *)v6->fields.baseSprite;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item, v24);
            if ( UnityEngine_Object__op_Inequality(v26, 0, 0) )
            {
              this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.baseSprite;
              if ( !this )
                goto LABEL_51;
              UIWidget__set_height((UIWidget_o *)this, *((_DWORD *)&this[1].fields.isFirst + 1) + v23, 0);
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
                    v33 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
                    this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                    if ( this )
                    {
                      v29 = v33.fields.x;
                      v30 = v33.fields.z;
                      UIWidget__set_height((UIWidget_o *)this, y, 0);
                      this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.messageLabel;
                      if ( this )
                      {
                        this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_Component__get_transform(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
                        if ( this )
                        {
                          v34.fields.z = z;
                          v34.fields.y = (float)(printedSize.fields.y * 0.5) + -14.0;
                          v34.fields.x = x;
                          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v34, 0);
                          this = (ServantStatusListViewItemDrawFlavorText_o *)v6->fields.titleBase;
                          if ( this )
                          {
                            this = (ServantStatusListViewItemDrawFlavorText_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0);
                            if ( this )
                            {
                              v35.fields.z = v30;
                              v35.fields.y = (float)(printedSize.fields.y * 0.5) + 20.0;
                              v35.fields.x = v29;
                              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v35, 0);
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
    sub_21FFECC(this, item);
  }
}