void __fastcall MyRoomHelpListViewItemDraw___ctor(MyRoomHelpListViewItemDraw_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomHelpListViewItemDraw__SetItem(
        MyRoomHelpListViewItemDraw_o *this,
        MyRoomHelpListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *rangeSprite; // x22
  UnityEngine_Component_o *v12; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *info; // x8
  System_String_o *imageName; // x21
  bool IsNullOrEmpty; // w0
  const MethodInfo *v17; // x1
  UILabel_o *infoTextLabel; // x22
  System_String_o *v19; // x1
  System_String_o *InfoText; // x0
  UISprite_o *baseImageSprite; // x0
  UILabel_o *itemNameLabel; // x21
  const MethodInfo *v23; // x1
  System_String_o *ItemName; // x0
  __int64 v25; // x2
  struct UILabel_o *v26; // x8
  System_String_o *mText; // x20
  System_Char_array *v28; // x0
  __int64 v29; // x2
  System_String_array *v30; // x0
  System_String_array *v31; // x8
  UILabel_o *v32; // x0
  UnityEngine_Component_o *v33; // x0
  UnityEngine_Transform_o *transform; // x0
  int v35; // s0
  int v36; // s2
  UnityEngine_Component_o *v37; // x0
  int v38; // s8
  int v39; // s9
  UnityEngine_Transform_o *v40; // x0
  float v41; // s1
  UnityEngine_Component_o *v42; // x0
  UnityEngine_Transform_o *v43; // x0
  int v44; // s0
  int v45; // s2
  UnityEngine_Component_o *v46; // x0
  int v47; // s0
  int v48; // s2
  UISprite_o *baseTextSprite; // x0
  UnityEngine_Component_o *v50; // x0
  UnityEngine_Transform_o *v51; // x0
  float v52; // s1
  float v53; // s2
  UnityEngine_Component_o *v54; // x0
  float v55; // s8
  float v56; // s9
  UnityEngine_Transform_o *v57; // x0
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9AF2 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, item);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_19458, v8);
    sub_B16FFC(&StringLiteral_1, v9);
    sub_B16FFC(&StringLiteral_19579, v10);
    byte_40F9AF2 = 1;
  }
  if ( item )
  {
    rangeSprite = (UnityEngine_Object_o *)this->fields.rangeSprite;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(rangeSprite, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Component_o *)this->fields.rangeSprite;
      if ( !v12 )
        goto LABEL_44;
      gameObject = UnityEngine_Component__get_gameObject(v12, 0LL);
      if ( !gameObject )
        goto LABEL_44;
      UnityEngine_GameObject__SetActive(gameObject, mode == 0, 0LL);
    }
    if ( mode )
    {
      info = item->fields.info;
      if ( !info )
        goto LABEL_44;
      imageName = info->fields.imageName;
      IsNullOrEmpty = System_String__IsNullOrEmpty(imageName, 0LL);
      infoTextLabel = this->fields.infoTextLabel;
      if ( IsNullOrEmpty )
      {
        if ( !infoTextLabel )
          goto LABEL_44;
        imageName = (System_String_o *)StringLiteral_19458;
        v19 = (System_String_o *)StringLiteral_1;
      }
      else
      {
        InfoText = MyRoomHelpListViewItem__get_InfoText(item, v17);
        if ( !infoTextLabel )
          goto LABEL_44;
        v19 = InfoText;
      }
      UILabel__set_text(infoTextLabel, v19, 0LL);
      baseImageSprite = this->fields.baseImageSprite;
      if ( baseImageSprite )
      {
        UISprite__set_spriteName(baseImageSprite, imageName, 0LL);
        itemNameLabel = this->fields.itemNameLabel;
        ItemName = MyRoomHelpListViewItem__get_ItemName(item, v23);
        if ( itemNameLabel )
        {
          UILabel__set_text(itemNameLabel, ItemName, 0LL);
          v26 = this->fields.infoTextLabel;
          if ( v26 )
          {
            mText = v26->fields.mText;
            v28 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v25);
            if ( v28 )
            {
              if ( !v28->max_length )
              {
                sub_B17100(v28, v28, v29);
                sub_B170A0();
              }
              v28->m_Items[2] = 10;
              if ( mText )
              {
                v30 = System_String__Split(mText, v28, 0LL);
                if ( v30 )
                {
                  v31 = v30;
                  v32 = this->fields.infoTextLabel;
                  if ( v32 )
                  {
                    if ( v31->max_length == 1 )
                    {
                      UILabel__set_fontSize(v32, 21, 0LL);
                      v33 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                      if ( !v33 )
                        goto LABEL_44;
                      transform = UnityEngine_Component__get_transform(v33, 0LL);
                      if ( !transform )
                        goto LABEL_44;
                      *(UnityEngine_Vector3_o *)&v35 = UnityEngine_Transform__get_localPosition(transform, 0LL);
                      v37 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                      if ( !v37 )
                        goto LABEL_44;
                      v38 = v35;
                      v39 = v36;
                      v40 = UnityEngine_Component__get_transform(v37, 0LL);
                      if ( !v40 )
                        goto LABEL_44;
                      v41 = -12.0;
                    }
                    else
                    {
                      UILabel__set_fontSize(v32, 18, 0LL);
                      v42 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                      if ( !v42 )
                        goto LABEL_44;
                      v43 = UnityEngine_Component__get_transform(v42, 0LL);
                      if ( !v43 )
                        goto LABEL_44;
                      *(UnityEngine_Vector3_o *)&v44 = UnityEngine_Transform__get_localPosition(v43, 0LL);
                      v46 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                      if ( !v46 )
                        goto LABEL_44;
                      v38 = v44;
                      v39 = v45;
                      v40 = UnityEngine_Component__get_transform(v46, 0LL);
                      if ( !v40 )
                        goto LABEL_44;
                      v41 = -18.0;
                    }
                    v47 = v38;
                    v48 = v39;
                    UnityEngine_Transform__set_localPosition(v40, *(UnityEngine_Vector3_o *)(&v41 - 1), 0LL);
                    baseTextSprite = this->fields.baseTextSprite;
                    if ( baseTextSprite )
                    {
                      UISprite__set_spriteName(baseTextSprite, (System_String_o *)StringLiteral_19579, 0LL);
                      v50 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                      if ( v50 )
                      {
                        v51 = UnityEngine_Component__get_transform(v50, 0LL);
                        if ( v51 )
                        {
                          *(UnityEngine_Vector3_o *)(&v52 - 1) = UnityEngine_Transform__get_localPosition(v51, 0LL);
                          v54 = (UnityEngine_Component_o *)this->fields.infoTextLabel;
                          if ( v54 )
                          {
                            v55 = v52;
                            v56 = v53;
                            v57 = UnityEngine_Component__get_transform(v54, 0LL);
                            if ( v57 )
                            {
                              v58.fields.x = 284.0;
                              v58.fields.y = v55;
                              v58.fields.z = v56;
                              UnityEngine_Transform__set_localPosition(v57, v58, 0LL);
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
LABEL_44:
      sub_B170D4();
    }
  }
}