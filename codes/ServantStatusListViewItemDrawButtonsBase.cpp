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
  if ( (byte_40FDE8A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_IndexOf_UICommonButton___, buttonObj);
    byte_40FDE8A = 1;
  }
  return System_Array__IndexOf_UICommonButton_(
           (UICommonButton_array *)this->fields.tdSpeedButtonSpriteList,
           buttonObj,
           (const MethodInfo_20456B0 *)Method_System_Array_IndexOf_UICommonButton___);
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
  __int64 v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  struct UISprite_array *tdSpeedButtonSpriteList; // x8
  int max_length; // w21
  int v25; // w20
  int v26; // w22
  bool v27; // w25
  int v28; // w9
  __int64 v29; // x26
  UICommonButton_o *v30; // x0
  struct UnityEngine_GameObject_o *clickEventObject; // x8
  UISprite_o *v32; // x0
  System_String_o **v33; // x8
  struct UICommonButton_array *tdSpeedButtonList; // x8
  UIRangeLabel_o *v35; // x0
  float v36; // s3
  float v37; // s2
  float v38; // s1
  float v39; // s0

  if ( (byte_40FDE89 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, item);
    sub_B16FFC(&StringLiteral_16899/*"btn_bg_20"*/, v7);
    sub_B16FFC(&StringLiteral_16900/*"btn_bg_21"*/, v8);
    byte_40FDE89 = 1;
  }
  LODWORD(this->fields.collider) = mode;
  if ( item && mode )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    if ( !byte_40F6254 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, item);
      byte_40F6254 = 1;
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
    if ( !byte_40F6255 )
    {
      sub_B16FFC(&LocalizationManager_TypeInfo, item);
      v9 = LocalizationManager_TypeInfo;
      byte_40F6255 = 1;
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
    v20 = ((__int64 (__fastcall *)(ServantStatusListViewItemDrawButtonsBase_o *, ServantStatusListViewItem_o *, void *, const MethodInfo *))this->klass->vtable._14_Selected.method)(
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
      v25 = v20;
      v26 = 1;
      v27 = (_DWORD)v20 == 0;
      do
      {
        v28 = v26 - 1;
        if ( v26 - 1 >= tdSpeedButtonSpriteList->max_length )
        {
LABEL_48:
          sub_B17100(v20, v21, v22);
          sub_B170A0();
        }
        v29 = v28;
        v30 = (UICommonButton_o *)tdSpeedButtonSpriteList->m_Items[v28];
        if ( !v30 )
          break;
        UICommonButton__SetColliderEnable(v30, !v27, 1, 0LL);
        clickEventObject = this->fields.clickEventObject;
        if ( !clickEventObject )
          break;
        if ( (unsigned int)v29 >= LODWORD(clickEventObject[1].klass) )
          goto LABEL_48;
        v32 = (UISprite_o *)*((_QWORD *)&clickEventObject[1].monitor + v29);
        if ( !v32 )
          break;
        v33 = (System_String_o **)(v27 ? &StringLiteral_16900/*"btn_bg_21"*/ : &StringLiteral_16899/*"btn_bg_20"*/);
        UISprite__set_spriteName(v32, *v33, 0LL);
        tdSpeedButtonList = this->fields.tdSpeedButtonList;
        if ( !tdSpeedButtonList )
          break;
        if ( (unsigned int)v29 >= tdSpeedButtonList->max_length )
          goto LABEL_48;
        v35 = (UIRangeLabel_o *)tdSpeedButtonList->m_Items[v29];
        if ( !v35 )
          break;
        if ( v27 )
          v36 = v19;
        else
          v36 = v14;
        if ( v27 )
          v37 = v18;
        else
          v37 = v13;
        if ( v27 )
          v38 = v17;
        else
          v38 = v12;
        if ( v27 )
          v39 = v16;
        else
          v39 = v11;
        UIRangeLabel__set_effectColor(v35, *(UnityEngine_Color_o *)(&v36 - 3), 0LL);
        if ( v26 >= max_length )
          return;
        tdSpeedButtonSpriteList = this->fields.tdSpeedButtonSpriteList;
        v27 = v25 == v26++;
      }
      while ( tdSpeedButtonSpriteList );
LABEL_46:
      sub_B170D4();
    }
  }
}