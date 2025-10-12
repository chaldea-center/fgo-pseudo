void PhotoLayerChangeComponent___ctor(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UIPanel_o *PhotoLayerChangeComponent__GetSelfPanel(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  return this->fields.selfPanel;
}


void PhotoLayerChangeComponent__InitDepth(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfPanel; // x20
  UIPanel_o *v4; // x0
  UnityEngine_Object_o *anotherPanel; // x20

  if ( (byte_4C33031 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33031 = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selfPanel, 0, 0) )
  {
    v4 = this->fields.selfPanel;
    if ( !v4 )
      goto LABEL_14;
    UIPanel__set_depth(v4, 16, 0);
  }
  anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anotherPanel, 0, 0) )
  {
    v4 = this->fields.anotherPanel;
    if ( v4 )
    {
      UIPanel__set_depth(v4, 15, 0);
      return;
    }
LABEL_14:
    sub_1C32E7C(v4);
  }
}


void PhotoLayerChangeComponent__OnClick(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfPanel; // x20
  UnityEngine_Object_o *anotherPanel; // x20
  struct UIPanel_o *v5; // x0
  struct UIPanel_o *v6; // x8
  struct UIPanel_o *v7; // x9
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  int32_t v10; // w1

  if ( (byte_4C33032 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_PhotoLayerChangeComponent_OnClick__);
    byte_4C33032 = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selfPanel, 0, 0) )
  {
    anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v5 = (struct UIPanel_o *)UnityEngine_Object__op_Equality(anotherPanel, 0, 0);
    if ( ((unsigned __int8)v5 & 1) == 0 )
    {
      v6 = this->fields.selfPanel;
      if ( v6 )
      {
        v7 = this->fields.anotherPanel;
        if ( v7 )
        {
          if ( v6->fields.mDepth > v7->fields.mDepth )
            return;
          v8 = Method_PhotoLayerChangeComponent_OnClick__;
          if ( (*((_BYTE *)Method_PhotoLayerChangeComponent_OnClick__ + 83) & 2) != 0 )
            v8 = (_QWORD *)sub_1C32C38(Method_PhotoLayerChangeComponent_OnClick__);
          v9 = (System_Reflection_MethodBase_o *)sub_1C32C04(v8, v8[4]);
          OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
          v5 = this->fields.anotherPanel;
          if ( v5 )
          {
            if ( v5->fields.mDepth >= 16 )
            {
              v10 = 14;
              goto LABEL_20;
            }
            v5 = this->fields.selfPanel;
            if ( v5 )
            {
              v10 = 16;
LABEL_20:
              UIPanel__set_depth(v5, v10, 0);
              return;
            }
          }
        }
      }
      sub_1C32E7C(v5);
    }
  }
}


void PhotoLayerChangeComponent__SetAnotherPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *another,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.anotherPanel = another;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.anotherPanel, (int32_t)another, (int32_t)method, v3);
}


void PhotoLayerChangeComponent__SetSelfPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *self,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selfPanel = self;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.selfPanel, (int32_t)self, (int32_t)method, v3);
}