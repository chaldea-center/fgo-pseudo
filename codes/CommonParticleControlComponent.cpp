void __fastcall CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonParticleControlComponent__Update(
        CommonParticleControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v5; // w20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F65C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, method);
    byte_40F65C5 = 1;
  }
  particleParent = this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v5 = 0;
  while ( v5 < particleParent->fields._size )
  {
    if ( CommonParticleControlComponent__isAlive(this, v5, 1, v2) )
      return;
    particleParent = this->fields.particleParent;
    ++v5;
    if ( !particleParent )
      goto LABEL_8;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_8:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall CommonParticleControlComponent__init(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommonParticleControlComponent__setupLayer(this, layer, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonParticleControlComponent__isAlive(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8
  UnityEngine_ParticleSystem_o *v10; // x0

  if ( (byte_40F65C9 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7);
    byte_40F65C9 = 1;
  }
  particleParent = this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = particleParent->fields._items->m_Items[idx];
    if ( v10 )
      return UnityEngine_ParticleSystem__IsAlive(v10, withChildren, 0LL);
LABEL_10:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x22
  __int64 v7; // x21
  bool v8; // w20
  int size; // w8
  UnityEngine_ParticleSystem_o *v10; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40F65C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5);
    byte_40F65C7 = 1;
  }
  particleParent = this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_13;
  v7 = 0LL;
  v8 = withChildren;
  while ( 1 )
  {
    size = particleParent->fields._size;
    if ( (int)v7 >= size )
      break;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = particleParent->fields._items->m_Items[v7];
    if ( v10 )
    {
      UnityEngine_ParticleSystem__Stop_49805512(v10, v8, 0LL);
      particleParent = this->fields.particleParent;
      ++v7;
      if ( particleParent )
        continue;
    }
    goto LABEL_13;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_13:
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x22
  __int64 v8; // x21
  bool v9; // w20
  int size; // w8
  UnityEngine_ParticleSystem_o *v11; // x0

  if ( (byte_40F65C6 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5);
    byte_40F65C6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (particleParent = this->fields.particleParent) == 0LL) )
  {
LABEL_11:
    sub_B170D4();
  }
  v8 = 0LL;
  v9 = withChildren;
  while ( 1 )
  {
    size = particleParent->fields._size;
    if ( (int)v8 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v11 = particleParent->fields._items->m_Items[v8];
    if ( v11 )
    {
      UnityEngine_ParticleSystem__Play(v11, v9, 0LL);
      particleParent = this->fields.particleParent;
      ++v8;
      if ( particleParent )
        continue;
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStop(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8
  UnityEngine_ParticleSystem_o *v10; // x0

  if ( (byte_40F65C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    sub_B16FFC(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7);
    byte_40F65C8 = 1;
  }
  particleParent = this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v10 = particleParent->fields._items->m_Items[idx];
    if ( v10 )
    {
      UnityEngine_ParticleSystem__Stop_49805512(v10, withChildren, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
}


void __fastcall CommonParticleControlComponent__setupLayer(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_array *Children; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  int max_length; // w8
  UnityEngine_GameObject_array *v11; // x20
  unsigned int v12; // w21
  UnityEngine_GameObject_o *v13; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__set_layer(gameObject, layer, 0LL);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Children = GameObjectExtensions__GetChildren(v6, 1, 0LL);
  if ( !Children )
    goto LABEL_10;
  max_length = Children->max_length;
  v11 = Children;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        sub_B17100(Children, v8, v9);
        sub_B170A0();
      }
      v13 = v11->m_Items[v12];
      if ( !v13 )
        break;
      UnityEngine_GameObject__set_layer(v13, layer, 0LL);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_10:
    sub_B170D4();
  }
}