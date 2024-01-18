void __fastcall ServantStatusListViewItemDrawButtonsBase___ctor(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetButtonIndex(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        UICommonButton_o *buttonObj,
        const MethodInfo *method)
{
  if ( (byte_418D194 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_IndexOf_UICommonButton___, buttonObj);
    byte_418D194 = 1;
  }
  return System_Array__IndexOf_UICommonButton_(
           (UICommonButton_array *)this->fields.tdSpeedButtonSpriteList,
           buttonObj,
           (const MethodInfo_1FFD67C *)Method_System_Array_IndexOf_UICommonButton___);
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__GetKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        const MethodInfo *method)
{
  return (int32_t)this[1].klass;
}


int32_t __fastcall ServantStatusListViewItemDrawButtonsBase__Selected(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall ServantStatusListViewItemDrawButtonsBase__SetButtonKind(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  LODWORD(this[1].klass) = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusListViewItemDrawButtonsBase__SetItem(
        ServantStatusListViewItemDrawButtonsBase_o *this,
        ServantStatusListViewItem_o *item,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  LocalizationManager_c *v9; // x0
  float *static_fields; // x8
  float v11; // s8
  float v12; // s9
  float v13; // s10
  float v14; // s11
  float *v15; // x8
  float v16; // s12
  float v17; // s13
  float v18; // s14
  float v19; // s15
  UICommonButton_o *v20; // x0
  __int64 v21; // x1
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w21
  int v24; // w20
  int v25; // w22
  bool v26; // w25
  int v27; // w9
  __int64 v28; // x26
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  System_String_o **v30; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  float v32; // s3
  float v33; // s2
  float v34; // s1
  float v35; // s0
  __int64 v36; // x0

  if ( (byte_418D193 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, item);
    sub_B2C35C(&StringLiteral_16965/*"btn_bg_20"*/, v7);
    sub_B2C35C(&StringLiteral_16966/*"btn_bg_21"*/, v8);
    byte_418D193 = 1;
  }
  LODWORD(this->fields.collider) = mode;
  if ( item && mode )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_4184963 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, item);
      byte_4184963 = 1;
    }
    v9 = LocalizationManager_TypeInfo;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v9 = LocalizationManager_TypeInfo;
    }
    static_fields = (float *)v9->static_fields;
    v11 = static_fields[20];
    v12 = static_fields[21];
    v13 = static_fields[22];
    v14 = static_fields[23];
    if ( !byte_4184964 )
    {
      sub_B2C35C(&LocalizationManager_TypeInfo, item);
      v9 = LocalizationManager_TypeInfo;
      byte_4184964 = 1;
    }
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = LocalizationManager_TypeInfo;
    }
    v15 = (float *)v9->static_fields;
    v16 = v15[24];
    v17 = v15[25];
    v18 = v15[26];
    v19 = v15[27];
    v20 = (UICommonButton_o *)((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
                                this,
                                item,
                                this->klass[1]._1.image,
                                method);
    tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
    if ( !tdSpeedButtonSpriteList )
      goto LABEL_46;
    max_length = tdSpeedButtonSpriteList->max_length;
    if ( max_length >= 1 )
    {
      v24 = (int)v20;
      v25 = 1;
      v26 = (_DWORD)v20 == 0;
      do
      {
        v27 = v25 - 1;
        if ( v25 - 1 >= tdSpeedButtonSpriteList->max_length )
        {
LABEL_48:
          v36 = sub_B2C460(v20);
          sub_B2C400(v36, 0LL);
        }
        v28 = v27;
        v20 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v27];
        if ( !v20 )
          break;
        UICommonButton__SetColliderEnable(v20, !v26, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( (unsigned int)v28 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_48;
        v20 = (UICommonButton_o *)*((_QWORD *)&clickEventObject[1].monitor + v28);
        if ( !v20 )
          break;
        v30 = (System_String_o **)(v26 ? &StringLiteral_16966/*"btn_bg_21"*/ : &StringLiteral_16965/*"btn_bg_20"*/);
        UISprite__set_spriteName((UISprite_o *)v20, *v30, 0LL);
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        if ( !tdSpeedButtonList )
          break;
        if ( (unsigned int)v28 >= tdSpeedButtonList->max_length )
          goto LABEL_48;
        v20 = tdSpeedButtonList->m_Items[v28];
        if ( !v20 )
          break;
        if ( v26 )
          v32 = v19;
        else
          v32 = v14;
        if ( v26 )
          v33 = v18;
        else
          v33 = v13;
        if ( v26 )
          v34 = v17;
        else
          v34 = v12;
        if ( v26 )
          v35 = v16;
        else
          v35 = v11;
        UIRangeLabel__set_effectColor((UIRangeLabel_o *)v20, *(UnityEngine_Color_o *)(&v32 - 3), 0LL);
        if ( v25 >= max_length )
          return;
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        v26 = v24 == v25++;
      }
      while ( tdSpeedButtonSpriteList );
LABEL_46:
      sub_B2C434(v20, v21);
    }
  }
}