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
  __int64 v4; // x1
  UIPanel_o *v5; // x0
  UnityEngine_Object_o *anotherPanel; // x20

  if ( (byte_4C523A1 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    byte_4C523A1 = 1;
  }
  selfPanel = (UnityEngine_Object_o *)this->fields.selfPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(selfPanel, 0, 0) )
  {
    v5 = this->fields.selfPanel;
    if ( !v5 )
      goto LABEL_14;
    UIPanel__set_depth(v5, 16, 0);
  }
  anotherPanel = (UnityEngine_Object_o *)this->fields.anotherPanel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(anotherPanel, 0, 0) )
  {
    v5 = this->fields.anotherPanel;
    if ( v5 )
    {
      UIPanel__set_depth(v5, 15, 0);
      return;
    }
LABEL_14:
    sub_1C3E7C0(v5, v4);
  }
}


void PhotoLayerChangeComponent__OnClick(PhotoLayerChangeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selfPanel; // x20
  UnityEngine_Object_o *anotherPanel; // x20
  struct UIPanel_o *v5; // x0
  __int64 v6; // x1
  struct UIPanel_o *v7; // x8
  struct UIPanel_o *v8; // x9
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  int32_t v11; // w1

  if ( (byte_4C523A2 & 1) == 0 )
  {
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&Method_PhotoLayerChangeComponent_OnClick__);
    byte_4C523A2 = 1;
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
      v7 = this->fields.selfPanel;
      if ( v7 )
      {
        v8 = this->fields.anotherPanel;
        if ( v8 )
        {
          if ( v7->fields.mDepth > v8->fields.mDepth )
            return;
          v9 = Method_PhotoLayerChangeComponent_OnClick__;
          if ( (*((_BYTE *)Method_PhotoLayerChangeComponent_OnClick__ + 83) & 2) != 0 )
            v9 = (_QWORD *)sub_1C3E57C(Method_PhotoLayerChangeComponent_OnClick__);
          v10 = (System_Reflection_MethodBase_o *)sub_1C3E548(v9, v9[4]);
          OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
          v5 = this->fields.anotherPanel;
          if ( v5 )
          {
            if ( v5->fields.mDepth >= 16 )
            {
              v11 = 14;
              goto LABEL_20;
            }
            v5 = this->fields.selfPanel;
            if ( v5 )
            {
              v11 = 16;
LABEL_20:
              UIPanel__set_depth(v5, v11, 0);
              return;
            }
          }
        }
      }
      sub_1C3E7C0(v5, v6);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.anotherPanel, (int32_t)another, (int32_t)method, v3);
}


void PhotoLayerChangeComponent__SetSelfPanel(
        PhotoLayerChangeComponent_o *this,
        UIPanel_o *self,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.selfPanel = self;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.selfPanel, (int32_t)self, (int32_t)method, v3);
}