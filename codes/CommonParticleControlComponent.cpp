void __fastcall CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonParticleControlComponent__Update(
        CommonParticleControlComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  CommonParticleControlComponent_o *v4; // x19
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v6; // w20

  v4 = this;
  if ( (byte_42E4D5B & 1) == 0 )
  {
    this = (CommonParticleControlComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Count__,
                                                 (_DWORD)method,
                                                 v2,
                                                 v3);
    byte_42E4D5B = 1;
  }
  particleParent = v4->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v6 = 0;
  while ( v6 < particleParent->fields._size )
  {
    this = (CommonParticleControlComponent_o *)CommonParticleControlComponent__isAlive(v4, v6, 1, v3);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    particleParent = v4->fields.particleParent;
    ++v6;
    if ( !particleParent )
      goto LABEL_8;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
LABEL_8:
    sub_B5D69C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommonParticleControlComponent__init(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommonParticleControlComponent__setupLayer(this, layer, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonParticleControlComponent__isAlive(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  CommonParticleControlComponent_o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8

  v6 = this;
  if ( (byte_42E4D5F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, idx, withChildren, method);
    this = (CommonParticleControlComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v7,
                                                 v8,
                                                 v9);
    byte_42E4D5F = 1;
  }
  particleParent = v6->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (CommonParticleControlComponent_o *)particleParent->fields._items->m_Items[idx];
    if ( this )
      return UnityEngine_ParticleSystem__IsAlive((UnityEngine_ParticleSystem_o *)this, withChildren, 0LL);
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Component_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_Component_c *klass; // x22
  __int64 v10; // x21
  bool v11; // w20
  int namespaze; // w8

  v5 = (UnityEngine_Component_o *)this;
  if ( (byte_42E4D5D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren, (_DWORD)method, v3);
    this = (CommonParticleControlComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v6,
                                                 v7,
                                                 v8);
    byte_42E4D5D = 1;
  }
  klass = v5[1].klass;
  if ( !klass )
    goto LABEL_13;
  v10 = 0LL;
  v11 = withChildren;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v10 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v10 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = *(CommonParticleControlComponent_o **)&klass->_1.name[8 * v10 + 32];
    if ( this )
    {
      UnityEngine_ParticleSystem__Stop_51306960((UnityEngine_ParticleSystem_o *)this, v11, 0LL);
      klass = v5[1].klass;
      ++v10;
      if ( klass )
        continue;
    }
    goto LABEL_13;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject(v5, 0LL);
  if ( !this )
LABEL_13:
    sub_B5D69C(this, withChildren);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x22
  __int64 v12; // x21
  bool v13; // w20
  int size; // w8

  if ( (byte_42E4D5C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v6, v7, v8);
    byte_42E4D5C = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (particleParent = this->fields.particleParent) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(gameObject, v10);
  }
  v12 = 0LL;
  v13 = withChildren;
  while ( 1 )
  {
    size = particleParent->fields._size;
    if ( (int)v12 >= size )
      break;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    gameObject = (UnityEngine_GameObject_o *)particleParent->fields._items->m_Items[v12];
    if ( gameObject )
    {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)gameObject, v13, 0LL);
      particleParent = this->fields.particleParent;
      ++v12;
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
  CommonParticleControlComponent_o *v6; // x21
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8

  v6 = this;
  if ( (byte_42E4D5E & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, idx, withChildren, method);
    this = (CommonParticleControlComponent_o *)sub_B5D5C4(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v7,
                                                 v8,
                                                 v9);
    byte_42E4D5E = 1;
  }
  particleParent = v6->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    this = (CommonParticleControlComponent_o *)particleParent->fields._items->m_Items[idx];
    if ( this )
    {
      UnityEngine_ParticleSystem__Stop_51306960((UnityEngine_ParticleSystem_o *)this, withChildren, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(this, *(_QWORD *)&idx);
  }
}


void __fastcall CommonParticleControlComponent__setupLayer(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w21
  __int64 v11; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = GameObjectExtensions__GetChildren(v7, 1, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v8 = *((_DWORD *)gameObject + 6);
  v9 = gameObject;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
      {
        v11 = sub_B5D6C8(gameObject);
        sub_B5D668(v11, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_10:
    sub_B5D69C(gameObject, v6);
  }
}